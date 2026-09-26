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
        [SerializeField] private float restTimeBeforeReturn = 5f;
        [SerializeField] private float restVelocityThreshold = 0.15f;

        private Rigidbody rb;
        private Grabbable grabbable;
        private Vector3 initialSpawnPosition;
        private Quaternion initialSpawnRotation;
        private float restTimer = 0f;
        private bool isHeld = false;
        private bool hasBeenShot = false;

        public bool IsThreePointer { get; set; } = false;

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
                OnGrabbed();
            }
            else if (evt.Type == PointerEventType.Unselect)
            {
                OnReleased();
            }
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
            restTimer = 0f;
        }

        public void OnReleased()
        {
            isHeld = false;
            hasBeenShot = true;
            restTimer = 0f;

            // Check if player threw from beyond 3-point line (~6.75m from hoop)
            float distToHoop = Vector2.Distance(new Vector2(transform.position.x, transform.position.z), Vector2.zero);
            IsThreePointer = distToHoop >= 6.75f;
        }

        private void Update()
        {
            if (isHeld) return;

            // If ball falls below floor (e.g. out of bounds)
            if (transform.position.y < -2f)
            {
                Respawn();
                return;
            }

            // Auto-return if resting on ground after a shot
            if (hasBeenShot && rb.linearVelocity.magnitude < restVelocityThreshold)
            {
                restTimer += Time.deltaTime;
                if (restTimer >= restTimeBeforeReturn)
                {
                    Respawn();
                }
            }
            else
            {
                restTimer = 0f;
            }
        }

        public void Respawn()
        {
            rb.linearVelocity = Vector3.zero;
            rb.angularVelocity = Vector3.zero;
            transform.position = initialSpawnPosition;
            transform.rotation = initialSpawnRotation;
            hasBeenShot = false;
            restTimer = 0f;
        }

        private void OnCollisionEnter(Collision collision)
        {
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

