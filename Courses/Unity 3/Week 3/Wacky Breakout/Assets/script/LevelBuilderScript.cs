using Assets.script.Configuration;
using Assets.script.gameplay;
using Assets.script.gameplay.Blocks;
using Assets.script.util;
using UnityEngine;

namespace Assets.script
{
	public class LevelBuilderScript : MonoBehaviour
	{

		[SerializeField]
		public GameObject PaddlePrefab;
		[SerializeField]
		public GameObject StandartBlockPrefab;
		[SerializeField]
		public GameObject BonusBlockPrefab;
		[SerializeField]
		public GameObject PickUpBlockPrefab;

		private const float DimensionsX = 0.2f;
		private float _dimensionsY;

		void Start()
		{
			_dimensionsY = ScreenUtils.ScreenTop * 0.8f;

			var block = Instantiate(StandartBlockPrefab);
			var boxCollider = block.GetComponent<BoxCollider2D>();
			var blockColliderWidth = boxCollider.size.x * block.transform.localScale.x + DimensionsX;
			var blockColliderHeight = boxCollider.size.y * block.transform.localScale.y;

			Destroy(block);

			GenerateRowsOfBlocks(blockColliderWidth, blockColliderHeight);

			Instantiate(PaddlePrefab);
		}

		private void GenerateRowsOfBlocks(float blockColliderWidth, float blockColliderHeight)
		{
			var screnWidth = Mathf.Abs(ScreenUtils.ScreenLeft) + Mathf.Abs(ScreenUtils.ScreenRight);

			var numberOfBlocks = (int)(screnWidth / blockColliderWidth);

			var startX = ScreenUtils.ScreenLeft + DimensionsX / 2 + blockColliderWidth / 2 + ((screnWidth - (numberOfBlocks * blockColliderWidth)) / 2);

			for (var i = 0; i < 3; i++)
			{
				GenerateRowOfBlocks(startX, _dimensionsY, numberOfBlocks, blockColliderWidth);

				_dimensionsY -= 1 + blockColliderHeight;
			}
		}

		private void GenerateRowOfBlocks(float startX, float y, int numberOfBlocks, float blockColliderWidth)
		{
			for (var i = 0; i < numberOfBlocks; i++)
			{
				GenerateBlock(new Vector3(startX, y, 0));
				startX += blockColliderWidth;
			}
		}

		private void GenerateBlock(Vector3 position)
		{
			var result = Random.Range(0f, 1f);

			if (result <= ConfigurationUtils.BonusBlockWorthProbability)
			{
				Instantiate(BonusBlockPrefab, position, Quaternion.identity);
			}
			else if (result <= ConfigurationUtils.FreezeBlockWorthProbability)
			{
				Instantiate(PickUpBlockPrefab, position, Quaternion.identity).GetComponent<PickupBlock>()
					.SetEffect(PickupEffect.FREEZER);
			}
			else if (result <= ConfigurationUtils.SpeedupBlockWorthProbability)
			{
				Instantiate(PickUpBlockPrefab, position, Quaternion.identity).GetComponent<PickupBlock>()
					.SetEffect(PickupEffect.SPEEDUP);
			}
			else
			{
				Instantiate(StandartBlockPrefab, position, Quaternion.identity);
			}
		}
	}
}
