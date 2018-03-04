using Assets.script.Audio;
using Assets.script.Configuration;

namespace Assets.script.gameplay.Blocks
{
	public class BonusBlock : Block
	{
		protected override void Start()
		{
			base.Start();

			Worth = ConfigurationUtils.BonusBlockWorth;
			AudioClipName = AudioClipName.BONUS;
		}
	}
}
