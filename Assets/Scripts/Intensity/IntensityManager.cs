using System;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using FYP.Logging;
using FYP.Session;

namespace FYP.Intensity
{
    /// <summary>
    /// Holds the six element levels. Sets them per block (Off / Medium / Hexad prior), validates every
    /// adaptive change against the guards, logs everything, and mirrors levels into the throw CSV.
    /// </summary>
    public class IntensityManager : MonoBehaviour
    {
        public static IntensityManager Instance { get; private set; }

        [Header("Adaptation guards (adaptive blocks only)")]
        [SerializeField] private float cooldownSeconds = 60f;
        [Tooltip("Untick for scripted tests when SessionStats does not exist yet.")]
        [SerializeField] private bool enforceDataGuards = true;
        [SerializeField] private int minThrowsForChange = 5;
        [SerializeField] private float timerHighMinAccuracy = 0.4f;
        [SerializeField] private float adaptationWindowSeconds = 30f;
        [SerializeField] private float resultTimeoutSeconds = 5f;

        [Header("Optional sources")]
        [Tooltip("A component implementing IIntensityProvider.")]
        [SerializeField] private MonoBehaviour providerBehaviour;
        [Tooltip("A component implementing IWindowSource (SessionStats, next step).")]
        [SerializeField] private MonoBehaviour windowSourceBehaviour;

        [Header("Levels (live view; change during Play to set levels by hand)")]
        [Tooltip("Order: Points, Progress, Badges, Choice, PersonalBest, Timer")]
        [SerializeField] private IntensityLevel[] debugLevels = new IntensityLevel[6];

        public event Action<ElementId, IntensityLevel, IntensityLevel, string> OnLevelChanged;

        private readonly Dictionary<ElementId, GamificationElement> elements = new Dictionary<ElementId, GamificationElement>();
        private readonly Dictionary<ElementId, IntensityLevel> levels = new Dictionary<ElementId, IntensityLevel>();
        private readonly Dictionary<ElementId, float> lastChangeTime = new Dictionary<ElementId, float>();

        private SessionManager session;
        private IIntensityProvider provider;
        private IWindowSource windowSource;

        private int tickIndex;
        private int choiceAllowedTick = -1;
        private bool changeAppliedThisTick;
        private bool noProviderLogged;

        private int pendingTick = -1;
        private float pendingSentAt;
        private float pendingDeadline;
        private WindowStats pendingWindow;

        private bool initialised;

        private void Awake()
        {
            if (Instance != null && Instance != this) { Destroy(gameObject); return; }
            Instance = this;
            for (int i = 0; i < 6; i++)
            {
                levels[(ElementId)i] = IntensityLevel.Off;
                lastChangeTime[(ElementId)i] = float.NegativeInfinity;
            }
        }

        private void Start()
        {
            session = SessionManager.Instance;
            if (session == null)
            {
                Debug.LogError("[IntensityManager] No SessionManager in the scene.");
                enabled = false;
                return;
            }

            session.OnStateChanged += HandleStateChanged;
            session.OnBlockStarted += HandleBlockStarted;
            session.OnBlockMidpoint += HandleMidpoint;
            session.OnAdaptationTick += HandleTick;
            session.OnBlockEnded += HandleBlockEnded;

            foreach (GamificationElement el in FindObjectsByType<GamificationElement>(FindObjectsInactive.Include, FindObjectsSortMode.None))
            {
                if (elements.ContainsKey(el.Id))
                {
                    Debug.LogWarning("[IntensityManager] Duplicate element for " + el.Id + " on " + el.name + ", ignored.");
                    continue;
                }
                elements[el.Id] = el;
                el.ForceApply(IntensityLevel.Off);
            }
            for (int i = 0; i < 6; i++)
                if (!elements.ContainsKey((ElementId)i))
                    Debug.Log("[IntensityManager] No element registered for " + (ElementId)i + " (fine until it is built).");

            provider = providerBehaviour as IIntensityProvider;
            windowSource = windowSourceBehaviour as IWindowSource;
            if (providerBehaviour != null && provider == null)
                Debug.LogError("[IntensityManager] Provider Behaviour does not implement IIntensityProvider.");

            if (debugLevels == null || debugLevels.Length != 6) debugLevels = new IntensityLevel[6];
            initialised = true;
            PushToLogger();
        }

