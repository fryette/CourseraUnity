using System;
using Assets.script.configuration;
using UnityEngine;

namespace Assets.script.gameplay.Blocks
{
	public class PickupBlock : Block
	{
		[SerializeField] public Sprite FreezerSprite;
		[SerializeField] public Sprite SpeedupSprite;

		public PickupEffect Effect { get; private set; }

		new void Start()
		{
			base.Start();
			Worth = ConfigurationUtils.PickupBlockWorth;
		}

		public void SetEffect(PickupEffect effect)
		{
			Effect = effect;

			switch (effect)
			{
				case PickupEffect.FREEZER:
					GetComponent<SpriteRenderer>().sprite = FreezerSprite;
					break;
				case PickupEffect.SPEEDUP:
					GetComponent<SpriteRenderer>().sprite = SpeedupSprite;
					break;
				default:
					throw new ArgumentOutOfRangeException("effect", effect, null);
			}
		}
	}
}
