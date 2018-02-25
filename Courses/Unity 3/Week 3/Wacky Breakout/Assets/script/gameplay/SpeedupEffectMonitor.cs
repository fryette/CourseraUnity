using Assets.script.Events.SpeedupEvents;
using UnityEngine;

namespace Assets.script.gameplay
{
	public class SpeedupEffectMonitor : MonoBehaviour
	{
		private Timer _speedupTimer;
		public bool IsSpeedupEffectActive { get; private set; }
		public float TimeRemaining
		{
			get { return _speedupTimer.TimeRemaining; }
		}

		public float SpeedupRation { get; private set; }

		public void Start()
		{
			SpeedupRation = 1;
			SpeedupEventManager.AddListener(OnSpeedupEffectActivated);
			_speedupTimer = gameObject.AddComponent<Timer>();
		}

		private void OnSpeedupEffectActivated(float duration, float speedupRatio)
		{
			IsSpeedupEffectActive = true;
			SpeedupRation = speedupRatio;

			if (_speedupTimer.Running)
			{
				_speedupTimer.Duration += duration;
			}
			else
			{
				_speedupTimer.Duration = duration;

				_speedupTimer.FinishedEvent.AddListener(OnSpeedupEffectFinished);
				_speedupTimer.Run();
			}
		}

		private void OnSpeedupEffectFinished()
		{
			SpeedupRation = 1;
			IsSpeedupEffectActive = false;
		}
	}
}
