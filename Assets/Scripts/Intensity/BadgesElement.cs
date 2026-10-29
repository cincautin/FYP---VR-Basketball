using System.Collections.Generic;
using System.Globalization;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using FYP.Session;

namespace FYP.Intensity
{
    /// <summary>
    /// Badges, drawn as a shelf in the HUD's Badges slot, with a popup when one is earned.
    /// Off: hidden. Low: only Block Complete, listed on the break screen.
    /// Medium: shelf with Hot Streak and On Target; popup "Earned 'X' Badge!" for 2 s.
    /// High: shelf adds Steady Hands and Stepping Up; the popup lasts 3.5 s with a short explanation underneath.
    /// Block Complete is awarded at the block end and shown on the break screen at every level above Off.
    /// One level per badge for now (tiers are on hold). Each badge is awarded at most once per block.
    /// </summary>
    public class BadgesElement : GamificationElement
    {
        public override ElementId Id => ElementId.Badges;

        private const int HotStreak = 0, OnTarget = 1, SteadyHands = 2, SteppingUp = 3, BlockComplete = 4;
        private static readonly string[] Names = { "Hot Streak", "On Target", "Steady Hands", "Stepping Up", "Block Complete" };
        private static readonly string[] Codes = { "HS", "OT", "SH", "SU", "BC" };

        [Header("Thresholds (first guesses: tune in the pilot)")]
        [SerializeField] private int hotStreakLength = 3;
        [SerializeField] private int onTargetWindow = 8;
        [SerializeField] private int onTargetMakes = 5;
        [SerializeField] private int steadyThrows = 5;
        [Tooltip("Max range (max minus min) of release speed over those throws, in m/s.")]
        [SerializeField] private float steadySpeedRange = 0.6f;
        [Tooltip("Max range of release elevation over those throws, in degrees.")]
        [SerializeField] private float steadyElevationRange = 6f;
        [Tooltip("Recent accuracy above the player's own first-minute accuracy (0.20 = 20 points).")]
        [SerializeField] private float steppingUpDelta = 0.20f;

        [Header("Popups")]
        [SerializeField] private float mediumPopupSeconds = 2f;
        [SerializeField] private float highPopupSeconds = 3.5f;

        [Header("Look")]
        [SerializeField] private Color panelColor = new Color(0.08f, 0.09f, 0.14f, 0.75f);
        [SerializeField] private Color earnedColor = new Color(1f, 0.78f, 0.2f);
        [SerializeField] private Color lockedColor = new Color(0.24f, 0.26f, 0.33f);

        private class Slot
        {
            public RectTransform root;
            public Image circle;
            public TextMeshProUGUI code;
            public TextMeshProUGUI label;
        }

        private readonly Slot[] slots = new Slot[4];
        private readonly bool[] earned = new bool[5];
        private readonly List<int> earnedOrder = new List<int>();

        private SessionManager session;
        private SessionStats stats;
        private bool built;
        private Sprite circleSprite;

        private void Start()
        {
            session = SessionManager.Instance;
            stats = SessionStats.Instance;
            if (stats != null) stats.OnThrowRecorded += HandleThrowRecorded;
            else Debug.LogWarning("[BadgesElement] No SessionStats found: badges cannot be awarded.");
            EnsureBuilt();
        }

        private void OnDestroy()
        {
            if (stats != null) stats.OnThrowRecorded -= HandleThrowRecorded;
        }

        // -------------------------------------------------------------------- UI

        private void EnsureBuilt()
        {
            if (built) return;
            if (ElementsHud.Instance == null)
            {
                Debug.LogError("[BadgesElement] No ElementsHud in the scene.");
                return;
            }

            RectTransform parent = ElementsHud.Instance.GetSlot(HudSlot.Badges);
            ElementsHud.CreatePanel(parent, "Background", panelColor);
            circleSprite = MakeCircleSprite();

            for (int i = 0; i < slots.Length; i++)
            {
                var s = new Slot();

                var root = new GameObject("Slot_" + Names[i], typeof(RectTransform));
                s.root = root.GetComponent<RectTransform>();
                s.root.SetParent(parent, false);

                var circleGo = new GameObject("Circle", typeof(RectTransform), typeof(Image));
                RectTransform cr = circleGo.GetComponent<RectTransform>();
                cr.SetParent(s.root, false);
                cr.anchorMin = cr.anchorMax = new Vector2(0.5f, 0.62f);
                cr.sizeDelta = new Vector2(92f, 92f);
                s.circle = circleGo.GetComponent<Image>();
                s.circle.sprite = circleSprite;
                s.circle.raycastTarget = false;

                s.code = ElementsHud.CreateText(cr, "Code", Codes[i], 36, TextAlignmentOptions.Midline, Color.white);
                s.code.fontStyle = FontStyles.Bold;

                s.label = ElementsHud.CreateText(s.root, "Name", Names[i], 26, TextAlignmentOptions.Midline, Color.white);
                SetAnchors(s.label.rectTransform, 0f, 0f, 1f, 0.26f);

                root.SetActive(false);
                slots[i] = s;
            }

            built = true;
            Layout(2);
            Refresh();
        }

        private static void SetAnchors(RectTransform rt, float x0, float y0, float x1, float y1)
        {
            rt.anchorMin = new Vector2(x0, y0);
            rt.anchorMax = new Vector2(x1, y1);
            rt.offsetMin = Vector2.zero;
            rt.offsetMax = Vector2.zero;
        }

