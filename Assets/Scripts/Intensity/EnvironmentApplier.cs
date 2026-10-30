using System;
using System.Globalization;
using UnityEngine;
using UnityEngine.Rendering;
using FYP.Session;

namespace FYP.Intensity
{
    /// <summary>
    /// Applies the chosen environment (index = EnvironmentPreset: 0 Outdoor court, 1 Indoor gym, 2 Night court).
    /// Visual and audio only: turns listed objects on/off and changes lighting, fog and an ambience loop.
    /// Colliders are never touched, so the court, hoop and ball behave the same everywhere.
    /// A preset with "Use Scene Lighting" ticked uses the scene's own lighting as it was when Play started.
    /// PlayerChoiceElement only changes the environment while the block is paused (midpoint menu) or between blocks.
    /// </summary>
    public class EnvironmentApplier : MonoBehaviour
    {
        [Serializable]
        public class Preset
        {
            [Tooltip("Untick to hide this option from the choice menu (e.g. the stadium failed the headset test).")]
            public bool available = true;
            [Tooltip("On only in the presets that list them. Strip their colliders first (FYP > Environment > Strip Colliders From Selection).")]
            public GameObject[] objects = new GameObject[0];

            [Header("Lighting (ignored when Use Scene Lighting is ticked)")]
            public bool useSceneLighting = true;
            [Tooltip("Empty = keep the scene's skybox.")]
            public Material skybox;
            public Color ambientColor = new Color(0.5f, 0.5f, 0.5f);
            public Color sunColor = Color.white;
            [Tooltip("0 turns the sun off.")]
            public float sunIntensity = 1f;
            public Vector3 sunRotation = new Vector3(50f, -30f, 0f);
            [Range(0f, 1f)] public float reflectionIntensity = 1f;
            [Tooltip("Needs Project Settings > Graphics > Fog Modes = Custom with Exponential Squared ticked, or fog is stripped from the build.")]
            public bool fog;
            public Color fogColor = Color.black;
            public float fogDensity = 0.04f;

            [Header("Audio")]
            [Tooltip("Looping ambience (crowd, music). Empty = silent.")]
            public AudioClip loop;
            [Range(0f, 1f)] public float volume = 0.5f;
        }

        public static EnvironmentApplier Instance { get; private set; }

        [Tooltip("Order: 0 Outdoor court, 1 Indoor gym, 2 Night court.")]
        [SerializeField] private Preset[] presets =
        {
            new Preset(),
            new Preset
            {
                useSceneLighting = false, ambientColor = new Color(0.55f, 0.55f, 0.6f),
                sunColor = new Color(1f, 0.96f, 0.88f), sunIntensity = 0.9f, sunRotation = new Vector3(80f, 0f, 0f),
                reflectionIntensity = 0.5f
            },
            new Preset
            {
                useSceneLighting = false, ambientColor = new Color(0.08f, 0.09f, 0.14f),
                sunColor = new Color(0.85f, 0.9f, 1f), sunIntensity = 0.7f, sunRotation = new Vector3(75f, 20f, 0f),
                reflectionIntensity = 0.15f, fog = true, fogColor = new Color(0.01f, 0.01f, 0.03f), fogDensity = 0.04f
            },
        };
        [Tooltip("The scene's Directional Light. Leave empty to find it automatically.")]
        [SerializeField] private Light sun;
        [Tooltip("Leave empty and one is added (2D, looping).")]
        [SerializeField] private AudioSource ambience;
        [Tooltip("Leave empty to find it automatically.")]
        [SerializeField] private PlayerChoiceElement choice;

        private struct SceneLighting
        {
            public Material skybox;
            public AmbientMode ambientMode;
            public Color ambientSky, ambientEquator, ambientGround;
            public float ambientIntensity, reflectionIntensity;
            public SphericalHarmonicsL2 ambientProbe;
            public bool fog;
            public FogMode fogMode;
            public Color fogColor;
            public float fogDensity, fogStart, fogEnd;
            public bool sunEnabled;
            public Color sunColor;
            public float sunIntensity;
            public Quaternion sunRotation;
        }

        private SceneLighting scene;
        private bool subscribed;

        public EnvironmentPreset Current { get; private set; }

        /// <summary>False if the choice menu should hide this environment option.</summary>
        public static bool IsAvailable(int index)
        {
            if (Instance == null) return true;
            Preset[] ps = Instance.presets;
            return ps != null && index >= 0 && index < ps.Length && ps[index] != null && ps[index].available;
        }

        private void Awake()
        {
            if (Instance != null && Instance != this) { Destroy(this); return; }
            Instance = this;

            if (sun == null) sun = RenderSettings.sun;
            if (sun == null)
                foreach (Light l in FindObjectsByType<Light>(FindObjectsInactive.Exclude))
                    if (l.type == LightType.Directional) { sun = l; break; }

            if (ambience == null)
            {
                ambience = gameObject.AddComponent<AudioSource>();
                ambience.playOnAwake = false;
                ambience.spatialBlend = 0f;
            }
            ambience.loop = true;

            CaptureScene();
        }

        private void Start()
        {
            if (choice == null) choice = FindAnyObjectByType<PlayerChoiceElement>();
            if (choice != null)
            {
                choice.OnChoiceChanged += HandleChoiceChanged;
                subscribed = true;
                Apply(choice.Current.Environment);
            }
            else
            {
                Debug.LogError("[EnvironmentApplier] No PlayerChoiceElement in the scene; staying on Outdoor court.");
                Apply(EnvironmentPreset.OutdoorCourt);
            }
        }

