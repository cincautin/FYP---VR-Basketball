using System.Globalization;
using TMPro;
using UnityEngine;
using UnityEngine.Rendering;
using FYP.Logging;
using FYP.Session;
using VRBasketball;

namespace FYP.Intensity
{
    /// <summary>
    /// Player choice step 5: performance feedback during blocks (never in the tutorial). Everyone gets the default
    /// (accuracy every 3 throws) unless they chose otherwise in the choice menu.
    ///   Accuracy only   - block accuracy (makes / throws x 100) in the HUD's Feedback slot.
    ///   Arc trace       - the ball's actual flight path as a line (green made, orange miss).
    ///   Angle and speed - release angle and speed compared with the last made shot of this block.
    /// Frequency: every throw, every 3rd throw (about that throw), or end of block (one line on the rest screen).
    /// Put it on the always-active Elements object.
    /// </summary>
    public class FeedbackDisplay : MonoBehaviour
    {
        [SerializeField] private float showSeconds = 4f;
        [Tooltip("Any unlit material for the arc (e.g. one using URP Particles/Unlit). Empty = Sprites/Default.")]
        [SerializeField] private Material lineMaterial;
        [SerializeField] private float lineWidth = 0.025f;
        [SerializeField] private Color madeColor = new Color(0.3f, 0.95f, 0.45f);
        [SerializeField] private Color missColor = new Color(1f, 0.55f, 0.25f);
        [Tooltip("Leave empty to find it automatically.")]
        [SerializeField] private PlayerChoiceElement choice;

        private const int MaxPoints = 256;   // about 3.5 s of flight at 72 FPS

        // One recorded flight per ball (3 rack balls + 1 spare), preallocated so recording never allocates.
        private class Flight
        {
            public Basketball ball;
            public readonly Vector3[] points = new Vector3[MaxPoints];
            public int count;
            public bool recording;
        }

        private readonly Flight[] flights = { new Flight(), new Flight(), new Flight(), new Flight() };
        private SessionManager session;
        private SessionStats stats;
        private LineRenderer line;
        private Material lineMat;
        private TextMeshProUGUI label;
        private float hideTextAt = -1f;
        private float hideLineAt = -1f;
        private FeedbackType blockType;
        private FeedbackFrequency blockFrequency;
        private bool subscribed;

        private void Start()
        {
            session = SessionManager.Instance;
            stats = SessionStats.Instance;
            if (choice == null) choice = FindAnyObjectByType<PlayerChoiceElement>();
            if (session == null || stats == null || choice == null || ElementsHud.Instance == null)
            {
                Debug.LogError("[FeedbackDisplay] Needs SessionManager, SessionStats, PlayerChoiceElement and ElementsHud in the scene.");
                enabled = false;
                return;
            }

            Build();
            stats.OnThrowRecorded += HandleThrow;
            session.OnBlockStarted += HandleBlockStarted;
            session.OnBlockEnded += HandleBlockEnded;
            choice.OnChoiceChanged += HandleChoiceChanged;
            Basketball.OnBallReleased += HandleReleased;
            subscribed = true;
        }

        private void OnDestroy()
        {
            if (!subscribed) return;
            Basketball.OnBallReleased -= HandleReleased;
            if (stats != null) stats.OnThrowRecorded -= HandleThrow;
            if (choice != null) choice.OnChoiceChanged -= HandleChoiceChanged;
            if (session != null)
            {
                session.OnBlockStarted -= HandleBlockStarted;
                session.OnBlockEnded -= HandleBlockEnded;
            }
        }

        private void Build()
        {
            RectTransform slot = ElementsHud.Instance.GetSlot(HudSlot.Feedback);
            ElementsHud.CreatePanel(slot, "Background", new Color(0.05f, 0.06f, 0.1f, 0.85f));
            label = ElementsHud.CreateText(slot, "Label", "", 40, TextAlignmentOptions.Midline, Color.white);
            label.rectTransform.offsetMin = new Vector2(20f, 6f);
            label.rectTransform.offsetMax = new Vector2(-20f, -6f);
            label.enableAutoSizing = true;
            label.fontSizeMin = 20;
            label.fontSizeMax = 40;

            var go = new GameObject("ArcTrace");
            go.transform.SetParent(transform, false);
            line = go.AddComponent<LineRenderer>();
            line.useWorldSpace = true;
            line.widthMultiplier = lineWidth;
            line.numCapVertices = 2;
            line.shadowCastingMode = ShadowCastingMode.Off;
            line.receiveShadows = false;

            Material m = lineMaterial;
            if (m == null)
            {
                Shader s = Shader.Find("Sprites/Default");
                if (s != null) m = new Material(s);
            }
            if (m != null)
            {
                line.material = m;
                lineMat = line.material;   // this renderer's own copy, so changing its colour leaves the asset alone
            }
            line.enabled = false;
        }

        // ------------------------------------------------------------------ Recording

        private void HandleReleased(Basketball ball)
        {
            if (ball == null) return;
            Flight f = null;
            for (int i = 0; i < flights.Length && f == null; i++) if (flights[i].ball == ball) f = flights[i];
            for (int i = 0; i < flights.Length && f == null; i++) if (!flights[i].recording) f = flights[i];
            if (f == null) f = flights[0];
            f.ball = ball;
            f.count = 0;
            f.recording = true;
        }

