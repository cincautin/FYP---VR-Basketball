using System;
using System.Collections.Generic;

namespace FYP.Intensity
{
    public struct IntensityChange
    {
        public bool hasChange;
        public ElementId element;
        public IntensityLevel newLevel;
        public string reason;

        public static IntensityChange Hold(string reason) =>
            new IntensityChange { hasChange = false, reason = reason };

        public static IntensityChange Set(ElementId element, IntensityLevel level, string reason) =>
            new IntensityChange { hasChange = true, element = element, newLevel = level, reason = reason };
    }

    /// <summary>Summary of the last window of play. SessionStats fills this in the next step.</summary>
    public class WindowStats
    {
        public float windowSeconds;
        public int throws;
        public int makes;
        public float accuracy;
        public float releaseSpeedSd;
        public float releaseElevationSd;
        public float throwsPerMinute;
        public float secondsSinceLastThrow;
        public int currentStreak;
        public float baselineAccuracy;
    }

    public class AdaptationRequest
    {
        public string participantId;
        public int blockIndex;
        public int tickIndex;
        public float blockElapsed;
        public WindowStats window;
        public Dictionary<string, string> levels; // element name -> level name
    }

    /// <summary>
    /// Anything that proposes level changes: a scripted test provider now, the Flask client in Phase 6.
    /// Must call onResult exactly once, on the main thread (immediately or later).
    /// </summary>
    public interface IIntensityProvider
    {
        void RequestChange(AdaptationRequest request, Action<IntensityChange> onResult);
    }

    public interface IWindowSource
    {
        WindowStats GetWindow(float seconds);
    }
}