using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;
using FYP.Intensity;

public static class ChoiceMenuBuilder
{
    private const float W = 900f;
    private const float H = 620f;
    private static readonly Color PanelColor = new Color(0.07f, 0.08f, 0.12f, 0.95f);
    private static readonly Color NormalColor = new Color(0.22f, 0.25f, 0.33f);

    [MenuItem("FYP/Build Choice Menu")]
    public static void Build()
    {
        if (Object.FindAnyObjectByType<ChoiceMenu>() != null)
        {
            EditorUtility.DisplayDialog("Choice Menu", "A ChoiceMenu already exists in the scene. Delete it first to rebuild.", "OK");
            return;
        }

        var rootGo = new GameObject("ChoiceMenuRoot");
        Undo.RegisterCreatedObjectUndo(rootGo, "Build Choice Menu");
        rootGo.transform.position = new Vector3(0f, 1.5f, 0f);
        var menu = rootGo.AddComponent<ChoiceMenu>();

        // Canvas
        var canvasGo = new GameObject("ChoiceMenuCanvas", typeof(RectTransform), typeof(Canvas), typeof(GraphicRaycaster));
        canvasGo.transform.SetParent(rootGo.transform, false);
        canvasGo.GetComponent<Canvas>().renderMode = RenderMode.WorldSpace;
        var canvasRt = canvasGo.GetComponent<RectTransform>();
        canvasRt.sizeDelta = new Vector2(W, H);
        canvasRt.localScale = Vector3.one * 0.0015f;

        // Background
        var bg = MakeImage(canvasGo.transform, "Background", PanelColor);
        Stretch(bg.rectTransform);

        // Texts
        var title = MakeText(canvasGo.transform, "Title", "CHOOSE YOUR SETTINGS", 48, TextAlignmentOptions.MidlineLeft, Color.white, FontStyles.Bold);
        SetRect(title.rectTransform, 30, 20, 650, 70);
        var hint = MakeText(canvasGo.transform, "Hint", "", 26, TextAlignmentOptions.MidlineLeft, new Color(0.7f, 0.74f, 0.82f), FontStyles.Normal);
        SetRect(hint.rectTransform, 30, 92, 840, 44);
        var timer = MakeText(canvasGo.transform, "Timer", "", 38, TextAlignmentOptions.MidlineRight, Color.white, FontStyles.Bold);
        SetRect(timer.rectTransform, 700, 20, 170, 70);

        // Two rows of up to four option buttons
        var so = new SerializedObject(menu);
        var rowsProp = so.FindProperty("rows");
        rowsProp.arraySize = 2;

        for (int r = 0; r < 2; r++)
        {
            var rowGo = new GameObject("Row" + r, typeof(RectTransform));
            rowGo.transform.SetParent(canvasGo.transform, false);
            SetRect(rowGo.GetComponent<RectTransform>(), 0, 150 + r * 200, W, 190);

            var label = MakeText(rowGo.transform, "Label", "", 32, TextAlignmentOptions.MidlineLeft, Color.white, FontStyles.Bold);
            SetRect(label.rectTransform, 30, 0, 840, 44);

            SerializedProperty rowProp = rowsProp.GetArrayElementAtIndex(r);
            rowProp.FindPropertyRelative("root").objectReferenceValue = rowGo;
            rowProp.FindPropertyRelative("label").objectReferenceValue = label;

            var buttons = rowProp.FindPropertyRelative("buttons");
            var labels = rowProp.FindPropertyRelative("buttonLabels");
            var images = rowProp.FindPropertyRelative("buttonImages");
            buttons.arraySize = labels.arraySize = images.arraySize = 4;

            for (int j = 0; j < 4; j++)
            {
                Button btn = MakeButton(rowGo.transform, "Option" + j, "Option", 28, NormalColor, out TextMeshProUGUI btnLabel, out Image btnImage);
                SetRect(btn.GetComponent<RectTransform>(), 30 + j * 214, 54, 198, 120);
                buttons.GetArrayElementAtIndex(j).objectReferenceValue = btn;
                labels.GetArrayElementAtIndex(j).objectReferenceValue = btnLabel;
                images.GetArrayElementAtIndex(j).objectReferenceValue = btnImage;
            }
        }

        // DONE button
        Button done = MakeButton(canvasGo.transform, "DoneButton", "DONE", 40, new Color(0.15f, 0.72f, 0.68f), out _, out _);
        SetRect(done.GetComponent<RectTransform>(), 300, 540, 300, 64);

        so.FindProperty("canvasRoot").objectReferenceValue = canvasGo;
        so.FindProperty("titleText").objectReferenceValue = title;
        so.FindProperty("hintText").objectReferenceValue = hint;
        so.FindProperty("timerText").objectReferenceValue = timer;
        so.FindProperty("doneButton").objectReferenceValue = done;
        so.ApplyModifiedProperties();

        Selection.activeGameObject = canvasGo;
        Debug.Log("[ChoiceMenuBuilder] Done. Next: right-click ChoiceMenuCanvas > Interaction SDK > Add Ray Interaction to Canvas.");
    }

    // ---------------------------------------------------------------- Helpers

    private static void SetRect(RectTransform rt, float x, float y, float w, float h)
    {
        rt.anchorMin = rt.anchorMax = new Vector2(0f, 1f);
        rt.pivot = new Vector2(0f, 1f);
        rt.anchoredPosition = new Vector2(x, -y);
        rt.sizeDelta = new Vector2(w, h);
    }

    private static void Stretch(RectTransform rt)
    {
        rt.anchorMin = Vector2.zero;
        rt.anchorMax = Vector2.one;
        rt.offsetMin = Vector2.zero;
        rt.offsetMax = Vector2.zero;
    }

    private static Image MakeImage(Transform parent, string name, Color color)
    {
        var go = new GameObject(name, typeof(RectTransform), typeof(Image));
        go.transform.SetParent(parent, false);
        var img = go.GetComponent<Image>();
        img.color = color;
        img.raycastTarget = false;
        return img;
    }

    private static TextMeshProUGUI MakeText(Transform parent, string name, string text, float size,
        TextAlignmentOptions align, Color color, FontStyles style)
    {
        var go = new GameObject(name, typeof(RectTransform));
        go.transform.SetParent(parent, false);
        var t = go.AddComponent<TextMeshProUGUI>();
        t.text = text;
        t.fontSize = size;
        t.alignment = align;
        t.color = color;
        t.fontStyle = style;
        t.raycastTarget = false;
        return t;
    }

    private static Button MakeButton(Transform parent, string name, string text, float fontSize, Color color,
        out TextMeshProUGUI label, out Image image)
    {
        var go = new GameObject(name, typeof(RectTransform), typeof(Image), typeof(Button));
        go.transform.SetParent(parent, false);
        image = go.GetComponent<Image>();
        image.color = color;
        var button = go.GetComponent<Button>();
        button.targetGraphic = image;

        label = MakeText(go.transform, "Label", text, fontSize, TextAlignmentOptions.Midline, Color.white, FontStyles.Bold);
        Stretch(label.rectTransform);
        label.rectTransform.offsetMin = new Vector2(8f, 4f);
        label.rectTransform.offsetMax = new Vector2(-8f, -4f);
        label.enableAutoSizing = true;
        label.fontSizeMin = 16f;
        label.fontSizeMax = fontSize;
        return button;
    }
}