using System;
using System.Collections.Generic;

namespace FYP.Intensity
{
    public enum ChoiceKind { BallSkin = 0, Environment = 1, FeedbackType = 2, FeedbackFrequency = 3 }

    // Option 0 of every kind is the default everyone gets unless they choose something else.
    public enum BallSkin { Standard = 0, Black = 1, RedWhiteBlue = 2 }
    public enum EnvironmentPreset { OutdoorCourt = 0, IndoorGym = 1, NightCourt = 2 }
    public enum FeedbackType { AccuracyOnly = 0, ArcTrace = 1, AngleSpeed = 2 }
    public enum FeedbackFrequency { EveryThirdThrow = 0, EveryThrow = 1, EndOfBlock = 2 }

    public static class ChoiceOptions
    {
        public const int KindCount = 4;

        private static readonly string[] Titles =
            { "Ball skin", "Environment", "Feedback type", "Feedback frequency" };

        private static readonly string[][] Names =
        {
            new[] { "Orange", "Black", "Red, white & blue" },
            new[] { "Outdoor court", "Indoor gym", "Night court" },
            new[] { "Accuracy only", "Arc trace", "Angle & speed" },
            new[] { "Every 3 throws", "Every throw", "End of block" },
        };

        public static string Title(ChoiceKind kind) => Titles[(int)kind];
        public static int Count(ChoiceKind kind) => Names[(int)kind].Length;
        public static string Name(ChoiceKind kind, int index) => Names[(int)kind][Clamp(kind, index)];

        /// <summary>Code-style name used in the CSV logs.</summary>
        public static string LogName(ChoiceKind kind, int index)
        {
            index = Clamp(kind, index);
            switch (kind)
            {
                case ChoiceKind.BallSkin: return ((BallSkin)index).ToString();
                case ChoiceKind.Environment: return ((EnvironmentPreset)index).ToString();
                case ChoiceKind.FeedbackType: return ((FeedbackType)index).ToString();
                default: return ((FeedbackFrequency)index).ToString();
            }
        }

        private static int Clamp(ChoiceKind kind, int index) => Math.Max(0, Math.Min(index, Count(kind) - 1));
    }

    /// <summary>The player's current picks. All zeros means the defaults.</summary>
    public class ChoiceState
    {
        private readonly int[] values = new int[ChoiceOptions.KindCount];

        public int Get(ChoiceKind kind) => values[(int)kind];

        public void Set(ChoiceKind kind, int index)
        {
            values[(int)kind] = Math.Max(0, Math.Min(index, ChoiceOptions.Count(kind) - 1));
        }

        public BallSkin Skin => (BallSkin)values[(int)ChoiceKind.BallSkin];
        public EnvironmentPreset Environment => (EnvironmentPreset)values[(int)ChoiceKind.Environment];
        public FeedbackType Feedback => (FeedbackType)values[(int)ChoiceKind.FeedbackType];
        public FeedbackFrequency Frequency => (FeedbackFrequency)values[(int)ChoiceKind.FeedbackFrequency];

        public string LogName(ChoiceKind kind) => ChoiceOptions.LogName(kind, Get(kind));
    }

    public class ChoiceMenuRequest
    {
        public string moment;            // "block_start" or "midpoint"
        public ChoiceKind[] kinds;       // which choices to offer
        public float timeoutSeconds;     // after this the current values are kept
    }

    public class ChoiceMenuResult
    {
        public bool timedOut;
        public float decisionSeconds;
        public readonly Dictionary<ChoiceKind, int> picks = new Dictionary<ChoiceKind, int>();
    }

    /// <summary>What PlayerChoiceElement needs from a menu: DebugChoiceMenu now, the real UI in step 2.</summary>
    public interface IChoiceMenu
    {
        /// <summary>Shows the menu, preselecting the current values. Must call onDone exactly once.</summary>
        void Show(ChoiceMenuRequest request, ChoiceState current, Action<ChoiceMenuResult> onDone);
        void Hide();
    }
}