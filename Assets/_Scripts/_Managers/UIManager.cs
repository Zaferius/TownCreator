using System.Collections.Generic;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
    #region Instance Method
    public static UIManager Instance;
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

    #region Constant
    [HideInInspector]public TextMeshProUGUI levelIndex;
    [HideInInspector]public GameObject levelComplete,levelFailed,confetti;
    [HideInInspector]public List<string> winTexts = new List<string>();
    [HideInInspector]public List<string> failTexts = new List<string>();
    [HideInInspector]public TextMeshProUGUI failText,winText;
    #endregion

    [Header("Day&Night")]
    public GameObject dayImage;
    public GameObject nightImage;
    public bool changing;
    [Header("Coin")] 
    public TextMeshProUGUI coinText;
    [Header("Income")] 
    public TextMeshProUGUI incomeText;
    private void Awake()
    {
        #region Instance Method
        InstanceMethod();
        #endregion
    }
    
    private void Update()
    {
        ScoreShow(GameManager.Instance.currentCoin);
        IncomeShow(GameManager.Instance.income);
    }

    public void _GameStart()
    {
        levelIndex.enabled = true;
        GameManager.Instance.gameState = GameManager.GameState.Play;
    }

    public void _GameWin()
    {
        levelIndex.enabled = false;

        winText.text = winTexts[Random.Range(0, winTexts.Count)];
        
        levelComplete.SetActive(true);
        confetti.SetActive(true);
    }

    public void _GameLose()
    {
        levelIndex.enabled = false;
        
        failText.text = failTexts[Random.Range(0, failTexts.Count)];
        
        levelFailed.SetActive(true);
    }
    
    public void SetLevelIndex()
    {
        levelIndex.text = "Level " + LevelManager.Instance.currentLevelNumber;
    }

    public void ChangeTimeUI()
    {
        if (!changing)
        {
            changing = true;
            if (GameManager.Instance.time == GameManager.Time.Day)
            {
                GameManager.Instance.ChangeTime(1);
                nightImage.SetActive(true);
                dayImage.SetActive(false);
                nightImage.transform.DOPunchScale(new Vector3(0.1f, .1f, .1f), 0.1f);
            }
        
            if (GameManager.Instance.time == GameManager.Time.Night)
            {
                GameManager.Instance.ChangeTime(0);
                nightImage.SetActive(false);
                dayImage.SetActive(true);
                dayImage.transform.DOPunchScale(new Vector3(0.1f, .1f, .1f), 0.1f);
            } 
            
            TimeManager.Instance.transform.DOMoveX(0, 2f).OnComplete(() =>
            {
                changing = false;
            });
            
        }

    }

    public string ScoreShow(int Score)
    {
        float Scor = Score;
        string[] ScoreNames = new string[] { "", "k", "M", "B", "T", "aa", "ab", "ac", "ad", "ae", "af", "ag", "ah", "ai", "aj", "ak", "al", "am", "an", "ao", "ap", "aq", "ar", "as", "at", "au", "av", "aw", "ax", "ay", "az", "ba", "bb", "bc", "bd", "be", "bf", "bg", "bh", "bi", "bj", "bk", "bl", "bm", "bn", "bo", "bp", "bq", "br", "bs", "bt", "bu", "bv", "bw", "bx", "by", "bz", };
        int i;
 
        for (i = 0; i < ScoreNames.Length; i++)
            if (Scor < 900)
                break;
            else Scor = Mathf.Floor(Scor / 100f) / 10f;
 
        if (Scor == Mathf.Floor(Scor))
            coinText.text = Scor.ToString() + ScoreNames[i];
        else  coinText.text = Scor.ToString("F1") + ScoreNames[i];
        return  coinText.text;
    }
    
    public string IncomeShow(int Score)
    {
        float Scor = Score;
        string[] ScoreNames = new string[] { "", "k", "M", "B", "T", "aa", "ab", "ac", "ad", "ae", "af", "ag", "ah", "ai", "aj", "ak", "al", "am", "an", "ao", "ap", "aq", "ar", "as", "at", "au", "av", "aw", "ax", "ay", "az", "ba", "bb", "bc", "bd", "be", "bf", "bg", "bh", "bi", "bj", "bk", "bl", "bm", "bn", "bo", "bp", "bq", "br", "bs", "bt", "bu", "bv", "bw", "bx", "by", "bz", };
        int i;
 
        for (i = 0; i < ScoreNames.Length; i++)
            if (Scor < 900)
                break;
            else Scor = Mathf.Floor(Scor / 100f) / 10f;
 
        if (Scor == Mathf.Floor(Scor))
            incomeText.text = Scor.ToString() + ScoreNames[i] + "/" + "sec";
        else  incomeText.text = Scor.ToString("F1") + ScoreNames[i] + "/" + "sec";
        return  incomeText.text;
    }


    public void GainEffect(TextMeshProUGUI text)
    {
        text.transform.DOPunchScale(new Vector3(0.1f, 0.1f, 0.1f), 0.1f).OnComplete(() =>
        {
            text.transform.DOScale(new Vector3(0.75f,0.75f,0.75f), 0.1f);
        });
        
        text.DOColor(Color.green, 0).OnComplete(() =>
        {
            text.DOColor(Color.white, 0.1f);
        });
    }
    
    //---------------------------------------------------------------------------
    
}
