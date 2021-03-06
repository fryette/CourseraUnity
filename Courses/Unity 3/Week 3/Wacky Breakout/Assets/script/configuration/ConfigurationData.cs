﻿using System.IO;
using UnityEngine;

namespace Assets.script.Configuration
{
	/// <summary>
	/// A container for the configuration data
	/// </summary>
	public class ConfigurationData
	{
		#region Fields

		const string ConfigurationDataFileName = "ConfigurationData.csv";

		// configuration data
		static float _paddleMoveUnitsPerSecond = 10;
		static float _ballImpulseForce = 350;
		static float _ballLifeTime = 10;
		static float _minSecondsToSpawn = 5;
		static float _maxSecondsToSpawn = 10;
		private int _standartBlockWorth = 10;
		private int _bonusBlockWorth = 20;
		private int _pickupBlockWorth = 15;
		private float _speedupBlockWorthProbability = 0.2f;
		private float _standartBlockWorthProbability = 0.63f;
		private float _freezeBlockWorthProbability = 0.12f;
		private float _bonusBlockWorthProbability = 0.1f;
		private int _maxLifes = 10;
		private int _freezerEffectInSeconds = 2;
		private int _speedupEffectInSeconds = 3;
		private float _speedupEffectFactor = 1.2f;

		#endregion

		#region Properties

		/// <summary>
		/// Gets the paddle move units per second
		/// </summary>
		/// <value>paddle move units per second</value>
		public float PaddleMoveUnitsPerSecond
		{
			get { return _paddleMoveUnitsPerSecond; }
		}

		/// <summary>
		/// Gets the impulse force to apply to move the ball
		/// </summary>
		/// <value>impulse force</value>
		public float BallImpulseForce
		{
			get { return _ballImpulseForce; }
		}

		/// <summary>
		/// Gets the ball lifetime
		/// </summary>
		/// <value>ball lifetime</value>
		public float BallLifeTime
		{
			get { return _ballLifeTime; }
		}

		public float MaxSecondsToSpawn
		{
			get { return _maxSecondsToSpawn; }
		}

		public float MinSecondsToSpawn
		{
			get { return _minSecondsToSpawn; }
		}

		public int StandartBlockWorth
		{
			get { return _standartBlockWorth; }
		}

		public int BonusBlockWorth
		{
			get { return _bonusBlockWorth; }
		}

		public int PickupBlockWorth
		{
			get { return _pickupBlockWorth; }
		}

		public float SpeedupBlockWorthProbability
		{
			get { return _speedupBlockWorthProbability; }
		}

		public float StandartBlockWorthProbability
		{
			get { return _standartBlockWorthProbability; }
		}

		public float FreezeBlockWorthProbability
		{
			get { return _freezeBlockWorthProbability; }
		}

		public float BonusBlockWorthProbability
		{
			get { return _bonusBlockWorthProbability; }
		}

		public int MaxLifes
		{
			get { return _maxLifes; }
		}

		public int FreezerEffectInSeconds
		{
			get { return _freezerEffectInSeconds; }
		}

		public int SpeedupEffectInSeconds
		{
			get { return _speedupEffectInSeconds; }
		}

		public float SpeedupEffectFactor
		{
			get { return _speedupEffectFactor; }
		}

		#endregion

		#region Constructor

		public void Configure()
		{
			StreamReader input = null;
			try
			{
				// create stream reader object
				input = File.OpenText(Path.Combine(
					Application.streamingAssetsPath, ConfigurationDataFileName));

				// read in names and values
				string names = input.ReadLine();
				string values = input.ReadLine();

				// set configuration data fields
				SetConfigurationDataFields(values);
			}
			finally
			{
				// always close input file
				if (input != null)
				{
					input.Close();
				}
			}
		}

		/// <summary>
		/// Sets the configuration data fields from the provided
		/// csv string
		/// </summary>
		/// <param name="csvValues">csv string of values</param>
		private void SetConfigurationDataFields(string csvValues)
		{
			// the code below assumes we know the order in which the
			// values appear in the string. We could do something more
			// complicated with the names and values, but that's not
			// necessary here
			var values = csvValues.Split(',');
			_paddleMoveUnitsPerSecond = float.Parse(values[0]);
			_ballImpulseForce = float.Parse(values[1]);
			_ballLifeTime = float.Parse(values[2]);
			_minSecondsToSpawn = float.Parse(values[3]);
			_maxSecondsToSpawn = float.Parse(values[4]);
			_standartBlockWorth = int.Parse(values[5]);
			_bonusBlockWorth = int.Parse(values[6]);
			_pickupBlockWorth = int.Parse(values[7]);
			_standartBlockWorthProbability = float.Parse(values[8]);
			_bonusBlockWorthProbability = float.Parse(values[9]);
			_freezeBlockWorthProbability = float.Parse(values[10]);
			_speedupBlockWorthProbability = float.Parse(values[11]);
			_maxLifes = int.Parse(values[12]);
			_freezerEffectInSeconds = int.Parse(values[13]);
			_speedupEffectFactor = float.Parse(values[14]);
			_speedupEffectInSeconds = int.Parse(values[15]);
		}

		#endregion
	}
}
