using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Water : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("BuildPiece"))
        {
            Vector3 ripplePos = new Vector3(other.transform.position.x, other.transform.position.y + 0.7f, other.transform.position.z);
            Destroy(Instantiate(ParticleManager.Instance.waterRipple, ripplePos, Quaternion.identity),2);
            Destroy(other.gameObject);
        }
    }
}
