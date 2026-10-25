using TMPro;
using UnityEngine;
using UnityEngine.UI;
using VRBasketball;
using FYP.Logging;
using FYP.Session;

namespace FYP.Intensity
{
    /// <summary>
    /// Timer element, drawn in the HUD's Timer slot.
    /// Off: hidden. Low: nothing live, "Time played" line on the break screen.
    /// Medium: soft countdown of the block time. High: Medium + a per-throw shot clock that starts when a ball
    /// is grabbed and stops when it is released, with colour and tick cues. Expiry has no penalty: the throw
    /// still counts, and only shot_clock_expired is flagged in the throw CSV.
    /// </summary>
    public class TimerElement : GamificationElement
    {
        public override ElementId Id => ElementId.Timer;

        [Header("Shot clock (High)")]
        [SerializeField] private float shotClockSeconds = 8f;
        [SerializeField] private float warnSeconds = 5f;
        [SerializeField] private float urgentSeconds = 3f;

        [Header("Look")]
        [SerializeField] private Color panelColor = new Color(0.08f, 0.09f, 0.14f, 0.75f);
        [SerializeField] private Color clockCalm = new Color(0.2f, 0.6f, 1f);
        [SerializeField] private Color clockWarn = new Color(1f, 0.75f, 0.15f);
        [SerializeField] private Color clockUrgent = new Color(1f, 0.25f, 0.2f);
        [SerializeField] private Color clockIdle = new Color(0.45f, 0.5f, 0.6f);

        private SessionManager session;
        private bool built;

        private TextMeshProUGUI labelText;
        private TextMeshProUGUI countdownText;
        private TextMeshProUGUI clockText;
        private GameObject clockZone;
        private Image clockFill;
        private RectTransform clockFillRect;

        private int lastShownSecond = -1;
        private int lastShownTenth = -1;

        private bool holding;
        private bool expired;
        private float clockRemaining;
        private int holdsThisBlock;
        private int expiredThisBlock;

        // ----------------------------------------------------------------- Setup

        private void OnEnable()
        {
            Basketball.OnBallGrabbed += HandleGrabbed;
            Basketball.OnBallReleased += HandleReleased;
        }

        private void OnDisable()
        {
            Basketball.OnBallGrabbed -= HandleGrabbed;
            Basketball.OnBallReleased -= HandleReleased;
        }

        private void Start()
        {
            session = SessionManager.Instance;
            EnsureBuilt();
        }

        private void EnsureBuilt()
        {
            if (built) return;
            if (ElementsHud.Instance == null)
            {
                Debug.LogError("[TimerElement] No ElementsHud in the scene.");
                return;
            }

            RectTransform slot = ElementsHud.Instance.GetSlot(HudSlot.Timer);
            ElementsHud.CreatePanel(slot, "Background", panelColor);

            labelText = ElementsHud.CreateText(slot, "Label", "TIME LEFT", 26, TextAlignmentOptions.Midline, Color.white);
            SetAnchors(labelText.rectTransform, 0.03f, 0.72f, 0.97f, 0.98f);

            countdownText = ElementsHud.CreateText(slot, "Countdown", "0:00", 70, TextAlignmentOptions.Midline, Color.white);
            countdownText.fontStyle = FontStyles.Bold;
            SetAnchors(countdownText.rectTransform, 0.03f, 0.30f, 0.97f, 0.76f);

            // Shot-clock zone along the bottom
            var zone = new GameObject("ClockZone", typeof(RectTransform));
            RectTransform zoneRect = zone.GetComponent<RectTransform>();
            zoneRect.SetParent(slot, false);
            SetAnchors(zoneRect, 0.03f, 0.04f, 0.97f, 0.28f);
            clockZone = zone;

            Image bg = ElementsHud.CreatePanel(zoneRect, "ClockBackground", new Color(1f, 1f, 1f, 0.15f));
            clockFill = ElementsHud.CreatePanel(bg.rectTransform, "ClockFill", clockIdle);
            clockFillRect = clockFill.rectTransform;
            SetAnchors(clockFillRect, 0f, 0f, 1f, 1f);

            clockText = ElementsHud.CreateText(zoneRect, "ClockText", "", 24, TextAlignmentOptions.Midline, Color.white);

            built = true;
            ShowIdleClock();
            RefreshCountdown(true);
        }

        private static void SetAnchors(RectTransform rt, float x0, float y0, float x1, float y1)
        {
            rt.anchorMin = new Vector2(x0, y0);
            rt.anchorMax = new Vector2(x1, y1);
            rt.offsetMin = Vector2.zero;
            rt.offsetMax = Vector2.zero;
        }

        // ------------------------------------------------------------------ Level

