using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class Lights : MonoBehaviour
{
    public PlayObject lightsOwner;
    void Start()
    {
        TimeManager.Instance.transform.DOMoveX(0, 0.1f).OnComplete(() =>
        {
            if (lightsOwner.type == PlayObject.ObjectType.ProducerBuilding)
            {
                GameManager.Instance.buildingLights.Add(this);
            }
            else
            {
                GameManager.Instance.otherLights.Add(this);
            }

            if (lightsOwner.isAlive)
            {
                if (GameManager.Instance.time == GameManager.Time.Day)
                {
                    gameObject.SetActive(false);
                }
                else
                {
                    gameObject.SetActive(true);
                }
            }
            else
            {
                gameObject.SetActive(false);
            }

            
        });
        
    }
    
    void Update()
    {
        
    }
}
