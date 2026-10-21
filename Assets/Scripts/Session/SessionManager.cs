using System;
using System.Globalization;
using UnityEngine;
using UnityEngine.XR;
using FYP.Logging;
using VRBasketball;

namespace FYP.Session
{
    public enum SessionState
    {
        ParticipantEntry, Intro, Tutorial,
        Block1Baseline, Break1, Block2, Break2, Block3, End
    }

    /// <summary>
    /// Session state machine. Blocks start immediately when their state is entered; the Start button
    /// lives on the preceding screen (tutorial-done screen or break screen).
    /// </summary>
    public class SessionManager : MonoBehaviour
    {
        public static SessionManager Instance { get; private set; }

        [Header("Block settings")]
        [SerializeField] private float blockSeconds = 180f;
        [SerializeField] private int throwsTarget = 20;
        [Tooltip("If true, a block also ends once throwsTarget throws are logged. If false, blocks always last blockSeconds.")]
        [SerializeField] private bool endBlockAtTarget = true;
        [SerializeField] private float tutorialMaxSeconds = 120f;
        [SerializeField] private float adaptationTickSeconds = 30f;

        [Header("References")]
        [Tooltip("A component implementing IInstructionPanel. Leave empty to run without UI (use N in the editor).")]
        [SerializeField] private MonoBehaviour panelBehaviour;
        [SerializeField] private BallSpawner ballSpawner;

        [Header("Testing")]
        [SerializeField] private bool allowTestProfile = true;
        [SerializeField] private string debugParticipantId = "1";
        [Tooltip("Tick if TutorialController drives the tutorial text and calls CompleteTutorial().")]
        [SerializeField] private bool tutorialDrivenExternally = false;
        [SerializeField] private float abortHoldSeconds = 3f;

        // Events
        public event Action<SessionState> OnStateChanged;
        public event Action<int, string> OnBlockStarted;          // blockIndex, condition
        public event Action<int> OnBlockMidpoint;                 // blockIndex
        public event Action<int> OnAdaptationTick;                // blockIndex (adaptive blocks only)
        public event Action<int, string, string> OnBlockEnded;    // blockIndex, condition, endReason

        // Public state
        public ParticipantProfile CurrentProfile { get; private set; }
        public SessionState CurrentState { get; private set; }
        public int CurrentBlockIndex { get; private set; }
        public string CurrentCondition { get; private set; } = "none";
        public string SessionId { get; private set; }
        public bool IsBlockRunning { get; private set; }
        public float BlockElapsed { get; private set; }
        public int ThrowsInBlock { get; private set; }
        public float BlockSeconds => blockSeconds;
        public int ThrowsTarget => throwsTarget;

        private readonly SessionEventLog log = new SessionEventLog();
        private IInstructionPanel panel;
        private Action pendingPrimary;
        private bool stateEntered;
        private bool midpointFired;
        private float nextTick;
        private bool tutorialActive;
        private float tutorialElapsed;
        private bool aborted;
        private bool paused;
        private float abortHeld;
        private float abortPollTimer;
        private bool abortButtonDown;
        private bool subscribed;

        private void Awake()
        {
            if (Instance != null && Instance != this) { Destroy(gameObject); return; }
            Instance = this;

#if !UNITY_EDITOR
            allowTestProfile = false; // test profiles only in the editor
#endif

            panel = panelBehaviour as IInstructionPanel;
            if (panelBehaviour != null && panel == null)
                Debug.LogError("[SessionManager] Panel Behaviour does not implement IInstructionPanel.");

            if (ballSpawner == null) ballSpawner = FindAnyObjectByType<BallSpawner>();
        }

        private void Start()
        {
            if (ThrowLogger.Instance != null)
            {
                ThrowLogger.Instance.OnThrowLogged += HandleThrowLogged;
                subscribed = true;
            }
            else
            {
                Debug.LogError("[SessionManager] No ThrowLogger in the scene.");
            }
            EnterState(SessionState.ParticipantEntry);
        }

        private void OnDestroy()
        {
            if (subscribed && ThrowLogger.Instance != null)
                ThrowLogger.Instance.OnThrowLogged -= HandleThrowLogged;
        }

        // ------------------------------------------------------------------ Update

        private void Update()
        {
            float dt = Time.deltaTime;
            HandleDebugKeys();
            HandleAbort(dt);
            if (paused) return;

            if (CurrentState == SessionState.Tutorial && tutorialActive)
            {
                tutorialElapsed += dt;
                if (tutorialElapsed >= tutorialMaxSeconds) CompleteTutorial();
            }

            if (!IsBlockRunning) return;

            BlockElapsed += dt;

            if (!midpointFired &&
                (BlockElapsed >= blockSeconds * 0.5f ||
                 (throwsTarget > 0 && ThrowsInBlock >= Mathf.CeilToInt(throwsTarget * 0.5f))))
            {
                midpointFired = true;
                log.Write("midpoint", CurrentState.ToString(), CurrentBlockIndex, CurrentCondition, "");
                OnBlockMidpoint?.Invoke(CurrentBlockIndex);
            }

            if (CurrentCondition == "adaptive")
            {
                while (nextTick < blockSeconds && BlockElapsed >= nextTick)
                {
                    log.Write("tick", CurrentState.ToString(), CurrentBlockIndex, CurrentCondition,
                        "t=" + nextTick.ToString("F0", CultureInfo.InvariantCulture));
                    OnAdaptationTick?.Invoke(CurrentBlockIndex);
                    nextTick += adaptationTickSeconds;
                }
            }

            if (BlockElapsed >= blockSeconds) EndBlock("time");
            else if (endBlockAtTarget && throwsTarget > 0 && ThrowsInBlock >= throwsTarget) EndBlock("throws");
        }

