using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using Random = UnityEngine.Random;

public sealed class PlayObject : MonoBehaviour
{
    public int objectOpened;
    public int objectAlived;
    public enum ObjectType
    {
        ProducerBuilding,
        Road,
        Prop,
        Vehicle
    }

    public ObjectType type;
    public bool firstObject;
    public GameObject creativePiece;
    public Color buildMainColor;
    private Vector3 defScale;
    [Header("+ House Settings +")] 
    public bool isAlive;
    [Space(4)]
    public int producingPower;
    [Space(4)]
    [SerializeField] private float produceTimer;
    [Header("+ AliveStuff +")] 
    public List<GameObject> aliveStuff = new List<GameObject>();

    private void Awake()
    {
       CheckObject();
    }

    void Start()
    {
        HandleCurrentStatus();
    }
    
    void Update()
    {
        if (isAlive && type == ObjectType.ProducerBuilding && GameManager.Instance.gameState == GameManager.GameState.Play)
        {
            produceTimer -= Time.deltaTime;
            if (produceTimer <= 0)
            {
                Produce();
                produceTimer = 1;
            }
        }
    }
    
    private void CheckObject()
    {
        objectOpened = PlayerPrefs.GetInt(name + "objectOpened");
        objectAlived =  PlayerPrefs.GetInt(name  + "objectAlived");
        
        if (!firstObject)
        {
            gameObject.SetActive(false);
        }
        
        if (objectOpened == 1) 
        {
            gameObject.SetActive(true);
        }
        
        if (objectAlived == 1) 
        {
            if (type == ObjectType.ProducerBuilding)
            {
                isAlive = true;
            }
        }
    }

    private void HandleCurrentStatus()
    {
        if (objectAlived == 1) 
        {
            if (type == ObjectType.ProducerBuilding)
            {
                GameManager.Instance.emptyProducerBuildings.Remove(this);
                GameManager.Instance.aliveProducerBuildings.Add(this);
            }
        }
        
        
        if (!firstObject)
        {
            PrepareBuildings();
            PlayerPrefs.SetInt (name + "objectOpened",1);
        }
        else
        {
            isAlive = true;
            GameManager.Instance.income += producingPower + UpgradeManager.Instance.plusIncome;
            GameManager.Instance.aliveProducerBuildings.Add(this);
        }

        if (type == ObjectType.ProducerBuilding)
        {
            TimeManager.Instance.transform.DOMoveX(0, 0.025f).OnComplete(() =>
            {
                GameManager.Instance.ls.houses.Add(gameObject);
            });
        }
    }

    private void PrepareBuildings()
    {
        produceTimer = 1;
        
        if (!firstObject && type == ObjectType.ProducerBuilding)
        {
            MakeBuildPieces(5);
        }

        if (type == ObjectType.ProducerBuilding)
        {
            if (firstObject)
            {
                GameManager.Instance.aliveProducerBuildings.Add(this);
            }
            else
            {
                if (objectAlived == 0)
                {
                    GameManager.Instance.emptyProducerBuildings.Add(this);
                }
            }
        }
        
    }

    private void MakeBuildPieces(int count)
    {
        var poof = Instantiate(ParticleManager.Instance.poofNewBuild, transform.position, Quaternion.identity);
        poof.transform.localScale = new Vector3(20, 20, 20);
        Destroy(poof, 2);
        
        for (int i = 0; i < count; i++)
        {
            CreatePiece();
        }
    }

    private void CreatePiece()
    {
        Vector3 piecePos = new Vector3(transform.position.x, transform.position.y + 4, transform.position.z);
        var piece = Instantiate(creativePiece, piecePos, Quaternion.identity);
        piece.GetComponent<MeshRenderer>().material.color = buildMainColor;
        piece.GetComponent<Rigidbody>().AddForce(Vector3.up * Random.Range(20,50), ForceMode.Impulse);
        piece.GetComponent<Rigidbody>().AddForce(Vector3.right * Random.Range(-25,25), ForceMode.Impulse);
        piece.GetComponent<Rigidbody>().AddForce(Vector3.forward * Random.Range(-25,25), ForceMode.Impulse);
        piece.GetComponent<Rigidbody>().AddTorque(Vector3.forward * Random.Range(-100,100), ForceMode.Impulse);
    }

    public void Produce()
    {
        if (producingPower < 1)
        {
            producingPower = 1;
        }
        
        GameManager.Instance.currentCoin += producingPower + UpgradeManager.Instance.plusIncome;
        
        transform.DOScale(new Vector3(1.05f,0.8f,1.05f), 0.2f).SetEase(Ease.OutQuad).OnComplete(() =>
        {
            transform.DOScale(Vector3.one, 0.1f).SetEase(Ease.OutBack);
            var coin = Instantiate(ParticleManager.Instance.gainedCoinPrefab, transform.position, Quaternion.identity);
            Destroy(coin, 3);
        });

        UIManager.Instance.GainEffect(UIManager.Instance.coinText);
    }

    public void UpgradeProducingPower(int amount)
    {
        producingPower += amount;
    }

    public void GetAlive()
    {
        transform.DOPunchScale(new Vector3(-0.2f, Random.Range(0.2f, 0.35f), -0.2f), Random.Range(0.5f,1.0f),10,Random.Range(20,25)).SetEase(Ease.OutQuad);
        isAlive = true;
        GameManager.Instance.income += producingPower + UpgradeManager.Instance.plusIncome;
        PlayerPrefs.SetInt (name + "objectAlived",1);
    }

    public void NightTime(bool key)
    {
        if (key)
        {
            foreach (var stuff in aliveStuff)
            {
                stuff.SetActive(true);
            }
        }
        else
        {
            foreach (var stuff in aliveStuff)
            {
                stuff.SetActive(false);
            }
        }
        
    }

   
}
