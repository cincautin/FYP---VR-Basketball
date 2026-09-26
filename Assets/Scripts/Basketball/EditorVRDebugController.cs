using UnityEngine;
using UnityEngine.InputSystem;
using Oculus.Interaction;

namespace VRBasketball
{
    /// <summary>
    /// Provides convenient WASD movement and Right-Click Mouse Look in the Unity Editor
    /// when testing without a VR headset, plus Left-Click mouse ball grabbing and throwing.
    /// Automatically disables when a real VR headset is connected and active.
    /// </summary>
    public class EditorVRDebugController : MonoBehaviour
    {
        [Header("Movement Settings")]
        [SerializeField] private float moveSpeed = 3.5f;
        [SerializeField] private float sprintSpeed = 6.0f;
        [SerializeField] private float mouseSensitivity = 2.0f;

        [Header("References")]
        [SerializeField] private Transform cameraTransform;

        [Header("Throw Settings")]
        [SerializeField] private float throwForce = 8.0f;
        [SerializeField] private float upwardArc = 2.5f;

        private float pitch = 0f;
        private float yaw = 0f;
        private Rigidbody heldBall = null;
        private Basketball heldBasketball = null;
        private Vector3 prevMouseWorldPos;
        private Vector3 mouseVelocity;

        private void Start()
        {
            if (cameraTransform == null)
            {
                Camera cam = GetComponentInChildren<Camera>();
                if (cam != null) cameraTransform = cam.transform;
            }

            if (cameraTransform != null)
            {
                yaw = transform.eulerAngles.y;
                pitch = cameraTransform.localEulerAngles.x;
            }
        }

        private void Update()
        {
#if !UNITY_EDITOR
            // In standalone builds, only use if XR device is not active
            if (UnityEngine.XR.XRSettings.isDeviceActive) return;
#endif

            var mouse = Mouse.current;
            var keyboard = Keyboard.current;
            if (mouse == null || keyboard == null) return;

            HandleMouseLook(mouse);
            HandleMovement(keyboard);
            HandleBallInteraction(mouse, keyboard);
        }

        private void HandleMouseLook(Mouse mouse)
        {
            if (mouse.rightButton.isPressed)
            {
                Cursor.lockState = CursorLockMode.Locked;
                Cursor.visible = false;

                Vector2 delta = mouse.delta.ReadValue() * (mouseSensitivity * 0.1f);
                yaw += delta.x;
                pitch = Mathf.Clamp(pitch - delta.y, -80f, 85f);

                transform.rotation = Quaternion.Euler(0f, yaw, 0f);
                if (cameraTransform != null)
                {
                    cameraTransform.localRotation = Quaternion.Euler(pitch, 0f, 0f);
                }
            }
            else
            {
                if (Cursor.lockState == CursorLockMode.Locked)
                {
                    Cursor.lockState = CursorLockMode.None;
                    Cursor.visible = true;
                }
            }
        }

        private void HandleMovement(Keyboard keyboard)
        {
            float speed = keyboard.leftShiftKey.isPressed ? sprintSpeed : moveSpeed;
            Vector3 input = Vector3.zero;

            if (keyboard.wKey.isPressed) input += transform.forward;
            if (keyboard.sKey.isPressed) input -= transform.forward;
            if (keyboard.dKey.isPressed) input += transform.right;
            if (keyboard.aKey.isPressed) input -= transform.right;
            if (keyboard.eKey.isPressed) input += Vector3.up;
            if (keyboard.qKey.isPressed) input -= Vector3.up;

            if (input.sqrMagnitude > 0.01f)
            {
                input.y = 0f; // Keep movement grounded unless Q/E used
                if (keyboard.eKey.isPressed) input.y += 1f;
                if (keyboard.qKey.isPressed) input.y -= 1f;

                transform.position += input.normalized * (speed * Time.deltaTime);

                // Prevent falling below floor
                if (transform.position.y < 0f)
                {
                    Vector3 pos = transform.position;
                    pos.y = 0f;
                    transform.position = pos;
                }
            }
        }

        private void HandleBallInteraction(Mouse mouse, Keyboard keyboard)
        {
            if (cameraTransform == null) return;

            // Pick up ball with Left Mouse Button
            if (mouse.leftButton.wasPressedThisFrame && heldBall == null)
            {
                Ray ray = new Ray(cameraTransform.position, cameraTransform.forward);
                if (Physics.Raycast(ray, out RaycastHit hit, 4.0f))
                {
                    Basketball b = hit.collider.GetComponentInParent<Basketball>();
                    if (b != null)
                    {
                        heldBall = b.GetComponent<Rigidbody>();
                        heldBasketball = b;
                        if (heldBall != null)
                        {
                            heldBall.isKinematic = true;
                            heldBasketball.OnGrabbed();
                        }
                    }
                }
            }

            // Hold ball in front of camera
            if (heldBall != null)
            {
                Vector3 targetPos = cameraTransform.position + cameraTransform.forward * 0.7f - cameraTransform.up * 0.15f;
                heldBall.transform.position = Vector3.Lerp(heldBall.transform.position, targetPos, Time.deltaTime * 25f);

                // Track mouse/hand throw velocity
                mouseVelocity = (targetPos - prevMouseWorldPos) / Time.deltaTime;
                prevMouseWorldPos = targetPos;

                // Release / Throw with Left Mouse Release or Space Key
                if (mouse.leftButton.wasReleasedThisFrame || keyboard.spaceKey.wasPressedThisFrame)
                {
                    heldBall.isKinematic = false;
                    Vector3 forwardThrow = cameraTransform.forward * throwForce + Vector3.up * upwardArc;
                    heldBall.linearVelocity = forwardThrow;
                    heldBall.angularVelocity = cameraTransform.right * 10f; // Backspin!

                    heldBasketball.OnReleased();
                    heldBall = null;
                    heldBasketball = null;
                }
            }
        }
    }
}
