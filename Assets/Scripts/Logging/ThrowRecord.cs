using System;
using System.Globalization;

namespace FYP.Logging
{
    /// <summary>
    /// Serializable data model representing a single basketball throw attempt and its outcome.
    /// </summary>
    [Serializable]
    public class ThrowRecord
    {
        public string participant_id;
        public string session_id;
        public int block_index;
        public string condition; // "baseline", "fixed", or "adaptive"
        public int throw_index; // Resets each block
        public string timestamp_utc; // ISO 8601
        public float time_since_block_start; // Seconds
        public float time_held; // Seconds from grab start to release
        public float release_pos_x;
        public float release_pos_y;
        public float release_pos_z;
        public float release_vel_x;
        public float release_vel_y;
        public float release_vel_z;
        public float release_speed; // m/s
        public float release_elevation_deg; // Angle above horizontal
        public float release_azimuth_error_deg; // Horizontal angle error towards hoop
        public string hand; // "left" or "right"
        public float distance_to_hoop; // Horizontal distance in meters
        public bool made; // True if scored, false if missed
        public float time_to_outcome; // Seconds from release to make/miss
        public bool shot_clock_expired; // Always false for now
        public string lvl_points = "NA";
        public string lvl_progress = "NA";
        public string lvl_badges = "NA";
        public string lvl_choice = "NA";
        public string lvl_personal_best = "NA";
        public string lvl_timer = "NA";
        public string choice_ball_skin = "NA";
        public string choice_environment = "NA";
        public string choice_fb_type = "NA";
        public string choice_fb_freq = "NA";
        public bool block_paused;

        public const string CsvHeader =
            "participant_id,session_id,block_index,condition,throw_index,timestamp_utc," +
            "time_since_block_start,time_held,release_pos_x,release_pos_y,release_pos_z," +
            "release_vel_x,release_vel_y,release_vel_z,release_speed,release_elevation_deg," +
            "release_azimuth_error_deg,hand,distance_to_hoop,made,time_to_outcome," +
            "shot_clock_expired,lvl_points,lvl_progress,lvl_badges,lvl_choice,lvl_personal_best,lvl_timer," +
            "choice_ball_skin,choice_environment,choice_fb_type,choice_fb_freq,block_paused";

        /// <summary>
        /// Formats this record as an escaped CSV line using InvariantCulture.
        /// </summary>
        public string ToCsvLine()
        {
            var inv = CultureInfo.InvariantCulture;
            return string.Format(inv,
                "{0},{1},{2},{3},{4},{5},{6:F3},{7:F3},{8:F3},{9:F3},{10:F3},{11:F3},{12:F3},{13:F3},{14:F3},{15:F2},{16:F2},{17},{18:F3},{19},{20:F3},{21},{22},{23},{24},{25},{26},{27},{28},{29},{30},{31},{32}",
                EscapeCsv(participant_id),
                EscapeCsv(session_id),
                block_index,
                EscapeCsv(condition),
                throw_index,
                EscapeCsv(timestamp_utc),
                time_since_block_start,
                time_held,
                release_pos_x,
                release_pos_y,
                release_pos_z,
                release_vel_x,
                release_vel_y,
                release_vel_z,
                release_speed,
                release_elevation_deg,
                release_azimuth_error_deg,
                EscapeCsv(hand),
                distance_to_hoop,
                made ? "true" : "false",
                time_to_outcome,
                shot_clock_expired ? "true" : "false",
                EscapeCsv(lvl_points),
                EscapeCsv(lvl_progress),
                EscapeCsv(lvl_badges),
                EscapeCsv(lvl_choice),
                EscapeCsv(lvl_personal_best),
                EscapeCsv(lvl_timer),
                EscapeCsv(choice_ball_skin),
                EscapeCsv(choice_environment),
                EscapeCsv(choice_fb_type),
                EscapeCsv(choice_fb_freq),
                block_paused ? "true" : "false"
            );
        }

        private static string EscapeCsv(string value)
        {
            if (string.IsNullOrEmpty(value)) return "";
            if (value.Contains(",") || value.Contains("\"") || value.Contains("\n") || value.Contains("\r"))
            {
                return "\"" + value.Replace("\"", "\"\"") + "\"";
            }
            return value;
        }
    }
}
