using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace FYP.Intensity
{
    public enum HudSlot { Timer, PersonalBest, Progress, Badges, Popup }

    /// <summary>
    /// A code-built, non-interactive world-space canvas. Slots are created inactive; each element
    /// activates its own slot. Canvas front faces the player when this object's blue (Z) arrow points away from them.
    /// </summary>
    public class ElementsHud : MonoBehaviour
    {
        public static ElementsHud Instance { get; private set; }

        [SerializeField] private bool previewOnStart = false;

        private void Start()
        {
            if (previewOnStart) ShowPreview();
        }

        [SerializeField] private float widthPx = 1200f;
        [SerializeField] private float heightPx = 500f;
        [Tooltip("0.0015 gives a canvas about 1.8 m wide.")]
        [SerializeField] private float metersPerPixel = 0.0015f;

        private RectTransform canvasRect;
        private readonly Dictionary<HudSlot, RectTransform> slots = new Dictionary<HudSlot, RectTransform>();

        private void Awake()
        {
            Debug.Log("[ElementsHud] Awake on '" + name + "'");
            if (Instance != null && Instance != this)
            {
                Debug.LogWarning("[ElementsHud] Duplicate found on '" + name + "', destroying it. The first one is on '" + Instance.name + "'.");
                Destroy(gameObject);
                return;
            }
            Instance = this;
            Build();
            Debug.Log("[ElementsHud] Built " + slots.Count + " slots.");
        }

        private void Build()
        {
            var canvasGo = new GameObject("HudCanvas", typeof(RectTransform), typeof(Canvas));
            canvasGo.transform.SetParent(transform, false);
            canvasGo.GetComponent<Canvas>().renderMode = RenderMode.WorldSpace;
            canvasRect = canvasGo.GetComponent<RectTransform>();
            canvasRect.sizeDelta = new Vector2(widthPx, heightPx);
            canvasRect.localScale = Vector3.one * metersPerPixel;

            //        slot               x     y    width  height   (pixels from the top-left corner)
            MakeSlot(HudSlot.Timer,        0,    0,   380,  150);
            MakeSlot(HudSlot.PersonalBest, 400,  0,   800,  150);
            MakeSlot(HudSlot.Progress,     0,  170,  1200,  130);
            MakeSlot(HudSlot.Badges,       0,  320,  1200,  180);
            MakeSlot(HudSlot.Popup,        300,  60,   600,  120);
        }

        private void MakeSlot(HudSlot id, float x, float y, float w, float h)
        {
            var go = new GameObject(id + "Slot", typeof(RectTransform));
            var rt = go.GetComponent<RectTransform>();
            rt.SetParent(canvasRect, false);
            rt.anchorMin = rt.anchorMax = new Vector2(0f, 1f);
            rt.pivot = new Vector2(0f, 1f);
            rt.anchoredPosition = new Vector2(x, -y);
            rt.sizeDelta = new Vector2(w, h);
            go.SetActive(false);
            slots[id] = rt;
        }

        public RectTransform GetSlot(HudSlot id) => slots[id];
        public void SetSlotActive(HudSlot id, bool active) => slots[id].gameObject.SetActive(active);

        // ---------------------------------------------------------- UI helpers

        public static TextMeshProUGUI CreateText(RectTransform parent, string objectName, string text,
            float fontSize, TextAlignmentOptions align, Color color)
        {
            var go = new GameObject(objectName, typeof(RectTransform));
            var rt = go.GetComponent<RectTransform>();
            rt.SetParent(parent, false);
            rt.anchorMin = Vector2.zero;
            rt.anchorMax = Vector2.one;
            rt.offsetMin = Vector2.zero;
            rt.offsetMax = Vector2.zero;

            var tmp = go.AddComponent<TextMeshProUGUI>();
            tmp.text = text;
            tmp.fontSize = fontSize;
            tmp.alignment = align;
            tmp.color = color;
            tmp.raycastTarget = false;
            tmp.overflowMode = TextOverflowModes.Overflow;
            return tmp;
        }

        public static Image CreatePanel(RectTransform parent, string objectName, Color color)
        {
            var go = new GameObject(objectName, typeof(RectTransform), typeof(Image));
            var rt = go.GetComponent<RectTransform>();
            rt.SetParent(parent, false);
            rt.anchorMin = Vector2.zero;
            rt.anchorMax = Vector2.one;
            rt.offsetMin = Vector2.zero;
            rt.offsetMax = Vector2.zero;

            var img = go.GetComponent<Image>();
            img.color = color;
            img.raycastTarget = false;
            return img;
        }

        // ---------------------------------------------------------- Layout preview (Play mode)

        private readonly List<GameObject> previews = new List<GameObject>();

        [ContextMenu("Show Layout Preview")]
        private void ShowPreview()
        {
            if (slots.Count == 0) { Debug.Log("[ElementsHud] Enter Play mode first."); return; }
            HidePreview();
            foreach (var kv in slots)
            {
                kv.Value.gameObject.SetActive(true);
                Image panel = CreatePanel(kv.Value, "Preview", new Color(0.1f, 0.1f, 0.15f, 0.7f));
                TextMeshProUGUI label = CreateText(kv.Value, "PreviewLabel", kv.Key.ToString(), 48, TextAlignmentOptions.Center, Color.white);
                previews.Add(panel.gameObject);
                previews.Add(label.gameObject);
            }
        }

        [ContextMenu("Hide Layout Preview")]
        private void HidePreview()
        {
            foreach (GameObject g in previews) if (g != null) Destroy(g);
            previews.Clear();
            foreach (var kv in slots) kv.Value.gameObject.SetActive(false);
        }
    }
}