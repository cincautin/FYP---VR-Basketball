using System;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using FYP.Logging;
using FYP.Session;

namespace FYP.Intensity
{
    /// <summary>One resolved throw, as the elements and the adaptation window see it.</summary>
    public struct ThrowSample
    {
        public int throwIndex;
        public float time;                 // Time.time when the throw resolved
        public bool made;
        public float releaseSpeed;
        public float releaseElevationDeg;
        public float releaseAzimuthErrorDeg;
        public float timeHeld;
        public float distanceToHoop;
        public string hand;
        public int streakAfter;
        public int makesAfter;
        public int throwsAfter;
    }

    /// <summary>
    /// Live stats for the current block plus the Block 1 baseline. Counts only throws that resolve while
    /// a block (1-3) is running; tutorial throws and throws that resolve during a break are ignored.
    /// </summary>
    public class SessionStats : MonoBehaviour, IWindowSource
    {
        public static SessionStats Instance { get; private set; }

        [Header("Settings")]
        [Tooltip("Block 1 needs at least this many throws to count as a baseline.")]
        [SerializeField] private int minBaselineThrows = 5;
        [Tooltip("Comparisons with the baseline need at least this many throws in the current block.")]
        [SerializeField] private int minThrowsForComparison = 5;
        [Tooltip("A streak must be at least this long to count as a new best.")]
        [SerializeField] private int minStreakForNewBest = 2;

        // Events for the elements (Phase 5)
        public event Action<ThrowSample> OnThrowRecorded;
        public event Action<int> OnNewBestStreak;   // streak length, beats Block 1 best and this block's best
        public event Action OnBaselineReady;

        // Current block
        public int BlockThrows => samples.Count;
        public int BlockMakes { get; private set; }
        public float BlockAccuracy => samples.Count == 0 ? 0f : (float)BlockMakes / samples.Count;
        public int CurrentStreak { get; private set; }
        public int BestStreak { get; private set; }
        public IReadOnlyList<ThrowSample> Samples => samples;

        // Baseline (Block 1)
        public bool HasBaseline { get; private set; }
        public float BaselineAccuracy { get; private set; }
        public int BaselineThrows { get; private set; }
        public int BaselineBestStreak { get; private set; }
        public float BaselineSpeedSd { get; private set; }
        public float BaselineElevationSd { get; private set; }

        /// <summary>Makes you would expect by now if you shot at your baseline accuracy (pace marker).</summary>
        public float BaselineExpectedMakes => HasBaseline ? BaselineAccuracy * samples.Count : 0f;

        /// <summary>True when there is a baseline and enough throws in this block to compare fairly.</summary>
        public bool HasComparison => HasBaseline && samples.Count >= minThrowsForComparison;

        /// <summary>Current block accuracy minus baseline accuracy (0.10 = 10 percentage points above).</summary>
        public float AccuracyDelta => HasComparison ? BlockAccuracy - BaselineAccuracy : 0f;

        private readonly List<ThrowSample> samples = new List<ThrowSample>(64);
        private SessionManager session;
        private float blockStartTime;
        private bool subscribed;

        private void Awake()
        {
            if (Instance != null && Instance != this) { Destroy(gameObject); return; }
            Instance = this;
        }

        private void Start()
        {
            session = SessionManager.Instance;
            if (session == null || ThrowLogger.Instance == null)
            {
                Debug.LogError("[SessionStats] Needs a SessionManager and a ThrowLogger in the scene.");
                enabled = false;
                return;
            }
            ThrowLogger.Instance.OnThrowLogged += HandleThrowLogged;
            session.OnBlockStarted += HandleBlockStarted;
            session.OnBlockEnded += HandleBlockEnded;
            subscribed = true;
        }

        private void OnDestroy()
        {
            if (!subscribed) return;
            if (ThrowLogger.Instance != null) ThrowLogger.Instance.OnThrowLogged -= HandleThrowLogged;
            if (session != null)
            {
                session.OnBlockStarted -= HandleBlockStarted;
                session.OnBlockEnded -= HandleBlockEnded;
            }
        }

