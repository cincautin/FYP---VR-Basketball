using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace FYP.Intensity
{
    /// <summary>
    /// The real choice menu: a world-space canvas with one row of option buttons per choice and a DONE button.
    /// Build the canvas with the menu command FYP > Build Choice Menu, then add ray interaction to it.
    /// </summary>
    public class ChoiceMenu : MonoBehaviour, IChoiceMenu
    {
        [Serializable]
        public class Row
        {
            public GameObject root;
            public TMP_Text label;
            public Button[] buttons;
            public TMP_Text[] buttonLabels;
            public Image[] buttonImages;
        }

        [Header("Scene objects (the builder fills these in)")]
        [SerializeField] private GameObject canvasRoot;
        [SerializeField] private TMP_Text titleText;
        [SerializeField] private TMP_Text hintText;
        [SerializeField] private TMP_Text timerText;
        [SerializeField] private Button doneButton;
        [SerializeField] private Row[] rows;

        [Header("Placement")]
        [Tooltip("The player's head (the XR camera). Leave empty to use Camera.main.")]
        [SerializeField] private Transform head;
        [SerializeField] private float distance = 1.4f;
        [SerializeField] private float heightOffset = -0.05f;

        [Header("Look")]
        [SerializeField] private Color normalColor = new Color(0.22f, 0.25f, 0.33f);
        [SerializeField] private Color selectedColor = new Color(0.15f, 0.72f, 0.68f);
        [SerializeField] private Color timerColor = Color.white;
        [SerializeField] private Color timerWarnColor = new Color(1f, 0.45f, 0.35f);

        private ChoiceMenuRequest request;
        private Action<ChoiceMenuResult> onDone;
        private readonly int[] selected = new int[8];
        private bool open;
        private float remaining;
        private float openedAt;
        private int lastSecond;

        private void Awake()
        {
            if (canvasRoot != null) canvasRoot.SetActive(false);
        }

        // ------------------------------------------------------------ IChoiceMenu

        public void Show(ChoiceMenuRequest req, ChoiceState current, Action<ChoiceMenuResult> done)
        {
            if (canvasRoot == null || rows == null)
            {
                Debug.LogError("[ChoiceMenu] Not set up: run FYP > Build Choice Menu and assign the references.");
                done(new ChoiceMenuResult { timedOut = true });
                return;
            }

            request = req;
            onDone = done;
            open = true;
            openedAt = Time.realtimeSinceStartup;
            remaining = req.timeoutSeconds;
            lastSecond = -1;

            bool start = req.moment == "block_start";
            if (titleText != null) titleText.text = start ? "CHOOSE YOUR SETTINGS" : "QUICK CHANGE";
            if (hintText != null)
                hintText.text = start
                    ? "Pick what you like, then press DONE. The round starts after that."
                    : "The game is paused. Change what you like, then press DONE.";

            int used = Mathf.Min(req.kinds.Length, rows.Length);
            for (int i = 0; i < rows.Length; i++)
            {
                Row row = rows[i];
                bool active = i < used;
                row.root.SetActive(active);
                if (!active) continue;

                ChoiceKind kind = req.kinds[i];
                selected[i] = current.Get(kind);
                row.label.text = ChoiceOptions.Title(kind);

                int count = ChoiceOptions.Count(kind);
                for (int j = 0; j < row.buttons.Length; j++)
                {
                    bool has = j < count && (kind != ChoiceKind.Environment || EnvironmentApplier.IsAvailable(j));
                    row.buttons[j].gameObject.SetActive(has);
                    row.buttons[j].onClick.RemoveAllListeners();
                    if (!has) continue;

                    row.buttonLabels[j].text = ChoiceOptions.Name(kind, j);
                    int rowIndex = i, option = j;
                    row.buttons[j].onClick.AddListener(() => Select(rowIndex, option));
                }
                RefreshRow(i);
            }

            doneButton.onClick.RemoveAllListeners();
            doneButton.onClick.AddListener(() => Finish(false));
            doneButton.interactable = true;

            Place();
            canvasRoot.SetActive(true);
        }

        public void Hide()
        {
            open = false;
            onDone = null;
            if (canvasRoot != null) canvasRoot.SetActive(false);
        }

        // ------------------------------------------------------------------ Logic

        private void Select(int rowIndex, int option)
        {
            if (!open) return;
            selected[rowIndex] = option;
            RefreshRow(rowIndex);
            if (SfxPlayer.Instance != null) SfxPlayer.Instance.Play(SfxId.Tick);
        }

        private void RefreshRow(int rowIndex)
        {
            Row row = rows[rowIndex];
            for (int j = 0; j < row.buttonImages.Length; j++)
                row.buttonImages[j].color = (j == selected[rowIndex]) ? selectedColor : normalColor;
        }

        private void Update()
        {
            if (!open) return;

            remaining -= Time.unscaledDeltaTime;
            int sec = Mathf.CeilToInt(Mathf.Max(0f, remaining));
            if (sec != lastSecond)
            {
                lastSecond = sec;
                if (timerText != null)
                {
                    timerText.text = sec + " s";
                    timerText.color = sec <= 5 ? timerWarnColor : timerColor;
                }
            }

            if (remaining <= 0f) Finish(true);
        }

        private void Finish(bool timedOut)
        {
            if (!open) return;
            open = false;

            var result = new ChoiceMenuResult
            {
                timedOut = timedOut,
                decisionSeconds = Time.realtimeSinceStartup - openedAt
            };
            int used = Mathf.Min(request.kinds.Length, rows.Length);
            for (int i = 0; i < used; i++) result.picks[request.kinds[i]] = selected[i];

            canvasRoot.SetActive(false);
            Action<ChoiceMenuResult> callback = onDone;
            onDone = null;
            if (callback != null) callback(result);
        }

        private void Place()
        {
            if (head == null && Camera.main != null) head = Camera.main.transform;
            if (head == null) return;

            Vector3 forward = Vector3.ProjectOnPlane(head.forward, Vector3.up);
            if (forward.sqrMagnitude < 0.001f) forward = head.forward;
            forward.Normalize();

            Vector3 position = head.position + forward * distance;
            position.y = head.position.y + heightOffset;

            canvasRoot.transform.position = position;
            canvasRoot.transform.rotation = Quaternion.LookRotation(forward, Vector3.up);
        }
    }
}