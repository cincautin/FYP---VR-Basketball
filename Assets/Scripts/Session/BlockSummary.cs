using System.Collections.Generic;

namespace FYP.Session
{
    /// <summary>Elements add end-of-block lines (e.g. "Score: 120"); SessionManager shows them on the break and end screens.</summary>
    public static class BlockSummary
    {
        private static readonly List<string> lines = new List<string>();

        public static void Clear() => lines.Clear();
        public static void Add(string line) { if (!string.IsNullOrEmpty(line)) lines.Add(line); }
        public static string Compose() => string.Join("\n", lines);
    }
}