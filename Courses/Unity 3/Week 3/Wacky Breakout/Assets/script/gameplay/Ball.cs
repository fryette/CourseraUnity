using Assets.script.configuration;
using Assets.script.Events;
using Assets.script.Events.Models;
using Assets.script.Events.SpeedupEvents;
using Assets.script.util;
using UnityEngine;

namespace Assets.script.gameplay
{
	public class Ball : IntEventInvoker
	{
		private Timer _deathTimer;
		private Timer _delayBeforeStartMovingTimer;
		private Timer _speedupTimer;
		private bool _isDestroided;
		private Rigidbody2D _rigidBody;
		private float _speedupRatio;

		public void Start()
		{
			SpeedupEventManager.AddListener(OnSpeedupEffectActivated);

			ConfigureDeathTimer();
			ConfigureDelayBeforeStartTimer();
			_speedupTimer = gameObject.AddComponent<Timer>();

			_rigidBody = GetComponent<Rigidbody2D>();

			Events.Add(EventName.SPAWN_BALL, new SpawnBallEvent());
			Events.Add(EventName.HEALTH_CHANGED_EVENT, new HealthChangedEvent());
			EventManager.AddInvoker(EventName.HEALTH_CHANGED_EVENT, this);
			EventManager.AddInvoker(EventName.SPAWN_BALL, this);
		}

		private void ConfigureDeathTimer()
		{
			_deathTimer = gameObject.AddComponent<Timer>();
			_deathTimer.Duration = ConfigurationUtils.BallLifeTime;
			_deathTimer.FinishedEvent.AddListener(DeastroyExpiredBall);
			_deathTimer.Run();
		}

		private void ConfigureDelayBeforeStartTimer()
		{
			_delayBeforeStartMovingTimer = gameObject.AddComponent<Timer>();
			_delayBeforeStartMovingTimer.FinishedEvent.AddListener(DelayBeforeStartMovingFinished);
			_delayBeforeStartMovingTimer.Duration = 1f;
			_delayBeforeStartMovingTimer.Run();
		}

		private void OnSpeedupEffectActivated(float duration, float speedupRatio)
		{
			if (_speedupTimer.Running)
			{
				_speedupTimer.Duration += duration;
			}
			else
			{
				_speedupTimer.Duration = duration;
				_rigidBody.velocity *= speedupRatio;
				_speedupRatio = speedupRatio;

				SubscribeOnSpeedupEvents();
				_speedupTimer.Run();
			}
		}

		private void SubscribeOnSpeedupEvents()
		{
			UnsubscribeFromSpeedupEvents();
			_speedupTimer.FinishedEvent.AddListener(OnSpeedupFinished);
		}

		private void UnsubscribeFromSpeedupEvents()
		{
			_speedupTimer.FinishedEvent.RemoveListener(OnSpeedupFinished);
		}

		private void OnSpeedupFinished()
		{
			_rigidBody.velocity /= _speedupRatio;
		}

		public void DeastroyExpiredBall()
		{
			if (!_deathTimer.Finished)
			{
				return;
			}

			if (!_isDestroided)
			{
				DestroyObject();
			}
		}

		private void DelayBeforeStartMovingFinished()
		{
			_delayBeforeStartMovingTimer.Stop();
			_rigidBody.AddForce(
				new Vector2(Random.Range(-0.2f, 0.2f), -1) * ConfigurationUtils.BallImpulseForce *
				EffectUtils.SpeedupEffectMonitor.SpeedupRation,
				ForceMode2D.Force);

			TryToSubscribeOnSpeedupEffect();
		}

		private void TryToSubscribeOnSpeedupEffect()
		{
			if (EffectUtils.SpeedupEffectMonitor.IsSpeedupEffectActive)
			{
				OnSpeedupEffectActivated(
					EffectUtils.SpeedupEffectMonitor.TimeRemaining,
					EffectUtils.SpeedupEffectMonitor.SpeedupRation);
			}
		}

		public void OnBecameInvisible()
		{
			if (!_isDestroided)
			{
				_isDestroided = true;
				Events[EventName.HEALTH_CHANGED_EVENT].Invoke(-1);
				DestroyObject();
			}
		}

		public void SetDirection(Vector2 direction)
		{
			_rigidBody.velocity = _rigidBody.velocity.magnitude * direction;
		}

		private void DestroyObject()
		{
			_isDestroided = true;
			UnsubscribeFromSpeedupEvents();
			Destroy(gameObject);

			if (gameObject.transform.position.y < ScreenUtils.ScreenBottom)
			{
				Events[EventName.SPAWN_BALL].Invoke(0);
			}
		}
	}
}
