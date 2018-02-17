using System;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Assets.scripts
{
	public class AsteroidSpawner : MonoBehaviour
	{

		[SerializeField]
		public GameObject PrefabAsteroid;
		private Sprite[] _sprites;

		void Start()
		{
			_sprites = Resources.LoadAll<Sprite>("Sprites/Rocks");

			GreateAsteroid(Direction.DOWN);
			GreateAsteroid(Direction.LEFT);
			GreateAsteroid(Direction.RIGHT);
			GreateAsteroid(Direction.UP);
		}

		private void GreateAsteroid(Direction direction)
		{
			var asteroid = Instantiate(PrefabAsteroid);
			asteroid.GetComponent<Asteroid>().Initialize(direction, GetRandomSprite(), UpdatePosition(direction, asteroid));
		}

		private Vector3 UpdatePosition(Direction direction, GameObject gameObject)
		{
			var radius = gameObject.GetComponent<CircleCollider2D>().radius;
			var position = new Vector3();

			switch (direction)
			{
				case Direction.LEFT:
					position.x = ScreenUtils.ScreenRight - radius;
					break;
				case Direction.RIGHT:
					position.x = ScreenUtils.ScreenLeft - radius;
					break;
				case Direction.UP:
					position.y = ScreenUtils.ScreenBottom - radius;
					break;
				case Direction.DOWN:
					position.y = ScreenUtils.ScreenTop - radius;
					break;
				default:
					throw new ArgumentOutOfRangeException("direction", direction, null);
			}

			return position;
		}

		private Sprite GetRandomSprite()
		{
			return _sprites[Random.Range(0, 3)];
		}
	}
}
