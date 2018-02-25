using Assets.script.gameplay;
using UnityEngine;

namespace Assets.script.util
{
	public static class EffectUtils
	{
		public static SpeedupEffectMonitor SpeedupEffectMonitor;

		static EffectUtils()
		{
			SpeedupEffectMonitor = Camera.main.GetComponent<SpeedupEffectMonitor>();
		}
	}
}
