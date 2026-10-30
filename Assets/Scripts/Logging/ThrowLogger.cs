using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using UnityEngine;
using VRBasketball;

namespace FYP.Logging
{
    /// <summary>
    /// Singleton manager that monitors basketball throws, calculates trajectory metrics,
    /// tracks make/miss outcomes, and flushes trial records to CSV.
    /// </summary>
    public class ThrowLogger : MonoBehaviour
    {
        public static ThrowLogger Instance { get; private set; }

        [Header("Target Hoop")]
        [Tooltip("Target rim transform. If null, automatically located in scene.")]
        [SerializeField] private Transform hoopTarget;

        [Header("Throw Thresholds")]
        [Tooltip("Minimum release speed required to qualify as an intentional throw trial.")]
        [SerializeField] private float minThrowSpeedThreshold = 1.0f;

        public int ignoredReleaseCount = 0;

        // Session & Block state
        private string participantId = "TEST";
        private string sessionId = "S000";
        private int blockIndex = 0;
        private string condition = "baseline";
        private int throwIndex = 0;
        private float blockStartTime = 0f;

        // Gamification element levels (default "NA")
        private string lvlPoints = "NA";
        private string lvlProgress = "NA";
        private string lvlBadges = "NA";
        private string lvlChoice = "NA";
        private string lvlPersonalBest = "NA";
        private string lvlTimer = "NA";
        private string choiceBallSkin = "NA", choiceEnvironment = "NA", choiceFbType = "NA", choiceFbFreq = "NA";

        // Throws in flight, one per ball (several rack balls can be in the air at once)
        private readonly List<PendingThrow> pendingThrows = new List<PendingThrow>(4);
        private bool shotClockExpiredThisHold;
        private Basketball currentlyHeldBall = null;
        private float currentBallGrabStartTime = 0f;
        private string currentBallGrabHand = "right";

        // Memory cache
        private readonly List<ThrowRecord> loggedRecords = new List<ThrowRecord>();
        private readonly List<float> loggedRecordTimes = new List<float>();

        // Preallocated coroutine yield to prevent runtime allocations
        private readonly WaitForFixedUpdate waitForPhysicsFrame = new WaitForFixedUpdate();

        // Public event
        public event Action<ThrowRecord> OnThrowLogged;

        private class PendingThrow
        {
            public Basketball Ball;
            public float ReleaseTime;
            public float TimeHeld;
            public Vector3 ReleasePos;
            public Vector3 ReleaseVel;
            public string Hand;
            public Coroutine TimeoutCoroutine;
            public bool ShotClockExpired;
        }

        private void Awake()
        {
            if (Instance != null && Instance != this)
            {
                Destroy(gameObject);
                return;
            }
            Instance = this;

            blockStartTime = Time.time;
            EnsureHoopTarget();
            // No EnsureCsvHeader() here: SetSession creates the file, so launches no longer leave an empty TEST_S000.csv.
        }

        private void OnEnable()
        {
            Basketball.OnBallGrabbed += HandleBallGrabbed;
            Basketball.OnBallReleased += HandleBallReleased;
            Basketball.OnBallHitFloorOrOutOfBounds += HandleBallHitFloorOrOutOfBounds;
            HoopScoringTrigger.OnBallMade += HandleBallMade;
        }

        private void OnDisable()
        {
            Basketball.OnBallGrabbed -= HandleBallGrabbed;
            Basketball.OnBallReleased -= HandleBallReleased;
            Basketball.OnBallHitFloorOrOutOfBounds -= HandleBallHitFloorOrOutOfBounds;
            HoopScoringTrigger.OnBallMade -= HandleBallMade;
        }

        private void EnsureHoopTarget()
        {
            if (hoopTarget != null) return;

            // Locate top scoring trigger or hoop in scene
            GameObject topTrigger = GameObject.Find("TopScoringTrigger");
            if (topTrigger != null)
            {
                hoopTarget = topTrigger.transform;
                return;
            }

            var scoringTrigger = FindAnyObjectByType<HoopScoringTrigger>();
            if (scoringTrigger != null)
            {
                hoopTarget = scoringTrigger.transform;
                return;
            }

            GameObject hoop = GameObject.Find("BasketballHoop");
            if (hoop != null)
            {
                hoopTarget = hoop.transform;
            }
        }

        private Vector3 GetHoopPosition()
        {
            if (hoopTarget != null)
            {
                return hoopTarget.position;
            }
            // Standard regulation scene position fallback
            return new Vector3(-0.03f, 2.95f, -1.89f);
        }