        private void OnDestroy()
        {
            if (session == null) return;
            session.OnStateChanged -= HandleStateChanged;
            session.OnBlockStarted -= HandleBlockStarted;
            session.OnBlockMidpoint -= HandleMidpoint;
            session.OnAdaptationTick -= HandleTick;
            session.OnBlockEnded -= HandleBlockEnded;
        }

        private void Update()
        {
            if (pendingTick >= 0 && Time.realtimeSinceStartup > pendingDeadline)
            {
                session.LogEvent("intensity_rejected", "reason=api_timeout;tick=" + pendingTick);
                pendingTick = -1;
            }
        }

        // ------------------------------------------------------------ Public API

        public IntensityLevel GetLevel(ElementId id) => levels[id];

        public Dictionary<string, string> SnapshotLevels()
        {
            var d = new Dictionary<string, string>(6);
            foreach (var kv in levels) d[kv.Key.ToString()] = kv.Value.ToString();
            return d;
        }

        // ---------------------------------------------------------- Session events

        private void HandleStateChanged(SessionState state)
        {
            if (state == SessionState.Block1 || state == SessionState.Block2) return;
            SetAll(IntensityLevel.Off, "state_" + state);
        }

        private void HandleBlockStarted(int blockIndex, string condition)
        {
            tickIndex = 0;
            choiceAllowedTick = -1;
            changeAppliedThisTick = false;
            noProviderLogged = false;
            pendingTick = -1;
            for (int i = 0; i < 6; i++) lastChangeTime[(ElementId)i] = float.NegativeInfinity;

            string source;
            Dictionary<ElementId, IntensityLevel> start = new Dictionary<ElementId, IntensityLevel>();
            switch (condition)
            {
                case "fixed":
                    for (int i = 0; i < 6; i++) start[(ElementId)i] = IntensityLevel.Medium;
                    source = "init_fixed";
                    break;
                case "adaptive":
                    start = HexadWeights.ComputeStartingLevels(session.CurrentProfile);
                    source = "init_hexad_prior";
                    session.LogEvent("prior_computed", HexadWeights.Describe(session.CurrentProfile));
                    break;
                default:
                    for (int i = 0; i < 6; i++) start[(ElementId)i] = IntensityLevel.Off;
                    source = "init_" + condition;
                    break;
            }

            foreach (var kv in start) SetLevelInternal(kv.Key, kv.Value, source, "");
            PushToLogger();

            foreach (GamificationElement el in elements.Values) el.OnBlockStarted(blockIndex, condition);
        }

        private void HandleBlockEnded(int blockIndex, string condition, string reason)
        {
            pendingTick = -1;
            foreach (GamificationElement el in elements.Values) el.OnBlockEnded(blockIndex, condition);
            SetAll(IntensityLevel.Off, "block_end");
        }

        private void HandleMidpoint(int blockIndex)
        {
            // Choice may change on the next adaptation tick only.
            choiceAllowedTick = tickIndex + 1;
        }

        // --------------------------------------------------------------- Adaptation

        private void HandleTick(int blockIndex)
        {
            tickIndex++;
            changeAppliedThisTick = false;

            if (pendingTick >= 0)
            {
                session.LogEvent("intensity_rejected", "reason=previous_request_pending;tick=" + pendingTick);
                pendingTick = -1;
            }

            if (provider == null)
            {
                if (!noProviderLogged)
                {
                    session.LogEvent("intensity_hold", "reason=no_provider");
                    noProviderLogged = true;
                }
                return;
            }

            WindowStats window = windowSource != null ? windowSource.GetWindow(adaptationWindowSeconds) : new WindowStats();
            var request = new AdaptationRequest
            {
                participantId = session.CurrentProfile != null ? session.CurrentProfile.participantId : "?",
                blockIndex = blockIndex,
                tickIndex = tickIndex,
                blockElapsed = session.BlockElapsed,
                window = window,
                levels = SnapshotLevels()
            };

            pendingTick = tickIndex;
            pendingWindow = window;
            pendingSentAt = Time.realtimeSinceStartup;
            pendingDeadline = pendingSentAt + resultTimeoutSeconds;

            int tick = tickIndex;
            provider.RequestChange(request, change => HandleProviderResult(tick, blockIndex, change));
        }

