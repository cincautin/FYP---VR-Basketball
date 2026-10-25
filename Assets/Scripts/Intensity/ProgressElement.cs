using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using FYP.Session;

namespace FYP.Intensity
{
    /// <summary>
    /// Progress bar counting resolved throws towards the block target (SessionManager.ThrowsTarget).
    /// Off: hidden. Low: plain bar. Medium: milestone markers at 25/50/75%, throw count, bar highlight at each milestone.
    /// High: Medium + named stages, "next stage" prompt, sound and pop at each milestone, celebration at 100%.
    /// </summary>
    public class ProgressElement : GamificationElement
    {
        public override ElementId Id => ElementId.Progress;

        [Header("Look")]
        [SerializeField] private Color barColor = new Color(0.2f, 0.6f, 1f);
        [SerializeField] private Color highlightColor = new Color(1f, 0.85f, 0.2f);
        [SerializeField] private Color panelColor = new Color(0.08f, 0.09f, 0.14f, 0.75f);
        [SerializeField] private float highlightSeconds = 0.6f;

        [Header("High level")]
        [Tooltip("Four names: the stage you are in before 25%, 50%, 75% and the target.")]
        [SerializeField] private string[] stageNames = { "Warm-up", "Rhythm", "Push", "Finish" };

        private SessionManager session;
        private SessionStats stats;
        private bool built;

        private RectTransform barBgRect;
        private RectTransform fillRect;
        private Image fillImage;
        private TextMeshProUGUI leftText;
        private TextMeshProUGUI rightText;
        private Image[] markers;

        private int throwsDone;
        private int reachedMilestones; // 0-4 (4 = target reached)
        private Coroutine flashRoutine;

        private int Target => session != null ? Mathf.Max(1, session.ThrowsTarget) : 20;
        private int Threshold(int milestone) => Mathf.CeilToInt(Target * milestone / 4f);

        private void Start()
        {
            session = SessionManager.Instance;
            stats = SessionStats.Instance;
            if (stats != null) stats.OnThrowRecorded += HandleThrowRecorded;
            else Debug.LogWarning("[ProgressElement] No SessionStats found: the bar cannot update.");
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
                Debug.LogError("[ProgressElement] No ElementsHud in the scene.");
                return;
            }

            RectTransform slot = ElementsHud.Instance.GetSlot(HudSlot.Progress);
            ElementsHud.CreatePanel(slot, "Background", panelColor);

            leftText = ElementsHud.CreateText(slot, "LeftText", "PROGRESS", 34, TextAlignmentOptions.MidlineLeft, Color.white);
            SetAnchors(leftText.rectTransform, 0.02f, 0.55f, 0.55f, 1f);

            rightText = ElementsHud.CreateText(slot, "RightText", "", 34, TextAlignmentOptions.MidlineRight, Color.white);
            SetAnchors(rightText.rectTransform, 0.45f, 0.55f, 0.98f, 1f);

            Image barBg = ElementsHud.CreatePanel(slot, "BarBackground", new Color(1f, 1f, 1f, 0.15f));
            barBgRect = barBg.rectTransform;
            SetAnchors(barBgRect, 0.02f, 0.15f, 0.98f, 0.5f);

            fillImage = ElementsHud.CreatePanel(barBgRect, "Fill", barColor);
            fillRect = fillImage.rectTransform;
            SetAnchors(fillRect, 0f, 0f, 0f, 1f);

            markers = new Image[3];
            for (int i = 0; i < 3; i++)
            {
                Image m = ElementsHud.CreatePanel(barBgRect, "Marker" + (i + 1), Color.white);
                RectTransform r = m.rectTransform;
                float x = 0.25f * (i + 1);
                r.anchorMin = new Vector2(x, 0f);
                r.anchorMax = new Vector2(x, 1f);
                r.offsetMin = new Vector2(-2f, 0f);
                r.offsetMax = new Vector2(2f, 0f);
                markers[i] = m;
            }

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

            ElementsHud.Instance.SetSlotActive(HudSlot.Progress, level != IntensityLevel.Off);
            for (int i = 0; i < markers.Length; i++) markers[i].gameObject.SetActive(level >= IntensityLevel.Medium);
            Refresh();
        }

        public override void OnBlockStarted(int blockIndex, string condition)
        {
            throwsDone = 0;
            reachedMilestones = 0;
            EnsureBuilt();
            Refresh();
        }

        public override void OnBlockEnded(int blockIndex, string condition)
        {
            if (Level == IntensityLevel.Off || session == null) return;
            session.LogEvent("progress_final",
                "throws=" + throwsDone + ";target=" + Target + ";milestones=" + reachedMilestones);
        }

        // ---------------------------------------------------------------- Throws

        private void HandleThrowRecorded(ThrowSample sample)
        {
            if (Level == IntensityLevel.Off || session == null || !session.IsBlockRunning) return;

            throwsDone = sample.throwsAfter;
            while (reachedMilestones < 4 && throwsDone >= Threshold(reachedMilestones + 1))
            {
                reachedMilestones++;
                OnMilestone(reachedMilestones);
            }
            Refresh();
        }

        private void OnMilestone(int milestone)
        {
            session.LogEvent("progress_milestone", "milestone=" + milestone + ";throws=" + throwsDone);
            if (!built || Level < IntensityLevel.Medium) return;

            Highlight();

            if (Level == IntensityLevel.High)
            {
                if (SfxPlayer.Instance != null)
                    SfxPlayer.Instance.Play(milestone == 4 ? SfxId.Celebrate : SfxId.Milestone);
                UiAnim.Pop(barBgRect, milestone == 4 ? 1.12f : 1.06f, 0.35f);
                UiAnim.Pop(leftText.transform, 1.3f, 0.35f);
            }
        }

        private void Highlight()
        {
            if (flashRoutine != null) StopCoroutine(flashRoutine);
            flashRoutine = StartCoroutine(FlashRoutine());
        }

        private IEnumerator FlashRoutine()
        {
            fillImage.color = highlightColor;
            yield return new WaitForSeconds(highlightSeconds);
            fillImage.color = barColor;
            flashRoutine = null;
        }

        // --------------------------------------------------------------- Display

        private void Refresh()
        {
            if (!built) return;

            float p = Mathf.Clamp01(throwsDone / (float)Target);
            fillRect.anchorMax = new Vector2(p, 1f);

            switch (Level)
            {
                case IntensityLevel.Low:
                    leftText.text = "PROGRESS";
                    rightText.text = "";
                    break;

                case IntensityLevel.Medium:
                    leftText.text = "PROGRESS";
                    rightText.text = throwsDone + " / " + Target;
                    break;

                case IntensityLevel.High:
                    UpdateHighTexts();
                    break;
            }
        }

        private void UpdateHighTexts()
        {
            string[] names = (stageNames != null && stageNames.Length >= 4)
                ? stageNames
                : new[] { "Warm-up", "Rhythm", "Push", "Finish" };

            if (reachedMilestones >= 4)
            {
                leftText.text = "Complete!";
                rightText.text = "Target reached";
                return;
            }

            leftText.text = names[Mathf.Min(3, reachedMilestones)];
            int remaining = Mathf.Max(1, Threshold(reachedMilestones + 1) - throwsDone);
            string unit = remaining == 1 ? " throw" : " throws";
            string next = reachedMilestones < 3 ? names[reachedMilestones + 1] : "the target";
            rightText.text = "Next: " + next + " in " + remaining + unit;
        }
    }
}