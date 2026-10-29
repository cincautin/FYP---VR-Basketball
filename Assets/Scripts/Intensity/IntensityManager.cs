using System;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using FYP.Logging;
using FYP.Session;

namespace FYP.Intensity
{
    /// <summary>
    /// Holds the six element levels. Sets them per block (Off / Medium / Hexad prior), reacts to
    /// EngagementMonitor triggers in adaptive blocks, validates every proposed change, logs everything,
    /// and mirrors levels into the throw CSV.
    /// </summary>
    public class IntensityManager : MonoBehaviour
    {
        public static IntensityManager Instance { get; private set; }

        [Header("Adaptation guards (adaptive blocks only)")]
        [SerializeField] private float minSecondsBeforeFirstChange = 20f;
        [SerializeField] private float minGapBetweenChanges = 20f;
        [SerializeField] private float elementCooldownSeconds = 45f;
        [SerializeField] private int maxChangesPerBlock = 8;
        [Tooltip("Untick for scripted tests.")]
        [SerializeField] private bool enforceDataGuards = true;
        [SerializeField] private int minBlockThrowsForChange = 5;
        [SerializeField] private float timerHighMinAccuracy = 0.4f;
        [SerializeField] private int accuracyGuardThrows = 8;
        [SerializeField] private float adaptationWindowSeconds = 30f;
        [SerializeField] private float resultTimeoutSeconds = 5f;

        [Header("Optional sources")]
        [Tooltip("A component implementing IIntensityProvider (RemoteIntensityProvider or the scripted test one).")]
        [SerializeField] private MonoBehaviour providerBehaviour;
        [Tooltip("A component implementing IWindowSource (SessionStats).")]
        [SerializeField] private MonoBehaviour windowSourceBehaviour;
        [Tooltip("Leave empty to find it automatically.")]
        [SerializeField] private EngagementMonitor monitor;

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

        private int triggerIndex;
        private int changesThisBlock;
        private float lastAnyChangeTime = float.NegativeInfinity;
        private bool choiceAllowed;

        private int pendingTrigger = -1;
        private float pendingSentAt;
        private float pendingDeadline;

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
            session.OnAdaptationTick += HandleHeartbeat;
            session.OnBlockEnded += HandleBlockEnded;

            if (monitor == null) monitor = FindAnyObjectByType<EngagementMonitor>();
            if (monitor != null) monitor.OnTrigger += HandleTrigger;
            else Debug.LogWarning("[IntensityManager] No EngagementMonitor found: adaptive blocks will not change anything.");

            foreach (GamificationElement el in FindObjectsByType<GamificationElement>(FindObjectsInactive.Include))
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
            if (monitor != null) monitor.OnTrigger -= HandleTrigger;
            if (session == null) return;
            session.OnStateChanged -= HandleStateChanged;
            session.OnBlockStarted -= HandleBlockStarted;
            session.OnBlockMidpoint -= HandleMidpoint;
            session.OnAdaptationTick -= HandleHeartbeat;
            session.OnBlockEnded -= HandleBlockEnded;
        }

