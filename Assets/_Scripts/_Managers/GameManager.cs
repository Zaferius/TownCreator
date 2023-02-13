using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography;
using DG.Tweening;
using UnityEngine;
using UnityEngine.Experimental.GlobalIllumination;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

public class GameManager : MonoBehaviour
{
    #region Instance Method / GameState
    public static GameManager Instance;
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
    
    public enum GameState
    {
        Play,
        Pause,
        Win,
        Lose,
        StartMenu,
    }
    public GameState gameState;
    
    public enum Time
    {
        Day,
        Night
    }

    public Time time;
    #endregion

    [Header("Customs")] 
    public List<LevelSpecial> levelFields = new List<LevelSpecial>();
    public int levelFieldIndex;
    public LevelSpecial ls;
    public Volume globalVolume;
    private Bloom b;
    public Light globalLight;

    public bool lightDecreasing;
    public bool lightIncreasing;

    [Header("Buildings")] 
    public List<GameObject> activeLevelsCenterPos = new List<GameObject>();
    public List<PlayObject> emptyProducerBuildings = new List<PlayObject>();
    public List<PlayObject> aliveProducerBuildings = new List<PlayObject>();
    public List<Lights> buildingLights = new List<Lights>();
    public List<Lights> otherLights = new List<Lights>();

    [Header("Coin")] 
    public int currentCoin;
    
    [Header("Income")] 
    public int income;
    private void Awake()
    {
        #region Instance Method
        InstanceMethod();
        #endregion
        
        emptyProducerBuildings.Clear();
        aliveProducerBuildings.Clear();
        buildingLights.Clear();
        otherLights.Clear();
        
    }
    
    private void Start()
    {
        Application.targetFrameRate = 120;
        
        globalVolume.profile.TryGet(out b);
        ChangeTime(0);
        
        ls = levelFields[levelFieldIndex];
        ls.active = true;

        if (activeLevelsCenterPos.Count == 0)
        {
            activeLevelsCenterPos.Add(ls.centerObj.gameObject);
        }
        
      
    }
    
    private void LateUpdate()
    {
        if (gameState == GameState.Play)
        {
           
        }
    }
    
    private void FixedUpdate()
    {
        if (gameState == GameState.Play)
        {
           
        }
    }
    
    private void Update()
    {
        if (gameState == GameState.Play)
        {
            if (Input.GetKeyDown(KeyCode.A))
            {
                CreateBuilding();
            }
            
            if (Input.GetKeyDown(KeyCode.T))
            {
                ChangeTime(0);
            }
            
            if (Input.GetKeyDown(KeyCode.Y))
            {
                ChangeTime(1);
            }
            
            if (Input.GetKeyDown(KeyCode.Z))
            {
               ProduceTap();
            }

            MeasureLight();
            
        }
    }

    public void CreateBuilding()
    {
        ls.MakeBuild();
    }

    public void LevelFieldCheck()
    {
        if (ls.buildIndex >= ls.buildings.Count)
        {
            levelFieldIndex++;
            ls = levelFields[levelFieldIndex];
            ls.active = true;
            activeLevelsCenterPos.Add(ls.centerObj.gameObject);
        }
    }

    public void ChangeTime(int dayNight)
    {
        Shuffle(aliveProducerBuildings);
        if (dayNight == 0)
        {
            b.active = false;
            lightIncreasing = true;
            // globalLight.gameObject.SetActive(true);
            StartCoroutine(DelayedLights(0));
            
            TimeManager.Instance.transform.DOMoveX(0, 0.1f).OnComplete(() =>
            {
                time = Time.Day;
            });
        }
        else
        {
            b.active = true;
            lightDecreasing = true;
            // globalLight.gameObject.SetActive(false);
            StartCoroutine(DelayedLights(1));
            
            TimeManager.Instance.transform.DOMoveX(0, 0.1f).OnComplete(() =>
            {
                time = Time.Night;
            });
            
        }
    }

    IEnumerator DelayedLights(int dayNight)
    {
        if (dayNight == 0)
        {
            for (int i = 0; i < aliveProducerBuildings.Count; i++)
            {
                aliveProducerBuildings[i].NightTime(false);
                
                yield return new WaitForSeconds(0.003f);
                
            }

            for (int i = 0; i < otherLights.Count; i++)
            {
                otherLights[i].gameObject.SetActive(false);
                
                yield return new WaitForSeconds(0.003f);
            }
            
        }
        else
        {
            for (int i = 0; i <  aliveProducerBuildings.Count; i++)
            {
                aliveProducerBuildings[i].NightTime(true);
                
                yield return new WaitForSeconds(0.003f);
            }
            
            for (int i = 0; i < otherLights.Count; i++)
            {
                otherLights[i].gameObject.SetActive(true);
                
                yield return new WaitForSeconds(0.003f);
            }
            
            
        }
    }

    private void MeasureLight()
    {
        if (lightDecreasing)
        {
            globalLight.intensity -= UnityEngine.Time.deltaTime * 3;
            if (globalLight.intensity < 0.05f)
            {
                globalLight.intensity = 0;
                lightDecreasing = false;
            }
        }
            
        if (lightIncreasing)
        {
            globalLight.intensity += UnityEngine.Time.deltaTime * 3;
            if (globalLight.intensity > 1)
            {
                globalLight.intensity = 1;
                lightIncreasing = false;
            }
        }
    }
    
    public void ProduceTap()
    {
        foreach (var build in aliveProducerBuildings)
        {
            build.Produce();
        }
    }
    
    public static void Shuffle<T>(IList<T> ts)
    {
        var count = ts.Count;
        var last = count - 1;
        for (var i = 0; i < last; ++i)
        {
            var r = UnityEngine.Random.Range(i, count);
            (ts[i], ts[r]) = (ts[r], ts[i]);
        }
    }

    #region Win/Lose/CoinUpdate
    
    public void GameWin()
    {
        gameState = GameState.Win;
        //////////////////////////
        UIManager.Instance._GameWin();
    }

    public void GameLose()
    {
        gameState = GameState.Lose;
        ///////////////////////////
        UIManager.Instance._GameLose();
    }
    #endregion
    
    #region Constant Methods
    
    public static float ClampAngle(float angle, float min, float max)
    {
        angle = Mathf.Repeat(angle, 360);
        min = Mathf.Repeat(min, 360);
        max = Mathf.Repeat(max, 360);
        var inverse = false;
        var timing = min;
        var tangle = angle;
        if (min > 180)
        {
            inverse = true;
            timing -= 180;
        }
        if (angle > 180)
        {
            inverse = !inverse;
            tangle -= 180;
        }
        var result = !inverse ? tangle > timing : tangle < timing;
        if (!result)
            angle = min;
        inverse = false;
        tangle = angle;
        var tax = max;
        if (angle > 180)
        {
            inverse = true;
            tangle -= 180;
        }
        if (max > 180)
        {
            inverse = !inverse;
            tax -= 180;
        }
        result = !inverse ? tangle < tax : tangle > tax;
        if (!result)
            angle = max;
        return angle;
    }
    
    public Vector2 GetMousePosition()
    {
        var pos = new Vector2(Input.mousePosition.x / Screen.width, Input.mousePosition.y / Screen.height);

        return pos;
    }
    
    #endregion
}
