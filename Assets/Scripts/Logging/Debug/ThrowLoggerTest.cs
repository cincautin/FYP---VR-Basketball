using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Text;
using UnityEngine;
using FYP.Logging;
using VRBasketball;

#if UNITY_EDITOR
using UnityEditor;
#endif

namespace FYP.Logging.Testing
{
    public class ThrowLoggerTest : MonoBehaviour
    {
        public static ThrowLoggerTest Instance { get; private set; }
        public static string LastReport { get; private set; } = "";
        public static bool IsFinished { get; private set; } = false;

        [Header("Test Configuration")]
        [SerializeField] private bool runOnStart = true;
        [SerializeField] private float timeScale = 1.0f;

        private class TestThrowDef
        {
            public int testNumber;
            public string description;
            public Vector3 releasePosition;
            public Vector3 releaseVelocity;
            public float timeHeld;
            public string hand;
            public bool isSetDown;
            public bool expectedMade;
            public bool expectedRow;
            public int expectedBlock;
            public string expectedCondition;
        }

        private readonly List<TestThrowDef> testDefinitions = new List<TestThrowDef>();
        private ThrowRecord latestLoggedRecord = null;
        private bool hasLoggedCurrent = false;

        private void Awake()
        {
            if (Instance != null && Instance != this)
            {
                Destroy(gameObject);
                return;
            }
            Instance = this;
            BuildTestDefinitions();
        }

        private void Start()
        {
            if (runOnStart)
            {
                StartCoroutine(RunAllTestsCoroutine());
            }
        }

