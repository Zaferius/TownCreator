using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NPCVehicle : MonoBehaviour
{
    public bool active;
    public float speed;
    [Header("+ Waypoints +")] 
    public List<Transform> wayPoints = new List<Transform>();
    public Transform wayPointsParent;
    public int wayPointIndex;
    public float distance;

    private void Awake()
    {
        foreach (var wayPoint in wayPoints)
        {
            wayPoint.GetComponent<MeshRenderer>().enabled = false;
        }
    }


    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        distance = Vector3.Distance(transform.position, wayPoints[wayPointIndex].position);
        
        if (active)
        {
            
            
            transform.LookAt(wayPoints[wayPointIndex]);
            
            var step =  speed * Time.deltaTime;
            transform.position = Vector3.MoveTowards(transform.position, wayPoints[wayPointIndex].transform.position, step);
            
            if (distance < 1)
            {
                // Swap the position of the cylinder.
                wayPointIndex += 1;
            }
            
            if (wayPointIndex >= wayPoints.Count)
            {
                wayPointIndex = 0;
            }
            
        }
    }
}
