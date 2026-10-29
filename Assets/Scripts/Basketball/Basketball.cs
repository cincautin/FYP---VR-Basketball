using System;
using UnityEngine;
using Oculus.Interaction;

namespace VRBasketball
{
    [RequireComponent(typeof(Rigidbody))]
    public class Basketball : MonoBehaviour
    {
        [Header("Audio")]
        [SerializeField] private AudioSource audioSource;
        [SerializeField] private AudioClip bounceSound;
        [SerializeField] private AudioClip rimSound;
        [SerializeField] private AudioClip backboardSound;

        [Header("Auto Return")]
        [Tooltip("Seconds after a shot first touches the floor before the ball returns to the rack.")]
        [SerializeField] private float returnDelayAfterFloorHit = 1.5f;
        [Tooltip("Fallback: seconds a shot ball must rest somewhere else (table, backboard) before it returns.")]
        [SerializeField] private float restTimeBeforeReturn = 2f;
        [SerializeField] private float restVelocityThreshold = 0.15f;
        [Tooltip("A ball knocked off the rack without being thrown returns after resting this long.")]
        [SerializeField] private float strayReturnSeconds = 3f;
        [Tooltip("How far from its spot a ball must be to count as a stray (metres).")]
        [SerializeField] private float strayMinDistance = 0.4f;

        private Rigidbody rb;
        private Grabbable grabbable;
        private Vector3 initialSpawnPosition;
        private Quaternion initialSpawnRotation;
        private float restTimer = 0f;
        private float strayTimer = 0f;
        private bool isHeld = false;
        private bool hasBeenShot = false;
        private bool hitFloorSinceShot = false;
        private float floorHitTime = 0f;

        private OVRCameraRig cachedRig;
        private string currentGrabHand = "right";
        private bool grabEventRaised = false;

        public bool IsThreePointer { get; set; } = false;
        public bool IsHeld => isHeld;

        // Static events for logging and game hooks
        public static event Action<Basketball, string> OnBallGrabbed;
        public static event Action<Basketball> OnBallReleased;
        public static event Action<Basketball> OnBallHitFloorOrOutOfBounds;

        private void Awake()
        {
            rb = GetComponent<Rigidbody>();
            grabbable = GetComponent<Grabbable>();

            if (audioSource == null)
            {
                audioSource = GetComponent<AudioSource>();
                if (audioSource == null)
                {
                    audioSource = gameObject.AddComponent<AudioSource>();
                    audioSource.playOnAwake = false;
                    audioSource.spatialBlend = 1f;
                }
            }
            initialSpawnPosition = transform.position;
            initialSpawnRotation = transform.rotation;
        }

        private void Start()
        {
            cachedRig = FindAnyObjectByType<OVRCameraRig>();

            if (grabbable != null)
            {
                grabbable.WhenPointerEventRaised += HandlePointerEvent;
            }
        }

        private void OnDestroy()
        {
            if (grabbable != null)
            {
                grabbable.WhenPointerEventRaised -= HandlePointerEvent;
            }
        }

        private void HandlePointerEvent(PointerEvent evt)
        {
            if (evt.Type == PointerEventType.Select)
            {
                currentGrabHand = DetermineHand(evt);
                OnGrabbed();
            }
            else if (evt.Type == PointerEventType.Unselect)
            {
                OnReleased();
            }
        }

        private string DetermineHand(PointerEvent evt)
        {
            if (cachedRig == null)
            {
                cachedRig = FindAnyObjectByType<OVRCameraRig>();
            }

            if (cachedRig != null && cachedRig.leftHandAnchor != null && cachedRig.rightHandAnchor != null)
            {
                Vector3 checkPos = (evt.Pose.position != Vector3.zero) ? evt.Pose.position : transform.position;
                float dLeft = Vector3.Distance(checkPos, cachedRig.leftHandAnchor.position);
                float dRight = Vector3.Distance(checkPos, cachedRig.rightHandAnchor.position);
                return dLeft < dRight ? "left" : "right";
            }

            return "right";
        }

        public void SetSpawnPoint(Vector3 pos, Quaternion rot)
        {
            initialSpawnPosition = pos;
            initialSpawnRotation = rot;
        }

