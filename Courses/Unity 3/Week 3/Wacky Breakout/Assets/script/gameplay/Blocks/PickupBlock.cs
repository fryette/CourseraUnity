using System;
using Assets.script.configuration;
using Assets.script.Events;
using Assets.script.Events.FreezeEvents;
using Assets.script.Events.SpeedupEvents;
using UnityEngine;
using UnityEngine.Events;

namespace Assets.script.gameplay.Blocks
{
	public class PickupBlock : Block
	{
		[SerializeField] public Sprite FreezerSprite;
		[SerializeField] public Sprite SpeedupSprite;
		private FreezerEffectActivated _freezerEffectActivatedEvent;
		private SpeedupEffectActivated _speedupEffectActivatedEvent;
		public PickupEffect Effect { get; private set; }

		new void Start()
		{
			_freezerEffectActivatedEvent = new FreezerEffectActivated();
			_speedupEffectActivatedEvent = new SpeedupEffectActivated();

			Worth = ConfigurationUtils.PickupBlockWorth;

			EventManager.AddInvoker(this);
			SpeedupEventManager.AddInvoker(this);

			base.Start();
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

		public void AddFreezerEffectListener(UnityAction<int> action)
		{
			_freezerEffectActivatedEvent.AddListener(action);
		}

		public void AddSpeedupEffectListener(UnityAction<float, float> action)
		{
			_speedupEffectActivatedEvent.AddListener(action);
		}

		protected override void OnCollisionEnter2D()
		{
			if (Effect == PickupEffect.FREEZER)
			{
				_freezerEffectActivatedEvent.Invoke(ConfigurationUtils.FreezerEffectInSeconds);
			}
			if (Effect == PickupEffect.SPEEDUP)
			{
				_speedupEffectActivatedEvent.Invoke(ConfigurationUtils.SpeedupEffectInSeconds,ConfigurationUtils.SpeedupEffectFactor);
			}

			base.OnCollisionEnter2D();
		}
	}
}
