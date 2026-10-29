using System;
using System.Globalization;
using UnityEngine;
using FYP.Logging;
using FYP.Session;

namespace FYP.Intensity
{
    /// <summary>
    /// Player choice. Medium: ball skin menu before the block. High: ball skin + feedback type before the block,
    /// and environment + feedback frequency at the midpoint (the block clock is paused while that menu is open).
    /// Every choice resets to its default at block start and block end; nothing carries over between blocks.
    /// This step only manages state, timing and logging; skins, environments and feedback are applied in later steps
    /// by listening to OnChoiceChanged.
    /// </summary>
    public class PlayerChoiceElement : GamificationElement
    {
        public override ElementId Id => ElementId.Choice;

        [Header("Menu")]
        [Tooltip("A component implementing IChoiceMenu (DebugChoiceMenu for now, the real menu in step 2).")]
        [SerializeField] private MonoBehaviour menuBehaviour;
        [SerializeField] private float blockStartTimeoutSeconds = 20f;
        [SerializeField] private float midpointTimeoutSeconds = 10f;

        public ChoiceState Current { get; } = new ChoiceState();

        /// <summary>Fires whenever a choice's value changes, including resets to the default.</summary>
        public event Action<ChoiceKind, int> OnChoiceChanged;

        private static readonly ChoiceKind[] StartKindsMedium = { ChoiceKind.BallSkin };
        private static readonly ChoiceKind[] StartKindsHigh = { ChoiceKind.BallSkin, ChoiceKind.FeedbackType };
        private static readonly ChoiceKind[] MidpointKinds = { ChoiceKind.Environment, ChoiceKind.FeedbackFrequency };

        private SessionManager session;
        private IChoiceMenu menu;
        private bool menuOpen;
        private bool pausedByMenu;
        private bool midpointPassed;
        private bool midpointMenuDone;
        private bool subscribed;

        private void Start()
        {
            session = SessionManager.Instance;
            if (session == null)
            {
                Debug.LogError("[PlayerChoice] No SessionManager in the scene.");
                enabled = false;
                return;
            }

            menu = menuBehaviour as IChoiceMenu;
            if (menuBehaviour != null && menu == null)
                Debug.LogError("[PlayerChoice] Menu Behaviour does not implement IChoiceMenu.");

            session.OnBeforeBlock += HandleBeforeBlock;
            session.OnBlockMidpoint += HandleMidpoint;
            session.OnStateChanged += HandleStateChanged;
            subscribed = true;
            PushToLogger();
        }

        private void OnDestroy()
        {
            if (!subscribed || session == null) return;
            session.OnBeforeBlock -= HandleBeforeBlock;
            session.OnBlockMidpoint -= HandleMidpoint;
            session.OnStateChanged -= HandleStateChanged;
        }

        // ---------------------------------------------------------------- Level

        protected override void ApplyLevel(IntensityLevel level, IntensityLevel previous)
        {
            if (session == null) return;

            // Raised to High after the midpoint (adaptive condition): offer the midpoint menu now.
            if (level == IntensityLevel.High && previous != IntensityLevel.High &&
                session.IsBlockRunning && midpointPassed && !midpointMenuDone)
            {
                OpenMenu("midpoint", MidpointKinds, midpointTimeoutSeconds, true, session.CurrentCondition);
            }
        }

        public override void OnBlockEnded(int blockIndex, string condition)
        {
            midpointPassed = false;
            midpointMenuDone = false;
            ResetToDefaults("block_end");
        }

        // ---------------------------------------------------------- Menus and timing

        /// <summary>Participant pressed Start: apply defaults, and show the block-start menu if this block has one.</summary>
        private void HandleBeforeBlock(int blockIndex, string condition)
        {
            midpointPassed = false;
            midpointMenuDone = false;
            ResetToDefaults("pre_block");

            IntensityManager manager = IntensityManager.Instance;
            IntensityLevel planned = manager != null ? manager.PlannedLevel(ElementId.Choice, condition) : IntensityLevel.Off;
            if (planned < IntensityLevel.Medium) return;

            if (menu == null)
            {
                Debug.LogWarning("[PlayerChoice] No menu assigned: this block keeps the default choices.");
                return;
            }

            session.HoldBlockStart();   // the block clock does not start until the menu is done
            ChoiceKind[] kinds = planned == IntensityLevel.High ? StartKindsHigh : StartKindsMedium;
            OpenMenu("block_start", kinds, blockStartTimeoutSeconds, false, condition);
        }

