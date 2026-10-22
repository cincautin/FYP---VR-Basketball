namespace FYP.Intensity
{
    /// <summary>Off is used for the tutorial, baseline block and breaks. Low/Medium/High match the element table.</summary>
    public enum IntensityLevel { Off = 0, Low = 1, Medium = 2, High = 3 }

    /// <summary>Order matters: it matches the rows of the Hexad weight matrix.</summary>
    public enum ElementId { Points = 0, Progress = 1, Badges = 2, Choice = 3, PersonalBest = 4, Timer = 5 }

    public static class ElementIdExtensions
    {
        /// <summary>Column key used by ThrowLogger.SetElementLevels.</summary>
        public static string LogKey(this ElementId id)
        {
            switch (id)
            {
                case ElementId.Points: return "lvl_points";
                case ElementId.Progress: return "lvl_progress";
                case ElementId.Badges: return "lvl_badges";
                case ElementId.Choice: return "lvl_choice";
                case ElementId.PersonalBest: return "lvl_personal_best";
                default: return "lvl_timer";
            }
        }
    }
}