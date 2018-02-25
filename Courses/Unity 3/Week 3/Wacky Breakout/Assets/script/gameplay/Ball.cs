using Assets.script.configuration;
using Assets.script.Events.SpeedupEvents;
using Assets.script.util;
using UnityEngine;

namespace Assets.script.gameplay
{
	public class Ball : MonoBehaviour
	{
		private Timer _deathTimer;
		private Timer _delayTimer;
		private Timer _speedupTimer;
		private bool _isDestroided;
		private HUD _hud;
		private BallSpawner _ballSpawner;
		private Rigidbody2D _rb;
		private float _speedupRatio;

		public void Start()
		{
			SpeedupEventManager.AddListener(OnSpeedupEffectActivated);

			_hud = GameObject.FindGameObjectWithTag("HUD").GetComponent<HUD>();

			_deathTimer = gameObject.AddComponent<Timer>();
			_delayTimer = gameObject.AddComponent<Timer>();
			_speedupTimer = gameObject.AddComponent<Timer>();

			_deathTimer.Duration = ConfigurationUtils.BallLifeTime;
			_delayTimer.Duration = 1f;

			_deathTimer.Run();
			_delayTimer.Run();

			_ballSpawner = Camera.main.GetComponent<BallSpawner>();

			_rb = GetComponent<Rigidbody2D>();
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
				_rb.velocity *= speedupRatio;
				_speedupRatio = speedupRatio;

				SupscribeOnSpeedupEvents();
				_speedupTimer.Run();
			}
		}

		private void SupscribeOnSpeedupEvents()
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
			_rb.velocity /= _speedupRatio;
		}

		// Update is called once per frame
		void Update()
		{
			if (_delayTimer.Finished && !_delayTimer.Stopped)
			{
				_delayTimer.Stop();
				_rb.AddForce(
					new Vector2(Random.Range(-0.2f, 0.2f), -1) * ConfigurationUtils.BallImpulseForce *
					EffectUtils.SpeedupEffectMonitor.SpeedupRation,
					ForceMode2D.Force);

				TryToSubscribeOnSpeedupEffect();
			}
			if (_deathTimer.Finished)
			{
				if (!_isDestroided)
				{
					DestroyObject();
				}
			}
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
				_hud.ReduceLifes();
				DestroyObject();
			}
		}

		public void SetDirection(Vector2 direction)
		{
			_rb.velocity = _rb.velocity.magnitude * direction;
		}

		private void DestroyObject()
		{
			_isDestroided = true;
			UnsubscribeFromSpeedupEvents();
			Destroy(gameObject);

			if (gameObject.transform.position.y < ScreenUtils.ScreenBottom)
			{
				_ballSpawner.SpawnBall();
			}
		}
	}
}
