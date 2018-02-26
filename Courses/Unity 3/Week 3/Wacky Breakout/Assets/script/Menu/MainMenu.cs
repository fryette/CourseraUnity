using UnityEngine;
using UnityEngine.SceneManagement;

namespace Assets.script.Menu
{
	public class MainMenu : MonoBehaviour
	{

		void Start()
		{

		}

		public void HandlePlayButtonOnClickEvent()
		{
			SceneManager.LoadScene("Gameplay");
		}

		public void HandleHelpButtonOnClickEvent()
		{
			SceneManager.LoadScene("Help");
		}

		public void HandleQuitButtonOnClickEvent()
		{
			Application.Quit();
		}

		public void HandleGoBackButtonOnClickEvent()
		{
			SceneManager.LoadScene("Menu");
		}

		// Update is called once per frame
		void Update()
		{

		}
	}
}
