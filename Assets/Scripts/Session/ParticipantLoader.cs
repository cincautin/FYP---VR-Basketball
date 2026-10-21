using System;
using System.Globalization;
using System.IO;
using UnityEngine;

namespace FYP.Session
{
    /// <summary>
    /// Loads participants.csv. Looks in Application.persistentDataPath first (so it can be updated
    /// with adb push), then falls back to Resources/participants.csv.
    /// Header: participant_id,achiever,player,socialiser,free_spirit,disruptor,philanthropist,condition_order
    /// </summary>
    public static class ParticipantLoader
    {
        public static bool TryLoad(string id, out ParticipantProfile profile, out string error)
        {
            profile = null;
            error = null;
            id = (id ?? "").Trim();
            if (id.Length == 0) { error = "Please enter a participant ID."; return false; }

            string text = ReadCsvText();
            if (text == null) { error = "participants.csv was not found."; return false; }

            string[] lines = text.Split('\n');
            for (int i = 1; i < lines.Length; i++) // skip header
            {
                string line = lines[i].Trim();
                if (line.Length == 0) continue;
                string[] f = line.Split(',');
                if (f.Length < 8) continue;
                if (!string.Equals(f[0].Trim(), id, StringComparison.OrdinalIgnoreCase)) continue;

                var p = new ParticipantProfile { participantId = f[0].Trim() };
                if (!TryScore(f[1], out p.achiever) || !TryScore(f[2], out p.player) ||
                    !TryScore(f[3], out p.socialiser) || !TryScore(f[4], out p.freeSpirit) ||
                    !TryScore(f[5], out p.disruptor) || !TryScore(f[6], out p.philanthropist))
                {
                    error = "Scores for ID " + id + " are invalid (must be whole numbers from 4 to 28).";
                    return false;
                }
                string order = f[7].Trim().ToUpperInvariant();
                if (order != "FA" && order != "AF")
                {
                    error = "Condition order for ID " + id + " must be FA or AF.";
                    return false;
                }
                p.conditionOrder = order;
                profile = p;
                return true;
            }

            error = "ID " + id + " was not found.";
            return false;
        }

        private static bool TryScore(string s, out int value)
        {
            return int.TryParse(s.Trim(), NumberStyles.Integer, CultureInfo.InvariantCulture, out value)
                   && value >= 4 && value <= 28;
        }

        private static string ReadCsvText()
        {
            try
            {
                string path = Path.Combine(Application.persistentDataPath, "participants.csv");
                if (File.Exists(path)) return File.ReadAllText(path);
            }
            catch (Exception ex)
            {
                Debug.LogError("[ParticipantLoader] Could not read participants.csv from persistent path: " + ex.Message);
            }
            TextAsset asset = Resources.Load<TextAsset>("participants");
            return asset != null ? asset.text : null;
        }
    }
}
