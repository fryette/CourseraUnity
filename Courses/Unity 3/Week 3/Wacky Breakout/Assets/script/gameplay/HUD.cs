using Assets.script.Configuration;
using Assets.script.Events;
using Assets.script.Events.Models;
using UnityEngine;
using UnityEngine.UI;

namespace Assets.script.gameplay
{
	public class HUD : IntEventInvoker
	{

		private int _score;
		private int _remainLifes;
		private Text _scoreText;
		private Text _lifesLeftText;

		public void Start()
		{
			EventManager.AddListener(EventName.SCORE_CHANGED_EVENT, HandleScoreChangedEvent);
			EventManager.AddListener(EventName.HEALTH_CHANGED_EVENT, HandleHealthChangedEvent);

			Events.Add(EventName.GAME_OVER, new GameOverEvent());
			EventManager.AddInvoker(EventName.GAME_OVER, this);

			_remainLifes = ConfigurationUtils.MaxLifes;

			_scoreText = GameObject.FindWithTag("Score").GetComponent<Text>();
			_lifesLeftText = GameObject.FindWithTag("LifesLeft").GetComponent<Text>();

			_lifesLeftText.text = string.Format("Lifes left: {0}", ConfigurationUtils.MaxLifes);
			_scoreText.text = "Score: 0";
		}

		private void HandleHealthChangedEvent(int i)
		{
			if (_lifesLeftText == null)
			{
				return;
			}

			_remainLifes += i;

			_lifesLeftText.text = string.Format("Lifes left: {0}", _remainLifes);

			if (_remainLifes <= 0f)
			{
				Events[EventName.GAME_OVER].Invoke(_score);
			}
		}

		private void HandleScoreChangedEvent(int worth)
		{
			if (_scoreText == null)
			{
				return;
			}

			_score += worth;
			_scoreText.text = string.Format("Score: {0}", _score);

			PlayerPrefs.SetInt("score", _score);
		}
	}
}
