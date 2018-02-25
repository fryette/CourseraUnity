using Assets.script.configuration;
using UnityEngine;

namespace Assets.script.gameplay.Blocks
{
	public class StandartBlockScript : Block
	{
		[SerializeField] public Sprite[] Sprites;
		// Use this for initialization

		public new void Start()
		{
			base.Start();

			Worth = ConfigurationUtils.StandartBlockWorth;

			GetComponent<SpriteRenderer>().sprite = Sprites[Random.Range(0, Sprites.Length)];
		}
	}
}