        #region Public API

        /// <summary>
        /// Updates the participant and session identifiers and prepares the CSV log file.
        /// </summary>
        public void SetSession(string newParticipantId, string newSessionId)
        {
            participantId = string.IsNullOrEmpty(newParticipantId) ? "TEST" : newParticipantId;
            sessionId = string.IsNullOrEmpty(newSessionId) ? "S000" : newSessionId;
            EnsureCsvHeader();
        }

        /// <summary>
        /// Updates the block index and experimental condition, resetting throw index and block timer.
        /// </summary>
        public void SetBlock(int newBlockIndex, string newCondition)
        {
            blockIndex = newBlockIndex;
            condition = string.IsNullOrEmpty(newCondition) ? "baseline" : newCondition;
            throwIndex = 0;
            blockStartTime = Time.time;
        }

        /// <summary>
        /// Retrieves all logged throw records occurred within the specified time window.
        /// </summary>
        public List<ThrowRecord> GetThrowsSince(float secondsAgo)
        {
            float cutoff = Time.time - secondsAgo;
            var result = new List<ThrowRecord>();
            for (int i = loggedRecords.Count - 1; i >= 0; i--)
            {
                if (loggedRecordTimes[i] >= cutoff)
                {
                    result.Add(loggedRecords[i]);
                }
                else
                {
                    break;
                }
            }
            result.Reverse();
            return result;
        }

        /// <summary>
        /// Configures gamification element levels applied to future logged rows.
        /// </summary>
        public void SetElementLevels(Dictionary<string, string> levels)
        {
            if (levels == null) return;
            if (levels.TryGetValue("lvl_points", out string points)) lvlPoints = points;
            if (levels.TryGetValue("lvl_progress", out string progress)) lvlProgress = progress;
            if (levels.TryGetValue("lvl_badges", out string badges)) lvlBadges = badges;
            if (levels.TryGetValue("lvl_choice", out string choice)) lvlChoice = choice;
            if (levels.TryGetValue("lvl_personal_best", out string pb)) lvlPersonalBest = pb;
            if (levels.TryGetValue("lvl_timer", out string timer)) lvlTimer = timer;
        }

        public void SetChoiceState(string ballSkin, string environment, string feedbackType, string feedbackFrequency)
        {
            choiceBallSkin = ballSkin;
            choiceEnvironment = environment;
            choiceFbType = feedbackType;
            choiceFbFreq = feedbackFrequency;
        }

        /// <summary>True while any released ball's outcome has not been logged yet.</summary>
        public bool HasPendingThrow => pendingThrows.Count > 0;

        /// <summary>The ball of the most recently logged throw (valid inside OnThrowLogged handlers).</summary>
        public Basketball LastResolvedBall { get; private set; }

        /// <summary>Called by TimerElement when the shot clock runs out while a ball is held.</summary>
        public void SetShotClockExpiredForCurrentHold(bool expired)
        {
            shotClockExpiredThisHold = expired;
        }

        #endregion

        #region Interaction Event Handlers

        private void HandleBallGrabbed(Basketball ball, string hand)
        {
            // Re-grabbing a ball before its throw resolved ends that throw as a miss.
            // Other balls still in the air keep their own pending throws (grabbing the next ball must not turn a make into a miss).
            PendingThrow same = FindPending(ball);
            if (same != null) ResolveThrow(same, false);

            currentlyHeldBall = ball;
            shotClockExpiredThisHold = false;
            currentBallGrabStartTime = Time.time;
            currentBallGrabHand = string.IsNullOrEmpty(hand) ? "right" : hand;
        }

        private void HandleBallReleased(Basketball ball)
        {
            // If this ball somehow still has an unresolved throw, resolve it as a miss
            PendingThrow same = FindPending(ball);
            if (same != null) ResolveThrow(same, false);

            float releaseTime = Time.time;
            float timeHeld = Mathf.Max(0.001f, releaseTime - currentBallGrabStartTime);
            Vector3 releasePos = ball != null ? ball.transform.position : Vector3.zero;
            string hand = currentBallGrabHand;

            currentlyHeldBall = null;

            if (!Application.isPlaying)
            {
                Rigidbody rb = ball != null ? ball.GetComponent<Rigidbody>() : null;
                Vector3 releaseVel = (rb != null) ? rb.linearVelocity : Vector3.zero;
                float releaseSpeed = releaseVel.magnitude;

                if (releaseSpeed < minThrowSpeedThreshold)
                {
                    ignoredReleaseCount++;
                    Debug.Log(string.Format(CultureInfo.InvariantCulture, "Ignored release: speed {0}", releaseSpeed));
                    return;
                }

                pendingThrows.Add(new PendingThrow
                {
                    Ball = ball,
                    ReleaseTime = releaseTime,
                    TimeHeld = timeHeld,
                    ReleasePos = releasePos,
                    ReleaseVel = releaseVel,
                    Hand = hand,
                    ShotClockExpired = shotClockExpiredThisHold,
                });
            }
            else
            {
                // Wait 1 physics frame to read the throw velocity applied by XRI / Meta SDK
                StartCoroutine(CaptureReleaseVelocityAndArmThrow(ball, releaseTime, timeHeld, releasePos, hand));
            }
        }