        // ------------------------------------------------------------ Session events

        private void HandleBlockStarted(int blockIndex, string condition)
        {
            samples.Clear();
            BlockMakes = 0;
            CurrentStreak = 0;
            BestStreak = 0;
            blockStartTime = Time.time;
            if (blockIndex == 1) HasBaseline = false; // a new session starts with a fresh baseline
        }

        private void HandleBlockEnded(int blockIndex, string condition, string reason)
        {
            if (blockIndex == 1) ComputeBaseline();
            LogBlockStats();
        }

        private void ComputeBaseline()
        {
            if (samples.Count < minBaselineThrows)
            {
                HasBaseline = false;
                session.LogEvent("baseline_missing", "throws=" + samples.Count + ";needed=" + minBaselineThrows);
                return;
            }

            BaselineAccuracy = BlockAccuracy;
            BaselineThrows = samples.Count;
            BaselineBestStreak = BestStreak;
            ComputeSd(0, out float speedSd, out float elevSd);
            BaselineSpeedSd = speedSd;
            BaselineElevationSd = elevSd;
            HasBaseline = true;

            session.LogEvent("baseline_ready",
                "accuracy=" + F(BaselineAccuracy) + ";throws=" + BaselineThrows + ";best_streak=" + BaselineBestStreak +
                ";speed_sd=" + F(BaselineSpeedSd) + ";elev_sd=" + F(BaselineElevationSd));
            OnBaselineReady?.Invoke();
        }

        private void LogBlockStats()
        {
            ComputeSd(0, out float speedSd, out float elevSd);
            session.LogEvent("block_stats",
                "throws=" + samples.Count + ";makes=" + BlockMakes + ";accuracy=" + F(BlockAccuracy) +
                ";best_streak=" + BestStreak + ";speed_sd=" + F(speedSd) + ";elev_sd=" + F(elevSd) +
                ";baseline_acc=" + (HasBaseline ? F(BaselineAccuracy) : "NA"));
        }

        // ------------------------------------------------------------------- Throws

        private void HandleThrowLogged(ThrowRecord r)
        {
            if (session == null || !session.IsBlockRunning) return;

            int previousBest = BestStreak;
            if (r.made) { BlockMakes++; CurrentStreak++; }
            else CurrentStreak = 0;
            if (CurrentStreak > BestStreak) BestStreak = CurrentStreak;

            var sample = new ThrowSample
            {
                throwIndex = r.throw_index,
                time = Time.time,
                made = r.made,
                releaseSpeed = r.release_speed,
                releaseElevationDeg = r.release_elevation_deg,
                releaseAzimuthErrorDeg = r.release_azimuth_error_deg,
                timeHeld = r.time_held,
                distanceToHoop = r.distance_to_hoop,
                hand = r.hand,
                streakAfter = CurrentStreak,
                makesAfter = BlockMakes,
                throwsAfter = samples.Count + 1
            };
            samples.Add(sample);
            OnThrowRecorded?.Invoke(sample);

            bool beatsBlockBest = CurrentStreak > previousBest;
            bool beatsBaseline = HasBaseline && CurrentStreak > BaselineBestStreak;
            if (r.made && beatsBlockBest && beatsBaseline && CurrentStreak >= minStreakForNewBest)
                OnNewBestStreak?.Invoke(CurrentStreak);
        }

        // ---------------------------------------------------------- Window and helpers

