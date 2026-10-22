using System;
using System.Collections.Generic;
using System.Globalization;
using System.Text;
using FYP.Session;

namespace FYP.Intensity
{
    /// <summary>
    /// Starting-level prior from the Hexad profile. Rows = ElementId order, columns = HexadType order
    /// (Achiever, Player, Socialiser, FreeSpirit, Disruptor, Philanthropist).
    /// Values: +-2 both papers agree or |Hallifax| >= 1; +-1 one paper supports; 0 none/conflict.
    /// Choice and PersonalBest rows are proxies (avatar / leaderboard evidence).
    /// </summary>
    public static class HexadWeights
    {
        private static readonly int[,] W =
        {
            //  Ach  Pl  So  FS  Di  Ph
            {  0,  2, -1,  0,  0, -1 }, // Points
            {  1,  1, -1,  0,  0,  0 }, // Progress
            {  1,  1, -1, -2,  0,  2 }, // Badges
            { -1,  1, -1,  2,  0,  1 }, // Choice
            {  1,  1,  0,  0,  0,  0 }, // PersonalBest
            {  2,  0,  1,  1,  1, -2 }, // Timer
        };

        public static float[] ComputeAffinities(ParticipantProfile p)
        {
            float[] norm = p.GetAllNormalised();
            var affinity = new float[6];
            for (int e = 0; e < 6; e++)
            {
                float sum = 0f;
                for (int h = 0; h < 6; h++) sum += W[e, h] * norm[h];
                affinity[e] = sum;
            }
            return affinity;
        }

        /// <summary>
        /// Top two elements High, middle two Medium, bottom two Low. If the spread between best and
        /// worst is below minSpread, everything is Medium. Neighbours closer than tieEps that would
        /// get different levels are both set to Medium.
        /// </summary>
        public static Dictionary<ElementId, IntensityLevel> ComputeStartingLevels(
            ParticipantProfile p, float minSpread = 0.5f, float tieEps = 0.03f)
        {
            float[] aff = ComputeAffinities(p);
            var result = new Dictionary<ElementId, IntensityLevel>();

            var order = new int[6];
            for (int i = 0; i < 6; i++) order[i] = i;
            Array.Sort(order, (a, b) => aff[b].CompareTo(aff[a])); // descending

            float spread = aff[order[0]] - aff[order[5]];
            if (spread < minSpread)
            {
                for (int i = 0; i < 6; i++) result[(ElementId)i] = IntensityLevel.Medium;
                return result;
            }

            var levels = new IntensityLevel[6];
            for (int r = 0; r < 6; r++)
                levels[r] = r < 2 ? IntensityLevel.High : (r < 4 ? IntensityLevel.Medium : IntensityLevel.Low);

            for (int r = 0; r < 5; r++)
            {
                if (Math.Abs(aff[order[r]] - aff[order[r + 1]]) < tieEps && levels[r] != levels[r + 1])
                {
                    levels[r] = IntensityLevel.Medium;
                    levels[r + 1] = IntensityLevel.Medium;
                }
            }

            for (int r = 0; r < 6; r++) result[(ElementId)order[r]] = levels[r];
            return result;
        }

        public static string Describe(ParticipantProfile p)
        {
            float[] aff = ComputeAffinities(p);
            var sb = new StringBuilder();
            for (int i = 0; i < 6; i++)
            {
                if (i > 0) sb.Append(';');
                sb.Append((ElementId)i).Append('=').Append(aff[i].ToString("F3", CultureInfo.InvariantCulture));
            }
            return sb.ToString();
        }
    }
}