        private IEnumerator CaptureReleaseVelocityAndArmThrow(Basketball ball, float releaseTime, float timeHeld, Vector3 releasePos, string hand)
        {
            yield return waitForPhysicsFrame;

            if (ball == null) yield break;

            Rigidbody rb = ball.GetComponent<Rigidbody>();
            Vector3 releaseVel = (rb != null) ? rb.linearVelocity : Vector3.zero;
            float releaseSpeed = releaseVel.magnitude;

            if (releaseSpeed < minThrowSpeedThreshold)
            {
                ignoredReleaseCount++;
                Debug.Log(string.Format(CultureInfo.InvariantCulture, "Ignored release: speed {0}", releaseSpeed));
                yield break;
            }

            // Arm the pending throw
            var pending = new PendingThrow
            {
                Ball = ball,
                ReleaseTime = releaseTime,
                TimeHeld = timeHeld,
                ReleasePos = releasePos,
                ReleaseVel = releaseVel,
                Hand = hand,
                ShotClockExpired = shotClockExpiredThisHold,
            };
            pending.TimeoutCoroutine = StartCoroutine(ThrowTimeoutCoroutine(pending));
            pendingThrows.Add(pending);
        }

        private IEnumerator ThrowTimeoutCoroutine(PendingThrow pending)
        {
            yield return new WaitForSeconds(8.0f);

            if (pendingThrows.Contains(pending))
            {
                ResolveThrow(pending, false);
            }
        }

        private PendingThrow FindPending(Basketball ball)
        {
            for (int i = 0; i < pendingThrows.Count; i++)
                if (pendingThrows[i].Ball == ball) return pendingThrows[i];
            return null;
        }

        private void HandleBallMade(GameObject ballObject)
        {
            // Match the made ball to its own pending throw
            for (int i = 0; i < pendingThrows.Count; i++)
            {
                if (pendingThrows[i].Ball != null && pendingThrows[i].Ball.gameObject == ballObject)
                {
                    ResolveThrow(pendingThrows[i], true);
                    return;
                }
            }
        }

        private void HandleBallHitFloorOrOutOfBounds(Basketball ball)
        {
            // If this ball hit the floor or went out of bounds without scoring, resolve its throw as a miss
            PendingThrow pending = FindPending(ball);
            if (pending != null) ResolveThrow(pending, false);
        }

        #endregion

        #region Resolution & CSV Writing

