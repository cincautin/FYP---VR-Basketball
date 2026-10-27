using System;
using System.Globalization;
using UnityEngine;
using VRBasketball;
using FYP.Session;

namespace FYP.Intensity
{
    public enum AdaptState { None, LowEngagement, Overloaded, Stagnant, Stable }

    /// <summary>
    /// Watches the player during adaptive blocks and fires a trigger when a state has lasted long enough.
    /// Stable only logs a row; it never changes anything. Thresholds are first guesses: tune them in the pilot.
    /// </summary>
    public class EngagementMonitor : MonoBehaviour
    {
        public event Action<AdaptState, float> OnTrigger;   // state, seconds it has lasted

        [Header("Timing")]
        [SerializeField] private float evaluateEverySeconds = 1f;
        [SerializeField] private float minSecondsIntoBlock = 20f;
        [Tooltip("No new trigger for this long after any trigger.")]
        [SerializeField] private float refractorySeconds = 20f;

        [Header("Low engagement")]
        [SerializeField] private float idleSecondsMin = 10f;
        [Tooltip("The idle limit is at least this multiple of the player's own median gap between throws.")]
        [SerializeField] private float idlePaceFactor = 1.5f;
        [SerializeField] private float lowHoldSeconds = 0f;

        [Header("Overload")]
        [SerializeField] private int overloadMisses = 5;
        [SerializeField] private int overloadWindowThrows = 8;
        [SerializeField] private float overloadAccuracy = 0.20f;
        [SerializeField] private int overloadExpiriesInRow = 2;
        [SerializeField] private float overloadHoldSeconds = 3f;

        [Header("Stagnation")]
        [SerializeField] private int stagnationThrows = 8;
        [SerializeField] private float stagnationBand = 0.05f;
        [SerializeField] private float stagnationMaxAccuracy = 0.60f;
        [SerializeField] private float stagnationHoldSeconds = 45f;

        [Header("Stable (log only)")]
        [SerializeField] private float stableHoldSeconds = 30f;

        private SessionManager session;
        private SessionStats stats;
        private bool subscribed;

        private float evalTimer;
        private float lockUntil;
        private float lastActivity;
        private bool ballHeld;
        private float heldLow, heldOverload, heldStagnant, heldStable;
        private float lastIdle, lastAcc, lastPrevAcc;
        private int lastMisses, lastExpiries;
        private void HandleBallLanded(Basketball ball) { lastActivity = Time.time; }
        private void HandleBallsReset() { lastActivity = Time.time; }

        public static string Label(AdaptState s)
        {
            switch (s)
            {
                case AdaptState.LowEngagement: return "disengaged";
                case AdaptState.Overloaded: return "overloaded";
                case AdaptState.Stagnant: return "stagnant";
                case AdaptState.Stable: return "good";
                default: return "none";
            }
        }

        private void OnEnable()
        {
            Basketball.OnBallGrabbed += HandleGrabbed;
            Basketball.OnBallReleased += HandleReleased;
            Basketball.OnBallHitFloorOrOutOfBounds += HandleBallLanded;
            BallResetButton.OnBallsReset += HandleBallsReset;
        }

        private void OnDisable()
        {
            Basketball.OnBallGrabbed -= HandleGrabbed;
            Basketball.OnBallReleased -= HandleReleased;
            Basketball.OnBallHitFloorOrOutOfBounds -= HandleBallLanded;
            BallResetButton.OnBallsReset -= HandleBallsReset;
        }

        private void Start()
        {
            session = SessionManager.Instance;
            stats = SessionStats.Instance;
            if (session == null || stats == null)
            {
                Debug.LogError("[EngagementMonitor] Needs SessionManager and SessionStats in the scene.");
                enabled = false;
                return;
            }
            session.OnBlockStarted += HandleBlockStarted;
            stats.OnThrowRecorded += HandleThrowRecorded;
            subscribed = true;
        }

        private void OnDestroy()
        {
            if (!subscribed) return;
            if (session != null) session.OnBlockStarted -= HandleBlockStarted;
            if (stats != null) stats.OnThrowRecorded -= HandleThrowRecorded;
        }

        private void HandleBlockStarted(int blockIndex, string condition)
        {
            ResetTimers();
            lockUntil = 0f;
            evalTimer = 0f;
            ballHeld = false;
            lastActivity = Time.time;
        }

