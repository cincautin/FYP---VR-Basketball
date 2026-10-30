using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;
using UnityEngine.Rendering;

/// <summary>
/// Editor helpers for player choice step 4 (environments). Put this file in Assets/Editor.
///   FYP > Environment > Strip Colliders From Selection   imported environments must never change the physics
///   FYP > Environment > Report Selection Cost            triangles, draw calls and lights, to check the Quest 2 budget
///   FYP > Environment > Build Court Props                select the court Floor first: ground, chain-link fence, bleachers
/// </summary>
public static class EnvironmentTools
{
    private const string Folder = "Assets/Environment/Generated";

    // Court props (metres). The player faces +Z; bleachers go along the left and right (X) sides.
    private const float FenceHeight = 3f;
    private const float FenceMargin = 1f;      // fence distance outside the floor edge
    private const float PostSpacing = 3f;
    private const float LinkSize = 0.12f;      // chain-link diamond size
    private const float GroundMargin = 15f;
    private const int Tiers = 4;
    private const float TierHeight = 0.45f, TierDepth = 0.8f, BleacherGap = 0.6f;

    // ------------------------------------------------------------------ Strip colliders

    [MenuItem("FYP/Environment/Strip Colliders From Selection")]
    private static void StripColliders()
    {
        int removed = 0;
        foreach (GameObject root in Selection.gameObjects)
            foreach (Collider c in root.GetComponentsInChildren<Collider>(true))
            {
                Undo.DestroyObjectImmediate(c);
                removed++;
            }
        Debug.Log("[EnvironmentTools] Removed " + removed + " colliders under " + Selection.gameObjects.Length + " selected object(s).");
    }

    // ------------------------------------------------------------------ Cost report

    [MenuItem("FYP/Environment/Report Selection Cost")]
    private static void ReportCost()
    {
        long tris = 0;
        int renderers = 0, drawCalls = 0, lights = 0, colliders = 0;
        var materials = new HashSet<Material>();

        foreach (GameObject root in Selection.gameObjects)
        {
            // Counts what would show if the root were active; children you switched off are skipped.
            foreach (Renderer r in root.GetComponentsInChildren<Renderer>(true))
            {
                if (!r.enabled || !ActiveUnder(r.transform, root.transform)) continue;
                Mesh mesh = null;
                if (r is SkinnedMeshRenderer smr) mesh = smr.sharedMesh;
                else if (r.TryGetComponent(out MeshFilter mf)) mesh = mf.sharedMesh;
                if (mesh == null) continue;

                renderers++;
                drawCalls += mesh.subMeshCount;
                for (int s = 0; s < mesh.subMeshCount; s++) tris += mesh.GetIndexCount(s) / 3;
                foreach (Material m in r.sharedMaterials) if (m != null) materials.Add(m);
            }
            foreach (Light l in root.GetComponentsInChildren<Light>(true))
                if (l.enabled && ActiveUnder(l.transform, root.transform) && l.lightmapBakeType != LightmapBakeType.Baked) lights++;
            colliders += root.GetComponentsInChildren<Collider>(true).Length;
        }

        Debug.Log(string.Format(
            "[EnvironmentTools] Selection: {0:N0} triangles, {1} renderers, ~{2} draw calls before batching, {3} materials, " +
            "{4} realtime/mixed lights, {5} colliders.\nQuest 2 budget for the WHOLE scene (Meta): under ~750K triangles and " +
            "~100 draw calls at 72 FPS. Switch off realtime lights inside imported environments; strip all colliders.",
            tris, renderers, drawCalls, materials.Count, lights, colliders));
    }

    private static bool ActiveUnder(Transform t, Transform root)
    {
        for (; t != null && t != root; t = t.parent)
            if (!t.gameObject.activeSelf) return false;
        return true;
    }

    // ------------------------------------------------------------------ Court props

