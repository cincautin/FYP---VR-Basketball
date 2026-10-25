using System;
using System.Collections;
using System.Globalization;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;

namespace FYP.Intensity
{
    /// <summary>Sends the 30 s window to the Flask server and returns its proposed change.</summary>
    public class RemoteIntensityProvider : MonoBehaviour, IIntensityProvider
    {
        [SerializeField] private string baseUrl = "http://127.0.0.1:5000";
        [Tooltip("Must be shorter than IntensityManager's result timeout (5 s).")]
        [SerializeField] private float timeoutSeconds = 3f;

        [Serializable]
        private class ChangeResponse
        {
            public bool hasChange;
            public string element;
            public string newLevel;
            public string reason;
            public string state;
        }

        public void RequestChange(AdaptationRequest request, Action<IntensityChange> onResult)
        {
            StartCoroutine(Send(request, onResult));
        }

        private IEnumerator Send(AdaptationRequest request, Action<IntensityChange> onResult)
        {
            byte[] body = Encoding.UTF8.GetBytes(BuildJson(request));
            using (var req = new UnityWebRequest(baseUrl + "/window", "POST"))
            {
                req.uploadHandler = new UploadHandlerRaw(body);
                req.downloadHandler = new DownloadHandlerBuffer();
                req.SetRequestHeader("Content-Type", "application/json");
                req.timeout = Mathf.CeilToInt(timeoutSeconds);
                yield return req.SendWebRequest();

                if (req.result != UnityWebRequest.Result.Success)
                {
                    onResult(IntensityChange.Hold("http_error:" + req.error));
                    yield break;
                }

                ChangeResponse resp;
                try { resp = JsonUtility.FromJson<ChangeResponse>(req.downloadHandler.text); }
                catch (Exception) { onResult(IntensityChange.Hold("bad_json")); yield break; }

                if (resp == null) { onResult(IntensityChange.Hold("bad_json")); yield break; }
                if (!resp.hasChange) { onResult(IntensityChange.Hold(resp.reason)); yield break; }

                if (Enum.TryParse(resp.element, out ElementId element) &&
                    Enum.TryParse(resp.newLevel, out IntensityLevel level))
                    onResult(IntensityChange.Set(element, level, resp.reason));
                else
                    onResult(IntensityChange.Hold("unknown_element_or_level"));
            }
        }

        private static string BuildJson(AdaptationRequest r)
        {
            WindowStats w = r.window ?? new WindowStats();
            var sb = new StringBuilder(512);
            sb.Append("{\"participantId\":\"").Append(r.participantId).Append("\",");
            sb.Append("\"blockIndex\":").Append(r.blockIndex).Append(',');
            sb.Append("\"tickIndex\":").Append(r.tickIndex).Append(',');
            sb.Append("\"blockElapsed\":").Append(N(r.blockElapsed)).Append(',');
            sb.Append("\"window\":{");
            sb.Append("\"windowSeconds\":").Append(N(w.windowSeconds)).Append(',');
            sb.Append("\"throws\":").Append(w.throws).Append(',');
            sb.Append("\"makes\":").Append(w.makes).Append(',');
            sb.Append("\"accuracy\":").Append(N(w.accuracy)).Append(',');
            sb.Append("\"releaseSpeedSd\":").Append(N(w.releaseSpeedSd)).Append(',');
            sb.Append("\"releaseElevationSd\":").Append(N(w.releaseElevationSd)).Append(',');
            sb.Append("\"throwsPerMinute\":").Append(N(w.throwsPerMinute)).Append(',');
            sb.Append("\"secondsSinceLastThrow\":").Append(N(w.secondsSinceLastThrow)).Append(',');
            sb.Append("\"currentStreak\":").Append(w.currentStreak).Append(',');
            sb.Append("\"referenceAccuracy\":").Append(N(w.referenceAccuracy)).Append(',');
            sb.Append("\"practiceMedianGap\":").Append(N(w.practiceMedianGap));
            sb.Append("},\"levels\":{");
            bool first = true;
            if (r.levels != null)
            {
                foreach (var kv in r.levels)
                {
                    if (!first) sb.Append(',');
                    first = false;
                    sb.Append('"').Append(kv.Key).Append("\":\"").Append(kv.Value).Append('"');
                }
            }
            sb.Append("}}");
            return sb.ToString();
        }

        private static string N(float v)
        {
            if (float.IsNaN(v) || float.IsInfinity(v)) return "0";
            return v.ToString("F3", CultureInfo.InvariantCulture);
        }

        [ContextMenu("Ping Server")]
        private void Ping() => StartCoroutine(PingRoutine());

        private IEnumerator PingRoutine()
        {
            using (var req = UnityWebRequest.Get(baseUrl + "/health"))
            {
                req.timeout = 3;
                yield return req.SendWebRequest();
                Debug.Log("[RemoteIntensityProvider] " + (req.result == UnityWebRequest.Result.Success
                    ? "Server says: " + req.downloadHandler.text
                    : "No answer: " + req.error));
            }
        }
    }
}