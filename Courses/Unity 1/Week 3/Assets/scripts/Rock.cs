using UnityEngine;

namespace Assets.scripts
{
	public class Rock : MonoBehaviour
	{
		const float MinImpulseForce = 1f;

		const float MaxImpulseForce = 2f;

		// Use this for initialization
		void Start()
		{
			float angle = Random.Range(0, 2 * Mathf.PI);
			var direction = new Vector2(Mathf.Cos(angle), Mathf.Sin(angle));
			var magnitude = Random.Range(MinImpulseForce, MaxImpulseForce);
			GetComponent<Rigidbody2D>().AddForce(direction * magnitude, ForceMode2D.Impulse);
		}

		void OnBecameInvisible()
		{
			Destroy(gameObject);
		}
	}
}