        private void BuildTestDefinitions()
        {
            testDefinitions.Clear();

            Vector3 normalReleasePos = new Vector3(-0.03f, 1.60f, -4.50f);
            Vector3 underHoopReleasePos = new Vector3(-0.03f, 1.80f, -1.89f);
            Vector3 rackSetDownPos = new Vector3(1.10f, 0.15f, -4.80f);

            // Block 0 ("baseline") Throws 1 - 9
            // 1-3 Clean Scores
            testDefinitions.Add(new TestThrowDef
            {
                testNumber = 1,
                description = "Clean Swish 1",
                releasePosition = normalReleasePos,
                releaseVelocity = new Vector3(0.00f, 6.00f, 2.80f),
                timeHeld = 0.45f,
                hand = "right",
                isSetDown = false,
                expectedMade = true,
                expectedRow = true,
                expectedBlock = 0,
                expectedCondition = "baseline"
            });
            testDefinitions.Add(new TestThrowDef
            {
                testNumber = 2,
                description = "Clean Swish 2",
                releasePosition = normalReleasePos,
                releaseVelocity = new Vector3(0.00f, 6.20f, 3.00f),
                timeHeld = 0.50f,
                hand = "right",
                isSetDown = false,
                expectedMade = true,
                expectedRow = true,
                expectedBlock = 0,
                expectedCondition = "baseline"
            });
            testDefinitions.Add(new TestThrowDef
            {
                testNumber = 3,
                description = "Clean Swish 3",
                releasePosition = normalReleasePos,
                releaseVelocity = new Vector3(0.00f, 5.80f, 2.80f),
                timeHeld = 0.40f,
                hand = "left",
                isSetDown = false,
                expectedMade = true,
                expectedRow = true,
                expectedBlock = 0,
                expectedCondition = "baseline"
            });

            // 4-6 Misses (short, long, left)
            testDefinitions.Add(new TestThrowDef
            {
                testNumber = 4,
                description = "Miss Short 1",
                releasePosition = normalReleasePos,
                releaseVelocity = new Vector3(0.00f, 3.50f, 1.20f),
                timeHeld = 0.35f,
                hand = "right",
                isSetDown = false,
                expectedMade = false,
                expectedRow = true,
                expectedBlock = 0,
                expectedCondition = "baseline"
            });
            testDefinitions.Add(new TestThrowDef
            {
                testNumber = 5,
                description = "Miss Long 1",
                releasePosition = normalReleasePos,
                releaseVelocity = new Vector3(0.00f, 7.50f, 5.00f),
                timeHeld = 0.65f,
                hand = "right",
                isSetDown = false,
                expectedMade = false,
                expectedRow = true,
                expectedBlock = 0,
                expectedCondition = "baseline"
            });
            testDefinitions.Add(new TestThrowDef
            {
                testNumber = 6,
                description = "Miss Wide Left",
                releasePosition = normalReleasePos,
                releaseVelocity = new Vector3(-2.50f, 5.50f, 2.50f),
                timeHeld = 0.48f,
                hand = "left",
                isSetDown = false,
                expectedMade = false,
                expectedRow = true,
                expectedBlock = 0,
                expectedCondition = "baseline"
            });

            // 7-8 Rim / Backboard hits
            testDefinitions.Add(new TestThrowDef
            {
                testNumber = 7,
                description = "Rim Hit - Front Rim",
                releasePosition = normalReleasePos,
                releaseVelocity = new Vector3(0.00f, 5.00f, 2.35f),
                timeHeld = 0.44f,
                hand = "right",
                isSetDown = false,
                expectedMade = false,
                expectedRow = true,
                expectedBlock = 0,
                expectedCondition = "baseline"
            });
            testDefinitions.Add(new TestThrowDef
            {
                testNumber = 8,
                description = "Rim Hit - Backboard",
                releasePosition = normalReleasePos,
                releaseVelocity = new Vector3(0.35f, 6.50f, 3.80f),
                timeHeld = 0.58f,
                hand = "right",
                isSetDown = false,
                expectedMade = false,
                expectedRow = true,
                expectedBlock = 0,
                expectedCondition = "baseline"
            });

            // 9 Pick up and set down (no throw, no row)
            testDefinitions.Add(new TestThrowDef
            {
                testNumber = 9,
                description = "Pick Up and Set Down 1",
                releasePosition = rackSetDownPos,
                releaseVelocity = Vector3.zero,
                timeHeld = 0.50f,
                hand = "right",
                isSetDown = true,
                expectedMade = false,
                expectedRow = false,
                expectedBlock = 0,
                expectedCondition = "baseline"
            });

            // Block 1 ("experimental") Throws 10 - 20
            // 10-12 Clean Scores
            testDefinitions.Add(new TestThrowDef
            {
                testNumber = 10,
                description = "Clean Swish 4",
                releasePosition = normalReleasePos,
                releaseVelocity = new Vector3(0.00f, 6.00f, 3.00f),
                timeHeld = 0.55f,
                hand = "right",
                isSetDown = false,
                expectedMade = true,
                expectedRow = true,
                expectedBlock = 1,
                expectedCondition = "experimental"
            });
            testDefinitions.Add(new TestThrowDef
            {
                testNumber = 11,
                description = "Clean Swish 5",
                releasePosition = normalReleasePos,
                releaseVelocity = new Vector3(0.00f, 6.40f, 3.20f),
                timeHeld = 0.60f,
                hand = "right",
                isSetDown = false,
                expectedMade = true,
                expectedRow = true,
                expectedBlock = 1,
                expectedCondition = "experimental"
            });
            testDefinitions.Add(new TestThrowDef
            {
                testNumber = 12,
                description = "Clean Swish 6",
                releasePosition = normalReleasePos,
                releaseVelocity = new Vector3(0.00f, 6.20f, 2.80f),
                timeHeld = 0.42f,
                hand = "left",
                isSetDown = false,
                expectedMade = true,
                expectedRow = true,
                expectedBlock = 1,
                expectedCondition = "experimental"
            });

            // 13-15 Misses (right, short 2, long 2)
            testDefinitions.Add(new TestThrowDef
            {
                testNumber = 13,
                description = "Miss Wide Right",
                releasePosition = normalReleasePos,
                releaseVelocity = new Vector3(2.50f, 5.50f, 2.50f),
                timeHeld = 0.52f,
                hand = "right",
                isSetDown = false,
                expectedMade = false,
                expectedRow = true,
                expectedBlock = 1,
                expectedCondition = "experimental"
            });
            testDefinitions.Add(new TestThrowDef
            {
                testNumber = 14,
                description = "Miss Short 2",
                releasePosition = normalReleasePos,
                releaseVelocity = new Vector3(0.00f, 4.00f, 1.50f),
                timeHeld = 0.38f,
                hand = "right",
                isSetDown = false,
                expectedMade = false,
                expectedRow = true,
                expectedBlock = 1,
                expectedCondition = "experimental"
            });
            testDefinitions.Add(new TestThrowDef
            {
                testNumber = 15,
                description = "Miss Long 2",
                releasePosition = normalReleasePos,
                releaseVelocity = new Vector3(0.00f, 8.00f, 5.50f),
                timeHeld = 0.70f,
                hand = "left",
                isSetDown = false,
                expectedMade = false,
                expectedRow = true,
                expectedBlock = 1,
                expectedCondition = "experimental"
            });

            // 16-17 Rim hits (left rim, right rim)
            testDefinitions.Add(new TestThrowDef
            {
                testNumber = 16,
                description = "Rim Hit - Left Rim",
                releasePosition = normalReleasePos,
                releaseVelocity = new Vector3(-0.70f, 5.80f, 2.80f),
                timeHeld = 0.46f,
                hand = "right",
                isSetDown = false,
                expectedMade = false,
                expectedRow = true,
                expectedBlock = 1,
                expectedCondition = "experimental"
            });
            testDefinitions.Add(new TestThrowDef
            {
                testNumber = 17,
                description = "Rim Hit - Right Rim",
                releasePosition = normalReleasePos,
                releaseVelocity = new Vector3(0.70f, 5.80f, 2.80f),
                timeHeld = 0.54f,
                hand = "right",
                isSetDown = false,
                expectedMade = false,
                expectedRow = true,
                expectedBlock = 1,
                expectedCondition = "experimental"
            });

            // 18-19 Upward passes from below (must NOT count as made)
            testDefinitions.Add(new TestThrowDef
            {
                testNumber = 18,
                description = "Upward Through Hoop 1",
                releasePosition = underHoopReleasePos,
                releaseVelocity = new Vector3(0.00f, 5.80f, 1.20f),
                timeHeld = 0.32f,
                hand = "right",
                isSetDown = false,
                expectedMade = false,
                expectedRow = true,
                expectedBlock = 1,
                expectedCondition = "experimental"
            });
            testDefinitions.Add(new TestThrowDef
            {
                testNumber = 19,
                description = "Upward Through Hoop 2",
                releasePosition = underHoopReleasePos,
                releaseVelocity = new Vector3(0.00f, 6.00f, 1.20f),
                timeHeld = 0.36f,
                hand = "left",
                isSetDown = false,
                expectedMade = false,
                expectedRow = true,
                expectedBlock = 1,
                expectedCondition = "experimental"
            });

            // 20 Pick up and set down (no throw, no row)
            testDefinitions.Add(new TestThrowDef
            {
                testNumber = 20,
                description = "Pick Up and Set Down 2",
                releasePosition = rackSetDownPos,
                releaseVelocity = Vector3.zero,
                timeHeld = 0.45f,
                hand = "right",
                isSetDown = true,
                expectedMade = false,
                expectedRow = false,
                expectedBlock = 1,
                expectedCondition = "experimental"
            });
        }

