using UnityEngine;

namespace Assets.script.Menu
{
	public class PauseMenu : MonoBehaviour
	{
		public void Start()
		{
			Time.timeScale = 0;
		}

		public void HandleResumeButtonOnClickEvent()
		{
			Time.timeScale = 1;
			Destroy(gameObject);
		}

		public void HandleHelpButtonOnClickEvent()
		{
			Time.timeScale = 1;
			MenuManager.GoToMenu(MenuItems.HELP);
		}

		public void HandleResetLevelButtonOnClickEvent()
		{
			Time.timeScale = 1;
			MenuManager.GoToMenu(MenuItems.PLAY);
		}
	}
}
