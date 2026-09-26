using System;
using UnityEngine;

namespace VRBasketball
{
    public class HoopScoringTrigger : MonoBehaviour
    {
        [Header("References")]
        [SerializeField] private AudioSource audioSource;
        [SerializeField] private AudioClip swishSound;
        [SerializeField] private ParticleSystem scoreParticles;

        [Header("Scoring Settings")]
        [SerializeField] private int pointsPerBasket = 2;
        [SerializeField] private float scoreCooldown = 1.0f;

        public static event Action<int> OnBasketScored;

        private bool topTriggerEntered = false;
        private float topTriggerTime = 0f;
        private float lastScoreTime = -10f;
        private const float MaxPassThroughDuration = 1.5f;

        private void Awake()
        {
            if (audioSource == null)
            {
                audioSource = GetComponent<AudioSource>();
                if (audioSource == null)
                {
                    audioSource = gameObject.AddComponent<AudioSource>();
                    audioSource.playOnAwake = false;
                    audioSource.spatialBlend = 1f; // 3D sound
                }
            }
        }

        public void OnTopTriggerEnter(Collider other)
        {
            if (other.CompareTag("Basketball") || other.GetComponent<Basketball>() != null)
            {
                topTriggerEntered = true;
                topTriggerTime = Time.time;
            }
        }

        public void OnBottomTriggerEnter(Collider other)
        {
            if (other.CompareTag("Basketball") || other.GetComponent<Basketball>() != null)
            {
                if (topTriggerEntered && (Time.time - topTriggerTime) <= MaxPassThroughDuration && (Time.time - lastScoreTime) > scoreCooldown)
                {
                    ScoreBasket(other.gameObject);
                }
                topTriggerEntered = false;
            }
        }

        private void ScoreBasket(GameObject ball)
        {
            lastScoreTime = Time.time;

            if (audioSource != null && swishSound != null)
            {
                audioSource.PlayOneShot(swishSound);
            }

            if (scoreParticles != null)
            {
                scoreParticles.Play();
            }

            Basketball b = ball.GetComponent<Basketball>();
            int points = pointsPerBasket;
            if (b != null && b.IsThreePointer)
            {
                points = 3;
            }

            OnBasketScored?.Invoke(points);
        }
    }
}
