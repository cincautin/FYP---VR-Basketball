using System.Collections.Generic;
using UnityEngine;

namespace VRBasketball
{
    public class BallSpawner : MonoBehaviour
    {
        [Header("Ball Setup")]
        [SerializeField] private GameObject ballPrefab;
        [SerializeField] private Transform[] spawnSlots;

        private readonly List<GameObject> spawnedBalls = new List<GameObject>();

        private void Start()
        {
            SpawnAllBalls();
        }

        public void SpawnAllBalls()
        {
            if (ballPrefab == null || spawnSlots == null || spawnSlots.Length == 0) return;

            // Clear previous if any
            for (int i = spawnedBalls.Count - 1; i >= 0; i--)
            {
                if (spawnedBalls[i] != null)
                {
                    Destroy(spawnedBalls[i]);
                }
            }
            spawnedBalls.Clear();

            foreach (var slot in spawnSlots)
            {
                if (slot == null) continue;
                GameObject ball = Instantiate(ballPrefab, slot.position, slot.rotation);
                Basketball b = ball.GetComponent<Basketball>();
                if (b != null)
                {
                    b.SetSpawnPoint(slot.position, slot.rotation);
                }
                spawnedBalls.Add(ball);
            }
        }

        public void ReturnAllBallsToRack()
        {
            foreach (var ball in spawnedBalls)
            {
                if (ball != null)
                {
                    Basketball b = ball.GetComponent<Basketball>();
                    if (b != null)
                    {
                        b.Respawn();
                    }
                    else
                    {
                        ball.transform.position = spawnSlots[0].position;
                    }
                }
            }
        }
    }
}
