using Assets.script.Audio;
using Assets.script.Events;
using Assets.script.Menu;
using UnityEngine;
using UnityEngine.UI;

namespace Assets.script.Gameplay
{
	public class Gameplay : MonoBehaviour
	{
		public void Start()
		{
			EventManager.AddListener(EventName.GAME_OVER, HandleGameOverEvent);
			EventManager.AddListener(EventName.GAME_WIN, HandleGameWinEvent);
		}

		private void HandleGameOverEvent(int score)
		{
			MenuManager.GoToMenu(MenuItems.GAME_OVER);

			GameObject.FindWithTag("FinalScore").GetComponent<Text>().text += " " + score;

			AudioManager.Play(AudioClipName.GAME_OVER);
		}

		private void HandleGameWinEvent(int i)
		{
			var items = GameObject.FindGameObjectsWithTag("Block");

			if (items.Length > 1)
			{
				return;
			}

			AudioManager.Play(AudioClipName.GAME_WON);

			var highScore = PlayerPrefs.GetInt("highscore");
			var score = PlayerPrefs.GetInt("score");

			if (highScore < score)
			{
				PlayerPrefs.SetInt("highscore", score);
			}

			MenuManager.GoToMenu(MenuItems.GAME_WON);

			GameObject.FindWithTag("FinalScore").GetComponent<Text>().text += " " + score;
		}

		public void FixedUpdate()
		{
			if (Input.GetKey(KeyCode.Escape))
			{
				MenuManager.GoToMenu(MenuItems.PAUSE);
			}
		}
	}
}
