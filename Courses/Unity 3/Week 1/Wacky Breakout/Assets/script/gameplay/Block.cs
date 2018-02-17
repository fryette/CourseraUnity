using UnityEngine;

namespace Assets.script.gameplay
{
	public class Block : MonoBehaviour
	{
		public void Start()
		{

		}
		public void Update()
		{

		}
		public void OnCollisionEnter2D()
		{
			Destroy(gameObject);
		}
	}
}
