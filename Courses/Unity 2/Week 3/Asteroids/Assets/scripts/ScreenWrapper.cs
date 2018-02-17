using UnityEngine;

namespace Assets.scripts
{
	class ScreenWrapper : MonoBehaviour
	{
		private float _renderer;

		public void Start()
		{
			_renderer = GetComponent<CircleCollider2D>().radius;
		}
		public void OnBecameInvisible()
		{
			var position = transform.position;

			if (transform.position.x > ScreenUtils.ScreenRight)
			{
				position.x = ScreenUtils.ScreenLeft + _renderer;
			}
			if (transform.position.x < ScreenUtils.ScreenLeft)
			{
				position.x = ScreenUtils.ScreenRight - _renderer;
			}
			if (transform.position.y > ScreenUtils.ScreenTop)
			{
				position.y = ScreenUtils.ScreenBottom + _renderer;
			}
			if (transform.position.y < ScreenUtils.ScreenBottom)
			{
				position.y = ScreenUtils.ScreenTop - _renderer;
			}

			transform.position = position;
		}
	}
}
