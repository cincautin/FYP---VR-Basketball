using System.Collections;
using UnityEngine;
using VRBasketball;
using FYP.Session;

namespace FYP.Intensity
{
    /// <summary>
    /// Applies the chosen ball skin to every ball by swapping the material only (physics is untouched).
    /// Index = BallSkin: 0 Standard (orange), 1 Black, 2 Red-white-blue.
    /// </summary>
    public class BallSkinApplier : MonoBehaviour
    {
        [Tooltip("0 Standard (orange), 1 Black, 2 Red-white-blue. Leave slot 0 empty to keep each ball's own starting material.")]
        [SerializeField] private Material[] skinMaterials = new Material[3];
        [Tooltip("Leave empty to find it automatically.")]
        [SerializeField] private PlayerChoiceElement choice;

        private Material startingMaterial;
        private bool warnedMultiSlot;
        private bool subscribed;

        private void Start()
        {
            if (choice == null) choice = FindAnyObjectByType<PlayerChoiceElement>();
            if (choice == null)
            {
                Debug.LogError("[BallSkinApplier] No PlayerChoiceElement in the scene.");
                enabled = false;
                return;
            }

            choice.OnChoiceChanged += HandleChoiceChanged;
            subscribed = true;
            StartCoroutine(ApplyAfterSpawn());
        }

        private void OnDestroy()
        {
            if (subscribed && choice != null) choice.OnChoiceChanged -= HandleChoiceChanged;
        }

        // Wait two frames so BallSpawner has created the balls, then remember their starting look.
        private IEnumerator ApplyAfterSpawn()
        {
            yield return null;
            yield return null;
            RememberStartingMaterial();
            Apply(choice.Current.Skin);
        }

        private void HandleChoiceChanged(ChoiceKind kind, int index)
        {
            if (kind == ChoiceKind.BallSkin) Apply((BallSkin)index);
        }

        private void RememberStartingMaterial()
        {
            if (startingMaterial != null) return;
            foreach (Basketball b in FindObjectsByType<Basketball>(FindObjectsInactive.Include))
            {
                MeshRenderer r = b.GetComponentInChildren<MeshRenderer>(true);
                if (r != null && r.sharedMaterial != null) { startingMaterial = r.sharedMaterial; return; }
            }
        }

        public void Apply(BallSkin skin)
        {
            RememberStartingMaterial();

            Material material = skinMaterials != null && (int)skin < skinMaterials.Length ? skinMaterials[(int)skin] : null;
            if (material == null && skin == BallSkin.Standard) material = startingMaterial;
            if (material == null)
            {
                Debug.LogWarning("[BallSkinApplier] No material assigned for " + skin + ".");
                return;
            }

            int count = 0;
            foreach (Basketball b in FindObjectsByType<Basketball>(FindObjectsInactive.Include))
            {
                foreach (MeshRenderer r in b.GetComponentsInChildren<MeshRenderer>(true))
                {
                    if (r.sharedMaterials.Length > 1)
                    {
                        if (!warnedMultiSlot)
                        {
                            warnedMultiSlot = true;
                            Debug.LogWarning("[BallSkinApplier] '" + r.name + "' has several material slots, so it was skipped.");
                        }
                        continue;
                    }
                    r.sharedMaterial = material;
                    count++;
                }
            }

            if (SessionManager.Instance != null)
                SessionManager.Instance.LogEvent("skin_applied", "skin=" + skin + ";renderers=" + count);
        }

        [ContextMenu("Preview Standard")] private void PreviewStandard() => Apply(BallSkin.Standard);
        [ContextMenu("Preview Black")] private void PreviewBlack() => Apply(BallSkin.Black);
        [ContextMenu("Preview Red White Blue")] private void PreviewRwb() => Apply(BallSkin.RedWhiteBlue);
    }
}