        private void Update()
        {
            if (pendingTrigger >= 0 && Time.realtimeSinceStartup > pendingDeadline)
            {
                session.LogEvent("intensity_rejected", "reason=api_timeout;trigger=" + pendingTrigger);
                pendingTrigger = -1;
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

        public IntensityLevel PlannedLevel(ElementId id, string condition)
        {
            switch (condition)
            {
                case "fixed": return IntensityLevel.Medium;
                case "adaptive":
                    var start = HexadWeights.ComputeStartingLevels(session.CurrentProfile);
                    return start.TryGetValue(id, out IntensityLevel level) ? level : IntensityLevel.Medium;
                default: return IntensityLevel.Off;
            }
        }

        // ---------------------------------------------------------- Session events

        private void HandleStateChanged(SessionState state)
        {
            if (state == SessionState.Block1 || state == SessionState.Block2) return;
            SetAll(IntensityLevel.Off, "state_" + state);
        }

        private void HandleBlockStarted(int blockIndex, string condition)
        {
            triggerIndex = 0;
            changesThisBlock = 0;
            lastAnyChangeTime = float.NegativeInfinity;
            choiceAllowed = false;
            pendingTrigger = -1;
            for (int i = 0; i < 6; i++) lastChangeTime[(ElementId)i] = float.NegativeInfinity;

            string source;
            var start = new Dictionary<ElementId, IntensityLevel>();
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
            pendingTrigger = -1;
            if (condition == "adaptive")
                session.LogEvent("adapt_summary", "changes=" + changesThisBlock + ";triggers=" + triggerIndex);
            foreach (GamificationElement el in elements.Values) el.OnBlockEnded(blockIndex, condition);
            SetAll(IntensityLevel.Off, "block_end");
        }

        private void HandleMidpoint(int blockIndex)
        {
            if (session.CurrentCondition == "adaptive") choiceAllowed = true; // Choice may change once, at the midpoint prompt
        }

        /// <summary>The 30 s tick is now only a heartbeat: it logs the monitor's view and the current levels.</summary>
        private void HandleHeartbeat(int blockIndex)
        {
            string snap = monitor != null ? monitor.Snapshot() : "no_monitor";
            var sb = new System.Text.StringBuilder();
            foreach (var kv in levels) sb.Append(kv.Key).Append('=').Append(kv.Value).Append('|');
            session.LogEvent("adapt_state", snap + ";levels=" + sb);
        }

        // --------------------------------------------------------------- Adaptation

        private void HandleTrigger(AdaptState state, float heldSeconds)
        {
            if (session.CurrentCondition != "adaptive" || !session.IsBlockRunning) return;

            triggerIndex++;
            string label = EngagementMonitor.Label(state);
            session.LogEvent("adapt_trigger",
                "n=" + triggerIndex + ";state=" + label + ";held=" + F(heldSeconds) +
                (monitor != null ? ";" + monitor.Snapshot() : ""));

            if (pendingTrigger >= 0)
            {
                session.LogEvent("intensity_rejected", "reason=previous_request_pending;trigger=" + pendingTrigger);
                pendingTrigger = -1;
            }

            if (provider == null)
            {
                session.LogEvent("intensity_hold", "reason=no_provider;trigger=" + triggerIndex);
                return;
            }

            SessionStats stats = SessionStats.Instance;
            float[] aff = HexadWeights.ComputeAffinities(session.CurrentProfile);
            var affinities = new Dictionary<string, float>(6);
            for (int i = 0; i < 6; i++) affinities[((ElementId)i).ToString()] = aff[i];

            WindowStats window = windowSource != null ? windowSource.GetWindow(adaptationWindowSeconds) : new WindowStats();

            var request = new AdaptationRequest
            {
                participantId = session.CurrentProfile != null ? session.CurrentProfile.participantId : "?",
                blockIndex = session.CurrentBlockIndex,
                triggerIndex = triggerIndex,
                stateLabel = label,
                stateSeconds = heldSeconds,
                blockElapsed = session.BlockElapsed,
                changesSoFar = changesThisBlock,
                secondsSinceLastChange = float.IsNegativeInfinity(lastAnyChangeTime)
                    ? session.BlockElapsed : Time.time - lastAnyChangeTime,
                recentAccuracy = stats != null ? stats.AccuracyLast(accuracyGuardThrows) : 0f,
                dominantType = HexadWeights.DominantType(session.CurrentProfile),
                window = window,
                levels = SnapshotLevels(),
                affinities = affinities
            };

            pendingTrigger = triggerIndex;
            pendingSentAt = Time.realtimeSinceStartup;
            pendingDeadline = pendingSentAt + resultTimeoutSeconds;

            int trig = triggerIndex;
            int block = session.CurrentBlockIndex;
            provider.RequestChange(request, change => HandleProviderResult(trig, block, change));
        }

        private void HandleProviderResult(int trig, int block, IntensityChange change)
        {
            if (trig != pendingTrigger || block != session.CurrentBlockIndex || !session.IsBlockRunning)
            {
                session.LogEvent("intensity_rejected", "reason=stale_result;trigger=" + trig);
                return;
            }
            pendingTrigger = -1;

            string latency = "latency_ms=" +
                ((Time.realtimeSinceStartup - pendingSentAt) * 1000f).ToString("F0", CultureInfo.InvariantCulture);

            if (!change.hasChange)
            {
                session.LogEvent("intensity_hold", "trigger=" + trig + ";reason=" + change.reason + ";" + latency);
                return;
            }

            string rejection = CheckGuards(change);
            if (rejection != null)
            {
                session.LogEvent("intensity_rejected",
                    "element=" + change.element + ";proposed=" + change.newLevel + ";reason=" + rejection +
                    ";trigger=" + trig + ";provider_reason=" + change.reason + ";" + latency);
                return;
            }

            SetLevelInternal(change.element, change.newLevel, "adaptive", "trigger=" + trig + ";" + change.reason + ";" + latency);
            if (change.element == ElementId.Choice) choiceAllowed = false;
            PushToLogger();
        }

        /// <summary>Returns null if the change is allowed, otherwise the rejection reason.</summary>
        private string CheckGuards(IntensityChange c)
        {
            if (session.CurrentCondition != "adaptive" || !session.IsBlockRunning) return "not_adaptive_block";
            if (session.BlockElapsed < minSecondsBeforeFirstChange) return "too_early";
            if (changesThisBlock >= maxChangesPerBlock) return "max_changes";
            if (Time.time - lastAnyChangeTime < minGapBetweenChanges) return "min_gap";

            IntensityLevel current = levels[c.element];
            if (c.newLevel == current) return "no_change";
            if (c.newLevel < IntensityLevel.Low) return "off_not_allowed";
            if (Mathf.Abs((int)c.newLevel - (int)current) != 1) return "step_too_large";
            if (Time.time - lastChangeTime[c.element] < elementCooldownSeconds) return "cooldown";
            if (c.element == ElementId.Choice && !choiceAllowed) return "choice_midpoint_only";

            if (enforceDataGuards)
            {
                SessionStats stats = SessionStats.Instance;
                if (stats == null || stats.BlockThrows < minBlockThrowsForChange) return "low_data";
                if (c.element == ElementId.Timer && c.newLevel == IntensityLevel.High &&
                    stats.AccuracyLast(accuracyGuardThrows) < timerHighMinAccuracy)
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

            if (source == "adaptive")
            {
                lastChangeTime[id] = Time.time;
                lastAnyChangeTime = Time.time;
                changesThisBlock++;
            }
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

        private static string F(float v) => v.ToString("F1", CultureInfo.InvariantCulture);

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