        // ------------------------------------------------------------- State machine

        private void EnterState(SessionState next)
        {
            if (stateEntered)
                log.Write("state_exit", CurrentState.ToString(), CurrentBlockIndex, CurrentCondition, "");

            CurrentState = next;
            stateEntered = true;
            log.Write("state_enter", next.ToString(), CurrentBlockIndex, CurrentCondition, "");
            OnStateChanged?.Invoke(next);

            switch (next)
            {
                case SessionState.ParticipantEntry: ShowEntry(); break;
                case SessionState.Intro: ShowIntro(); break;
                case SessionState.Tutorial: BeginTutorial(); break;
                case SessionState.Block1Baseline: StartBlock(1); break;
                case SessionState.Break1: ShowBreak(2); break;
                case SessionState.Block2: StartBlock(2); break;
                case SessionState.Break2: ShowBreak(3); break;
                case SessionState.Block3: StartBlock(3); break;
                case SessionState.End: ShowEnd(); break;
            }
        }

        private void ShowEntry()
        {
            pendingPrimary = null;
            if (panel != null) panel.ShowKeypad("Participant ID", "Enter your participant ID", SubmitParticipantId);
            else Debug.Log("[SessionManager] No panel. Press N in the editor to use debug ID '" + debugParticipantId + "'.");
        }

        /// <summary>Called by the keypad. Public so the panel or tests can call it.</summary>
        public void SubmitParticipantId(string id)
        {
            if (CurrentState != SessionState.ParticipantEntry) return;

            if (ParticipantLoader.TryLoad(id, out ParticipantProfile found, out string error))
            {
                StartSession(found);
                return;
            }

            if (allowTestProfile)
            {
                Debug.LogWarning("[SessionManager] " + error + " Using a TEST profile (editor only).");
                StartSession(ParticipantProfile.CreateTest(id));
                return;
            }

            Show("ID not found", error + " Please check the ID and try again.", "Try again", ShowEntry);
        }

        private void StartSession(ParticipantProfile p)
        {
            CurrentProfile = p;
            SessionId = DateTime.Now.ToString("yyyyMMdd_HHmmss", CultureInfo.InvariantCulture);
            log.Open(p.participantId, SessionId);
            if (ThrowLogger.Instance != null) ThrowLogger.Instance.SetSession(p.participantId, SessionId);
            log.Write("session_start", CurrentState.ToString(), -1, "none",
                "order=" + p.conditionOrder + ";test=" + p.isTest);
            EnterState(SessionState.Intro);
        }

        private void ShowIntro()
        {
            Show("Welcome",
                "You will take part in a short basketball throwing session. First, a quick tutorial.",
                "Start tutorial", () => EnterState(SessionState.Tutorial));
        }

        private void BeginTutorial()
        {
            tutorialActive = true;
            tutorialElapsed = 0f;
            CurrentBlockIndex = 0;
            CurrentCondition = "tutorial";
            if (ThrowLogger.Instance != null) ThrowLogger.Instance.SetBlock(0, "tutorial");

            if (tutorialDrivenExternally) { pendingPrimary = null; return; }
            Show("Tutorial",
                "Practise picking up the ball and throwing it at the hoop. Press Continue when you are ready.",
                "Continue", CompleteTutorial);
        }

        /// <summary>Ends the tutorial. Also called by TutorialController and the tutorial timeout.</summary>
        public void CompleteTutorial()
        {
            if (!tutorialActive) return;
            tutorialActive = false;
            Show("Tutorial done",
                "When you are ready, press Start. Round 1 will begin.",
                "Start", () => EnterState(SessionState.Block1Baseline));
        }

        private void ShowBreak(int nextBlockIndex)
        {
            SessionState nextState = nextBlockIndex == 2 ? SessionState.Block2 : SessionState.Block3;
            Show("Rest",
                "Take a short rest. Round " + nextBlockIndex + " is next. Press Start when you are ready.",
                "Start", () => EnterState(nextState));
        }

        private void ShowEnd()
        {
            pendingPrimary = null;
            string id = CurrentProfile != null ? CurrentProfile.participantId : "?";
            if (aborted)
                Show("Session ended", "The session has ended. Please take off the headset. Participant ID: " + id, null, null);
            else
                Show("Session complete",
                    "Please take off the headset.\nParticipant ID: " + id +
                    "\nPlease complete the questionnaires for the Blue round and the Orange round.",
                    null, null);
        }

