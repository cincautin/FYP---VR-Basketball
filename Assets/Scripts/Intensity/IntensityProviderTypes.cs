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

    /// <summary>Summary of the last window of play.</summary>
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
        public float referenceAccuracy;   // first-minute accuracy of this block, -1 until it exists
        public float practiceMedianGap;   // the player's own median seconds between throws in the intro
    }

    public class AdaptationRequest
    {
        public string participantId;
        public int blockIndex;
        public int triggerIndex;
        public string stateLabel;           // disengaged, overloaded, stagnant
        public float stateSeconds;
        public float blockElapsed;
        public int changesSoFar;
        public float secondsSinceLastChange;
        public float recentAccuracy;        // last 8 throws
        public string dominantType;
        public WindowStats window;
        public Dictionary<string, string> levels;      // element name -> level name
        public Dictionary<string, float> affinities;   // element name -> Hexad affinity
    }

    public interface IIntensityProvider
    {
        void RequestChange(AdaptationRequest request, Action<IntensityChange> onResult);
    }

    public interface IWindowSource
    {
        WindowStats GetWindow(float seconds);
    }
}