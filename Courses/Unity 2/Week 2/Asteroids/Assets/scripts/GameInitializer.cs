using UnityEngine;

namespace Assets.scripts
{
	/// <summary>
	/// Initializes the game
	/// </summary>
	public class GameInitializer : MonoBehaviour 
	{
		/// <summary>
		/// Awake is called before Start
		/// </summary>
		void Awake()
		{
			// initialize screen utils
			ScreenUtils.Initialize();
		}
	}
}
