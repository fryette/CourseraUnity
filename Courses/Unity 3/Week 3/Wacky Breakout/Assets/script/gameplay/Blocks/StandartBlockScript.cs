using Assets.script.Audio;
using Assets.script.Configuration;
using UnityEngine;

namespace Assets.script.gameplay.Blocks
{
	public class StandartBlockScript : Block
	{
		[SerializeField] public Sprite[] Sprites;

		protected override void Start()
		{
			base.Start();

			GetComponent<SpriteRenderer>().sprite = Sprites[Random.Range(0, Sprites.Length)];

			AudioClipName = AudioClipName.BALL_COLLISION;
			Worth = ConfigurationUtils.StandartBlockWorth;
		}
	}
}