    [MenuItem("FYP/Environment/Build Court Props (select the Floor first)")]
    private static void BuildProps()
    {
        GameObject floor = Selection.activeGameObject;
        if (floor == null || !floor.TryGetComponent(out Renderer floorRenderer))
        {
            EditorUtility.DisplayDialog("Court Props", "Select the court Floor (an object with a Renderer) first.", "OK");
            return;
        }
        if (GameObject.Find("CourtProps") != null)
        {
            EditorUtility.DisplayDialog("Court Props", "CourtProps already exists. Delete it first to rebuild.", "OK");
            return;
        }

        EnsureFolder();
        Bounds b = floorRenderer.bounds;
        float y = b.max.y;
        float x0 = b.min.x - FenceMargin, x1 = b.max.x + FenceMargin;
        float z0 = b.min.z - FenceMargin, z1 = b.max.z + FenceMargin;
        Vector3 up = Vector3.up * FenceHeight;

        // Ground around the court, 2 cm under the floor top so the court floor always wins.
        var ground = new MeshBuilder();
        float gx0 = x0 - GroundMargin, gx1 = x1 + GroundMargin, gz0 = z0 - GroundMargin, gz1 = z1 + GroundMargin;
        ground.Quad(new Vector3(gx0, y - 0.02f, gz0), new Vector3(gx1 - gx0, 0f, 0f), new Vector3(0f, 0f, gz1 - gz0), 1f);

        // Chain-link panels, one-sided and facing inwards (the player is always inside the court).
        var fence = new MeshBuilder();
        fence.Quad(new Vector3(x1, y, z0), new Vector3(x0 - x1, 0f, 0f), up, LinkSize);   // near side, faces +Z
        fence.Quad(new Vector3(x0, y, z1), new Vector3(x1 - x0, 0f, 0f), up, LinkSize);   // far side, faces -Z
        fence.Quad(new Vector3(x0, y, z0), new Vector3(0f, 0f, z1 - z0), up, LinkSize);   // left side, faces +X
        fence.Quad(new Vector3(x1, y, z1), new Vector3(0f, 0f, z0 - z1), up, LinkSize);   // right side, faces -X

        // Posts and a top rail.
        var frame = new MeshBuilder();
        AddPostsAndRail(frame, new Vector3(x0, y, z0), new Vector3(x1, y, z0));
        AddPostsAndRail(frame, new Vector3(x1, y, z0), new Vector3(x1, y, z1));
        AddPostsAndRail(frame, new Vector3(x1, y, z1), new Vector3(x0, y, z1));
        AddPostsAndRail(frame, new Vector3(x0, y, z1), new Vector3(x0, y, z0));

        // Stepped bleachers outside the fence on both sides.
        var stands = new MeshBuilder();
        float length = (z1 - z0) * 0.7f, zc = (z0 + z1) * 0.5f;
        for (int k = 0; k < Tiers; k++)
        {
            float h = (k + 1) * TierHeight;
            float offset = BleacherGap + TierDepth * (k + 0.5f);
            stands.Box(new Vector3(x0 - offset, y + h * 0.5f, zc), new Vector3(TierDepth, h, length));
            stands.Box(new Vector3(x1 + offset, y + h * 0.5f, zc), new Vector3(TierDepth, h, length));
        }

        var root = new GameObject("CourtProps");
        Undo.RegisterCreatedObjectUndo(root, "Build Court Props");
        AddPart(root, "Ground", ground, MakeMaterial("Ground", new Color(0.2f, 0.21f, 0.22f), null));
        AddPart(root, "Fence", fence, MakeMaterial("ChainLink", new Color(0.7f, 0.72f, 0.75f), ChainLinkTexture()));
        AddPart(root, "FencePosts", frame, MakeMaterial("FenceMetal", new Color(0.45f, 0.48f, 0.5f), null));
        AddPart(root, "Bleachers", stands, MakeMaterial("Bleachers", new Color(0.2f, 0.35f, 0.6f), null));

        Selection.activeGameObject = root;
        Debug.Log("[EnvironmentTools] CourtProps built (no colliders). Add it to the Objects of the Outdoor and Night presets on EnvironmentApplier.");
    }

    private static void AddPostsAndRail(MeshBuilder mb, Vector3 from, Vector3 to)
    {
        Vector3 d = to - from;
        int n = Mathf.Max(1, Mathf.CeilToInt(d.magnitude / PostSpacing));
        for (int i = 0; i < n; i++)   // the end post belongs to the next side
            mb.Box(Vector3.Lerp(from, to, (float)i / n) + Vector3.up * (FenceHeight * 0.5f), new Vector3(0.07f, FenceHeight, 0.07f));
        mb.Box((from + to) * 0.5f + Vector3.up * FenceHeight, new Vector3(Mathf.Abs(d.x) + 0.05f, 0.05f, Mathf.Abs(d.z) + 0.05f));
    }

    private static void AddPart(GameObject root, string name, MeshBuilder mb, Material material)
    {
        Mesh mesh = mb.ToMesh(name);
        AssetDatabase.CreateAsset(mesh, AssetDatabase.GenerateUniqueAssetPath(Folder + "/" + name + ".asset"));

        var go = new GameObject(name, typeof(MeshFilter), typeof(MeshRenderer));
        go.transform.SetParent(root.transform, false);
        go.GetComponent<MeshFilter>().sharedMesh = mesh;
        var mr = go.GetComponent<MeshRenderer>();
        mr.sharedMaterial = material;
        mr.shadowCastingMode = ShadowCastingMode.Off;   // cheap on Quest
    }