        /// <summary>Summary of throws that resolved in the last <paramref name="seconds"/> seconds.</summary>
        public WindowStats GetWindow(float seconds)
        {
            float now = Time.time;
            float elapsed = session != null ? session.BlockElapsed : seconds;
            float span = Mathf.Max(1f, Mathf.Min(seconds, elapsed));

            int start = samples.Count;
            for (int i = samples.Count - 1; i >= 0; i--)
            {
                if (samples[i].time >= now - seconds) start = i;
                else break;
            }

            int n = samples.Count - start;
            int makes = 0;
            for (int i = start; i < samples.Count; i++) if (samples[i].made) makes++;
            ComputeSd(start, out float speedSd, out float elevSd);

            return new WindowStats
            {
                windowSeconds = span,
                throws = n,
                makes = makes,
                accuracy = n == 0 ? 0f : (float)makes / n,
                releaseSpeedSd = speedSd,
                releaseElevationSd = elevSd,
                throwsPerMinute = n / span * 60f,
                secondsSinceLastThrow = samples.Count > 0 ? now - samples[samples.Count - 1].time : elapsed,
                currentStreak = CurrentStreak,
                baselineAccuracy = HasBaseline ? BaselineAccuracy : -1f
            };
        }

        /// <summary>Accuracy over the last k throws of this block (0 if there are none).</summary>
        public float AccuracyLast(int k)
        {
            int n = Mathf.Min(k, samples.Count);
            if (n == 0) return 0f;
            int makes = 0;
            for (int i = samples.Count - n; i < samples.Count; i++) if (samples[i].made) makes++;
            return (float)makes / n;
        }

        /// <summary>
        /// Range (max minus min) of release speed and elevation over the last k throws.
        /// Returns false if fewer than k throws exist. Used for the Steady Hands badge.
        /// </summary>
        public bool RecentReleaseRange(int k, out float speedRange, out float elevationRange)
        {
            speedRange = 0f;
            elevationRange = 0f;
            if (k < 1 || samples.Count < k) return false;

            float sMin = float.MaxValue, sMax = float.MinValue, eMin = float.MaxValue, eMax = float.MinValue;
            for (int i = samples.Count - k; i < samples.Count; i++)
            {
                ThrowSample s = samples[i];
                if (s.releaseSpeed < sMin) sMin = s.releaseSpeed;
                if (s.releaseSpeed > sMax) sMax = s.releaseSpeed;
                if (s.releaseElevationDeg < eMin) eMin = s.releaseElevationDeg;
                if (s.releaseElevationDeg > eMax) eMax = s.releaseElevationDeg;
            }
            speedRange = sMax - sMin;
            elevationRange = eMax - eMin;
            return true;
        }

        /// <summary>Sample standard deviation of release speed and elevation from startIndex to the end.</summary>
        private void ComputeSd(int startIndex, out float speedSd, out float elevationSd)
        {
            int count = 0;
            double meanS = 0, m2S = 0, meanE = 0, m2E = 0;
            for (int i = startIndex; i < samples.Count; i++)
            {
                count++;
                double s = samples[i].releaseSpeed;
                double e = samples[i].releaseElevationDeg;
                double dS = s - meanS; meanS += dS / count; m2S += dS * (s - meanS);
                double dE = e - meanE; meanE += dE / count; m2E += dE * (e - meanE);
            }
            speedSd = count < 2 ? 0f : (float)Math.Sqrt(m2S / (count - 1));
            elevationSd = count < 2 ? 0f : (float)Math.Sqrt(m2E / (count - 1));
        }

        private static string F(float v) => v.ToString("F3", CultureInfo.InvariantCulture);

        [ContextMenu("Print Stats")]
        private void PrintStats()
        {
            WindowStats w = GetWindow(30f);
            Debug.Log(
                "[SessionStats] Block: throws " + BlockThrows + ", makes " + BlockMakes + ", accuracy " + F(BlockAccuracy) +
                ", streak " + CurrentStreak + " (best " + BestStreak + ")" +
                "\n  Last 30 s: throws " + w.throws + ", accuracy " + F(w.accuracy) + ", speed SD " + F(w.releaseSpeedSd) +
                ", elev SD " + F(w.releaseElevationSd) + ", per min " + F(w.throwsPerMinute) +
                "\n  Baseline: " + (HasBaseline ? "accuracy " + F(BaselineAccuracy) + ", best streak " + BaselineBestStreak : "none"));
        }
    }
}