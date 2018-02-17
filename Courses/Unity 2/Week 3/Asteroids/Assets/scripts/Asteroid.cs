	using System;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Assets.scripts
{
	public class Asteroid : MonoBehaviour
	{
		const float MinImpulseForce = 0.5f;

		const float MaxImpulseForce = 1f;
		public void Initialize(Direction direction, Sprite sprite, Vector3 location)
		{

			gameObject.AddComponent<ScreenWrapper>();
			GetComponent<SpriteRenderer>().sprite = sprite;

			transform.position = location;

			var magnitude = Random.Range(MinImpulseForce, MaxImpulseForce);
			GetComponent<Rigidbody2D>().AddForce(GetRightDirection(direction) * magnitude, ForceMode2D.Impulse);

		}

		private Vector2 GetRightDirection(Direction direction)
		{
			float angle = Random.Range(0, 60);

			switch (direction)
			{
				case Direction.LEFT:
					angle = (165 + angle) * Mathf.Deg2Rad;
					break;
				case Direction.RIGHT:
					angle = (345 + angle) * Mathf.Deg2Rad;
					break;
				case Direction.UP:
					angle = (75 + angle) * Mathf.Deg2Rad;
					break;
				case Direction.DOWN:
					angle = (255 + angle) * Mathf.Deg2Rad;
					break;
				default:
					throw new ArgumentOutOfRangeException("direction", direction, null);
			}
			return new Vector2(Mathf.Cos(angle), Mathf.Sin(angle));
		}

		public void OnCollisionEnter2D(Collision2D coll)
		{
			if (coll.gameObject.tag == "Bullet")
			{
				Destroy(gameObject);
			}
		}
	}
}