    private static Material MakeMaterial(string name, Color color, Texture2D cutout)
    {
        Shader shader = Shader.Find("Universal Render Pipeline/Simple Lit") ?? Shader.Find("Universal Render Pipeline/Lit");
        var m = new Material(shader) { name = name };
        m.SetColor("_BaseColor", color);
        if (cutout != null)
        {
            m.SetTexture("_BaseMap", cutout);
            m.SetFloat("_AlphaClip", 1f);
            m.SetFloat("_Cutoff", 0.5f);
            m.EnableKeyword("_ALPHATEST_ON");
            m.renderQueue = (int)RenderQueue.AlphaTest;
        }
        AssetDatabase.CreateAsset(m, AssetDatabase.GenerateUniqueAssetPath(Folder + "/" + name + ".mat"));
        return m;
    }

    /// <summary>64x64 tileable diamond wire pattern; one tile = one diamond. Mipmaps keep wire coverage at distance.</summary>
    private static Texture2D ChainLinkTexture()
    {
        const int S = 64;
        const float halfWire = 1.6f;   // pixels
        var pixels = new Color32[S * S];
        for (int py = 0; py < S; py++)
            for (int px = 0; px < S; px++)
            {
                int a = (px + py) % S, d = ((px - py) % S + S) % S;
                float dist = Mathf.Min(Mathf.Min(a, S - a), Mathf.Min(d, S - d)) * 0.7071f;   // distance to nearest wire
                pixels[py * S + px] = new Color32(255, 255, 255, (byte)(255f * Mathf.Clamp01(halfWire + 0.5f - dist)));
            }

        var tex = new Texture2D(S, S, TextureFormat.RGBA32, false);
        tex.SetPixels32(pixels);
        string path = Folder + "/ChainLink.png";
        File.WriteAllBytes(path, tex.EncodeToPNG());
        Object.DestroyImmediate(tex);

        AssetDatabase.ImportAsset(path);
        var importer = (TextureImporter)AssetImporter.GetAtPath(path);
        importer.wrapMode = TextureWrapMode.Repeat;
        importer.alphaIsTransparency = true;
        importer.mipmapEnabled = true;
        importer.mipMapsPreserveCoverage = true;
        importer.alphaTestReferenceValue = 0.5f;
        importer.SaveAndReimport();
        return AssetDatabase.LoadAssetAtPath<Texture2D>(path);
    }

    private static void EnsureFolder()
    {
        if (!AssetDatabase.IsValidFolder("Assets/Environment")) AssetDatabase.CreateFolder("Assets", "Environment");
        if (!AssetDatabase.IsValidFolder(Folder)) AssetDatabase.CreateFolder("Assets/Environment", "Generated");
    }

    // ------------------------------------------------------------------ Mesh building

    private class MeshBuilder
    {
        private readonly List<Vector3> v = new List<Vector3>();
        private readonly List<Vector3> n = new List<Vector3>();
        private readonly List<Vector2> uv = new List<Vector2>();
        private readonly List<int> t = new List<int>();

        /// <summary>One-sided quad from origin along right and up. Visible from the side where right
        /// points right and up points up. UVs are in tiles of tileSize metres.</summary>
        public void Quad(Vector3 origin, Vector3 right, Vector3 up, float tileSize)
        {
            int i = v.Count;
            Vector3 normal = Vector3.Cross(up, right).normalized;
            v.Add(origin); v.Add(origin + right); v.Add(origin + right + up); v.Add(origin + up);
            for (int k = 0; k < 4; k++) n.Add(normal);
            float w = right.magnitude / tileSize, h = up.magnitude / tileSize;
            uv.Add(new Vector2(0f, 0f)); uv.Add(new Vector2(w, 0f)); uv.Add(new Vector2(w, h)); uv.Add(new Vector2(0f, h));
            t.Add(i); t.Add(i + 2); t.Add(i + 1);
            t.Add(i); t.Add(i + 3); t.Add(i + 2);
        }

        public void Box(Vector3 center, Vector3 size)
        {
            Vector3 x = new Vector3(size.x, 0f, 0f), y = new Vector3(0f, size.y, 0f), z = new Vector3(0f, 0f, size.z);
            Vector3 o = center - size * 0.5f;
            Quad(o, x, y, 1f);            // -Z
            Quad(o + x + z, -x, y, 1f);   // +Z
            Quad(o + z, -z, y, 1f);       // -X
            Quad(o + x, z, y, 1f);        // +X
            Quad(o + y, x, z, 1f);        // +Y
            Quad(o, z, x, 1f);            // -Y
        }

        public Mesh ToMesh(string name)
        {
            var m = new Mesh { name = name };
            m.SetVertices(v);
            m.SetNormals(n);
            m.SetUVs(0, uv);
            m.SetTriangles(t, 0);
            m.RecalculateBounds();
            return m;
        }
    }
}
