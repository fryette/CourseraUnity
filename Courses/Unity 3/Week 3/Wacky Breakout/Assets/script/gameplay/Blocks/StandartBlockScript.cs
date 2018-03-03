using Assets.script.configuration;
using UnityEngine;

namespace Assets.script.gameplay.Blocks
{
	public class StandartBlockScript : Block
	{
		[SerializeField] public Sprite[] Sprites;

		protected override void Start()
		{
			base.Start();

			Worth = ConfigurationUtils.StandartBlockWorth;

			GetComponent<SpriteRenderer>().sprite = Sprites[Random.Range(0, Sprites.Length)];
		}
	}
}
