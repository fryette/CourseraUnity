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
				case MenuItems.GO_TO_MAIN_MENU:
				case MenuItems.QUIT:
					SceneManager.LoadScene("Menu");
					break;
				case MenuItems.PAUSE:
					Object.Instantiate(Resources.Load("PauseMenu"));
					break;
				default:
					throw new ArgumentOutOfRangeException("item", item, null);
			}
		}
	}
}
