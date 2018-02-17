using UnityEngine;

namespace Assets.scripts
{
	public class Ship : MonoBehaviour
	{
		public const float THRUST_FORCE = 0.2f;
		public Vector2 ThrustDirection = new Vector2(0, 1);
		private float _currentSpeed;
		private float _maxSpeed = 5;
		private Vector2 _lastDirection;
		private Rigidbody2D _rigidbody2D;
		private Sprite[] _sprites;
		private SpriteRenderer _sprintRenderer;

		[SerializeField] public GameObject BulletPrefab;

		// Use this for initialization
		public void Start()
		{
			_sprites = Resources.LoadAll<Sprite>("Sprites/Ship");
			_rigidbody2D = GetComponent<Rigidbody2D>();
			gameObject.AddComponent<ScreenWrapper>();
			_sprintRenderer = GetComponent<SpriteRenderer>();

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
			if (Input.GetKeyDown(KeyCode.LeftControl))
			{
				var bullet = Instantiate(BulletPrefab);
				bullet.transform.position = gameObject.transform.position;
				bullet.transform.rotation = gameObject.transform.rotation;

				bullet.GetComponent<Bullet>().ApplyForce(ThrustDirection);
			}
		}

		public void FixedUpdate()
		{
			if (Input.GetAxis("Thrust") != 0)
			{
				if (_currentSpeed < _maxSpeed)
				{
					_currentSpeed += THRUST_FORCE;
				}

				_lastDirection = ThrustDirection;
				_rigidbody2D.velocity = ThrustDirection * _currentSpeed;
				_sprintRenderer.sprite = _sprites[0];
			}
			else
			{
				_currentSpeed -= _currentSpeed * Time.deltaTime;

				if (_currentSpeed <= 0.1)
				{
					_currentSpeed = 0;
				}

				_rigidbody2D.velocity = _lastDirection * _currentSpeed;
				_sprintRenderer.sprite = _sprites[1];
			}
		}


		public void OnCollisionEnter2D(Collision2D coll)
		{
			Destroy(gameObject);
		}
	}
}
