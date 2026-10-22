using UnityEngine;

namespace FYP.Intensity
{
    /// <summary>Test element: prints level changes. Delete when the real elements exist.</summary>
    public class LogOnlyElement : GamificationElement
    {
        [SerializeField] private ElementId element;
        public override ElementId Id => element;

        protected override void ApplyLevel(IntensityLevel level, IntensityLevel previous)
        {
            Debug.Log("[Element " + element + "] " + previous + " -> " + level);
        }
    }
}