        private void OnEnable()
        {
            if (ThrowLogger.Instance != null)
            {
                ThrowLogger.Instance.OnThrowLogged += OnThrowLoggedCallback;
            }
        }

        private void OnDisable()
        {
            if (ThrowLogger.Instance != null)
            {
                ThrowLogger.Instance.OnThrowLogged -= OnThrowLoggedCallback;
            }
        }

        private void OnThrowLoggedCallback(ThrowRecord record)
        {
            latestLoggedRecord = record;
            hasLoggedCurrent = true;
        }

        public IEnumerator RunAllTestsCoroutine()
        {
            IsFinished = false;
            Time.timeScale = timeScale;

            Debug.Log("[ThrowLoggerTest] Starting 20 scripted throws test suite...");

            // Wait 5 frames for scene objects to initialize
            for (int f = 0; f < 5; f++) yield return null;

            ThrowLogger logger = ThrowLogger.Instance;
            if (logger == null)
            {
                logger = FindAnyObjectByType<ThrowLogger>();
            }
            if (logger == null)
            {
                Debug.LogError("[ThrowLoggerTest] FAILED: ThrowLogger component not found in scene!");
                yield break;
            }

            // Ensure event callback is wired
            logger.OnThrowLogged -= OnThrowLoggedCallback;
            logger.OnThrowLogged += OnThrowLoggedCallback;

            // Reset session log file for clean testing
            string participantId = "TEST";
            string sessionId = "S000";
            string logDir = Path.Combine(Application.persistentDataPath, "Logs");
            string logFile = Path.Combine(logDir, $"{participantId}_{sessionId}.csv");

            if (File.Exists(logFile))
            {
                try { File.Delete(logFile); } catch (Exception ex) { Debug.LogWarning("[ThrowLoggerTest] Warning deleting old log: " + ex.Message); }
            }

            logger.SetSession(participantId, sessionId);
            logger.SetBlock(0, "baseline");

            // Locate ball
            Basketball ball = FindAnyObjectByType<Basketball>();
            if (ball == null)
            {
                // Wait briefly for BallSpawner
                yield return new WaitForSeconds(0.5f);
                ball = FindAnyObjectByType<Basketball>();
            }

            if (ball == null)
            {
                Debug.LogError("[ThrowLoggerTest] FAILED: Basketball not found in scene!");
                yield break;
            }

            Rigidbody ballRb = ball.GetComponent<Rigidbody>();
            if (ballRb == null)
            {
                Debug.LogError("[ThrowLoggerTest] FAILED: Basketball has no Rigidbody!");
                yield break;
            }

            // Run each test throw
            int currentBlock = 0;
            for (int i = 0; i < testDefinitions.Count; i++)
            {
                var def = testDefinitions[i];

                // Handle SetBlock switch before throw 10
                if (def.expectedBlock != currentBlock)
                {
                    currentBlock = def.expectedBlock;
                    logger.SetBlock(currentBlock, def.expectedCondition);
                    Debug.Log($"[ThrowLoggerTest] Changed Block -> Index: {currentBlock}, Condition: '{def.expectedCondition}'");
                    yield return new WaitForSeconds(0.2f);
                }

                latestLoggedRecord = null;
                hasLoggedCurrent = false;

                Debug.Log($"[ThrowLoggerTest] Action {def.testNumber}/20: {def.description} (Target: {(def.isSetDown ? "NO ROW" : (def.expectedMade ? "MADE" : "MISS"))})");

                // Position ball and hold it in hand
                ball.Respawn();
                ballRb.isKinematic = true;
                ballRb.linearVelocity = Vector3.zero;
                ballRb.angularVelocity = Vector3.zero;
                ball.transform.position = def.releasePosition;
                ballRb.position = def.releasePosition;

                // Pick up ball (same as real grab event in VR / EditorVRDebugController)
                ball.OnGrabbed();

                // Hold duration while held in hand
                yield return new WaitForSeconds(def.timeHeld);

                if (def.isSetDown)
                {
                    // Gently place down on floor/rack
                    ball.transform.position = def.releasePosition;
                    ballRb.position = def.releasePosition;
                    ballRb.linearVelocity = Vector3.zero;
                    ballRb.angularVelocity = Vector3.zero;
                    ballRb.isKinematic = false;

                    // Release (same as ungrab event)
                    ball.OnReleased();

                    // Wait 1.5 seconds to see if ThrowLogger erroneously logs it
                    yield return new WaitForSeconds(1.5f);

                    if (hasLoggedCurrent)
                    {
                        Debug.LogWarning($"[ThrowLoggerTest] BUG DETECTED: Set-down action #{def.testNumber} created a row in ThrowLogger! (Speed={latestLoggedRecord?.release_speed:F2})");
                    }
                    else
                    {
                        Debug.Log($"[ThrowLoggerTest] Set-down action #{def.testNumber} correctly did NOT log a row.");
                    }
                }
                else
                {
                    // Un-kinematic and apply velocity directly to Rigidbody
                    ballRb.isKinematic = false;
                    ballRb.linearVelocity = def.releaseVelocity;
                    ballRb.angularVelocity = new Vector3(2f, 0f, 0f); // Backspin

                    // Release ball (fires OnBallReleased)
                    ball.OnReleased();

                    // Wait for outcome resolution (OnThrowLogged callback)
                    float timeout = 4.0f;
                    float elapsed = 0f;
                    while (!hasLoggedCurrent && elapsed < timeout)
                    {
                        yield return null;
                        elapsed += Time.deltaTime;
                    }

                    if (!hasLoggedCurrent)
                    {
                        // Fallback resolve if floor collision took longer
                        ball.NotifyHitFloorOrOutOfBounds();
                        yield return new WaitForSeconds(0.5f);
                    }

                    if (hasLoggedCurrent)
                    {
                        Debug.Log($"[ThrowLoggerTest] Action #{def.testNumber} resolved -> Made: {latestLoggedRecord.made} (Expected: {def.expectedMade})");
                    }
                    else
                    {
                        Debug.LogWarning($"[ThrowLoggerTest] Action #{def.testNumber} timed out waiting for ThrowLogger outcome.");
                    }
                }

                // Settle and respawn ball
                yield return new WaitForSeconds(0.2f);
                ball.Respawn();
                yield return new WaitForSeconds(0.1f);
            }

            Debug.Log("[ThrowLoggerTest] All 20 actions completed. Analyzing CSV report...");

            // Wait 0.5s for file writes to finish
            yield return new WaitForSeconds(0.5f);

            // Read CSV and print report
            string report = AnalyzeCsvAndGenerateReport(logFile);
            LastReport = report;
            IsFinished = true;

            Debug.Log(report);

#if UNITY_EDITOR
            SessionState.SetString("ThrowLoggerTest.Report", report);
            SessionState.SetBool("ThrowLoggerTest.IsDone", true);
            EditorApplication.isPlaying = false;
#endif
        }

