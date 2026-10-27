using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace FYP.Intensity
{
    /// <summary>Test provider: returns the scripted change whose tickIndex matches (ticks count from 1).</summary>
    public class ScriptedIntensityProvider : MonoBehaviour, IIntensityProvider
    {
        [Serializable]
        public class Step
        {
            public int triggerIndex = 1;
            public ElementId element;
            public IntensityLevel level = IntensityLevel.Medium;
            public string reason = "scripted";
        }

        [SerializeField] private List<Step> steps = new List<Step>();
        [Tooltip("Set above the manager's result timeout (5 s) to test the timeout path.")]
        [SerializeField] private float fakeLatencySeconds = 0f;

        public void RequestChange(AdaptationRequest request, Action<IntensityChange> onResult)
        {
            StartCoroutine(Respond(request, onResult));
        }

        private IEnumerator Respond(AdaptationRequest request, Action<IntensityChange> onResult)
        {
            if (fakeLatencySeconds > 0f) yield return new WaitForSeconds(fakeLatencySeconds);

            Step step = steps.Find(s => s.triggerIndex == request.triggerIndex);
            onResult(step == null
                ? IntensityChange.Hold("scripted_none")
                : IntensityChange.Set(step.element, step.level, step.reason));
        }
    }
}