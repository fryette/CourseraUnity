using Assets.script.Configuration;
using Assets.script.Events;
using UnityEngine;

namespace Assets.script
{
	public class BallSpawner : IntEventInvoker
	{
		[SerializeField]
		public GameObject BallPrefab;

		private Timer _spawnTimer;
		private Vector2 _spawnLocationMin;
		private Vector2 _spawnLocationMax;

		public void Start()
		{
			ConfigureSpawnTimer();
			InitializeFields();

			EventManager.AddListener(EventName.SPAWN_BALL, x => { SpawnBall(); });
		}

		private void InitializeFields()
		{
			var startBall = Instantiate(BallPrefab);

			var boxCollider = startBall.GetComponent<BoxCollider2D>();
			var ballColliderHalfWidth = boxCollider.size.x / 2;
			var ballColliderHalfHeight = boxCollider.size.y / 2;

			_spawnLocationMin = new Vector2(
				startBall.transform.position.x - ballColliderHalfWidth,
				startBall.transform.position.y - ballColliderHalfHeight);
			_spawnLocationMax = new Vector2(
				startBall.transform.position.x + ballColliderHalfWidth,
				startBall.transform.position.y + ballColliderHalfHeight);
		}

		private void ConfigureSpawnTimer()
		{
			_spawnTimer = gameObject.AddComponent<Timer>();
			_spawnTimer.Duration = Random.Range(ConfigurationUtils.MinSecondsToSpawn, ConfigurationUtils.MaxSecondsToSpawn);
			_spawnTimer.FinishedEvent.AddListener(TryToSpawnBall);
			_spawnTimer.Run();
		}

		private void TryToSpawnBall()
		{
			SpawnBall();
			_spawnTimer.Run();
		}

		private void SpawnBall()
		{
			if (Physics2D.OverlapArea(_spawnLocationMin, _spawnLocationMax) == null)
			{
				Instantiate(BallPrefab);
			}
		}
	}
}