        private void OnDestroy()
        {
            if (subscribed && choice != null) choice.OnChoiceChanged -= HandleChoiceChanged;
            if (Instance == this) Instance = null;
        }

        private void HandleChoiceChanged(ChoiceKind kind, int index)
        {
            if (kind == ChoiceKind.Environment) Apply((EnvironmentPreset)index);
        }

        public void Apply(EnvironmentPreset env)
        {
            int index = (int)env;
            if (presets == null || index >= presets.Length || presets[index] == null)
            {
                Debug.LogWarning("[EnvironmentApplier] No preset for " + env + ".");
                return;
            }

            float t0 = Time.realtimeSinceStartup;
            Preset p = presets[index];

            // Objects: off unless this preset lists them (an object may be listed in several presets).
            foreach (Preset other in presets)
            {
                if (other == null || other == p || other.objects == null) continue;
                foreach (GameObject go in other.objects)
                    if (go != null && (p.objects == null || Array.IndexOf(p.objects, go) < 0)) go.SetActive(false);
            }
            if (p.objects != null)
                foreach (GameObject go in p.objects)
                    if (go != null) go.SetActive(true);

            if (p.useSceneLighting) RestoreScene();
            else ApplyLighting(p);

            if (p.loop == null) ambience.Stop();
            else if (ambience.clip != p.loop || !ambience.isPlaying)
            {
                ambience.clip = p.loop;
                ambience.Play();
            }
            ambience.volume = p.volume;

            Current = env;
            if (SessionManager.Instance != null)
                SessionManager.Instance.LogEvent("env_applied", "env=" + env + ";ms=" +
                    ((Time.realtimeSinceStartup - t0) * 1000f).ToString("F0", CultureInfo.InvariantCulture));
        }

        // ------------------------------------------------------------------ Lighting

        private void ApplyLighting(Preset p)
        {
            RenderSettings.skybox = p.skybox != null ? p.skybox : scene.skybox;
            RenderSettings.ambientMode = AmbientMode.Flat;
            RenderSettings.ambientLight = p.ambientColor;
            RenderSettings.ambientIntensity = 1f;
            RenderSettings.reflectionIntensity = p.reflectionIntensity;
            RenderSettings.fog = p.fog;
            RenderSettings.fogMode = FogMode.ExponentialSquared;
            RenderSettings.fogColor = p.fogColor;
            RenderSettings.fogDensity = p.fogDensity;

            if (sun == null) return;
            sun.enabled = p.sunIntensity > 0f;
            sun.color = p.sunColor;
            sun.intensity = p.sunIntensity;
            sun.transform.rotation = Quaternion.Euler(p.sunRotation);
        }

        private void CaptureScene()
        {
            scene = new SceneLighting
            {
                skybox = RenderSettings.skybox,
                ambientMode = RenderSettings.ambientMode,
                ambientSky = RenderSettings.ambientSkyColor,
                ambientEquator = RenderSettings.ambientEquatorColor,
                ambientGround = RenderSettings.ambientGroundColor,
                ambientIntensity = RenderSettings.ambientIntensity,
                ambientProbe = RenderSettings.ambientProbe,
                reflectionIntensity = RenderSettings.reflectionIntensity,
                fog = RenderSettings.fog,
                fogMode = RenderSettings.fogMode,
                fogColor = RenderSettings.fogColor,
                fogDensity = RenderSettings.fogDensity,
                fogStart = RenderSettings.fogStartDistance,
                fogEnd = RenderSettings.fogEndDistance,
            };
            if (sun != null)
            {
                scene.sunEnabled = sun.enabled;
                scene.sunColor = sun.color;
                scene.sunIntensity = sun.intensity;
                scene.sunRotation = sun.transform.rotation;
            }
        }

        private void RestoreScene()
        {
            RenderSettings.skybox = scene.skybox;
            RenderSettings.ambientMode = scene.ambientMode;
            RenderSettings.ambientSkyColor = scene.ambientSky;
            RenderSettings.ambientEquatorColor = scene.ambientEquator;
            RenderSettings.ambientGroundColor = scene.ambientGround;
            RenderSettings.ambientIntensity = scene.ambientIntensity;
            RenderSettings.ambientProbe = scene.ambientProbe;
            RenderSettings.reflectionIntensity = scene.reflectionIntensity;
            RenderSettings.fog = scene.fog;
            RenderSettings.fogMode = scene.fogMode;
            RenderSettings.fogColor = scene.fogColor;
            RenderSettings.fogDensity = scene.fogDensity;
            RenderSettings.fogStartDistance = scene.fogStart;
            RenderSettings.fogEndDistance = scene.fogEnd;

            if (sun == null) return;
            sun.enabled = scene.sunEnabled;
            sun.color = scene.sunColor;
            sun.intensity = scene.sunIntensity;
            sun.transform.rotation = scene.sunRotation;
        }

        [ContextMenu("Preview Outdoor (Play mode)")] private void PreviewOutdoor() => Preview(EnvironmentPreset.OutdoorCourt);
        [ContextMenu("Preview Indoor (Play mode)")] private void PreviewIndoor() => Preview(EnvironmentPreset.IndoorGym);
        [ContextMenu("Preview Night (Play mode)")] private void PreviewNight() => Preview(EnvironmentPreset.NightCourt);

        // Outside Play mode the scene lighting was never captured, so restoring it would wipe the skybox.
        private void Preview(EnvironmentPreset env)
        {
            if (Application.isPlaying) Apply(env);
            else Debug.Log("[EnvironmentApplier] Enter Play mode first.");
        }
    }
}
