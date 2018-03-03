using System;
using Assets.script.Configuration;
using Assets.script.Events;
using Assets.script.Events.Models;
using Assets.script.Events.SpeedupEvents;
using UnityEngine;
using UnityEngine.Events;

namespace Assets.script.gameplay.Blocks
{
	public class PickupBlock : Block
	{
		[SerializeField]
		public Sprite FreezerSprite;
		[SerializeField]
		public Sprite SpeedupSprite;
		private SpeedupEffectActivated _speedupEffectActivatedEvent;
		public PickupEffect Effect { get; private set; }

		protected override void Start()
		{
			base.Start();

			_speedupEffectActivatedEvent = new SpeedupEffectActivated();

			Worth = ConfigurationUtils.PickupBlockWorth;

			Events.Add(EventName.FREEZER_EFFECT_ACTIVATED_EVENT, new FreezeEffectActivatedEvent());
			EventManager.AddInvoker(EventName.FREEZER_EFFECT_ACTIVATED_EVENT, this);

			SpeedupEventManager.AddInvoker(this);
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

		public void AddSpeedupEffectListener(UnityAction<float, float> action)
		{
			_speedupEffectActivatedEvent.AddListener(action);
		}

		protected override void OnCollisionEnter2D()
		{
			switch (Effect)
			{
				case PickupEffect.FREEZER:
					Events[EventName.FREEZER_EFFECT_ACTIVATED_EVENT].Invoke(ConfigurationUtils.FreezerEffectInSeconds);
					break;
				case PickupEffect.SPEEDUP:
					_speedupEffectActivatedEvent.Invoke(
						ConfigurationUtils.SpeedupEffectInSeconds,
						ConfigurationUtils.SpeedupEffectFactor);
					break;
				default:
					throw new ArgumentOutOfRangeException();
			}

			base.OnCollisionEnter2D();
		}
	}
}
