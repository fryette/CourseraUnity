using Assets.script.configuration;
using UnityEngine;

namespace Assets.script
{
	public class BallSpawner : MonoBehaviour
	{
		[SerializeField] public GameObject BallPrefab;
		private Timer _timer;
		private Vector2 _spawnLocationMin;
		private Vector2 _spawnLocationMax;
		private bool _retrySpawn;

		// Use this for initialization
		void Start()
		{
			_timer = gameObject.AddComponent<Timer>();
			_timer.Duration = GetDuration();
			_timer.Run();

			var tempBall = Instantiate(BallPrefab);
			var boxCollider = tempBall.GetComponent<BoxCollider2D>();
			var ballColliderHalfWidth = boxCollider.size.x / 2;
			var ballColliderHalfHeight = boxCollider.size.y / 2;
			_spawnLocationMin = new Vector2(
				tempBall.transform.position.x - ballColliderHalfWidth,
				tempBall.transform.position.y - ballColliderHalfHeight);
			_spawnLocationMax = new Vector2(
				tempBall.transform.position.x + ballColliderHalfWidth,
				tempBall.transform.position.y + ballColliderHalfHeight);
		}

		// Update is called once per frame
		void Update()
		{
			if (_timer.Finished || _retrySpawn)
			{
				SpawnBall();

				if (!_retrySpawn)
				{
					_timer.Duration = GetDuration();
					_timer.Run();
				}
			}
		}

		private float GetDuration()
		{
			return Random.Range(ConfigurationUtils.MinSecondsToSpawn, ConfigurationUtils.MaxSecondsToSpawn);
		}

		public void SpawnBall()
		{
			if (Physics2D.OverlapArea(_spawnLocationMin, _spawnLocationMax) == null)
			{
				_retrySpawn = false;
				Instantiate(BallPrefab);
			}
			else
			{
				_retrySpawn = true;
			}
		}
	}
}
