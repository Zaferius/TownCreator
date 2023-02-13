using System;
using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography;
using DG.Tweening;
using Unity.Mathematics;
using UnityEngine;
using Random = UnityEngine.Random;

public class LevelSpecial : MonoBehaviour
{
    public bool active;
    public List<GameObject> buildings = new List<GameObject>();
    public List<GameObject> houses = new List<GameObject>();
    public int buildIndex;
    public Transform centerObj;

    private void Awake()
    {
        centerObj.GetComponent<MeshRenderer>().enabled = false;
    }

    public void MakeBuild()
    {
        if (buildIndex < buildings.Count)
        {
            // CameraManager.Instance.AddTarget(buildings[buildIndex].GetComponent<PlayPack>().centerObj);

           TimeManager.Instance.transform.DOMoveX(0, 0.1f).OnComplete(() =>
           {
               buildings[buildIndex].GetComponent<PlayPack>().BuildPack();
               Destroy(Instantiate(ParticleManager.Instance.splashNewBuild, new Vector3(buildings[buildIndex].transform.position.x,2,buildings[buildIndex].transform.position.z), Quaternion.identity),2);
               buildIndex++;
           });
           
        }
    }
    
  
}

