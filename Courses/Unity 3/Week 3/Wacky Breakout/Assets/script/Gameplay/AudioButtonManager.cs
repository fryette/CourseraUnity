using Assets.script.Audio;
using UnityEngine;
using UnityEngine.UI;

namespace Assets.script.Gameplay
{
	public class AudioButtonManager : MonoBehaviour
	{
		[SerializeField] public Sprite EnabledSprite;
		[SerializeField] public Sprite DisabledSprite;
		private bool _isSoundDisabled;
		private Image _spriteRender;

		// Use this for initialization
		public void Start()
		{
			var soundPreference = PlayerPrefs.GetInt("soundPreference", -1);
			_isSoundDisabled = soundPreference == 0;
			_spriteRender = GetComponent<Image>();
			UpdateSprite();
			UpdateAudioAvailability();
		}

		public void HandleSoundButtonClick()
		{
			_isSoundDisabled = !_isSoundDisabled;
			PlayerPrefs.SetInt("soundPreference", _isSoundDisabled ? 0 : 1);
			UpdateSprite();
			UpdateAudioAvailability();
		}

		private void UpdateSprite()
		{
			_spriteRender.sprite = _isSoundDisabled ? DisabledSprite : EnabledSprite;
		}

		private void UpdateAudioAvailability()
		{
			if (_isSoundDisabled)
			{
				AudioManager.DisableSound();
			}
			else
			{
				AudioManager.EnableSound();
			}
		}
	}
}
