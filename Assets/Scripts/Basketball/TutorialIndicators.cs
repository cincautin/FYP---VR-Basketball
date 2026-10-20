using UnityEngine;
using TMPro;

namespace VRBasketball
{
    public class TutorialIndicators : MonoBehaviour
    {
        [Header("Floating Popups")]
        [SerializeField] private GameObject rackIndicator;
        [SerializeField] private GameObject grabIndicator;
        [SerializeField] private GameObject hoopIndicator;

        [Header("Settings")]
        [SerializeField] private float bobSpeed = 2f;
        [SerializeField] private float bobHeight = 0.08f;

        private Vector3 rackInitialPos;
        private Vector3 grabInitialPos;
        private Vector3 hoopInitialPos;
        private int shotsTaken = 0;

        private void Start()
        {
            if (rackIndicator != null) rackInitialPos = rackIndicator.transform.position;
            if (grabIndicator != null) grabInitialPos = grabIndicator.transform.position;
            if (hoopIndicator != null) hoopInitialPos = hoopIndicator.transform.position;
        }

        private void OnEnable()
        {
            HoopScoringTrigger.OnBasketScored += HandleBasketScored;
        }

        private void OnDisable()
        {
            HoopScoringTrigger.OnBasketScored -= HandleBasketScored;
        }

        private void Update()
        {
            float bob = Mathf.Sin(Time.time * bobSpeed) * bobHeight;

            if (rackIndicator != null && rackIndicator.activeSelf)
            {
                rackIndicator.transform.position = rackInitialPos + Vector3.up * bob;
            }
            if (grabIndicator != null && grabIndicator.activeSelf)
            {
                grabIndicator.transform.position = grabInitialPos + Vector3.up * (bob * 0.8f);
            }
            if (hoopIndicator != null && hoopIndicator.activeSelf)
            {
                hoopIndicator.transform.position = hoopInitialPos + Vector3.up * (bob * 1.2f);
            }

            // Billboard effect: Make indicators always face the player/camera
            Camera cam = Camera.main;
            if (cam != null)
            {
                FaceCamera(rackIndicator, cam.transform);
                FaceCamera(grabIndicator, cam.transform);
                FaceCamera(hoopIndicator, cam.transform);
            }
        }

        private void FaceCamera(GameObject indicator, Transform camTransform)
        {
            if (indicator == null || !indicator.activeSelf) return;
            Vector3 dir = indicator.transform.position - camTransform.position;
            dir.y = 0f; // Keep upright
            if (dir.sqrMagnitude > 0.001f)
            {
                indicator.transform.rotation = Quaternion.LookRotation(dir);
            }
        }

        private void HandleBasketScored(int points)
        {
            shotsTaken++;
            // Dim or hide beginner prompts once the player successfully scores 2 baskets
            if (shotsTaken >= 2)
            {
                if (rackIndicator != null) rackIndicator.SetActive(false);
                if (grabIndicator != null) grabIndicator.SetActive(false);
            }
        }
    }
}
