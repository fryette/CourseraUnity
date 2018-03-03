﻿using UnityEngine;
using UnityEngine.SceneManagement;

namespace Assets.script.Menu
{
	public class MainMenu : MonoBehaviour
	{
		public void HandlePlayButtonOnClickEvent()
		{
			MenuManager.GoToMenu(MenuItems.PLAY);
		}

		public void HandleHelpButtonOnClickEvent()
		{
			MenuManager.GoToMenu(MenuItems.HELP);
		}

		public void HandleQuitButtonOnClickEvent()
		{
			MenuManager.GoToMenu(MenuItems.QUIT);
		}

		public void HandleGoBackButtonOnClickEvent()
		{
			MenuManager.GoBack();
		}
	}
}
