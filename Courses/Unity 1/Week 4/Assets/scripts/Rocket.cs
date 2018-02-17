﻿using UnityEngine;

namespace Assets.scripts
{
	public class Rocket : MonoBehaviour
	{
		public const int THRUST_FORCE = 10;
		public Vector2 ThrustDirection = new Vector2(0, 1);

		private Rigidbody2D _rigidbody2D;
		// Use this for initialization
		void Start()
		{
			_rigidbody2D = GetComponent<Rigidbody2D>();
		}

		// Update is called once per frame
		void Update()
		{
			var rotationInput = Input.GetAxis("Rotation");
			if (rotationInput != 0)
			{
				// calculate rotation amount and apply rotation
				var rotationAmount = 180 * Time.deltaTime;
				if (rotationInput < 0)
				{
					rotationAmount *= -1;
				}

				transform.Rotate(Vector3.forward, rotationAmount);

				// change thrust direction to match ship rotation
				var zRotation = transform.eulerAngles.z * Mathf.Deg2Rad;
				ThrustDirection.x = Mathf.Cos(zRotation);
				ThrustDirection.y = Mathf.Sin(zRotation);
			}
		}

		void FixedUpdate()
		{
			if (Input.GetAxis("Thrust") != 0)
			{
				_rigidbody2D.AddForce(ThrustDirection * THRUST_FORCE, ForceMode2D.Force);
			}
		}

		/// <summary>
		/// When our ship became invisible 
		/// </summary>
		void OnBecameInvisible()
		{
			var position = transform.position;

			if (transform.position.x > ScreenUtils.ScreenRight)
			{
				position.x = ScreenUtils.ScreenLeft;
			}
			if (transform.position.x < ScreenUtils.ScreenLeft)
			{
				position.x = ScreenUtils.ScreenRight;
			}
			if (transform.position.y > ScreenUtils.ScreenTop)
			{
				position.y = ScreenUtils.ScreenBottom;
			}
			if (transform.position.y < ScreenUtils.ScreenBottom)
			{
				position.y = ScreenUtils.ScreenTop;
			}

			transform.position = position;
		}
	}
}