using Assets.script.Configuration;
using Assets.script.Events;
using UnityEngine;

namespace Assets.script.util
{
	/// <inheritdoc />
	/// <summary>
	/// Initializes the game
	/// </summary>
	public class GameInitializer : MonoBehaviour 
	{
		/// <summary>
		/// Awake is called before Start
		/// </summary>
		public void Awake()
		{
			EventManager.Initialize();
			ScreenUtils.Initialize();
			ConfigurationUtils.Initialize();
		}
	}
}