        private void ResolveThrow(PendingThrow pending, bool made)
        {
            if (!pendingThrows.Remove(pending)) return; // Remove first to guarantee exactly one outcome per throw

            if (pending.TimeoutCoroutine != null)
            {
                StopCoroutine(pending.TimeoutCoroutine);
            }

            float outcomeTime = Time.time;
            float timeToOutcome = Mathf.Max(0f, outcomeTime - pending.ReleaseTime);

            throwIndex++;

            ThrowRecord record = new ThrowRecord();
            record.participant_id = participantId;
            record.session_id = sessionId;
            record.block_index = blockIndex;
            record.condition = condition;
            record.throw_index = throwIndex;
            record.timestamp_utc = DateTime.UtcNow.ToString("o");
            record.time_since_block_start = Mathf.Max(0f, pending.ReleaseTime - blockStartTime);
            record.time_held = pending.TimeHeld;
            record.release_pos_x = pending.ReleasePos.x;
            record.release_pos_y = pending.ReleasePos.y;
            record.release_pos_z = pending.ReleasePos.z;
            record.release_vel_x = pending.ReleaseVel.x;
            record.release_vel_y = pending.ReleaseVel.y;
            record.release_vel_z = pending.ReleaseVel.z;

            Vector3 vel = pending.ReleaseVel;
            record.release_speed = vel.magnitude;

            // Elevation angle above horizontal plane (deg)
            float horizSpeed = Mathf.Sqrt(vel.x * vel.x + vel.z * vel.z);
            record.release_elevation_deg = Mathf.Atan2(vel.y, horizSpeed) * Mathf.Rad2Deg;

            // Azimuth error angle relative to hoop (deg)
            Vector3 hoopPos = GetHoopPosition();
            Vector2 releaseXZ = new Vector2(pending.ReleasePos.x, pending.ReleasePos.z);
            Vector2 hoopXZ = new Vector2(hoopPos.x, hoopPos.z);
            record.distance_to_hoop = Vector2.Distance(releaseXZ, hoopXZ);

            Vector2 dirToHoop = (hoopXZ - releaseXZ).normalized;
            Vector2 velXZ = new Vector2(vel.x, vel.z).normalized;
            record.release_azimuth_error_deg = (velXZ.sqrMagnitude > 0.0001f)
                ? Vector2.SignedAngle(dirToHoop, velXZ)
                : 0f;

            record.hand = string.IsNullOrEmpty(pending.Hand) ? "right" : pending.Hand;
            record.made = made;
            record.time_to_outcome = timeToOutcome;
            record.shot_clock_expired = pending.ShotClockExpired;

            record.lvl_points = lvlPoints;
            record.lvl_progress = lvlProgress;
            record.lvl_badges = lvlBadges;
            record.lvl_choice = lvlChoice;
            record.lvl_personal_best = lvlPersonalBest;
            record.lvl_timer = lvlTimer;
            record.choice_ball_skin = choiceBallSkin;
            record.choice_environment = choiceEnvironment;
            record.choice_fb_type = choiceFbType;
            record.choice_fb_freq = choiceFbFreq;
            record.block_paused = FYP.Session.SessionManager.Instance != null && FYP.Session.SessionManager.Instance.IsBlockPaused;

            // Store in memory
            loggedRecords.Add(record);
            loggedRecordTimes.Add(Time.time);

            // Persist to disk
            AppendRecordToCsv(record);

            // Broadcast event
            LastResolvedBall = pending.Ball;
            OnThrowLogged?.Invoke(record);

            // Debug output: one concise line per throw
            var inv = CultureInfo.InvariantCulture;
            Debug.Log(string.Format(inv,
                "[ThrowLogger] Throw #{0:00} | Outcome: {1} | Speed: {2:F2} m/s | Elev: {3:F1}° | AzErr: {4:F1}° | Dist: {5:F2} m | Held: {6:F2} s | TimeToOutcome: {7:F2} s | Hand: {8}",
                record.throw_index,
                record.made ? "MADE" : "MISS",
                record.release_speed,
                record.release_elevation_deg,
                record.release_azimuth_error_deg,
                record.distance_to_hoop,
                record.time_held,
                record.time_to_outcome,
                record.hand
            ));
        }

        private string GetLogFilePath()
        {
            string dir = Path.Combine(Application.persistentDataPath, "Logs");
            return Path.Combine(dir, $"{participantId}_{sessionId}.csv");
        }

        private void EnsureCsvHeader()
        {
            try
            {
                string dir = Path.Combine(Application.persistentDataPath, "Logs");
                if (!Directory.Exists(dir))
                {
                    Directory.CreateDirectory(dir);
                }

                string filePath = GetLogFilePath();
                if (!File.Exists(filePath))
                {
                    File.WriteAllText(filePath, ThrowRecord.CsvHeader + Environment.NewLine);
                }
            }
            catch (Exception ex)
            {
                Debug.LogError($"[ThrowLogger] Error creating log directory or CSV header: {ex.Message}");
            }
        }

        private void AppendRecordToCsv(ThrowRecord record)
        {
            try
            {
                string dir = Path.Combine(Application.persistentDataPath, "Logs");
                if (!Directory.Exists(dir))
                {
                    Directory.CreateDirectory(dir);
                }

                string filePath = GetLogFilePath();
                if (!File.Exists(filePath))
                {
                    File.WriteAllText(filePath, ThrowRecord.CsvHeader + Environment.NewLine);
                }

                string line = record.ToCsvLine();
                using (var writer = new StreamWriter(filePath, append: true))
                {
                    writer.WriteLine(line);
                    writer.Flush();
                }
            }
            catch (Exception ex)
            {
                Debug.LogError($"[ThrowLogger] Error writing throw record to CSV: {ex.Message}");
            }
        }

        #endregion
    }
}