        private void HandleGrabbed(Basketball ball, string hand) { ballHeld = true; lastActivity = Time.time; }
        private void HandleReleased(Basketball ball) { ballHeld = false; lastActivity = Time.time; }
        private void HandleThrowRecorded(ThrowSample s) { lastActivity = Time.time; }

        private void Update()
        {
            if (session == null || !session.IsBlockRunning || session.CurrentCondition != "adaptive" || session.IsBlockPaused)
                return;

            evalTimer += Time.deltaTime;
            if (evalTimer < evaluateEverySeconds) return;
            float dt = evalTimer;
            evalTimer = 0f;
            Evaluate(dt);
        }

        private void Evaluate(float dt)
        {
            if (session.BlockElapsed < minSecondsIntoBlock) return;
            if (Time.time < lockUntil) { ResetTimers(); return; }

            int n = stats.BlockThrows;

            // Low engagement: idle against the player's own pace (holding a ball counts as engaged)
            lastIdle = ballHeld ? 0f : Time.time - lastActivity;
            float idleLimit = Mathf.Max(idleSecondsMin, idlePaceFactor * stats.PracticeMedianGapSeconds);
            bool low = lastIdle >= idleLimit;

            // Overload
            lastMisses = stats.ConsecutiveMisses();
            lastExpiries = ExpiriesInRow();
            bool overload = (n >= overloadMisses && lastMisses >= overloadMisses)
                         || (n >= overloadWindowThrows && stats.AccuracyLast(overloadWindowThrows) <= overloadAccuracy)
                         || lastExpiries >= overloadExpiriesInRow;

            // Stagnation: flat accuracy over two consecutive groups of throws, and not good
            bool stagnant = false;
            if (n >= 2 * stagnationThrows)
            {
                lastAcc = AccuracyRange(n - stagnationThrows, stagnationThrows);
                lastPrevAcc = AccuracyRange(n - 2 * stagnationThrows, stagnationThrows);
                stagnant = Mathf.Abs(lastAcc - lastPrevAcc) <= stagnationBand && lastAcc < stagnationMaxAccuracy;
            }

            bool stable = !low && !overload && !stagnant && n >= stagnationThrows;

            heldLow = low ? heldLow + dt : 0f;
            heldOverload = overload ? heldOverload + dt : 0f;
            heldStagnant = stagnant ? heldStagnant + dt : 0f;
            heldStable = stable ? heldStable + dt : 0f;

            if (overload && heldOverload >= overloadHoldSeconds) Fire(AdaptState.Overloaded, heldOverload);
            else if (low && heldLow >= lowHoldSeconds) Fire(AdaptState.LowEngagement, lastIdle);
            else if (stagnant && heldStagnant >= stagnationHoldSeconds) Fire(AdaptState.Stagnant, heldStagnant);
            else if (stable && heldStable >= stableHoldSeconds)
            {
                session.LogEvent("adapt_stable", "held=" + F(heldStable) + ";" + Snapshot());
                heldStable = 0f;
            }
        }

        private void Fire(AdaptState state, float seconds)
        {
            lockUntil = Time.time + refractorySeconds;
            string snapshot = Snapshot();
            ResetTimers();
            OnTrigger?.Invoke(state, seconds);
            lastSnapshotForLog = snapshot;
        }

        private string lastSnapshotForLog;

        public string Snapshot()
        {
            return "idle=" + F(lastIdle) + ";acc8=" + F(lastAcc) + ";prev8=" + F(lastPrevAcc) +
                   ";misses=" + lastMisses + ";expiries=" + lastExpiries;
        }

        private void ResetTimers()
        {
            heldLow = heldOverload = heldStagnant = heldStable = 0f;
        }

        private float AccuracyRange(int start, int count)
        {
            var s = stats.Samples;
            int makes = 0;
            for (int i = start; i < start + count; i++) if (s[i].made) makes++;
            return count == 0 ? 0f : (float)makes / count;
        }

        private int ExpiriesInRow()
        {
            var s = stats.Samples;
            int c = 0;
            for (int i = s.Count - 1; i >= 0 && s[i].shotClockExpired; i--) c++;
            return c;
        }

        private static string F(float v) => v.ToString("F2", CultureInfo.InvariantCulture);
    }
}