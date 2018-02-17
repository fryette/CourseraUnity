using System.Collections;
using System.Collections.Generic;
using Assets.scripts;
using UnityEngine;

public class Asteroid : MonoBehaviour
{
	const float MinImpulseForce = 1f;

	const float MaxImpulseForce = 2f;

	/// <summary>
	/// Apply random impuls and angle to the asteroid
	/// </summary>
	void Start()
	{
		gameObject.AddComponent<ScreenWrapper>();

		var sprites = Resources.LoadAll<Sprite>("Sprites/Rocks");
		GetComponent<SpriteRenderer>().sprite = sprites[Random.Range(0, 3)];

		var angle = Random.Range(0, 2 * Mathf.PI);
		var direction = new Vector2(Mathf.Cos(angle), Mathf.Sin(angle));
		var magnitude = Random.Range(MinImpulseForce, MaxImpulseForce);
		GetComponent<Rigidbody2D>().AddForce(direction * magnitude, ForceMode2D.Impulse);
	}
}
