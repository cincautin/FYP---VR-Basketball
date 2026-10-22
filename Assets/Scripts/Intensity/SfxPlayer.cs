using System.Collections;
using UnityEngine;

namespace FYP.Intensity
{
    public enum SfxId { Tick, Pop, Milestone, Badge, Celebrate, Urgent }

    /// <summary>Plays clips and a few generated sounds. Put on the 'Elements' GameObject.</summary>
    public class SfxPlayer : MonoBehaviour
    {
        public static SfxPlayer Instance { get; private set; }

        [SerializeField, Range(0f, 1f)] private float masterVolume = 0.8f;

        private AudioSource[] sources;
        private int nextSource;
        private AudioClip[] presets;

        private void Awake()
        {
            if (Instance != null && Instance != this) { Destroy(gameObject); return; }
            Instance = this;

            sources = new AudioSource[4];
            for (int i = 0; i < sources.Length; i++)
            {
                var s = gameObject.AddComponent<AudioSource>();
                s.playOnAwake = false;
                s.spatialBlend = 0f; // 2D
                sources[i] = s;
            }

            presets = new AudioClip[6];
            presets[(int)SfxId.Tick] = MakeSequence("tick", new[] { 1500f }, 0.03f, 0.4f);
            presets[(int)SfxId.Pop] = MakeSequence("pop", new[] { 600f, 900f }, 0.05f, 0.5f);
            presets[(int)SfxId.Milestone] = MakeSequence("milestone", new[] { 660f, 880f }, 0.12f, 0.5f);
            presets[(int)SfxId.Badge] = MakeSequence("badge", new[] { 523f, 659f, 784f }, 0.10f, 0.5f);
            presets[(int)SfxId.Celebrate] = MakeSequence("celebrate", new[] { 523f, 659f, 784f, 1047f }, 0.12f, 0.5f);
            presets[(int)SfxId.Urgent] = MakeSequence("urgent", new[] { 880f }, 0.08f, 0.5f);
        }

        public void Play(AudioClip clip, float volume = 1f, float pitch = 1f)
        {
            if (clip == null || sources == null) return;
            AudioSource s = sources[nextSource];
            nextSource = (nextSource + 1) % sources.Length;
            s.pitch = pitch;
            s.PlayOneShot(clip, volume * masterVolume);
        }

        public void Play(SfxId id, float volume = 1f, float pitch = 1f) => Play(presets[(int)id], volume, pitch);

        private static AudioClip MakeSequence(string clipName, float[] freqs, float noteSeconds, float volume)
        {
            const int sampleRate = 44100;
            int perNote = Mathf.RoundToInt(sampleRate * noteSeconds);
            var data = new float[perNote * freqs.Length];
            for (int n = 0; n < freqs.Length; n++)
            {
                for (int i = 0; i < perNote; i++)
                {
                    float t = i / (float)sampleRate;
                    float attack = Mathf.Clamp01(i / (sampleRate * 0.005f));
                    float decay = 1f - (float)i / perNote;
                    data[n * perNote + i] = Mathf.Sin(2f * Mathf.PI * freqs[n] * t) * volume * attack * decay;
                }
            }
            AudioClip clip = AudioClip.Create(clipName, data.Length, 1, sampleRate, false);
            clip.SetData(data, 0);
            return clip;
        }

        [ContextMenu("Play All Sounds")]
        private void PlayAll() => StartCoroutine(PlayAllRoutine());

        private IEnumerator PlayAllRoutine()
        {
            foreach (SfxId id in System.Enum.GetValues(typeof(SfxId)))
            {
                Debug.Log("[SfxPlayer] " + id);
                Play(id);
                yield return new WaitForSeconds(0.8f);
            }
        }
    }
}