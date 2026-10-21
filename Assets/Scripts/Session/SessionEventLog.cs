using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using UnityEngine;

namespace FYP.Session
{
    /// <summary>Writes the session events CSV. Lines written before Open() are buffered, then flushed.</summary>
    public class SessionEventLog
    {
        public const string Header = "timestamp_utc,event,state,block_index,condition,detail";

        private string filePath;
        private readonly List<string> pending = new List<string>();

        public void Open(string participantId, string sessionId)
        {
            try
            {
                string dir = Path.Combine(Application.persistentDataPath, "Logs");
                Directory.CreateDirectory(dir);
                filePath = Path.Combine(dir, participantId + "_" + sessionId + "_events.csv");
                if (!File.Exists(filePath)) File.WriteAllText(filePath, Header + Environment.NewLine);
                foreach (string line in pending) AppendLine(line);
                pending.Clear();
            }
            catch (Exception ex)
            {
                Debug.LogError("[SessionEventLog] Could not open events file: " + ex.Message);
            }
        }

        public void Write(string eventName, string state, int blockIndex, string condition, string detail)
        {
            string line = string.Join(",",
                DateTime.UtcNow.ToString("o"),
                eventName,
                state,
                blockIndex.ToString(CultureInfo.InvariantCulture),
                Clean(condition),
                Clean(detail));

            if (filePath == null) { pending.Add(line); return; }
            AppendLine(line);
        }

        private void AppendLine(string line)
        {
            try
            {
                using (var writer = new StreamWriter(filePath, true))
                {
                    writer.WriteLine(line);
                    writer.Flush();
                }
            }
            catch (Exception ex)
            {
                Debug.LogError("[SessionEventLog] Could not write event: " + ex.Message);
            }
        }

        private static string Clean(string s)
        {
            return string.IsNullOrEmpty(s) ? "" : s.Replace(',', ';').Replace('\n', ' ').Replace('\r', ' ');
        }
    }
}