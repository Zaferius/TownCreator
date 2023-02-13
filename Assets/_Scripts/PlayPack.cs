using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public sealed class PlayPack : MonoBehaviour
{
    public List<Transform> objectOrder = new List<Transform>();
    private int objectOrderIndex;
   
    public void BuildPack()
    {
        StartCoroutine(DelayedObjects());
    }

    IEnumerator DelayedObjects()
    {
        for (int i = 0; i < objectOrder.Count; i++)
        {
            objectOrder[i].gameObject.SetActive(true);
            objectOrder[i].DOPunchScale(new Vector3(Random.Range(0.1f,0.2f),Random.Range(-0.2f,0.2f),Random.Range(0.1f,0.2f)), 0.15f);
            
            var poof = Instantiate(ParticleManager.Instance.poofNewBuild,  objectOrder[i].transform.position, Quaternion.identity);
            poof.transform.localScale = new Vector3( 3, 3, 3);
            Destroy(poof, 2);
            
            yield return new WaitForSeconds(0.04f);
        }
       
    }
}
