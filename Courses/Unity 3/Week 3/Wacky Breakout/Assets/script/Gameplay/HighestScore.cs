using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HighestScore : MonoBehaviour
{

	public void Start()
	{
		var highScore = PlayerPrefs.GetInt("highscore", 0);

		GameObject.FindWithTag("HighestScore").GetComponent<Text>().text += " " + highScore;
	}

	public void Update()
	{

	}
}
