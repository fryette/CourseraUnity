using UnityEngine;

namespace Assets.scripts
{
	class ScreenWrapper : MonoBehaviour
	{
		public void OnBecameInvisible()
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
