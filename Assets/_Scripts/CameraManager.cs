using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Cinemachine;
using DG.Tweening;
using UnityEngine;

public class CameraManager : MonoBehaviour
{
    public static CameraManager Instance;
    
    [Range(0f, 10f)]
    public float cameraRotateSpeed;
    public CinemachineVirtualCamera cineCam;
    public CinemachineTargetGroup cineTargetGroup;
    public Transform testSphere;
    
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
    private void Awake()
    {
        #region Instance Method

        InstanceMethod();

        cineCam.GetCinemachineComponent<CinemachineOrbitalTransposer>().m_Heading.m_Bias = -180;

        #endregion

    }

    void Start()
    {
        TimeManager.Instance.transform.DOMoveX(0, 0.025f).OnComplete(() =>
        {
            cineTargetGroup.AddMember(testSphere.transform,1,0);
        });
        
    }

    public void AddTarget(Transform build)
    {
        if (cineTargetGroup.m_Targets.Length > 5)
        {
            cineTargetGroup.RemoveMember(cineTargetGroup.m_Targets[0].target);
        }
        
        cineTargetGroup.AddMember(build,1,0);
    }
    
    public Vector3 FindCenterOfTransforms(List<GameObject> transforms)
    {
        var bound = new Bounds(transforms[0].transform.position, Vector3.zero);
        for(int i = 1; i < transforms.Count; i++)
        {
            bound.Encapsulate(transforms[i].transform.position);
        }
        return bound.center;
    }
    
    private void FixedUpdate()
    {
        if (GameManager.Instance.ls.houses.Count > 0)
        {
            Vector3 testVec = FindCenterOfTransforms(GameManager.Instance.activeLevelsCenterPos);
            testSphere.transform.position = Vector3.Lerp(testSphere.transform.position, testVec, Time.deltaTime * 0.8f);
            cineCam.GetCinemachineComponent<CinemachineOrbitalTransposer>().m_XAxis.Value -= Time.deltaTime * cameraRotateSpeed;
        }
    }
}
