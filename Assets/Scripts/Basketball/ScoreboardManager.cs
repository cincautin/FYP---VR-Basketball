using TMPro;
using UnityEngine;

namespace VRBasketball
{
    public class ScoreboardManager : MonoBehaviour
    {
        [Header("UI Text Displays")]
        [SerializeField] private TMP_Text scoreText;
        [SerializeField] private TMP_Text streakText;
        [SerializeField] private TMP_Text highScoreText;
        [SerializeField] private TMP_Text lastShotPointsText;

        [Header("Audio Feedback")]
        [SerializeField] private AudioSource audioSource;
        [SerializeField] private AudioClip cheerSound;
        [SerializeField] private AudioClip buzzerSound;

        private int currentScore = 0;
        private int currentStreak = 0;
        private int highScore = 0;

        private void Awake()
        {
            if (audioSource == null)
            {
                audioSource = GetComponent<AudioSource>();
                if (audioSource == null)
                {
                    audioSource = gameObject.AddComponent<AudioSource>();
                    audioSource.playOnAwake = false;
                    audioSource.spatialBlend = 1f;
                }
            }
            UpdateDisplay();
        }

        private void OnEnable()
        {
            HoopScoringTrigger.OnBasketScored += HandleBasketScored;
        }

        private void OnDisable()
        {
            HoopScoringTrigger.OnBasketScored -= HandleBasketScored;
        }

        private void HandleBasketScored(int points)
        {
            currentScore += points;
            currentStreak++;

            if (currentScore > highScore)
            {
                highScore = currentScore;
            }

            if (lastShotPointsText != null)
            {
                lastShotPointsText.text = $"+{points} PTS!";
                lastShotPointsText.gameObject.SetActive(true);
                CancelInvoke(nameof(HideLastShotPoints));
                Invoke(nameof(HideLastShotPoints), 2.5f);
            }

            if (cheerSound != null && audioSource != null)
            {
                audioSource.PlayOneShot(cheerSound);
            }

            UpdateDisplay();
        }

        private void HideLastShotPoints()
        {
            if (lastShotPointsText != null)
            {
                lastShotPointsText.gameObject.SetActive(false);
            }
        }

        public void ResetScore()
        {
            currentScore = 0;
            currentStreak = 0;
            if (buzzerSound != null && audioSource != null)
            {
                audioSource.PlayOneShot(buzzerSound);
            }
            UpdateDisplay();
        }

        private void UpdateDisplay()
        {
            if (scoreText != null) scoreText.text = currentScore.ToString("D3");
            if (streakText != null) streakText.text = $"x{currentStreak}";
            if (highScoreText != null) highScoreText.text = highScore.ToString("D3");
        }
    }
}
