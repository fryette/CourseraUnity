using System;
using UnityEngine;
using UnityEngine.SceneManagement;
using Object = UnityEngine.Object;

namespace Assets.script.Menu
{
	public static class MenuManager
	{
		public static void GoToMenu(MenuItems item)
		{
			switch (item)
			{
				case MenuItems.MAIN_MENU:
					GoToScene("Menu");
					break;
				case MenuItems.QUIT:
					Application.Quit();
					break;
				case MenuItems.PAUSE:
					Object.Instantiate(Resources.Load("PauseMenu"));
					break;
				case MenuItems.HELP:
					GoToScene("Help");
					break;
				case MenuItems.PLAY:
					GoToScene("Gameplay");
					break;
				case MenuItems.GAME_OVER:
					Object.Instantiate(Resources.Load("GameOverMenu"));
					break;
				case MenuItems.GAME_WON:
					Object.Instantiate(Resources.Load("GameWon"));
					break;
				case MenuItems.HIGHEST_SCORE:
					GoToScene("HighestScore");
					break;
				default:
					throw new ArgumentOutOfRangeException("item", item, null);
			}
		}

		public static void GoBack()
		{
			string sceneName = PlayerPrefs.GetString("lastLoadedScene");
			SceneManager.LoadScene(sceneName);
		}

		private static void GoToScene(string name)
		{
			PlayerPrefs.SetString("lastLoadedScene", SceneManager.GetActiveScene().name);
			SceneManager.LoadScene(name);
		}
	}
}
