using TMPro;
using UnityEngine;
using VRBasketball;
using FYP.Session;

namespace FYP.Intensity
{
    /// <summary>
    /// Points element. Takes over scoring from the old ScoreboardManager (which it disables) but reuses its
    /// text fields and sounds.
    /// Off: nothing. Low: score tracked, shown only on the break screen. Medium: live score, +PTS popup, cheer.
    /// High: Medium + streak multipliers (x2 / x3), pop animations, cheer pitch rising with the streak.
    /// </summary>
    public class PointsElement : GamificationElement
    {
        public override ElementId Id => ElementId.Points;

        [Header("Existing scoreboard (reused)")]
        [Tooltip("The ScoreboardManager component. It is disabled (not deleted) so the two do not both score.")]
        [SerializeField] private ScoreboardManager legacyScoreboard;
        [Tooltip("Shown at Medium and High, hidden at Off and Low. Usually the Scoreboard object itself.")]
        [SerializeField] private GameObject displayRoot;
        [SerializeField] private TMP_Text scoreText;
        [SerializeField] private TMP_Text streakText;
        [SerializeField] private TMP_Text lastShotPointsText;
        [Tooltip("Objects that stay hidden at every level (the HIGH label and the high score value).")]
        [SerializeField] private GameObject[] alwaysHidden;

        [Header("Sounds")]
        [SerializeField] private AudioClip cheerSound;
        [SerializeField] private AudioClip buzzerSound;

        [Header("High level")]
        [SerializeField] private int streakForDouble = 3;
        [SerializeField] private int streakForTriple = 5;
        [SerializeField] private float popupSeconds = 2.5f;

        private SessionManager session;
        private int score;
        private int streak;
        private int bestStreak;
        private int lastMultiplier = 1;
        private float hidePopupAt = -1f;
        private bool subscribedStats;

        private void Awake()
        {
            if (legacyScoreboard != null) legacyScoreboard.enabled = false;
            if (alwaysHidden != null)
                foreach (GameObject g in alwaysHidden) if (g != null) g.SetActive(false);
        }

        private void OnEnable()
        {
            HoopScoringTrigger.OnBasketScored += HandleBasketScored;
        }

        private void OnDisable()
        {
            HoopScoringTrigger.OnBasketScored -= HandleBasketScored;
        }

        private void Start()
        {
            session = SessionManager.Instance;
            if (SessionStats.Instance != null)
            {
                SessionStats.Instance.OnThrowRecorded += HandleThrowRecorded;
                subscribedStats = true;
            }
            else
            {
                Debug.LogWarning("[PointsElement] No SessionStats found: streaks will not reset on misses.");
            }
        }

        private void OnDestroy()
        {
            if (subscribedStats && SessionStats.Instance != null)
                SessionStats.Instance.OnThrowRecorded -= HandleThrowRecorded;
        }

        private void Update()
        {
            if (hidePopupAt > 0f && Time.time >= hidePopupAt)
            {
                hidePopupAt = -1f;
                if (lastShotPointsText != null) lastShotPointsText.gameObject.SetActive(false);
            }
        }

        // ------------------------------------------------------------------ Level

        protected override void ApplyLevel(IntensityLevel level, IntensityLevel previous)
        {
            bool show = level >= IntensityLevel.Medium;
            if (displayRoot != null) displayRoot.SetActive(show);
            if (!show) HidePopup();
            RefreshTexts();
        }

        public override void OnBlockStarted(int blockIndex, string condition)
        {
            score = 0;
            streak = 0;
            bestStreak = 0;
            lastMultiplier = 1;
            HidePopup();
            RefreshTexts();
        }

        public override void OnBlockEnded(int blockIndex, string condition)
        {
            if (Level == IntensityLevel.Off) return;

            if (session != null)
                session.LogEvent("points_final", "score=" + score + ";best_streak=" + bestStreak);

            if (Level == IntensityLevel.Low)
                BlockSummary.Add("Score: " + score);
            else if (SfxPlayer.Instance != null)
                SfxPlayer.Instance.Play(buzzerSound);
        }

        // ----------------------------------------------------------------- Scoring

        private void HandleBasketScored(int basePoints)
        {
            if (Level == IntensityLevel.Off || session == null || !session.IsBlockRunning) return;

            streak++;
            if (streak > bestStreak) bestStreak = streak;

            int multiplier = 1;
            if (Level == IntensityLevel.High)
                multiplier = streak >= streakForTriple ? 3 : (streak >= streakForDouble ? 2 : 1);

            int awarded = basePoints * multiplier;
            score += awarded;
            RefreshTexts();

            if (Level >= IntensityLevel.Medium) ShowFeedback(awarded, multiplier);
            lastMultiplier = multiplier;
        }

        private void HandleThrowRecorded(ThrowSample sample)
        {
            if (sample.made) return;
            streak = 0;
            lastMultiplier = 1;
            RefreshTexts();
        }

        private void ShowFeedback(int awarded, int multiplier)
        {
            bool high = Level == IntensityLevel.High;

            if (lastShotPointsText != null)
            {
                lastShotPointsText.text = multiplier > 1
                    ? "+" + awarded + " PTS! x" + multiplier
                    : "+" + awarded + " PTS!";
                lastShotPointsText.gameObject.SetActive(true);
                hidePopupAt = Time.time + popupSeconds;
            }

            float pitch = high ? 1f + 0.06f * Mathf.Min(streak - 1, 6) : 1f;
            if (SfxPlayer.Instance != null) SfxPlayer.Instance.Play(cheerSound, 1f, pitch);

            if (high)
            {
                if (scoreText != null) UiAnim.Pop(scoreText.transform, 1.25f, 0.25f);
                if (lastShotPointsText != null) UiAnim.Pop(lastShotPointsText.transform, 1.4f, 0.35f);
                if (multiplier > lastMultiplier)
                {
                    if (streakText != null) UiAnim.Pop(streakText.transform, 1.5f, 0.4f);
                    if (SfxPlayer.Instance != null) SfxPlayer.Instance.Play(SfxId.Pop);
                }
            }
        }

        private void RefreshTexts()
        {
            if (scoreText != null) scoreText.text = score.ToString("D3");
            if (streakText != null) streakText.text = "x" + streak;
        }

        private void HidePopup()
        {
            hidePopupAt = -1f;
            if (lastShotPointsText != null) lastShotPointsText.gameObject.SetActive(false);
        }
    }
}