        private void Update()
        {
            for (int i = 0; i < flights.Length; i++)
            {
                Flight f = flights[i];
                if (!f.recording) continue;
                if (f.ball == null || f.count >= MaxPoints) { f.recording = false; continue; }
                f.points[f.count++] = f.ball.transform.position;
            }

            float now = Time.time;
            if (hideTextAt > 0f && now >= hideTextAt)
            {
                hideTextAt = -1f;
                ElementsHud.Instance.SetSlotActive(HudSlot.Feedback, false);
            }
            if (hideLineAt > 0f && now >= hideLineAt)
            {
                hideLineAt = -1f;
                line.enabled = false;
            }
        }

        // ------------------------------------------------------------------ Feedback

        /// <summary>SessionStats only sends throws that count (block running, not paused, not the tutorial).</summary>
        private void HandleThrow(ThrowSample s)
        {
            Flight flight = null;
            Basketball ball = ThrowLogger.Instance != null ? ThrowLogger.Instance.LastResolvedBall : null;
            if (ball != null)
                for (int i = 0; i < flights.Length; i++)
                    if (flights[i].ball == ball) { flight = flights[i]; flight.recording = false; break; }

            FeedbackFrequency freq = choice.Current.Frequency;
            bool due = freq == FeedbackFrequency.EveryThrow ||
                       (freq == FeedbackFrequency.EveryThirdThrow && s.throwsAfter % 3 == 0);
            if (!due) return;

            FeedbackType type = choice.Current.Feedback;
            switch (type)
            {
                case FeedbackType.ArcTrace:
                    if (flight == null || flight.count < 2) return;   // nothing recorded for this ball
                    ShowArc(flight, s.made);
                    break;
                case FeedbackType.AngleSpeed:
                    ShowText(AngleSpeedText(s));
                    break;
                default:
                    ShowText(AccuracyText());
                    break;
            }
            session.LogEvent("feedback_shown", "type=" + type + ";freq=" + freq + ";throw=" + s.throwsAfter);
        }

        private void ShowText(string text)
        {
            label.text = text;
            ElementsHud.Instance.SetSlotActive(HudSlot.Feedback, true);
            hideTextAt = Time.time + showSeconds;
        }

        private void ShowArc(Flight f, bool made)
        {
            line.positionCount = f.count;
            line.SetPositions(f.points);   // only the first positionCount points are used
            if (lineMat != null) lineMat.color = made ? madeColor : missColor;
            line.enabled = true;
            hideLineAt = Time.time + showSeconds;
        }

        private void HideAll()
        {
            hideTextAt = -1f;
            hideLineAt = -1f;
            ElementsHud.Instance.SetSlotActive(HudSlot.Feedback, false);
            line.enabled = false;
        }

        private string AccuracyText()
        {
            return "Accuracy: " + Mathf.RoundToInt(stats.BlockAccuracy * 100f) + "%  (" +
                   stats.BlockMakes + " of " + stats.BlockThrows + " shots)";
        }

        private string AngleSpeedText(ThrowSample s)
        {
            string angle = "Angle " + Deg(s.releaseElevationDeg);
            string speed = "Speed " + Ms(s.releaseSpeed);

            // The last make before this throw (the newest sample is this throw).
            var samples = stats.Samples;
            for (int i = samples.Count - 2; i >= 0; i--)
            {
                if (!samples[i].made) continue;
                return angle + "  (last make " + Deg(samples[i].releaseElevationDeg) + ")\n" +
                       speed + "  (last make " + Ms(samples[i].releaseSpeed) + ")";
            }
            return angle + "   " + speed + "\n<size=70%>No made shot yet to compare</size>";
        }

        private string AverageReleaseText()
        {
            var samples = stats.Samples;
            float a = 0f, v = 0f, ma = 0f, mv = 0f;
            int makes = 0;
            for (int i = 0; i < samples.Count; i++)
            {
                a += samples[i].releaseElevationDeg;
                v += samples[i].releaseSpeed;
                if (!samples[i].made) continue;
                ma += samples[i].releaseElevationDeg;
                mv += samples[i].releaseSpeed;
                makes++;
            }
            if (samples.Count == 0) return "Release: no throws this round";

            string text = "Average release: angle " + Deg(a / samples.Count) + ", speed " + Ms(v / samples.Count);
            return makes == 0 ? text : text + " (made shots: " + Deg(ma / makes) + ", " + Ms(mv / makes) + ")";
        }

        private static string Deg(float v) => Mathf.RoundToInt(v) + "°";
        private static string Ms(float v) => v.ToString("F1", CultureInfo.InvariantCulture) + " m/s";

        // ------------------------------------------------------------------ Block edges

        private void HandleBlockStarted(int blockIndex, string condition)
        {
            HideAll();
            SnapshotChoice();
        }

        // Choices also reset to defaults at block end; that happens after IsBlockRunning goes false, so the
        // snapshot keeps what the player actually had during the block.
        private void HandleChoiceChanged(ChoiceKind kind, int index)
        {
            if (session.IsBlockRunning) SnapshotChoice();
        }

        private void SnapshotChoice()
        {
            blockType = choice.Current.Feedback;
            blockFrequency = choice.Current.Frequency;
        }

        private void HandleBlockEnded(int blockIndex, string condition, string reason)
        {
            HideAll();
            if (blockFrequency != FeedbackFrequency.EndOfBlock) return;

            // Arc trace can't be drawn on the rest screen, so it falls back to the accuracy line.
            BlockSummary.Add(blockType == FeedbackType.AngleSpeed ? AverageReleaseText() : AccuracyText());
            session.LogEvent("feedback_shown", "type=" + blockType + ";freq=EndOfBlock;throw=" + stats.BlockThrows);
        }
    }
}
