using Assets.script.configuration;
using Assets.script.util;
using UnityEngine;

namespace Assets.script.gameplay
{
	public class Ball : MonoBehaviour
	{
		private Rigidbody2D _rb;
		private Timer _deathTimer;
		private BallSpawner _ballSpawner;
		private Timer _delayTimer;
		private bool _isDestroided;
		private HUD _hud;

		// Use this for initialization
		void Start()
		{
			_hud = GameObject.FindGameObjectWithTag("HUD").GetComponent<HUD>();

			_deathTimer = gameObject.AddComponent<Timer>();
			_delayTimer = gameObject.AddComponent<Timer>();

			_deathTimer.Duration = ConfigurationUtils.BallLifeTime;
			_delayTimer.Duration = 1f;

			_deathTimer.Run();
			_delayTimer.Run();

			_ballSpawner = Camera.main.GetComponent<BallSpawner>();

			_rb = GetComponent<Rigidbody2D>();
		}

		// Update is called once per frame
		void Update()
		{
			if (_delayTimer.Finished && !_delayTimer.Stopped)
			{
				_delayTimer.Stop();
				_rb.AddForce(Vector2.down * ConfigurationUtils.BallImpulseForce, ForceMode2D.Force);
			}
			if (_deathTimer.Finished)
			{
				if (!_isDestroided)
				{
					DestroyObject();
				}
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
			Destroy(gameObject);

			if (gameObject.transform.position.y < ScreenUtils.ScreenBottom)
			{
				_ballSpawner.SpawnBall();
			}
		}
	}
}
