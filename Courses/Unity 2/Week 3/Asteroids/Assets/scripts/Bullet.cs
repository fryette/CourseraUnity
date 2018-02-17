using UnityEngine;

namespace Assets.scripts
{
	public class Bullet : MonoBehaviour
	{
		private const int BULLET_ALIVE_TIME_IN_SECONDS = 2;
		private Timer _deathTimer;

		public void Start()
		{
			_deathTimer = gameObject.AddComponent<Timer>();
			_deathTimer.Duration = BULLET_ALIVE_TIME_IN_SECONDS;
			_deathTimer.Run();
		}

		public void Update()
		{
			if (_deathTimer.Finished)
			{
				Destroy(gameObject);
			}
		}

		public void ApplyForce(Vector2 direction)
		{
			GetComponent<Rigidbody2D>().AddForce(direction * 10, ForceMode2D.Impulse);
		}

		public void OnCollisionEnter2D(Collision2D coll)
		{
			Destroy(gameObject);
		}
	}
}
