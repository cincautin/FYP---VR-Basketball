using System;

namespace FYP.Session
{
    /// <summary>What SessionManager needs from the UI. The real panel script comes later.</summary>
    public interface IInstructionPanel
    {
        /// <summary>Shows a title, body and one button. If buttonLabel is null or empty, no button is shown.</summary>
        void ShowMessage(string title, string body, string buttonLabel, Action onButton);

        /// <summary>Shows a numeric keypad. onConfirm receives the digits entered.</summary>
        void ShowKeypad(string title, string prompt, Action<string> onConfirm);

        void Hide();
    }
}