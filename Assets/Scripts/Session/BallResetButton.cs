using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR;
using VRBasketball;
using FYP.Intensity;
using FYP.Logging;

namespace FYP.Session
{
    /// <summary>
    /// A button (and optional right-controller B shortcut) that sends every loose ball back to the rack.
    /// Balls in the player's hand are left alone. It is not a gamification element: it is available at all
    /// times and in every condition. Each use is logged as a ball_reset event.
    /// </summary>
    public class BallResetButton : MonoBehaviour
    {
        /// <summary>Raised after a reset, so other scripts (EngagementMonitor) can count it as activity.</summary>
        public static event Action OnBallsReset;

        [Header("World-space button")]
        [SerializeField] private Button button;
        [Tooltip("Optional: the button's text, used for short feedback messages.")]
        [SerializeField] private TMP_Text label;
        [SerializeField] private string idleLabel = "RETURN BALLS";

        [Header("Behaviour")]
        [SerializeField] private float cooldownSeconds = 1.5f;
        [Tooltip("Ignore presses while a throw's outcome has not been logged yet (keeps the throw CSV clean).")]
        [SerializeField] private bool blockWhilePendingThrow = true;
        [Tooltip("Right controller B button also returns the balls.")]
        [SerializeField] private bool controllerShortcut = true;
        [SerializeField] private float feedbackSeconds = 1.2f;

        private readonly HashSet<Basketball> held = new HashSet<Basketball>();
        private float nextAllowed;
        private float restoreLabelAt = -1f;
        private bool shortcutWasDown;
        private float pollTimer;

        private void OnEnable()
        {
            Basketball.OnBallGrabbed += HandleGrabbed;
            Basketball.OnBallReleased += HandleReleased;
            if (button != null) button.onClick.AddListener(OnButtonClicked);
        }

        private void OnDisable()
        {
            Basketball.OnBallGrabbed -= HandleGrabbed;
            Basketball.OnBallReleased -= HandleReleased;
            if (button != null) button.onClick.RemoveListener(OnButtonClicked);
            held.Clear();
        }

        private void Start()
        {
            if (label != null) label.text = idleLabel;
        }

        private void HandleGrabbed(Basketball ball, string hand) { held.Add(ball); }
        private void HandleReleased(Basketball ball) { held.Remove(ball); }

        private void OnButtonClicked() => TryReset("button");

        private void Update()
        {
            if (restoreLabelAt > 0f && Time.unscaledTime >= restoreLabelAt)
            {
                restoreLabelAt = -1f;
                if (label != null) label.text = idleLabel;
            }

            if (!controllerShortcut) return;
            pollTimer += Time.unscaledDeltaTime;
            if (pollTimer < 0.05f) return;
            pollTimer = 0f;

            var device = InputDevices.GetDeviceAtXRNode(XRNode.RightHand);
            bool down = device.isValid &&
                        device.TryGetFeatureValue(CommonUsages.secondaryButton, out bool pressed) && pressed;
            if (down && !shortcutWasDown) TryReset("controller_b");
            shortcutWasDown = down;
        }

        public void TryReset(string source)
        {
            if (Time.unscaledTime < nextAllowed) return;

            if (blockWhilePendingThrow && ThrowLogger.Instance != null && ThrowLogger.Instance.HasPendingThrow)
            {
                ShowFeedback("WAIT...");
                return;
            }

            nextAllowed = Time.unscaledTime + cooldownSeconds;

            int moved = 0, skipped = 0;
            Basketball[] balls = FindObjectsByType<Basketball>(FindObjectsInactive.Exclude);
            foreach (Basketball b in balls)
            {
                if (held.Contains(b)) { skipped++; continue; }
                b.Respawn();
                moved++;
            }

            if (SfxPlayer.Instance != null) SfxPlayer.Instance.Play(SfxId.Pop);
            ShowFeedback("BALLS RETURNED");

            if (SessionManager.Instance != null)
                SessionManager.Instance.LogEvent("ball_reset", "source=" + source + ";moved=" + moved + ";skipped_held=" + skipped);

            OnBallsReset?.Invoke();
        }

        private void ShowFeedback(string text)
        {
            if (label == null) return;
            label.text = text;
            restoreLabelAt = Time.unscaledTime + feedbackSeconds;
        }
    }
}