        /// <summary>Spreads the first n slots evenly across the shelf; hides the rest.</summary>
        private void Layout(int n)
        {
            for (int i = 0; i < slots.Length; i++)
            {
                bool visible = i < n;
                slots[i].root.gameObject.SetActive(visible);
                if (visible) SetAnchors(slots[i].root, i / (float)n, 0f, (i + 1) / (float)n, 1f);
            }
        }

        private void Refresh()
        {
            if (!built) return;
            for (int i = 0; i < slots.Length; i++)
            {
                bool got = earned[i];
                slots[i].circle.color = got ? earnedColor : lockedColor;
                slots[i].code.color = got ? new Color(0.1f, 0.12f, 0.18f) : new Color(0.55f, 0.58f, 0.66f);
                slots[i].label.color = got ? Color.white : new Color(0.5f, 0.53f, 0.6f);
            }
        }

        private static Sprite MakeCircleSprite()
        {
            const int size = 128;
            var tex = new Texture2D(size, size, TextureFormat.RGBA32, false)
            {
                filterMode = FilterMode.Bilinear,
                wrapMode = TextureWrapMode.Clamp
            };
            var pixels = new Color32[size * size];
            float centre = (size - 1) * 0.5f;
            float radius = size * 0.5f - 1f;
            for (int y = 0; y < size; y++)
            {
                for (int x = 0; x < size; x++)
                {
                    float dist = Mathf.Sqrt((x - centre) * (x - centre) + (y - centre) * (y - centre));
                    float a = Mathf.Clamp01(radius - dist + 0.5f);
                    pixels[y * size + x] = new Color32(255, 255, 255, (byte)(a * 255f));
                }
            }
            tex.SetPixels32(pixels);
            tex.Apply();
            return Sprite.Create(tex, new Rect(0, 0, size, size), new Vector2(0.5f, 0.5f), 100f);
        }

        // ----------------------------------------------------------------- Level

        protected override void ApplyLevel(IntensityLevel level, IntensityLevel previous)
        {
            EnsureBuilt();
            if (!built) return;

            bool show = level >= IntensityLevel.Medium;
            ElementsHud.Instance.SetSlotActive(HudSlot.Badges, show);
            if (show) Layout(level == IntensityLevel.High ? 4 : 2);
            Refresh();
        }

        public override void OnBlockStarted(int blockIndex, string condition)
        {
            for (int i = 0; i < earned.Length; i++) earned[i] = false;
            earnedOrder.Clear();
            EnsureBuilt();
            Refresh();
        }

        public override void OnBlockEnded(int blockIndex, string condition)
        {
            if (Level == IntensityLevel.Off || session == null) return;

            if (!earned[BlockComplete])
            {
                earned[BlockComplete] = true;
                earnedOrder.Add(BlockComplete);
                session.LogEvent("badge_award", "badge=" + Names[BlockComplete] + ";level=" + Level);
            }

            var names = new List<string>();
            foreach (int i in earnedOrder) names.Add(Names[i]);
            string list = string.Join(", ", names);

            session.LogEvent("badge_final", "count=" + earnedOrder.Count + ";badges=" + list.Replace(',', '|'));
            BlockSummary.Add((earnedOrder.Count == 1 ? "Badge: " : "Badges: ") + list);
        }

        // ---------------------------------------------------------------- Awarding

        private void HandleThrowRecorded(ThrowSample sample)
        {
            if (Level < IntensityLevel.Medium || session == null || !session.IsBlockRunning) return;

            // Hot Streak: consecutive makes
            if (!earned[HotStreak] && stats.CurrentStreak >= hotStreakLength)
                Award(HotStreak, "Made " + stats.CurrentStreak + " shots in a row");

            // On Target: enough makes in the last few throws
            if (!earned[OnTarget] && stats.BlockThrows >= onTargetWindow)
            {
                int makes = Mathf.RoundToInt(stats.AccuracyLast(onTargetWindow) * onTargetWindow);
                if (makes >= onTargetMakes)
                    Award(OnTarget, "Made " + makes + " of your last " + onTargetWindow + " shots");
            }

            if (Level != IntensityLevel.High) return;

            // Steady Hands: repeatable release (makes not required)
            if (!earned[SteadyHands] &&
                stats.RecentReleaseRange(steadyThrows, out float speedRange, out float elevationRange) &&
                speedRange <= steadySpeedRange && elevationRange <= steadyElevationRange)
            {
                Award(SteadyHands, steadyThrows + " throws with a very consistent release");
            }

            // Stepping Up: recent accuracy well above the player's own first minute
            if (!earned[SteppingUp] && stats.HasComparison && stats.RecentAccuracyDelta >= steppingUpDelta)
            {
                int points = Mathf.RoundToInt(stats.RecentAccuracyDelta * 100f);
                Award(SteppingUp, "Accuracy up " + points + " points on your first minute");
            }
        }

        private void Award(int badge, string explanation)
        {
            earned[badge] = true;
            earnedOrder.Add(badge);

            session.LogEvent("badge_award",
                "badge=" + Names[badge] + ";level=" + Level + ";throws=" + stats.BlockThrows +
                ";t=" + session.BlockElapsed.ToString("F0", CultureInfo.InvariantCulture));

            Refresh();
            if (badge < slots.Length && built) UiAnim.Pop(slots[badge].circle.transform, 1.35f, 0.4f);

            if (HudPopup.Instance == null) return;
            string main = "Earned '" + Names[badge] + "' Badge!";
            if (Level == IntensityLevel.High)
                HudPopup.Instance.Show(main, explanation, earnedColor, highPopupSeconds, SfxId.Badge);
            else
                HudPopup.Instance.Show(main, earnedColor, mediumPopupSeconds, SfxId.Badge);
        }
    }
}