        public void OnGrabbed()
        {
            isHeld = true;
            hasBeenShot = false;
            hitFloorSinceShot = false;
            restTimer = 0f;
            strayTimer = 0f;

            if (!grabEventRaised)
            {
                grabEventRaised = true;
                OnBallGrabbed?.Invoke(this, currentGrabHand);
            }
        }

        public void OnReleased()
        {
            isHeld = false;
            hasBeenShot = true;
            hitFloorSinceShot = false;
            restTimer = 0f;
            strayTimer = 0f;

            // Check if player threw from beyond 3-point line (~6.75m from hoop)
            float distToHoop = Vector2.Distance(new Vector2(transform.position.x, transform.position.z), Vector2.zero);
            IsThreePointer = distToHoop >= 6.75f;

            if (grabEventRaised)
            {
                grabEventRaised = false;
                OnBallReleased?.Invoke(this);
            }
        }

        private void Update()
        {
            if (isHeld) return;

            // If ball falls below floor (e.g. out of bounds)
            if (transform.position.y < -2f)
            {
                if (hasBeenShot)
                {
                    OnBallHitFloorOrOutOfBounds?.Invoke(this);
                }
                Respawn();
                return;
            }

            if (hasBeenShot)
            {
                // Fast path: return a short while after the ball first touches the floor
                if (hitFloorSinceShot && Time.time - floorHitTime >= returnDelayAfterFloorHit)
                {
                    Respawn();
                    return;
                }

                // Fallback: ball came to rest somewhere else (table, backboard...)
                if (rb.linearVelocity.magnitude < restVelocityThreshold)
                {
                    restTimer += Time.deltaTime;
                    if (restTimer >= restTimeBeforeReturn)
                    {
                        OnBallHitFloorOrOutOfBounds?.Invoke(this);
                        Respawn();
                    }
                }
                else
                {
                    restTimer = 0f;
                }
            }
            else
            {
                // Stray ball: knocked off the rack without being thrown
                bool away = (transform.position - initialSpawnPosition).sqrMagnitude > strayMinDistance * strayMinDistance;
                if (away && rb.linearVelocity.magnitude < restVelocityThreshold)
                {
                    strayTimer += Time.deltaTime;
                    if (strayTimer >= strayReturnSeconds) Respawn();
                }
                else
                {
                    strayTimer = 0f;
                }
            }
        }

        public void Respawn()
        {
            rb.linearVelocity = Vector3.zero;
            rb.angularVelocity = Vector3.zero;
            transform.position = initialSpawnPosition;
            transform.rotation = initialSpawnRotation;
            hasBeenShot = false;
            hitFloorSinceShot = false;
            restTimer = 0f;
            strayTimer = 0f;
            grabEventRaised = false;
        }

        public void NotifyHitFloorOrOutOfBounds()
        {
            OnBallHitFloorOrOutOfBounds?.Invoke(this);
        }

        private void OnCollisionEnter(Collision collision)
        {
            if (hasBeenShot)
            {
                // Ball hits floor or ground surface
                if (collision.gameObject.name.Equals("Floor", StringComparison.OrdinalIgnoreCase) ||
                    collision.gameObject.CompareTag("Floor") ||
                    (collision.contacts.Length > 0 && collision.contacts[0].point.y < 0.2f &&
                     !collision.gameObject.CompareTag("Rim") && !collision.gameObject.CompareTag("Backboard")))
                {
                    if (!hitFloorSinceShot)
                    {
                        hitFloorSinceShot = true;
                        floorHitTime = Time.time;
                    }
                    OnBallHitFloorOrOutOfBounds?.Invoke(this);
                }
            }

            float impactSpeed = collision.relativeVelocity.magnitude;
            if (impactSpeed < 0.5f) return;

            float volume = Mathf.Clamp01(impactSpeed / 6f);

            if (collision.gameObject.CompareTag("Rim") && rimSound != null)
            {
                audioSource.PlayOneShot(rimSound, volume);
            }
            else if (collision.gameObject.CompareTag("Backboard") && backboardSound != null)
            {
                audioSource.PlayOneShot(backboardSound, volume);
            }
            else if (bounceSound != null)
            {
                audioSource.PlayOneShot(bounceSound, volume);
            }
        }
    }
}