        private void HandleProviderResult(int tick, int block, IntensityChange change)
        {
            if (tick != pendingTick || block != session.CurrentBlockIndex || !session.IsBlockRunning)
            {
                session.LogEvent("intensity_rejected", "reason=stale_result;tick=" + tick);
                return;
            }
            pendingTick = -1;

            string latency = "latency_ms=" +
                ((Time.realtimeSinceStartup - pendingSentAt) * 1000f).ToString("F0", CultureInfo.InvariantCulture);

            if (!change.hasChange)
            {
                session.LogEvent("intensity_hold", "tick=" + tick + ";reason=" + change.reason + ";" + latency);
                return;
            }

            string rejection = CheckGuards(change, pendingWindow);
            if (rejection != null)
            {
                session.LogEvent("intensity_rejected",
                    "element=" + change.element + ";proposed=" + change.newLevel + ";reason=" + rejection +
                    ";tick=" + tick + ";provider_reason=" + change.reason + ";" + latency);
                return;
            }

            SetLevelInternal(change.element, change.newLevel, "adaptive", "tick=" + tick + ";" + change.reason + ";" + latency);
            if (change.element == ElementId.Choice) choiceAllowedTick = -1;
            changeAppliedThisTick = true;
            PushToLogger();
        }

        /// <summary>Returns null if the change is allowed, otherwise the rejection reason.</summary>
        private string CheckGuards(IntensityChange c, WindowStats w)
        {
            if (session.CurrentCondition != "adaptive" || !session.IsBlockRunning) return "not_adaptive_block";
            if (changeAppliedThisTick) return "one_change_per_tick";

            IntensityLevel current = levels[c.element];
            if (c.newLevel == current) return "no_change";
            if (c.newLevel < IntensityLevel.Low) return "off_not_allowed";
            if (Mathf.Abs((int)c.newLevel - (int)current) != 1) return "step_too_large";
            if (Time.time - lastChangeTime[c.element] < cooldownSeconds) return "cooldown";
            if (c.element == ElementId.Choice && tickIndex != choiceAllowedTick) return "choice_midpoint_only";

            if (enforceDataGuards)
            {
                if (w == null || w.throws < minThrowsForChange) return "low_data";
                if (c.element == ElementId.Timer && c.newLevel == IntensityLevel.High && w.accuracy < timerHighMinAccuracy)
                    return "timer_guard";
            }
            return null;
        }

        // ------------------------------------------------------------------ Levels

        private void SetAll(IntensityLevel level, string source)
        {
            for (int i = 0; i < 6; i++) SetLevelInternal((ElementId)i, level, source, "");
            PushToLogger();
        }

        private bool SetLevelInternal(ElementId id, IntensityLevel level, string source, string reason)
        {
            IntensityLevel old = levels[id];
            if (old == level) return false;

            levels[id] = level;
            if (elements.TryGetValue(id, out GamificationElement el)) el.SetLevel(level);
            if (source == "adaptive") lastChangeTime[id] = Time.time;
            if (debugLevels != null && debugLevels.Length == 6) debugLevels[(int)id] = level;

            if (session != null)
                session.LogEvent("intensity_change",
                    "element=" + id + ";old=" + old + ";new=" + level + ";source=" + source +
                    (string.IsNullOrEmpty(reason) ? "" : ";" + reason));

            OnLevelChanged?.Invoke(id, old, level, source);
            return true;
        }

        private void PushToLogger()
        {
            if (ThrowLogger.Instance == null) return;
            var d = new Dictionary<string, string>(6);
            foreach (var kv in levels) d[kv.Key.LogKey()] = kv.Value.ToString();
            ThrowLogger.Instance.SetElementLevels(d);
        }

        // ------------------------------------------------------ Inspector debug control

        private void OnValidate()
        {
            if (debugLevels == null || debugLevels.Length != 6) Array.Resize(ref debugLevels, 6);
            if (!Application.isPlaying || !initialised) return;

            bool changed = false;
            for (int i = 0; i < 6; i++)
            {
                ElementId id = (ElementId)i;
                if (debugLevels[i] != levels[id])
                    changed |= SetLevelInternal(id, debugLevels[i], "debug", "inspector");
            }
            if (changed) PushToLogger();
        }
    }
}