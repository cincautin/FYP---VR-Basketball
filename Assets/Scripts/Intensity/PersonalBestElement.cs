using TMPro;
using UnityEngine;
using UnityEngine.UI;
using FYP.Session;

namespace FYP.Intensity
{
    /// <summary>
    /// Personal best, drawn in the HUD's PersonalBest slot. The reference is the player's own first minute of
    /// the block (SessionStats), so there is no baseline block.
    /// Off: hidden. Low: nothing live, accuracy and best streak on the break screen.
    /// Medium: live accuracy against the first-minute accuracy.
    /// High: Medium + pace bar (makes vs the makes expected at first-minute pace) + new-best-streak alerts.
    /// </summary>
    public class PersonalBestElement : GamificationElement
    {
        public override ElementId Id => ElementId.PersonalBest;

        [Header("Look")]
        [SerializeField] private Color panelColor = new Color(0.08f, 0.09f, 0.14f, 0.75f);
        [SerializeField] private Color aheadColor = new Color(0.25f, 0.85f, 0.45f);
        [SerializeField] private Color behindColor = new Color(1f, 0.7f, 0.2f);
        [SerializeField] private Color alertColor = new Color(1f, 0.85f, 0.2f);

        [Header("High level")]
        [Tooltip("The pace bar is full at this many makes ahead or behind.")]
        [SerializeField] private float paceBarRangeMakes = 5f;

        private SessionManager session;
        private SessionStats stats;
        private bool built;

        private TextMeshProUGUI mainText;
        private TextMeshProUGUI subText;
        private GameObject barRoot;
        private Image barFill;
        private RectTransform barFillRect;

        private void Start()
        {
            session = SessionManager.Instance;
            stats = SessionStats.Instance;
            if (stats != null)
            {
                stats.OnThrowRecorded += HandleThrowRecorded;
                stats.OnReferenceReady += HandleReferenceReady;
                stats.OnNewBestStreak += HandleNewBestStreak;
            }
            else
            {
                Debug.LogWarning("[PersonalBestElement] No SessionStats found: nothing will update.");
            }
            EnsureBuilt();
        }

        private void OnDestroy()
        {
            if (stats == null) return;
            stats.OnThrowRecorded -= HandleThrowRecorded;
            stats.OnReferenceReady -= HandleReferenceReady;
            stats.OnNewBestStreak -= HandleNewBestStreak;
        }

        // -------------------------------------------------------------------- UI

        private void EnsureBuilt()
        {
            if (built) return;
            if (ElementsHud.Instance == null)
            {
                Debug.LogError("[PersonalBestElement] No ElementsHud in the scene.");
                return;
            }

            RectTransform slot = ElementsHud.Instance.GetSlot(HudSlot.PersonalBest);
            ElementsHud.CreatePanel(slot, "Background", panelColor);

            mainText = ElementsHud.CreateText(slot, "Main", "", 40, TextAlignmentOptions.MidlineLeft, Color.white);
            SetAnchors(mainText.rectTransform, 0.02f, 0.5f, 0.98f, 0.98f);

            subText = ElementsHud.CreateText(slot, "Sub", "", 28, TextAlignmentOptions.MidlineLeft, Color.white);
            SetAnchors(subText.rectTransform, 0.02f, 0.04f, 0.5f, 0.5f);

            var root = new GameObject("PaceBar", typeof(RectTransform));
            RectTransform rootRect = root.GetComponent<RectTransform>();
            rootRect.SetParent(slot, false);
            SetAnchors(rootRect, 0.52f, 0.12f, 0.98f, 0.42f);
            barRoot = root;

            ElementsHud.CreatePanel(rootRect, "BarBackground", new Color(1f, 1f, 1f, 0.15f));
            barFill = ElementsHud.CreatePanel(rootRect, "BarFill", aheadColor);
            barFillRect = barFill.rectTransform;
            SetAnchors(barFillRect, 0.5f, 0f, 0.5f, 1f);

            Image centre = ElementsHud.CreatePanel(rootRect, "CentreTick", Color.white);
            RectTransform cr = centre.rectTransform;
            cr.anchorMin = new Vector2(0.5f, 0f);
            cr.anchorMax = new Vector2(0.5f, 1f);
            cr.offsetMin = new Vector2(-2f, 0f);
            cr.offsetMax = new Vector2(2f, 0f);

            built = true;
            Refresh();
        }

