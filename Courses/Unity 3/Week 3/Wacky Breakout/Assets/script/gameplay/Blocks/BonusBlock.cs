using Assets.script.configuration;
using UnityEngine;

namespace Assets.script.gameplay.Blocks
{
	public class BonusBlock : Block
	{

		// Use this for initialization
		public new void Start()
		{
			base.Start();

			Worth = ConfigurationUtils.BonusBlockWorth;
		}

		// Update is called once per frame
		public void Update()
		{
		}
	}
}