        // ----------------------------------------------------------------- Blocks

        public static string CueFor(int blockIndex)
        {
            if (blockIndex == 2) return "blue";
            if (blockIndex == 3) return "orange";
            return "none";
        }

        private void StartBlock(int index)
        {
            CurrentBlockIndex = index;
            CurrentCondition = CurrentProfile.ConditionForBlock(index);
            BlockElapsed = 0f;
            ThrowsInBlock = 0;
            midpointFired = false;
            nextTick = adaptationTickSeconds;
            IsBlockRunning = true;
            pendingPrimary = null;

            if (panel != null) panel.Hide();
            ResetBall();
            if (ThrowLogger.Instance != null) ThrowLogger.Instance.SetBlock(index, CurrentCondition);

            log.Write("block_start", CurrentState.ToString(), index, CurrentCondition, "cue=" + CueFor(index));
            OnBlockStarted?.Invoke(index, CurrentCondition);
        }

        private void EndBlock(string reason)
        {
            if (!IsBlockRunning) return;
            IsBlockRunning = false;

            log.Write("block_end", CurrentState.ToString(), CurrentBlockIndex, CurrentCondition,
                "reason=" + reason + ";throws=" + ThrowsInBlock +
                ";seconds=" + BlockElapsed.ToString("F1", CultureInfo.InvariantCulture));
            OnBlockEnded?.Invoke(CurrentBlockIndex, CurrentCondition, reason);

            switch (CurrentState)
            {
                case SessionState.Block1Baseline: EnterState(SessionState.Break1); break;
                case SessionState.Block2: EnterState(SessionState.Break2); break;
                case SessionState.Block3: EnterState(SessionState.End); break;
            }
        }

        private void HandleThrowLogged(ThrowRecord record)
        {
            if (IsBlockRunning) ThrowsInBlock++;
        }

        private void ResetBall()
{
    if (ballSpawner != null) ballSpawner.ReturnAllBallsToRack();
}

        // ------------------------------------------------------------------ Abort

        private void HandleAbort(float dt)
        {
            if (CurrentState == SessionState.End || !stateEntered) return;

            abortPollTimer += dt;
            if (abortPollTimer >= 0.1f)
            {
                abortPollTimer = 0f;
                var device = InputDevices.GetDeviceAtXRNode(XRNode.LeftHand);
                abortButtonDown = device.isValid &&
                                  device.TryGetFeatureValue(CommonUsages.menuButton, out bool pressed) && pressed;
            }

            if (abortButtonDown)
            {
                abortHeld += dt;
                if (abortHeld >= abortHoldSeconds) AbortSession("left_menu_hold");
            }
            else
            {
                abortHeld = 0f;
            }
        }

        public void AbortSession(string reason)
        {
            if (aborted || CurrentState == SessionState.End) return;
            aborted = true;
            IsBlockRunning = false;
            tutorialActive = false;
            log.Write("session_abort", CurrentState.ToString(), CurrentBlockIndex, CurrentCondition, reason);
            EnterState(SessionState.End);
        }

        // ---------------------------------------------------------------- Helpers

        private void Show(string title, string body, string buttonLabel, Action onButton)
        {
            pendingPrimary = onButton;
            if (panel != null) panel.ShowMessage(title, body, buttonLabel, onButton);
            else Debug.Log("[SessionManager] " + title + ": " + body +
                           (onButton != null ? "  (press N in the editor to continue)" : ""));
        }

        // ------------------------------------------------------- Editor debug keys

        private void HandleDebugKeys()
        {
#if UNITY_EDITOR
            if (KeyN()) DebugAdvance();
            if (KeyP())
            {
                paused = !paused;
                Debug.Log("[SessionManager] Paused = " + paused);
            }
#endif
        }

#if UNITY_EDITOR
        private void DebugAdvance()
        {
            switch (CurrentState)
            {
                case SessionState.ParticipantEntry:
                    SubmitParticipantId(debugParticipantId);
                    break;
                case SessionState.Block1Baseline:
                case SessionState.Block2:
                case SessionState.Block3:
                    if (IsBlockRunning) EndBlock("debug_skip");
                    break;
                default:
                    if (pendingPrimary != null) pendingPrimary.Invoke();
                    break;
            }
        }

        private static bool KeyN()
        {
#if ENABLE_INPUT_SYSTEM
            var kb = UnityEngine.InputSystem.Keyboard.current;
            return kb != null && kb.nKey.wasPressedThisFrame;
#elif ENABLE_LEGACY_INPUT_MANAGER
            return Input.GetKeyDown(KeyCode.N);
#else
            return false;
#endif
        }

        private static bool KeyP()
        {
#if ENABLE_INPUT_SYSTEM
            var kb = UnityEngine.InputSystem.Keyboard.current;
            return kb != null && kb.pKey.wasPressedThisFrame;
#elif ENABLE_LEGACY_INPUT_MANAGER
            return Input.GetKeyDown(KeyCode.P);
#else
            return false;
#endif
        }
#endif
    }
}