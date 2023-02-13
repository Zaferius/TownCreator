using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UpgradeManager : MonoBehaviour
{
    public static UpgradeManager Instance;
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

    public int plusIncome;
    [Header("+ Upgrade Buildings +")] 
    public List<int> upgradeBuildingsCost = new List<int>();
    public TextMeshProUGUI buildingCostText;
    public int upgradeBuildingIndex;
    [Header("+ Upgrade Residents +")] 
    public List<int> upgradeResidentsCost = new List<int>();
    public TextMeshProUGUI residentCostText;
    public int upgradeResidentsIndex;
    [Header("+ Upgrade Income +")] 
    public List<int> upgradeIncomeAmount = new List<int>();
    public List<int> upgradeIncomeCost = new List<int>();
    public TextMeshProUGUI incomeCostText;
    public TextMeshProUGUI currentUpgradedIncomeText;
    public int upgradeIncomeIndex;


    private void Awake()
    {
        #region Instance Method

        InstanceMethod();

        #endregion

    }
    void Start()
    {
        CostCalculate(upgradeBuildingsCost[upgradeBuildingIndex], buildingCostText);
        CostCalculate(upgradeResidentsCost[upgradeResidentsIndex], residentCostText);
        CostCalculate(upgradeIncomeCost[upgradeIncomeIndex], incomeCostText);
        CostCalculateDefault(upgradeIncomeAmount[upgradeIncomeIndex], currentUpgradedIncomeText);
    }

   
    void Update()
    {
        
    }

    public void UpgradeBuildings()
    {
        if (upgradeBuildingIndex < upgradeBuildingsCost.Count)
        {
            if (GameManager.Instance.currentCoin >= upgradeBuildingsCost[upgradeBuildingIndex])
            {
                GameManager.Instance.CreateBuilding();
                GameManager.Instance.currentCoin -= upgradeBuildingsCost[upgradeBuildingIndex];
                upgradeBuildingIndex++;
                GameManager.Instance.LevelFieldCheck();
                CostCalculate(upgradeBuildingsCost[upgradeBuildingIndex], buildingCostText);
                
            }
        }
    }

    public void UpgradeResidents()
    {
        if (upgradeResidentsIndex < upgradeResidentsCost.Count)
        {
            if (GameManager.Instance.currentCoin >= upgradeResidentsCost[upgradeResidentsIndex])
            {
                if (GameManager.Instance.emptyProducerBuildings.Count > 0)
                {
                    
                    var randomEmpty =  GameManager.Instance.emptyProducerBuildings[Random.Range(0,GameManager.Instance.emptyProducerBuildings.Count)];
                    randomEmpty.GetAlive();
                    GameManager.Instance.aliveProducerBuildings.Add(randomEmpty);
                    GameManager.Instance.emptyProducerBuildings.Remove(randomEmpty);
                    if (GameManager.Instance.time == GameManager.Time.Night)
                    {
                        GameManager.Instance.ChangeTime(1);
                    }
                    
                    GameManager.Instance.currentCoin -= upgradeResidentsCost[upgradeResidentsIndex];
                    upgradeResidentsIndex++;
                    
                    CostCalculate(upgradeResidentsCost[upgradeResidentsIndex], residentCostText);
                }
            }
        }
    }
    
    public void UpgradeIncome()
    {
        if (upgradeIncomeIndex < upgradeIncomeCost.Count)
        {
            if (GameManager.Instance.currentCoin >= upgradeIncomeCost[upgradeIncomeIndex])
            {
                foreach (var building in GameManager.Instance.aliveProducerBuildings)
                {
                    GameManager.Instance.income += upgradeIncomeAmount[upgradeIncomeIndex];
                }
                
                plusIncome += upgradeIncomeAmount[upgradeIncomeIndex];
                GameManager.Instance.currentCoin -= upgradeIncomeCost[upgradeIncomeIndex];
               
                UIManager.Instance.GainEffect(UIManager.Instance.incomeText);
                upgradeIncomeIndex++;
                
                CostCalculate(upgradeIncomeCost[upgradeIncomeIndex], incomeCostText);
                CostCalculateDefault(upgradeIncomeAmount[upgradeIncomeIndex], currentUpgradedIncomeText);
            }
        }
        
    }
    
    
    public string CostCalculate(int Score, TextMeshProUGUI costText)
    {
        float Scor = Score;
        string[] ScoreNames = new string[] { "", "k", "M", "B", "T", "aa", "ab", "ac", "ad", "ae", "af", "ag", "ah", "ai", "aj", "ak", "al", "am", "an", "ao", "ap", "aq", "ar", "as", "at", "au", "av", "aw", "ax", "ay", "az", "ba", "bb", "bc", "bd", "be", "bf", "bg", "bh", "bi", "bj", "bk", "bl", "bm", "bn", "bo", "bp", "bq", "br", "bs", "bt", "bu", "bv", "bw", "bx", "by", "bz", };
        int i;
 
        for (i = 0; i < ScoreNames.Length; i++)
            if (Scor < 900)
                break;
            else Scor = Mathf.Floor(Scor / 100f) / 10f;
 
        if (Scor == Mathf.Floor(Scor))
            costText.text = Scor.ToString() + ScoreNames[i] + "$";
        else  costText.text = Scor.ToString("F1") + ScoreNames[i] + "$";;
        return  costText.text;
    }
    
    public string CostCalculateDefault(int Score, TextMeshProUGUI costText)
    {
        float Scor = Score;
        string[] ScoreNames = new string[] { "", "k", "M", "B", "T", "aa", "ab", "ac", "ad", "ae", "af", "ag", "ah", "ai", "aj", "ak", "al", "am", "an", "ao", "ap", "aq", "ar", "as", "at", "au", "av", "aw", "ax", "ay", "az", "ba", "bb", "bc", "bd", "be", "bf", "bg", "bh", "bi", "bj", "bk", "bl", "bm", "bn", "bo", "bp", "bq", "br", "bs", "bt", "bu", "bv", "bw", "bx", "by", "bz", };
        int i;
 
        for (i = 0; i < ScoreNames.Length; i++)
            if (Scor < 900)
                break;
            else Scor = Mathf.Floor(Scor / 100f) / 10f;
 
        if (Scor == Mathf.Floor(Scor))
            costText.text = "+" + Scor.ToString() + ScoreNames[i];
        else  costText.text = "+" + Scor.ToString("F1") + ScoreNames[i];;
        return  costText.text;
    }
    
}
