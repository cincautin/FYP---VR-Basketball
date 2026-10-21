using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace FYP.Session
{
    /// <summary>
    /// World-space panel used by SessionManager. Put this on the Canvas root.
    /// Hiding uses a CanvasGroup (not SetActive) so the script stays alive.
    /// </summary>
    [RequireComponent(typeof(CanvasGroup))]
    public class InstructionPanel : MonoBehaviour, IInstructionPanel
    {
        [Header("Text")]
        [SerializeField] private TMP_Text titleText;
        [SerializeField] private TMP_Text bodyText;

        [Header("Message button")]
        [SerializeField] private Button primaryButton;
        [SerializeField] private TMP_Text primaryButtonLabel;

        [Header("Keypad")]
        [SerializeField] private GameObject keypadRoot;
        [SerializeField] private TMP_Text keypadDisplay;
        [Tooltip("Index = digit, so element 0 is the 0 button ... element 9 is the 9 button.")]
        [SerializeField] private Button[] digitButtons;
        [SerializeField] private Button backspaceButton;
        [SerializeField] private Button confirmButton;
        [SerializeField] private int maxDigits = 6;

        [Header("Placement")]
        [Tooltip("Player's head (the XR camera). Leave empty to use Camera.main.")]
        [SerializeField] private Transform head;
        [SerializeField] private float distance = 1.5f;
        [SerializeField] private float heightOffset = 0f;

        private CanvasGroup canvasGroup;
        private string entry = "";
        private Action<string> confirmCallback;

        private void Awake()
        {
            canvasGroup = GetComponent<CanvasGroup>();

            if (digitButtons != null)
            {
                for (int i = 0; i < digitButtons.Length; i++)
                {
                    int digit = i; // capture a copy for the lambda
                    if (digitButtons[i] != null)
                        digitButtons[i].onClick.AddListener(() => AppendDigit(digit));
                }
            }
            if (backspaceButton != null) backspaceButton.onClick.AddListener(Backspace);
            if (confirmButton != null) confirmButton.onClick.AddListener(Confirm);

            SetVisible(false);
        }

        // ---------------------------------------------------------- IInstructionPanel

        public void ShowMessage(string title, string body, string buttonLabel, Action onButton)
        {
            titleText.text = title;
            bodyText.text = body;
            keypadRoot.SetActive(false);

            primaryButton.onClick.RemoveAllListeners();
            bool hasButton = !string.IsNullOrEmpty(buttonLabel);
            primaryButton.gameObject.SetActive(hasButton);
            if (hasButton)
            {
                primaryButtonLabel.text = buttonLabel;
                primaryButton.interactable = true;
                primaryButton.onClick.AddListener(() =>
                {
                    primaryButton.interactable = false; // block double clicks
                    onButton?.Invoke();
                });
            }

            PlaceInFrontOfPlayer();
            SetVisible(true);
        }

        public void ShowKeypad(string title, string prompt, Action<string> onConfirm)
        {
            titleText.text = title;
            bodyText.text = prompt;
            primaryButton.gameObject.SetActive(false);
            keypadRoot.SetActive(true);

            entry = "";
            confirmCallback = onConfirm;
            UpdateDisplay();

            PlaceInFrontOfPlayer();
            SetVisible(true);
        }

        public void Hide()
        {
            SetVisible(false);
        }

        // ------------------------------------------------------------------- Keypad

        private void AppendDigit(int digit)
        {
            if (entry.Length >= maxDigits) return;
            entry += digit.ToString();
            UpdateDisplay();
        }

        private void Backspace()
        {
            if (entry.Length == 0) return;
            entry = entry.Substring(0, entry.Length - 1);
            UpdateDisplay();
        }

        private void Confirm()
        {
            if (entry.Length == 0) return;
            confirmCallback?.Invoke(entry);
        }

        private void UpdateDisplay()
        {
            if (keypadDisplay != null) keypadDisplay.text = entry.Length == 0 ? "_" : entry;
        }

        // ---------------------------------------------------------------- Helpers

        private void SetVisible(bool visible)
        {
            canvasGroup.alpha = visible ? 1f : 0f;
            canvasGroup.interactable = visible;
            canvasGroup.blocksRaycasts = visible;
        }

        private void PlaceInFrontOfPlayer()
        {
            if (head == null && Camera.main != null) head = Camera.main.transform;
            if (head == null) return;

            Vector3 forward = Vector3.ProjectOnPlane(head.forward, Vector3.up);
            if (forward.sqrMagnitude < 0.001f) forward = head.forward;
            forward.Normalize();

            Vector3 position = head.position + forward * distance;
            position.y = head.position.y + heightOffset;

            transform.position = position;
            transform.rotation = Quaternion.LookRotation(forward, Vector3.up); // canvas forward points away from the player
        }
    }
}