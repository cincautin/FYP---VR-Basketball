using UnityEngine;

namespace VRBasketball
{
    public class HoopSubTrigger : MonoBehaviour
    {
        public enum TriggerType { Top, Bottom }

        [SerializeField] private TriggerType triggerType = TriggerType.Top;
        [SerializeField] private HoopScoringTrigger parentScoringTrigger;

        private void Awake()
        {
            if (parentScoringTrigger == null)
            {
                parentScoringTrigger = GetComponentInParent<HoopScoringTrigger>();
            }
        }

        private void OnTriggerEnter(Collider other)
        {
            if (parentScoringTrigger == null) return;

            if (triggerType == TriggerType.Top)
            {
                parentScoringTrigger.OnTopTriggerEnter(other);
            }
            else
            {
                parentScoringTrigger.OnBottomTriggerEnter(other);
            }
        }
    }
}
