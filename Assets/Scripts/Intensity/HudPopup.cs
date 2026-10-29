using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using FYP.Session;

namespace FYP.Intensity
{
    /// <summary>
    /// Short alerts in the HUD's Popup slot, shown one at a time. Used by personal best and badges.
    /// An alert has a main line and an optional smaller line underneath.
    /// </summary>
    public class HudPopup : MonoBehaviour
    {
        public static HudPopup Instance { get; private set; }

        [SerializeField] private int maxQueued = 3;

        private struct Message
        {
            public string text;
            public string sub;
            public Color color;
            public float seconds;
            public SfxId sfx;
        }

        private readonly Queue<Message> queue = new Queue<Message>();
        private bool built;
        private bool showing;
        private float hideAt;
        private Image accent;
        private TextMeshProUGUI label;
        private TextMeshProUGUI subLabel;
        private SessionManager session;

        private void Awake()
        {
            if (Instance != null && Instance != this) { Destroy(gameObject); return; }
            Instance = this;
        }

        private void Start()
        {
            Build();
            session = SessionManager.Instance;
            if (session != null)
            {
                session.OnBlockStarted += HandleBlockEdge;
                session.OnBlockEnded += HandleBlockEnded;
            }
        }

        private void OnDestroy()
        {
            if (session == null) return;
            session.OnBlockStarted -= HandleBlockEdge;
            session.OnBlockEnded -= HandleBlockEnded;
        }

        private void HandleBlockEdge(int blockIndex, string condition) => Clear();
        private void HandleBlockEnded(int blockIndex, string condition, string reason) => Clear();

        private void Build()
        {
            if (built) return;
            if (ElementsHud.Instance == null)
            {
                Debug.LogError("[HudPopup] No ElementsHud in the scene.");
                return;
            }

            RectTransform slot = ElementsHud.Instance.GetSlot(HudSlot.Popup);
            ElementsHud.CreatePanel(slot, "Background", new Color(0.05f, 0.06f, 0.1f, 0.9f));
            accent = ElementsHud.CreatePanel(slot, "Accent", Color.white);
            RectTransform ar = accent.rectTransform;
            ar.anchorMin = new Vector2(0f, 0f);
            ar.anchorMax = new Vector2(1f, 0.07f);
            ar.offsetMin = Vector2.zero;
            ar.offsetMax = Vector2.zero;

            label = ElementsHud.CreateText(slot, "Label", "", 44, TextAlignmentOptions.Midline, Color.white);
            label.fontStyle = FontStyles.Bold;
            label.enableAutoSizing = true;
            label.fontSizeMin = 22;
            label.fontSizeMax = 44;

            subLabel = ElementsHud.CreateText(slot, "SubLabel", "", 28, TextAlignmentOptions.Midline, new Color(0.85f, 0.88f, 0.95f));
            subLabel.enableAutoSizing = true;
            subLabel.fontSizeMin = 16;
            subLabel.fontSizeMax = 28;
            subLabel.gameObject.SetActive(false);

            built = true;
        }

        /// <summary>Queues an alert with one line. Extra alerts beyond the queue limit are dropped.</summary>
        public void Show(string text, Color color, float seconds = 2.2f, SfxId sfx = SfxId.Pop)
        {
            Show(text, "", color, seconds, sfx);
        }

        /// <summary>Queues an alert with a main line and a smaller explanation line.</summary>
        public void Show(string text, string sub, Color color, float seconds = 2.2f, SfxId sfx = SfxId.Pop)
        {
            if (!built || queue.Count >= maxQueued) return;
            queue.Enqueue(new Message { text = text, sub = sub, color = color, seconds = seconds, sfx = sfx });
        }

        public void Clear()
        {
            queue.Clear();
            showing = false;
            if (built) ElementsHud.Instance.SetSlotActive(HudSlot.Popup, false);
        }

        private static void SetAnchors(RectTransform rt, float x0, float y0, float x1, float y1)
        {
            rt.anchorMin = new Vector2(x0, y0);
            rt.anchorMax = new Vector2(x1, y1);
            rt.offsetMin = Vector2.zero;
            rt.offsetMax = Vector2.zero;
        }

        private void Update()
        {
            if (!built) return;

            if (showing && Time.time >= hideAt)
            {
                showing = false;
                if (queue.Count == 0) ElementsHud.Instance.SetSlotActive(HudSlot.Popup, false);
            }

            if (!showing && queue.Count > 0)
            {
                Message m = queue.Dequeue();
                bool hasSub = !string.IsNullOrEmpty(m.sub);

                ElementsHud.Instance.SetSlotActive(HudSlot.Popup, true);
                SetAnchors(label.rectTransform, 0.03f, hasSub ? 0.46f : 0.1f, 0.97f, 0.96f);
                label.text = m.text;
                label.color = Color.white;

                subLabel.gameObject.SetActive(hasSub);
                if (hasSub)
                {
                    SetAnchors(subLabel.rectTransform, 0.03f, 0.1f, 0.97f, 0.46f);
                    subLabel.text = m.sub;
                }

                accent.color = m.color;
                UiAnim.Pop(label.transform, 1.2f, 0.3f);
                if (SfxPlayer.Instance != null) SfxPlayer.Instance.Play(m.sfx);
                showing = true;
                hideAt = Time.time + m.seconds;
            }
        }
    }
}