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
        public static event Action<GameObject> OnBallMade;

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

        private void Update()
        {
            if (topTriggerEntered && (Time.time - topTriggerTime) > MaxPassThroughDuration)
            {
                topTriggerEntered = false;
            }
        }

        public void OnTopTriggerEnter(Collider other)
        {
            HandleTopTrigger(other);
        }

        public void OnTopTriggerStay(Collider other)
        {
            HandleTopTrigger(other);
        }

        private void HandleTopTrigger(Collider other)
        {
            if (other.CompareTag("Basketball") || other.GetComponent<Basketball>() != null)
            {
                Rigidbody rb = other.attachedRigidbody != null ? other.attachedRigidbody : other.GetComponent<Rigidbody>();
                if (rb != null && rb.linearVelocity.y < 0f)
                {
                    topTriggerEntered = true;
                    topTriggerTime = Time.time;
                }
            }
        }

        public void OnTopTriggerExit(Collider other)
        {
            if (other.CompareTag("Basketball") || other.GetComponent<Basketball>() != null)
            {
                Rigidbody rb = other.attachedRigidbody != null ? other.attachedRigidbody : other.GetComponent<Rigidbody>();
                if (rb != null && rb.linearVelocity.y > 0f)
                {
                    topTriggerEntered = false;
                }
            }
        }

        public void OnBottomTriggerEnter(Collider other)
        {
            if (other.CompareTag("Basketball") || other.GetComponent<Basketball>() != null)
            {
                Rigidbody rb = other.attachedRigidbody != null ? other.attachedRigidbody : other.GetComponent<Rigidbody>();
                float elapsed = Time.time - topTriggerTime;
                bool withinWindow = elapsed <= MaxPassThroughDuration;

                if (topTriggerEntered && withinWindow && rb != null && rb.linearVelocity.y < 0f && (Time.time - lastScoreTime) > scoreCooldown)
                {
                    ScoreBasket(other.gameObject);
                    topTriggerEntered = false;
                }
                else if (!withinWindow)
                {
                    topTriggerEntered = false;
                }
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
            OnBallMade?.Invoke(ball);
        }
    }
}
