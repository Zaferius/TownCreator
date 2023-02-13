using UnityEngine;

public class ParticleManager : MonoBehaviour
{
    #region Instance Method

    public static ParticleManager Instance;

    public GameObject waterRipple;
    public GameObject splashNewBuild;
    public GameObject poofNewBuild;
    public GameObject gainedCoinPrefab;

    private void InstanceMethod()
    {
        if (Instance)
        {
            Destroy(this);
        }
        else
        {
            Instance = this;
        }
    }

    #endregion

    private void Awake()
    {
        #region Instance Method

        InstanceMethod();

        #endregion

    }
    
}
