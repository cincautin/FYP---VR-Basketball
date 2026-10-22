using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace FYP.Intensity
{
    /// <summary>Scale-pop animation for UI objects. Put on the 'Elements' GameObject.</summary>
    public class UiAnim : MonoBehaviour
    {
        public static UiAnim Instance { get; private set; }

        private readonly Dictionary<Transform, Vector3> baseScales = new Dictionary<Transform, Vector3>();
        private readonly Dictionary<Transform, Coroutine> running = new Dictionary<Transform, Coroutine>();

        private void Awake()
        {
            if (Instance != null && Instance != this) { Destroy(gameObject); return; }
            Instance = this;
        }

        public static void Pop(Transform target, float peak = 1.25f, float duration = 0.25f)
        {
            if (Instance == null || target == null) return;
            Instance.DoPop(target, peak, duration);
        }

        private void DoPop(Transform t, float peak, float duration)
        {
            if (!baseScales.ContainsKey(t)) baseScales[t] = t.localScale;
            if (running.TryGetValue(t, out Coroutine c) && c != null) StopCoroutine(c);
            t.localScale = baseScales[t];
            running[t] = StartCoroutine(PopRoutine(t, peak, duration));
        }

        private IEnumerator PopRoutine(Transform t, float peak, float duration)
        {
            Vector3 b = baseScales[t];
            float time = 0f;
            while (time < duration)
            {
                if (t == null) yield break;
                float scale = 1f + (peak - 1f) * Mathf.Sin(time / duration * Mathf.PI);
                t.localScale = b * scale;
                time += Time.unscaledDeltaTime;
                yield return null;
            }
            if (t != null) t.localScale = b;
            running.Remove(t);
        }
    }
}