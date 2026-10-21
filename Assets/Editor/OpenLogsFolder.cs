using System.IO;
using UnityEditor;
using UnityEngine;

public static class OpenLogsFolder
{
    [MenuItem("FYP/Open Logs Folder")]
    public static void Open()
    {
        string dir = Path.Combine(Application.persistentDataPath, "Logs");
        Directory.CreateDirectory(dir);
        EditorUtility.RevealInFinder(dir);
    }
}