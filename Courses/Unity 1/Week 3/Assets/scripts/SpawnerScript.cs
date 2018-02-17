using System;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Assets.scripts
{
	public class SpawnerScript : MonoBehaviour
	{
		[SerializeField] public GameObject Prefab;
		[SerializeField] public Sprite FirstAsset;
		[SerializeField] public Sprite SecondAsset;
		[SerializeField] public Sprite ThirdAsset;

		const float MinSpawnDelay = 1;
		const float MaxSpawnDelay = 2;

		Timer _spawnTimer;

		void Start()
		{
			_spawnTimer = gameObject.AddComponent<Timer>();
			_spawnTimer.Duration = Random.Range(MinSpawnDelay, MaxSpawnDelay);
			_spawnTimer.Run();
		}

		// Update is called once per frame
		void Update()
		{
			if (_spawnTimer.Finished && GameObject.FindGameObjectsWithTag("Rock").Length < 3)
			{
				CreateObject();
				_spawnTimer.Duration = Random.Range(MinSpawnDelay, MaxSpawnDelay);
				_spawnTimer.Run();
			}
		}

		private void CreateObject()
		{
			Prefab.GetComponent<SpriteRenderer>().sprite = GetAsset(Random.Range(1, 4));
			Instantiate(Prefab);
		}

		private Sprite GetAsset(int i)
		{
			switch (i)
			{
				case 1:
					return FirstAsset;
				case 2:
					return SecondAsset;
				case 3:
					return ThirdAsset;
				default:
					throw new ArgumentException();
			}
		}
	}
}
