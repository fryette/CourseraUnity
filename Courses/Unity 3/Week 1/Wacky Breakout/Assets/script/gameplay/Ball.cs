using Assets.script.configuration;
using UnityEngine;

namespace Assets.script.gameplay
{
	public class Ball : MonoBehaviour
	{
		private Rigidbody2D _rb;

		// Use this for initialization
		void Start()
		{
			_rb = GetComponent<Rigidbody2D>();
			_rb.AddForce(Vector2.down * ConfigurationUtils.BallImpulseForce, ForceMode2D.Force);
		}

		// Update is called once per frame
		void Update()
		{

		}

		public void SetDirection(Vector2 direction)
		{
			_rb.velocity = _rb.velocity.magnitude * direction;
		}
	}
}
