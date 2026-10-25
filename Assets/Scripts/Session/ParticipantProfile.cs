using System;

namespace FYP.Session
{
    public enum HexadType { Achiever, Player, Socialiser, FreeSpirit, Disruptor, Philanthropist }

    /// <summary>One participant's Hexad scores (raw subscale sums, 4-28) and condition order.</summary>
    [Serializable]
    public class ParticipantProfile
    {
        public string participantId;
        public int achiever, player, socialiser, freeSpirit, disruptor, philanthropist;
        /// <summary>"FA" = fixed then adaptive, "AF" = adaptive then fixed.</summary>
        public string conditionOrder = "FA";
        public bool isTest;

        public int GetRaw(HexadType type)
        {
            switch (type)
            {
                case HexadType.Achiever: return achiever;
                case HexadType.Player: return player;
                case HexadType.Socialiser: return socialiser;
                case HexadType.FreeSpirit: return freeSpirit;
                case HexadType.Disruptor: return disruptor;
                default: return philanthropist;
            }
        }

        /// <summary>Normalised score in 0-1: (raw - 4) / 24.</summary>
        public float GetNormalised(HexadType type) => (GetRaw(type) - 4f) / 24f;

        /// <summary>Normalised scores in enum order (Achiever, Player, Socialiser, FreeSpirit, Disruptor, Philanthropist).</summary>
        public float[] GetAllNormalised()
        {
            var result = new float[6];
            for (int i = 0; i < 6; i++) result[i] = GetNormalised((HexadType)i);
            return result;
        }

        /// <summary>Block 0 = tutorial, 1 = first condition, 2 = second condition.</summary>
        public string ConditionForBlock(int blockIndex)
        {
            bool fixedFirst = conditionOrder == "FA";
            switch (blockIndex)
            {
                case 0: return "tutorial";
                case 1: return fixedFirst ? "fixed" : "adaptive";
                case 2: return fixedFirst ? "adaptive" : "fixed";
                default: return "unknown";
            }
        }

        public static ParticipantProfile CreateTest(string id)
        {
            return new ParticipantProfile
            {
                participantId = string.IsNullOrEmpty(id) ? "TEST" : id,
                achiever = 16, player = 16, socialiser = 16,
                freeSpirit = 16, disruptor = 16, philanthropist = 16,
                conditionOrder = "FA",
                isTest = true
            };
        }
    }
}