        private static void SetAnchors(RectTransform rt, float x0, float y0, float x1, float y1)
        {
            rt.anchorMin = new Vector2(x0, y0);
            rt.anchorMax = new Vector2(x1, y1);
            rt.offsetMin = Vector2.zero;
            rt.offsetMax = Vector2.zero;
        }

        // ----------------------------------------------------------------- Level

        protected override void ApplyLevel(IntensityLevel level, IntensityLevel previous)
        {
            EnsureBuilt();
            if (!built) return;

            ElementsHud.Instance.SetSlotActive(HudSlot.PersonalBest, level >= IntensityLevel.Medium);
            barRoot.SetActive(level == IntensityLevel.High);
            Refresh();
        }

        public override void OnBlockStarted(int blockIndex, string condition)
        {
            EnsureBuilt();
            Refresh();
        }

        public override void OnBlockEnded(int blockIndex, string condition)
        {
            if (Level == IntensityLevel.Off || session == null || stats == null) return;

            session.LogEvent("pb_final",
                "accuracy=" + stats.BlockAccuracy.ToString("F3", System.Globalization.CultureInfo.InvariantCulture) +
                ";best_streak=" + stats.BestStreak +
                ";ref_acc=" + (stats.HasReference
                    ? stats.ReferenceAccuracy.ToString("F3", System.Globalization.CultureInfo.InvariantCulture) : "NA"));

            if (Level == IntensityLevel.Low)
            {
                string line = "Accuracy: " + Pct(stats.BlockAccuracy) + "   Best streak: " + stats.BestStreak;
                if (stats.HasReference) line += "   First minute: " + Pct(stats.ReferenceAccuracy);
                BlockSummary.Add(line);
            }
        }

        // ---------------------------------------------------------------- Events

        private void HandleThrowRecorded(ThrowSample sample) => Refresh();

        private void HandleReferenceReady()
        {
            Refresh();
            if (Level == IntensityLevel.High && HudPopup.Instance != null)
                HudPopup.Instance.Show("PACE SET  " + Pct(stats.ReferenceAccuracy), alertColor, 2.2f, SfxId.Milestone);
        }

        private void HandleNewBestStreak(int streak)
        {
            if (Level != IntensityLevel.High || HudPopup.Instance == null) return;
            HudPopup.Instance.Show("NEW BEST STREAK  x" + streak, alertColor, 2.4f, SfxId.Celebrate);
        }

        // --------------------------------------------------------------- Display

        private void Refresh()
        {
            if (!built || stats == null || Level < IntensityLevel.Medium) return;

            string acc = Pct(stats.BlockAccuracy);

            if (!stats.HasReference)
            {
                mainText.text = "ACCURACY  " + acc;
                subText.text = "Setting your pace...";
                SetBar(0f);
                return;
            }

            mainText.text = "ACCURACY  " + acc + "      FIRST MINUTE  " + Pct(stats.ReferenceAccuracy);

            if (Level == IntensityLevel.Medium)
            {
                int k = Mathf.Min(10, stats.BlockThrows);
                subText.text = "Last " + k + " throws: " + Pct(stats.AccuracyLast(k));
                return;
            }

            // High: pace bar
            float ahead = stats.BlockMakes - stats.ReferenceExpectedMakes;
            subText.text = (ahead >= 0f ? "+" : "") + ahead.ToString("F1") + " makes vs pace";
            subText.color = ahead >= 0f ? aheadColor : behindColor;
            SetBar(ahead);
        }

        private void SetBar(float aheadMakes)
        {
            float frac = Mathf.Clamp01(Mathf.Abs(aheadMakes) / Mathf.Max(0.1f, paceBarRangeMakes));
            if (aheadMakes >= 0f)
            {
                barFillRect.anchorMin = new Vector2(0.5f, 0f);
                barFillRect.anchorMax = new Vector2(0.5f + 0.5f * frac, 1f);
                barFill.color = aheadColor;
            }
            else
            {
                barFillRect.anchorMin = new Vector2(0.5f - 0.5f * frac, 0f);
                barFillRect.anchorMax = new Vector2(0.5f, 1f);
                barFill.color = behindColor;
            }
        }

        private static string Pct(float v) => Mathf.RoundToInt(v * 100f) + "%";
    }
}