using System.Collections;
using System.Collections.Generic;
using Oculus.Interaction;
using Oculus.Interaction.Input;
using UnityEngine;

/// <summary>
/// Controller-only throw estimator for a Meta Interaction SDK Grabbable.
/// Samples world-space controller positions, not the grabbed ball's position.
/// Designed for one-controller-at-a-time basketball throws.
/// </summary>
[RequireComponent(typeof(Rigidbody), typeof(Grabbable))]
public class BasketballThrowController : MonoBehaviour
{
    [Header("Assign the two Controller components on OVRControllers")]
    [SerializeField] private Controller leftController;
    [SerializeField] private Controller rightController;

    [Header("Throw tuning")]
    [SerializeField, Range(0.04f, 0.25f)] private float sampleWindowSeconds = 0.10f;
    [SerializeField, Min(0f)] private float throwMultiplier = 1f;
    [SerializeField, Min(0f)] private float maximumSpeed = 0f; // 0 = no cap
    [SerializeField] private bool debugThrows = true;

    private struct PositionSample
    {
        public float time;
        public Vector3 position;
        public PositionSample(float time, Vector3 position)
        {
            this.time = time;
            this.position = position;
        }
    }

    private readonly List<PositionSample> leftSamples = new List<PositionSample>();
    private readonly List<PositionSample> rightSamples = new List<PositionSample>();
    private Rigidbody body;
    private Grabbable grabbable;
    private int activePointer = -1;
    private Controller activeController;
    private Coroutine pendingThrow;

    private float nextResolveTime;

    private void ResolveControllers()
    {
        if (leftController != null && rightController != null) return;
        if (Time.time < nextResolveTime) return; // throttle to every 0.5 s
        nextResolveTime = Time.time + 0.5f;

        foreach (var c in FindObjectsByType<Controller>(FindObjectsSortMode.None))
        {
            if (leftController == null && c.Handedness == Handedness.Left) leftController = c;
            else if (rightController == null && c.Handedness == Handedness.Right) rightController = c;
        }

        if (leftController == null || rightController == null)
            Debug.LogWarning("BasketballThrowController: controller(s) not found yet.", this);
    }

    private void Awake()
    {
        body = GetComponent<Rigidbody>();
        grabbable = GetComponent<Grabbable>();
    }

    private void OnEnable()
    {
        grabbable.WhenPointerEventRaised += HandlePointerEvent;
        ResolveControllers();
    }

    private void OnDisable()
    {
        grabbable.WhenPointerEventRaised -= HandlePointerEvent;
        if (pendingThrow != null) StopCoroutine(pendingThrow);
        pendingThrow = null;
        activePointer = -1;
        activeController = null;
        leftSamples.Clear();
        rightSamples.Clear();
    }

    // Sample both controllers every frame, including while the ball is unheld.
    private void LateUpdate()
    {
        ResolveControllers();
        SampleController(leftController, leftSamples);
        SampleController(rightController, rightSamples);
    }

    private void SampleController(Controller controller, List<PositionSample> samples)
    {
        if (controller == null || !controller.IsConnected || !controller.TryGetPose(out Pose pose))
        {
            samples.Clear();
            return;
        }

        float now = Time.time;
        if (samples.Count == 0 || now > samples[samples.Count - 1].time)
            samples.Add(new PositionSample(now, pose.position));

        float oldest = now - sampleWindowSeconds - 0.05f;
        while (samples.Count > 2 && samples[1].time < oldest)
            samples.RemoveAt(0);
    }

    private void HandlePointerEvent(PointerEvent evt)
    {
        if (evt.Type == PointerEventType.Select)
        {
            if (pendingThrow != null)
            {
                StopCoroutine(pendingThrow);
                pendingThrow = null;
            }
            if (activePointer != -1) return; // one controller per throw
            activePointer = evt.Identifier;
            activeController = FindNearestController(evt.Pose.position);
        }
        else if (evt.Type == PointerEventType.Cancel && evt.Identifier == activePointer)
        {
            activePointer = -1;
            activeController = null;
        }
        else if (evt.Type == PointerEventType.Unselect && evt.Identifier == activePointer)
        {
            Controller releasedController = activeController;
            activePointer = -1;
            activeController = null;
            if (pendingThrow != null) StopCoroutine(pendingThrow);
            pendingThrow = StartCoroutine(ApplyThrowAfterRelease(releasedController));
        }
    }

    
    private Controller FindNearestController(Vector3 grabPosition)
    {
        Pose leftPose = Pose.identity;
        Pose rightPose = Pose.identity;

        bool hasLeft = leftController != null
            && leftController.IsConnected
            && leftController.TryGetPose(out leftPose);

        bool hasRight = rightController != null
            && rightController.IsConnected
            && rightController.TryGetPose(out rightPose);

        if (hasLeft && hasRight)
        {
            float leftDistance = Vector3.SqrMagnitude(
                grabPosition - leftPose.position);

            float rightDistance = Vector3.SqrMagnitude(
                grabPosition - rightPose.position);

            return leftDistance <= rightDistance
                ? leftController
                : rightController;
        }

        if (hasLeft) return leftController;
        if (hasRight) return rightController;

        return null;
    }


    private Vector3 EstimateVelocity(Controller controller)
    {
        List<PositionSample> samples = controller == leftController ? leftSamples : rightSamples;
        if (controller == null || samples.Count < 2) return Vector3.zero;

        PositionSample latest = samples[samples.Count - 1];
        float targetTime = latest.time - sampleWindowSeconds;
        PositionSample earliest = samples[0];
        for (int i = samples.Count - 2; i >= 0; i--)
        {
            earliest = samples[i];
            if (samples[i].time <= targetTime) break;
        }
        float dt = latest.time - earliest.time;
        return dt > 0.0001f ? (latest.position - earliest.position) / dt : Vector3.zero;
    }

    private IEnumerator ApplyThrowAfterRelease(Controller controller)
    {
        // Give Grabbable a physics step to restore its non-kinematic state.
        // Capture the estimate immediately, before waiting.
        Vector3 velocity = EstimateVelocity(controller) * throwMultiplier;
        if (maximumSpeed > 0f) velocity = Vector3.ClampMagnitude(velocity, maximumSpeed);

        yield return new WaitForFixedUpdate();
        if (activePointer != -1) { pendingThrow = null; yield break; }
        if (body.isKinematic)
        {
            Debug.LogWarning("Basketball throw skipped: Rigidbody is still kinematic.", this);
            pendingThrow = null;
            yield break;
        }

        body.linearVelocity = velocity; // Unity 6
        body.angularVelocity = Vector3.zero; // baseline: no added spin
        if (debugThrows)
            Debug.Log($"Basketball controller throw: {(controller == leftController ? "Left" : "Right")}, speed={velocity.magnitude:F2} m/s, velocity={velocity}", this);
        pendingThrow = null;
    }
}
