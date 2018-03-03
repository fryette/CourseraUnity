﻿using Assets.script.Configuration;

namespace Assets.script.gameplay.Blocks
{
	public class BonusBlock : Block
	{
		// Use this for initialization
		protected override void Start()
		{
			base.Start();

			Worth = ConfigurationUtils.BonusBlockWorth;
		}
	}
}
