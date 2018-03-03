using System;
using System.Collections.Generic;
using UnityEngine.Events;

namespace Assets.script.Events
{
	/// <summary>
	/// Manages connections between event listeners and event invokers
	/// </summary>
	public static class EventManager
	{
		private static readonly Dictionary<EventName, List<IntEventInvoker>> Invokers =
			new Dictionary<EventName, List<IntEventInvoker>>();
		private static readonly Dictionary<EventName, List<UnityAction<int>>> Listeners =
			new Dictionary<EventName, List<UnityAction<int>>>();

		/// <summary>
		/// Initializes the event manager
		/// </summary>
		public static void Initialize()
		{
			// create empty lists for all the dictionary entries
			foreach (EventName name in Enum.GetValues(typeof(EventName)))
			{
				if (!Invokers.ContainsKey(name))
				{
					Invokers.Add(name, new List<IntEventInvoker>());
					Listeners.Add(name, new List<UnityAction<int>>());
				}
				else
				{
					Invokers[name].Clear();
					Listeners[name].Clear();
				}
			}
		}

		/// <summary>
		/// Adds the given invoker for the given event name
		/// </summary>
		/// <param name="eventName">event name</param>
		/// <param name="invoker">invoker</param>
		public static void AddInvoker(EventName eventName, IntEventInvoker invoker)
		{
			// add listeners to new invoker and add new invoker to dictionary
			foreach (var listener in Listeners[eventName])
			{
				invoker.AddListener(eventName, listener);
			}
			Invokers[eventName].Add(invoker);
		}

		/// <summary>
		/// Adds the given listener for the given event name
		/// </summary>
		/// <param name="eventName">event name</param>
		/// <param name="listener">listener</param>
		public static void AddListener(EventName eventName, UnityAction<int> listener)
		{
			// add as listener to all invokers and add new listener to dictionary
			foreach (var invoker in Invokers[eventName])
			{
				invoker.AddListener(eventName, listener);
			}
			Listeners[eventName].Add(listener);
		}

		/// <summary>
		/// Removes the given invoker for the given event name
		/// </summary>
		/// <param name="eventName">event name</param>
		/// <param name="invoker">invoker</param>
		public static void RemoveInvoker(EventName eventName, IntEventInvoker invoker)
		{
			// remove invoker from dictionary
			Invokers[eventName].Remove(invoker);
		}
	}
}