        protected override void ApplyLevel(IntensityLevel level, IntensityLevel previous)
        {
            EnsureBuilt();
            if (!built) return;

            ElementsHud.Instance.SetSlotActive(HudSlot.Timer, level >= IntensityLevel.Medium);
            clockZone.SetActive(level == IntensityLevel.High);
            if (level != IntensityLevel.High) holding = false;
            ShowIdleClock();
            RefreshCountdown(true);
        }

        public override void OnBlockStarted(int blockIndex, string condition)
        {
            holding = false;
            expired = false;
            holdsThisBlock = 0;
            expiredThisBlock = 0;
            EnsureBuilt();
            if (!built) return;
            ShowIdleClock();
            RefreshCountdown(true);
        }

        public override void OnBlockEnded(int blockIndex, string condition)
        {
            holding = false;
            if (Level == IntensityLevel.Off || session == null) return;

            session.LogEvent("timer_final",
                "clock_holds=" + holdsThisBlock + ";clock_expired=" + expiredThisBlock);

            if (Level == IntensityLevel.Low)
                BlockSummary.Add("Time played: " + FormatTime(Mathf.RoundToInt(session.BlockElapsed)));
        }

        // ----------------------------------------------------------------- Update

        private void Update()
        {
            if (!built || session == null || Level < IntensityLevel.Medium) return;

            RefreshCountdown(false);

            if (Level == IntensityLevel.High && holding && session.IsBlockRunning && !session.IsBlockPaused)
                TickShotClock(Time.deltaTime);
        }

        private void RefreshCountdown(bool force)
        {
            if (!built || session == null) return;
            int remaining = Mathf.CeilToInt(Mathf.Max(0f, session.BlockSeconds - session.BlockElapsed));
            if (!session.IsBlockRunning) remaining = Mathf.CeilToInt(session.BlockSeconds);
            if (!force && remaining == lastShownSecond) return;
            lastShownSecond = remaining;
            countdownText.text = FormatTime(remaining);
        }

        private static string FormatTime(int totalSeconds)
        {
            return (totalSeconds / 60) + ":" + (totalSeconds % 60).ToString("00");
        }

        // -------------------------------------------------------------- Shot clock

        private void HandleGrabbed(Basketball ball, string hand)
        {
            if (!built || Level != IntensityLevel.High || session == null || !session.IsBlockRunning) return;

            holding = true;
            expired = false;
            clockRemaining = shotClockSeconds;
            holdsThisBlock++;
            lastShownTenth = -1;
            RefreshClock();
        }

        private void HandleReleased(Basketball ball)
        {
            if (!holding) return;
            holding = false;
            ShowIdleClock();
        }

        private void TickShotClock(float dt)
        {
            float before = clockRemaining;
            clockRemaining = Mathf.Max(0f, clockRemaining - dt);

            if (!expired && clockRemaining <= 0f)
            {
                expired = true;
                OnExpired();
            }
            else if (!expired && clockRemaining <= urgentSeconds &&
                     Mathf.CeilToInt(clockRemaining) < Mathf.CeilToInt(before))
            {
                float pitch = 1f + 0.15f * (urgentSeconds - Mathf.CeilToInt(clockRemaining));
                if (SfxPlayer.Instance != null) SfxPlayer.Instance.Play(SfxId.Tick, 1f, pitch);
            }

            RefreshClock();
        }

        private void OnExpired()
        {
            expiredThisBlock++;
            if (ThrowLogger.Instance != null) ThrowLogger.Instance.SetShotClockExpiredForCurrentHold(true);
            session.LogEvent("shot_clock_expired", "hold=" + holdsThisBlock);
            if (SfxPlayer.Instance != null) SfxPlayer.Instance.Play(SfxId.Urgent);
            UiAnim.Pop(clockZone.transform, 1.12f, 0.3f);
        }

        private void RefreshClock()
        {
            float p = Mathf.Clamp01(clockRemaining / shotClockSeconds);
            clockFillRect.anchorMax = new Vector2(p, 1f);

            Color c = clockRemaining <= urgentSeconds ? clockUrgent
                    : (clockRemaining <= warnSeconds ? clockWarn : clockCalm);
            clockFill.color = c;

            int tenth = Mathf.CeilToInt(clockRemaining * 10f);
            if (tenth == lastShownTenth) return;
            lastShownTenth = tenth;
            clockText.text = expired ? "TIME!" : "SHOT CLOCK  " + clockRemaining.ToString("F1");
        }

        private void ShowIdleClock()
        {
            if (!built) return;
            clockFillRect.anchorMax = new Vector2(1f, 1f);
            clockFill.color = clockIdle;
            lastShownTenth = -1;
            clockText.text = "SHOT CLOCK  " + shotClockSeconds.ToString("F0") + " s";
        }
    }
}