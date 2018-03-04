using System.Collections.Generic;
using UnityEngine;

namespace Assets.script.Audio
{
	/// <summary>
	/// The audio manager
	/// </summary>
	public static class AudioManager
	{
		private static bool _initialized;
		private static AudioSource _audioSource;

		private static readonly Dictionary<AudioClipName, AudioClip> AudioClips =
			new Dictionary<AudioClipName, AudioClip>();

		private static bool _isEnabled;

		/// <summary>
		/// Gets whether or not the audio manager has been initialized
		/// </summary>
		public static bool Initialized
		{
			get { return _initialized; }
		}

		/// <summary>
		/// Initializes the audio manager
		/// </summary>
		/// <param name="source">audio source</param>
		public static void Initialize(AudioSource source)
		{
			_initialized = true;
			_audioSource = source;
			AudioClips.Add(AudioClipName.BALL_COLLISION,
				Resources.Load<AudioClip>("Audio/BallCollision"));
			AudioClips.Add(AudioClipName.BONUS,
				Resources.Load<AudioClip>("Audio/Bonus"));
			AudioClips.Add(AudioClipName.GAME_OVER,
				Resources.Load<AudioClip>("Audio/GameOver"));
			AudioClips.Add(AudioClipName.GAME_WON,
				Resources.Load<AudioClip>("Audio/GameWon"));
		}

		public static void EnableSound()
		{
			_isEnabled = true;
		}

		public static void DisableSound()
		{
			_isEnabled = false;
		}

		/// <summary>
		/// Plays the audio clip with the given name
		/// </summary>
		/// <param name="name">name of the audio clip to play</param>
		public static void Play(AudioClipName name)
		{
			if (_isEnabled)
			{
				_audioSource.PlayOneShot(AudioClips[name]);
			}
		}
	}
}
