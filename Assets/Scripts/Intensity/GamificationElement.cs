using UnityEngine;

namespace FYP.Intensity
{
    /// <summary>
    /// Base class for the six elements (built in Phase 5). IntensityManager finds every instance in the scene.
    /// Keep the GameObject active and hide visuals in ApplyLevel (e.g. toggle child objects).
    /// </summary>
    public abstract class GamificationElement : MonoBehaviour
    {
        public abstract ElementId Id { get; }
        public IntensityLevel Level { get; private set; } = IntensityLevel.Off;

        /// <summary>Changes the level and calls ApplyLevel. Does nothing if the level is unchanged.</summary>
        public void SetLevel(IntensityLevel newLevel)
        {
            if (newLevel == Level) return;
            IntensityLevel previous = Level;
            Level = newLevel;
            ApplyLevel(newLevel, previous);
        }

        /// <summary>Applies the level even if unchanged (used once at startup to hide visuals).</summary>
        public void ForceApply(IntensityLevel level)
        {
            IntensityLevel previous = Level;
            Level = level;
            ApplyLevel(level, previous);
        }

        protected abstract void ApplyLevel(IntensityLevel level, IntensityLevel previous);

        /// <summary>Called after the starting levels are set. Reset counters here.</summary>
        public virtual void OnBlockStarted(int blockIndex, string condition) { }

        /// <summary>Called before all levels return to Off.</summary>
        public virtual void OnBlockEnded(int blockIndex, string condition) { }
    }
}