using System;
using System.Collections;
using UnityEngine;

namespace FYP.Intensity
{
    /// <summary>Test menu without any UI. Delete once the real menu exists (step 2).</summary>
    public class DebugChoiceMenu : MonoBehaviour, IChoiceMenu
    {
        [SerializeField] private float autoDelaySeconds = 1.5f;
        [Tooltip("Pick a random non-default option for every choice, so changes show up in the logs.")]
        [SerializeField] private bool pickRandom = true;
        [Tooltip("Pretend nobody answered: waits for the full timeout, then keeps the current values.")]
        [SerializeField] private bool simulateTimeout = false;

        private Coroutine routine;

        public void Show(ChoiceMenuRequest request, ChoiceState current, Action<ChoiceMenuResult> onDone)
        {
            if (routine != null) StopCoroutine(routine);
            routine = StartCoroutine(Run(request, current, onDone));
        }

        public void Hide()
        {
            if (routine != null) StopCoroutine(routine);
            routine = null;
        }

        private IEnumerator Run(ChoiceMenuRequest request, ChoiceState current, Action<ChoiceMenuResult> onDone)
        {
            float start = Time.realtimeSinceStartup;
            yield return new WaitForSecondsRealtime(simulateTimeout ? request.timeoutSeconds : autoDelaySeconds);

            var result = new ChoiceMenuResult
            {
                timedOut = simulateTimeout,
                decisionSeconds = Time.realtimeSinceStartup - start
            };

            if (!simulateTimeout)
            {
                foreach (ChoiceKind kind in request.kinds)
                {
                    int count = ChoiceOptions.Count(kind);
                    result.picks[kind] = pickRandom ? UnityEngine.Random.Range(1, count) : current.Get(kind);
                }
            }

            routine = null;
            onDone(result);
        }
    }
}