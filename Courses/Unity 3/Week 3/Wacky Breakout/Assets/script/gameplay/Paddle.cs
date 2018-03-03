using System;
using Assets.script.configuration;
using Assets.script.Events;
using Assets.script.Menu;
using Assets.script.util;
using UnityEngine;

namespace Assets.script.gameplay
{
	public class Paddle : MonoBehaviour
	{
		[SerializeField] public Sprite DefaultSprite;
		[SerializeField] public Sprite FreezedSprite;

		private Rigidbody2D _rb;
		private Vector3 _navigationVector = Vector3.zero;
		private float _halfColliderWidth;
		private float _halfColliderHeight;
		private Timer _freezerTimer;
		private SpriteRenderer _spriteRender;
		private const float BounceAngleHalfRange = 60 * Mathf.Deg2Rad;

		public void Start()
		{
			EventManager.AddListener(EventName.FREEZER_EFFECT_ACTIVATED_EVENT, FreezerEffectActivated);

			_rb = GetComponent<Rigidbody2D>();
			_freezerTimer = gameObject.AddComponent<Timer>();
			_spriteRender = GetComponent<SpriteRenderer>();

			var collaider = GetComponent<BoxCollider2D>();
			_halfColliderWidth = collaider.bounds.size.x / 2;
			_halfColliderHeight = collaider.bounds.size.y / 2;

			_spriteRender.sprite = DefaultSprite;
		}

		private void FreezerEffectActivated(int duration)
		{
			_spriteRender.sprite = FreezedSprite;
			_freezerTimer.Duration = duration;
			_freezerTimer.Run();
		}

		public void FixedUpdate()
		{
			if (Input.GetKey(KeyCode.Escape))
			{
				MenuManager.GoToMenu(MenuItems.PAUSE);
			}

			if (_freezerTimer != null && _freezerTimer.Running)
			{
				return;
			}

			if (_spriteRender.sprite == FreezedSprite)
			{
				_spriteRender.sprite = DefaultSprite;
			}

			if (Input.GetAxis("Left") != 0f)
			{
				Move(CalculateClampedXForLeft());
			}
			else if (Input.GetAxis("Right") != 0)
			{
				Move(CalculateClampedXForRight());
			}
		}

		/// <summary>
		/// Detects collision with a ball to aim the ball
		/// </summary>
		/// <param name="coll">collision info</param>
		void OnCollisionEnter2D(Collision2D coll)
		{
			if (coll.gameObject.CompareTag("Ball") && IsCollisionHappensOnTopOfThePaddle(coll.contacts[0]))
			{
				// calculate new ball direction
				var ballOffsetFromPaddleCenter = transform.position.x -
												   coll.transform.position.x;
				var normalizedBallOffset = ballOffsetFromPaddleCenter /
											 _halfColliderWidth;
				var angleOffset = normalizedBallOffset * BounceAngleHalfRange;
				var angle = Mathf.PI / 2 + angleOffset;
				var direction = new Vector2(Mathf.Cos(angle), Mathf.Sin(angle));

				// tell ball to set direction to new direction
				var ballScript = coll.gameObject.GetComponent<Ball>();
				ballScript.SetDirection(direction);
			}
		}

		private bool IsCollisionHappensOnTopOfThePaddle(ContactPoint2D point)
		{
			if (Math.Abs(point.point.y) - Math.Abs(transform.position.y + _halfColliderHeight) < 0.06f)
			{
				return true;
			}
			return false;
		}

		private void Move(float paddle)
		{
			_navigationVector = transform.position;
			_navigationVector.x = paddle;

			_rb.MovePosition(_navigationVector);
		}

		private float CalculateClampedXForLeft()
		{
			var paddyX = -ConfigurationUtils.PaddleMoveUnitsPerSecond * Time.deltaTime;

			if (ScreenUtils.ScreenLeft - (transform.position.x - _halfColliderWidth) > paddyX)
			{
				return ScreenUtils.ScreenLeft + _halfColliderWidth;
			}

			return transform.position.x + paddyX;
		}

		private float CalculateClampedXForRight()
		{
			var paddyX = ConfigurationUtils.PaddleMoveUnitsPerSecond * Time.deltaTime;

			if (ScreenUtils.ScreenRight - transform.position.x - _halfColliderWidth < paddyX)
			{
				return ScreenUtils.ScreenRight - _halfColliderWidth;
			}

			return transform.position.x + paddyX;
		}
	}
}
