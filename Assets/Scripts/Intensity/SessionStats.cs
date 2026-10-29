using System;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using FYP.Logging;
using FYP.Session;

namespace FYP.Intensity
{
    /// <summary>One resolved throw, as the elements and the adaptation logic see it.</summary>
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
        public bool shotClockExpired;
    }

    /// <summary>
    /// Live stats for the current block, a within-block reference (the player's first minute), and practice
    /// stats from the intro. Counts only throws that resolve while a block is running (or the intro is active).
    /// </summary>
    public class SessionStats : MonoBehaviour, IWindowSource
    {
        public static SessionStats Instance { get; private set; }

        [Header("Reference (first minute of each block)")]
        [SerializeField] private float referenceSeconds = 60f;
        [SerializeField] private int referenceMinThrows = 5;
        [Tooltip("Recent throws compared against the reference.")]
        [SerializeField] private int recentThrowsForDelta = 10;

        [Header("Other")]
        [SerializeField] private int minStreakForNewBest = 3;
        [Tooltip("Used when the intro gave too few throws to measure the player's own pace.")]
        [SerializeField] private float defaultGapSeconds = 8f;

        public event Action<ThrowSample> OnThrowRecorded;
        public event Action<int> OnNewBestStreak;   // beats this block's previous best streak
        public event Action OnReferenceReady;

        // Current block
        public int BlockThrows => samples.Count;
        public int BlockMakes { get; private set; }
        public float BlockAccuracy => samples.Count == 0 ? 0f : (float)BlockMakes / samples.Count;
        public int CurrentStreak { get; private set; }
        public int BestStreak { get; private set; }
        public IReadOnlyList<ThrowSample> Samples => samples;

        // Reference (this block's first minute)
        public bool HasReference { get; private set; }
        public float ReferenceAccuracy { get; private set; }
        public int ReferenceThrows { get; private set; }

        /// <summary>Makes you would expect by now if you kept shooting at your first-minute accuracy.</summary>
        public float ReferenceExpectedMakes => HasReference ? ReferenceAccuracy * samples.Count : 0f;

        /// <summary>True once the reference exists and at least 5 throws have happened since.</summary>
        public bool HasComparison => HasReference && samples.Count >= ReferenceThrows + 5;

        /// <summary>Accuracy over the most recent throws minus the reference (0.10 = 10 points above).</summary>
        public float RecentAccuracyDelta
        {
            get
            {
                if (!HasComparison) return 0f;
                int k = Mathf.Min(recentThrowsForDelta, samples.Count - ReferenceThrows);
                return AccuracyLast(k) - ReferenceAccuracy;
            }
        }

        // Practice (intro)
        public int PracticeThrows => practiceTimes.Count;
        public int PracticeMakes { get; private set; }
        public float PracticeAccuracy => practiceTimes.Count == 0 ? 0f : (float)PracticeMakes / practiceTimes.Count;
        public bool HasPracticePace => practiceTimes.Count >= 5;

        /// <summary>Median seconds between consecutive practice throws, or the default if there were too few.</summary>
        public float PracticeMedianGapSeconds
        {
            get
            {
                if (practiceTimes.Count < 5) return defaultGapSeconds;
                var gaps = new List<float>(practiceTimes.Count - 1);
                for (int i = 1; i < practiceTimes.Count; i++) gaps.Add(practiceTimes[i] - practiceTimes[i - 1]);
                gaps.Sort();
                int mid = gaps.Count / 2;
                return gaps.Count % 2 == 1 ? gaps[mid] : 0.5f * (gaps[mid - 1] + gaps[mid]);
            }
        }

        private readonly List<ThrowSample> samples = new List<ThrowSample>(64);
        private readonly List<float> practiceTimes = new List<float>(32);
        private SessionManager session;
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
            if (blockIndex == 1)
            {
                session.LogEvent("practice_stats",
                    "throws=" + PracticeThrows + ";accuracy=" + F(PracticeAccuracy) +
                    ";median_gap=" + F(PracticeMedianGapSeconds) + ";has_pace=" + HasPracticePace);
            }

            samples.Clear();
            BlockMakes = 0;
            CurrentStreak = 0;
            BestStreak = 0;
            HasReference = false;
            ReferenceAccuracy = 0f;
            ReferenceThrows = 0;
        }

        private void HandleBlockEnded(int blockIndex, string condition, string reason)
        {
            ComputeSd(0, out float speedSd, out float elevSd);
            session.LogEvent("block_stats",
                "throws=" + samples.Count + ";makes=" + BlockMakes + ";accuracy=" + F(BlockAccuracy) +
                ";best_streak=" + BestStreak + ";speed_sd=" + F(speedSd) + ";elev_sd=" + F(elevSd) +
                ";ref_acc=" + (HasReference ? F(ReferenceAccuracy) : "NA"));
        }

        // ------------------------------------------------------------------- Throws

        private void HandleThrowLogged(ThrowRecord r)
        {
            if (session == null) return;

            if (session.IsTutorialActive)
            {
                practiceTimes.Add(Time.time);
                if (r.made) PracticeMakes++;
                return;
            }
            if (!session.IsBlockRunning || session.IsBlockPaused) return;

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
                shotClockExpired = r.shot_clock_expired,
                streakAfter = CurrentStreak,
                makesAfter = BlockMakes,
                throwsAfter = samples.Count + 1
            };
            samples.Add(sample);

            if (!HasReference && session.BlockElapsed >= referenceSeconds && samples.Count >= referenceMinThrows)
                FreezeReference();

            OnThrowRecorded?.Invoke(sample);

            if (r.made && CurrentStreak > previousBest && CurrentStreak >= minStreakForNewBest)
                OnNewBestStreak?.Invoke(CurrentStreak);
        }

        private void FreezeReference()
        {
            HasReference = true;
            ReferenceAccuracy = BlockAccuracy;
            ReferenceThrows = samples.Count;
            session.LogEvent("reference_ready",
                "accuracy=" + F(ReferenceAccuracy) + ";throws=" + ReferenceThrows);
            OnReferenceReady?.Invoke();
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
                referenceAccuracy = HasReference ? ReferenceAccuracy : -1f,
                practiceMedianGap = PracticeMedianGapSeconds
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

        /// <summary>Misses in a row at the end of the block so far.</summary>
        public int ConsecutiveMisses()
        {
            int c = 0;
            for (int i = samples.Count - 1; i >= 0 && !samples[i].made; i--) c++;
            return c;
        }

        /// <summary>Range (max minus min) of release speed and elevation over the last k throws (Steady Hands).</summary>
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
                ", streak " + CurrentStreak + " (best " + BestStreak + "), misses in a row " + ConsecutiveMisses() +
                "\n  Last 30 s: throws " + w.throws + ", accuracy " + F(w.accuracy) + ", speed SD " + F(w.releaseSpeedSd) +
                ", per min " + F(w.throwsPerMinute) + ", since last throw " + F(w.secondsSinceLastThrow) +
                "\n  Reference: " + (HasReference ? "accuracy " + F(ReferenceAccuracy) + " over " + ReferenceThrows + " throws" : "not ready") +
                "\n  Practice: " + PracticeThrows + " throws, accuracy " + F(PracticeAccuracy) +
                ", median gap " + F(PracticeMedianGapSeconds) + " s" + (HasPracticePace ? "" : " (default)"));
        }
    }
}