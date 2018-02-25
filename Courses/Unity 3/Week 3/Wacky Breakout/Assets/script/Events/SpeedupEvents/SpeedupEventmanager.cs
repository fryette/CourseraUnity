using System.Collections.Generic;
using Assets.script.gameplay.Blocks;
using UnityEngine.Events;

namespace Assets.script.Events.SpeedupEvents
{
	public static class SpeedupEventManager
	{
		#region Fields

		// save lists of invokers and listeners
		private static readonly List<PickupBlock> Invokers = new List<PickupBlock>();
		private static readonly List<UnityAction<float, float>> Listeners = new List<UnityAction<float, float>>();

		#endregion

		/// <summary>
		/// Adds the given script as an invoker
		/// </summary>
		/// <param name="invoker">the invoker</param>
		public static void AddInvoker(PickupBlock invoker)
		{
			// add invoker to list and add all listeners to invoker
			Invokers.Add(invoker);
			foreach (var listener in Listeners)
			{
				invoker.AddSpeedupEffectListener(listener);
			}
		}

		/// <summary>
		/// Adds the given event handler as a listener
		/// </summary>
		/// <param name="handler">the event handler</param>
		public static void AddListener(UnityAction<float, float> handler)
		{
			// add listener to list and to all invokers
			Listeners.Add(handler);
			foreach (var pickupBlock in Invokers)
			{
				pickupBlock.AddSpeedupEffectListener(handler);
			}
		}
	}
}