        private void HandleMidpoint(int blockIndex)
        {
            midpointPassed = true;
            if (Level == IntensityLevel.High && !midpointMenuDone)
                OpenMenu("midpoint", MidpointKinds, midpointTimeoutSeconds, true, session.CurrentCondition);
        }

        private void HandleStateChanged(SessionState state)
        {
            if (state == SessionState.End && menuOpen)
            {
                if (menu != null) menu.Hide();
                menuOpen = false;
                pausedByMenu = false;
            }
        }

        private void OpenMenu(string moment, ChoiceKind[] kinds, float timeout, bool pauseBlock, string condition)
        {
            if (menu == null || menuOpen) return;

            menuOpen = true;
            if (pauseBlock)
            {
                session.SetBlockPaused(true);
                pausedByMenu = true;
            }

            session.LogEvent("choice_offered",
                "moment=" + moment + ";condition=" + condition + ";kinds=" + KindList(kinds) +
                ";timeout=" + timeout.ToString("F0", CultureInfo.InvariantCulture));

            var request = new ChoiceMenuRequest { moment = moment, kinds = kinds, timeoutSeconds = timeout };
            menu.Show(request, Current, result => OnMenuDone(moment, kinds, result));
        }

        private void OnMenuDone(string moment, ChoiceKind[] kinds, ChoiceMenuResult result)
        {
            if (!menuOpen) return;   // already closed (for example by an abort)
            menuOpen = false;

            bool timedOut = result != null && result.timedOut;
            float decision = result != null ? result.decisionSeconds : 0f;

            foreach (ChoiceKind kind in kinds)
            {
                int old = Current.Get(kind);
                int chosen = old;
                if (result != null && result.picks.TryGetValue(kind, out int picked)) chosen = picked;

                Current.Set(kind, chosen);
                int now = Current.Get(kind);
                bool changed = now != old;

                session.LogEvent("choice_made",
                    "moment=" + moment + ";kind=" + kind + ";value=" + ChoiceOptions.LogName(kind, now) +
                    ";previous=" + ChoiceOptions.LogName(kind, old) + ";changed=" + changed +
                    ";timed_out=" + timedOut + ";decision_s=" + decision.ToString("F1", CultureInfo.InvariantCulture));

                if (changed) RaiseChanged(kind, now);
            }
            PushToLogger();

            if (pausedByMenu)
            {
                pausedByMenu = false;
                session.SetBlockPaused(false);
            }

            if (moment == "block_start") session.ReleaseBlockStart();
            else midpointMenuDone = true;
        }

        // ------------------------------------------------------------------ State

        private void ResetToDefaults(string source)
        {
            for (int i = 0; i < ChoiceOptions.KindCount; i++)
            {
                var kind = (ChoiceKind)i;
                if (Current.Get(kind) == 0) continue;
                Current.Set(kind, 0);
                RaiseChanged(kind, 0);
            }

            if (session != null) session.LogEvent("choice_defaults", "source=" + source + ";" + StateString());
            PushToLogger();
        }

        private void RaiseChanged(ChoiceKind kind, int index)
        {
            Debug.Log("[PlayerChoice] " + kind + " -> " + ChoiceOptions.LogName(kind, index));
            if (session != null)
                session.LogEvent("choice_applied", "kind=" + kind + ";value=" + ChoiceOptions.LogName(kind, index));
            OnChoiceChanged?.Invoke(kind, index);
        }

        private string StateString()
        {
            return "skin=" + Current.LogName(ChoiceKind.BallSkin) +
                   ";env=" + Current.LogName(ChoiceKind.Environment) +
                   ";fb=" + Current.LogName(ChoiceKind.FeedbackType) +
                   ";freq=" + Current.LogName(ChoiceKind.FeedbackFrequency);
        }

        private static string KindList(ChoiceKind[] kinds)
        {
            var parts = new string[kinds.Length];
            for (int i = 0; i < kinds.Length; i++) parts[i] = kinds[i].ToString();
            return string.Join("|", parts);
        }

        private void PushToLogger()
        {
            if (ThrowLogger.Instance == null) return;
            ThrowLogger.Instance.SetChoiceState(
                Current.LogName(ChoiceKind.BallSkin),
                Current.LogName(ChoiceKind.Environment),
                Current.LogName(ChoiceKind.FeedbackType),
                Current.LogName(ChoiceKind.FeedbackFrequency));
        }
    }
}