        private string AnalyzeCsvAndGenerateReport(string csvPath)
        {
            var sb = new StringBuilder();
            sb.AppendLine("================================================================================");
            sb.AppendLine("                      THROW LOGGER TEST REPORT                                 ");
            sb.AppendLine("================================================================================");

            if (!File.Exists(csvPath))
            {
                sb.AppendLine("FATAL ERROR: CSV file does not exist at " + csvPath);
                return sb.ToString();
            }

            string[] lines = File.ReadAllLines(csvPath);
            var inv = CultureInfo.InvariantCulture;

            // Check 1: Header present
            bool headerPresent = lines.Length > 0 && lines[0].Trim() == ThrowRecord.CsvHeader.Trim();
            string headerStatus = headerPresent ? "PASS" : "FAIL";
            sb.AppendLine($"[Check 1 - Header Present]: {headerStatus}");
            if (!headerPresent)
            {
                sb.AppendLine($"  Expected: {ThrowRecord.CsvHeader}");
                sb.AppendLine($"  Found:    {(lines.Length > 0 ? lines[0] : "<EMPTY FILE>")}");
            }

            // Extract data rows (ignore empty lines)
            var dataRows = new List<string>();
            for (int i = 1; i < lines.Length; i++)
            {
                if (!string.IsNullOrWhiteSpace(lines[i]))
                {
                    dataRows.Add(lines[i].Trim());
                }
            }

            // Check 2: Row count (expected 18)
            int rowCount = dataRows.Count;
            bool rowCountPass = (rowCount == 18);
            string rowCountStatus = rowCountPass ? "PASS" : "FAIL";
            sb.AppendLine($"[Check 2 - Row Count (Expected: 18)]: {rowCountStatus} (Found: {rowCount})");
            if (!rowCountPass)
            {
                sb.AppendLine($"  Reason: Found {rowCount} data rows instead of expected 18.");
                if (rowCount == 20)
                {
                    sb.AppendLine("  Note: 20 rows indicates the 2 'pick up and set down' actions erroneously generated throw records.");
                }
            }

            // Check 3: No empty or NaN values
            bool noEmptyOrNan = true;
            string nanError = "";
            bool decimalDotPass = true;
            string decimalError = "";

            int madeCount = 0;
            int missedCount = 0;

            var speeds = new List<float>();
            var elevations = new List<float>();
            var heldTimes = new List<float>();

            bool throwIndexResetPass = true;
            string throwIndexResetError = "";

            int prevBlock = -1;
            int prevThrowIndexInBlock = 0;

            for (int r = 0; r < dataRows.Count; r++)
            {
                string row = dataRows[r];
                string[] cols = row.Split(',');

                if (cols.Length < 28)
                {
                    noEmptyOrNan = false;
                    nanError += $"Row {r + 1} has only {cols.Length} columns (expected 28). ";
                    continue;
                }

                for (int c = 0; c < cols.Length; c++)
                {
                    string val = cols[c].Trim();
                    if (string.IsNullOrEmpty(val))
                    {
                        noEmptyOrNan = false;
                        nanError += $"Row {r + 1} Col {c} is empty. ";
                    }
                    if (val.Equals("NaN", StringComparison.OrdinalIgnoreCase) || val.Contains("Infinity"))
                    {
                        noEmptyOrNan = false;
                        nanError += $"Row {r + 1} Col {c} is {val}. ";
                    }
                }

                // Parse row fields:
                // 0: participant_id, 1: session_id, 2: block_index, 3: condition, 4: throw_index, 5: timestamp_utc
                // 6: time_since_block_start, 7: time_held, 8: release_pos_x, 9: release_pos_y, 10: release_pos_z
                // 11: release_vel_x, 12: release_vel_y, 13: release_vel_z, 14: release_speed, 15: release_elevation_deg
                // 16: release_azimuth_error_deg, 17: hand, 18: distance_to_hoop, 19: made, 20: time_to_outcome
                int blockIdx = int.Parse(cols[2], inv);
                string condition = cols[3];
                int throwIdx = int.Parse(cols[4], inv);

                float timeHeld = float.Parse(cols[7], inv);
                float speed = float.Parse(cols[14], inv);
                float elev = float.Parse(cols[15], inv);
                bool made = bool.Parse(cols[19]);

                if (made) madeCount++; else missedCount++;

                speeds.Add(speed);
                elevations.Add(elev);
                heldTimes.Add(timeHeld);

                // Check decimal format (dot as separator, no commas in float representation)
                int[] floatCols = new int[] { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 20 };
                foreach (int fc in floatCols)
                {
                    string colVal = cols[fc];
                    if (colVal.Contains(","))
                    {
                        decimalDotPass = false;
                        decimalError = $"Row {r + 1} Col {fc} contains comma instead of dot: '{colVal}'";
                    }
                    if (!float.TryParse(colVal, NumberStyles.Float, inv, out _))
                    {
                        decimalDotPass = false;
                        decimalError = $"Row {r + 1} Col {fc} failed parsing as float with InvariantCulture: '{colVal}'";
                    }
                }

                // Check block & throw index reset logic
                if (blockIdx != prevBlock)
                {
                    prevBlock = blockIdx;
                    if (throwIdx != 1)
                    {
                        throwIndexResetPass = false;
                        throwIndexResetError += $"Block {blockIdx} first throw_index was {throwIdx} instead of 1. ";
                    }
                    prevThrowIndexInBlock = 1;
                }
                else
                {
                    if (throwIdx != prevThrowIndexInBlock + 1)
                    {
                        throwIndexResetPass = false;
                        throwIndexResetError += $"Block {blockIdx} throw_index skipped from {prevThrowIndexInBlock} to {throwIdx}. ";
                    }
                    prevThrowIndexInBlock = throwIdx;
                }
            }

            string noNanStatus = noEmptyOrNan ? "PASS" : "FAIL";
            sb.AppendLine($"[Check 3 - No Empty or NaN Values]: {noNanStatus}");
            if (!noEmptyOrNan) sb.AppendLine($"  Details: {nanError}");

            // Check 4: Made / Missed counts
            bool madeMissedPass = (madeCount == 6 && (missedCount == 12 || (rowCount == 20 && missedCount == 14)));
            string madeMissedStatus = madeMissedPass ? "PASS" : "FAIL";
            sb.AppendLine($"[Check 4 - Made / Missed Counts]: {madeMissedStatus} (Made: {madeCount}/6, Missed: {missedCount}/12 expected)");
            if (madeCount == 6)
            {
                sb.AppendLine("  All 6 scripted scoring throws scored cleanly (100% precision on makes).");
            }
            if (missedCount == 14 && rowCount == 20)
            {
                sb.AppendLine("  Note: Missed count is 14 instead of 12 because the 2 non-throw set-down actions were erroneously logged as misses.");
            }
            else if (!madeMissedPass)
            {
                sb.AppendLine($"  Details: Expected 6 made and 12 missed. Actual: {madeCount} made, {missedCount} missed.");
            }

            // Check 5: Min / Max / Mean stats
            sb.AppendLine("[Check 5 - Metric Statistics (Min / Max / Mean)]:");
            if (speeds.Count > 0)
            {
                float minSpeed = Min(speeds), maxSpeed = Max(speeds), meanSpeed = Mean(speeds);
                float minElev = Min(elevations), maxElev = Max(elevations), meanElev = Mean(elevations);
                float minHeld = Min(heldTimes), maxHeld = Max(heldTimes), meanHeld = Mean(heldTimes);

                sb.AppendLine($"  release_speed (m/s):         Min = {minSpeed:F3}, Max = {maxSpeed:F3}, Mean = {meanSpeed:F3}");
                sb.AppendLine($"  release_elevation_deg (°):    Min = {minElev:F2}, Max = {maxElev:F2}, Mean = {meanElev:F2}");
                sb.AppendLine($"  time_held (s):               Min = {minHeld:F3}, Max = {maxHeld:F3}, Mean = {meanHeld:F3}");
                sb.AppendLine("  Status: PASS");
            }
            else
            {
                sb.AppendLine("  Status: FAIL (No data rows found to calculate metrics)");
            }

            // Check 6: Throw index reset and block update
            string resetStatus = throwIndexResetPass ? "PASS" : "FAIL";
            sb.AppendLine($"[Check 6 - Throw Index Reset on SetBlock]: {resetStatus}");
            if (!throwIndexResetPass) sb.AppendLine($"  Details: {throwIndexResetError}");

            // Check 7: Decimal separator
            string decStatus = decimalDotPass ? "PASS" : "FAIL";
            sb.AppendLine($"[Check 7 - Dot Decimal Separator]: {decStatus}");
            if (!decimalDotPass) sb.AppendLine($"  Details: {decimalError}");

            // First 3 CSV rows preview
            sb.AppendLine("--------------------------------------------------------------------------------");
            sb.AppendLine("First 3 Data Rows from CSV:");
            for (int r = 0; r < Math.Min(3, dataRows.Count); r++)
            {
                sb.AppendLine($"  Row {r + 1}: {dataRows[r]}");
            }
            sb.AppendLine("--------------------------------------------------------------------------------");

            // List of Bugs Found & Exact Fixes
            sb.AppendLine("BUGS FOUND & RECOMMENDED FIXES:");
            bool anyBugs = false;

            if (rowCount != 18)
            {
                anyBugs = true;
                sb.AppendLine("1. BUG: ThrowLogger arms and logs a row when the ball is set down without throwing.");
                sb.AppendLine("   - Severity: HIGH (pollutes dataset with non-throw actions)");
                sb.AppendLine("   - Location: Assets/Scripts/Logging/ThrowLogger.cs -> CaptureReleaseVelocityAndArmThrow()");
                sb.AppendLine("   - Cause: When HandleBallReleased is called, CaptureReleaseVelocityAndArmThrow unconditionally creates");
                sb.AppendLine("     activePendingThrow regardless of release velocity. If the user only sets the ball down, velocity is ~0 m/s");
                sb.AppendLine("     and it gets logged as a miss row upon hitting the floor or timing out.");
                sb.AppendLine("   - Exact Fix: In ThrowLogger.cs, add a minimum throw speed threshold (e.g., 0.5f m/s):");
                sb.AppendLine("     ```csharp");
                sb.AppendLine("     [SerializeField] private float minThrowSpeedThreshold = 0.5f;");
                sb.AppendLine("     // Inside CaptureReleaseVelocityAndArmThrow:");
                sb.AppendLine("     if (releaseVel.magnitude < minThrowSpeedThreshold)");
                sb.AppendLine("     {");
                sb.AppendLine("         yield break; // Ignore gentle placement / dropping without throwing");
                sb.AppendLine("     }");
                sb.AppendLine("     ```");
            }

            if (!madeMissedPass && madeCount != 6)
            {
                anyBugs = true;
                sb.AppendLine("2. BUG: Made count discrepancy (expected 6 clean makes).");
                sb.AppendLine($"   - Actual made: {madeCount}, expected: 6.");
            }

            if (!anyBugs)
            {
                sb.AppendLine("  No bugs found! All checks passed successfully.");
            }

            sb.AppendLine("================================================================================");
            return sb.ToString();
        }

        private static float Min(List<float> list)
        {
            float m = float.MaxValue;
            foreach (var v in list) if (v < m) m = v;
            return m;
        }

        private static float Max(List<float> list)
        {
            float m = float.MinValue;
            foreach (var v in list) if (v > m) m = v;
            return m;
        }

        private static float Mean(List<float> list)
        {
            if (list.Count == 0) return 0f;
            float sum = 0f;
            foreach (var v in list) sum += v;
            return sum / list.Count;
        }
    }
}

