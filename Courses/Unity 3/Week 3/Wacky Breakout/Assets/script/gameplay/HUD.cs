using System;
using Assets.script.configuration;
using UnityEngine;
using UnityEngine.UI;

namespace Assets.script.gameplay
{
	public class HUD : MonoBehaviour
	{

		private static float _score;
		private static float _remainLifes;

		private Text _scoreText;
		private Text _lifesLeftText;
		// Use this for initialization
		void Start()
		{
			_remainLifes = ConfigurationUtils.MaxLifes;
			_scoreText = GameObject.FindWithTag("Score").GetComponent<Text>();
			_lifesLeftText = GameObject.FindWithTag("LifesLeft").GetComponent<Text>();
			_lifesLeftText.text = string.Format("Lifes left: {0}", ConfigurationUtils.MaxLifes);
			_scoreText.text = "Score: 0";
		}

		// Update is called once per frame
		void Update()
		{

		}

		public void ReduceLifes()
		{
			_remainLifes -= 1;
			if (_lifesLeftText != null)
			{
				_lifesLeftText.text = string.Format("Lifes left: {0}", _remainLifes);
			}
		}

		public void AddScore(float worth)
		{
			_score += worth;
			if (_scoreText != null)
			{
				_scoreText.text = string.Format("Score: {0}", _score);
			}
		}
	}
}
