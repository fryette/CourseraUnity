using UnityEngine;

namespace Assets.script.gameplay
{
	public class Block : MonoBehaviour
	{
		protected float Worth;
		private HUD _hud;

		public void Start()
		{
			_hud = GameObject.FindGameObjectWithTag("HUD").GetComponent<HUD>();
		}

		public void OnCollisionEnter2D()
		{
			_hud.AddScore(Worth);
			Destroy(gameObject);
		}
	}
}
