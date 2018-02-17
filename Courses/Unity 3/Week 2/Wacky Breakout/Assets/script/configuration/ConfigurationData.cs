using System.IO;
using UnityEngine;

namespace Assets.script.configuration
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
		private float _standartBlockWorth = 10;
		private float _bonusBlockWorth = 20;
		private float _pickupBlockWorth;
		private float _speedupBlockWorthProbability = 0.15f;
		private float _standartBlockWorthProbability = 0.4f;
		private float _freezeBlockWorthProbability = 0.25f;
		private float _bonusBlockWorthProbability = 0.1f;
		private int _maxLifes = 5;

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
			set { _ballLifeTime = value; }
		}

		public float MaxSecondsToSpawn
		{
			get { return _maxSecondsToSpawn; }
			set { _maxSecondsToSpawn = value; }
		}

		public float MinSecondsToSpawn
		{
			get { return _minSecondsToSpawn; }
			set { _minSecondsToSpawn = value; }
		}

		public float StandartBlockWorth
		{
			get { return _standartBlockWorth; }
			set { _standartBlockWorth = value; }
		}

		public float BonusBlockWorth
		{
			get { return _bonusBlockWorth; }
			set { _bonusBlockWorth = value; }
		}

		public float PickupBlockWorth
		{
			get { return _pickupBlockWorth; }
			set { _pickupBlockWorth = value; }
		}

		public float SpeedupBlockWorthProbability
		{
			get { return _speedupBlockWorthProbability; }
			set { _speedupBlockWorthProbability = value; }
		}

		public float StandartBlockWorthProbability
		{
			get { return _standartBlockWorthProbability; }
			set { _standartBlockWorthProbability = value; }
		}

		public float FreezeBlockWorthProbability
		{
			get { return _freezeBlockWorthProbability; }
			set { _freezeBlockWorthProbability = value; }
		}

		public float BonusBlockWorthProbability
		{
			get { return _bonusBlockWorthProbability; }
			set { _bonusBlockWorthProbability = value; }
		}

		public int MaxLifes
		{
			get { return _maxLifes; }
			set { _maxLifes = value; }
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
			string[] values = csvValues.Split(',');
			_paddleMoveUnitsPerSecond = float.Parse(values[0]);
			_ballImpulseForce = float.Parse(values[1]);
			_ballLifeTime = float.Parse(values[2]);
			_minSecondsToSpawn = float.Parse(values[3]);
			_maxSecondsToSpawn = float.Parse(values[4]);
			_standartBlockWorth = float.Parse(values[5]);
			_bonusBlockWorth = float.Parse(values[6]);
			_pickupBlockWorth = float.Parse(values[7]);
			_standartBlockWorthProbability = float.Parse(values[8]);
			_bonusBlockWorthProbability = float.Parse(values[9]);
			_freezeBlockWorthProbability = float.Parse(values[10]);
			_speedupBlockWorthProbability = float.Parse(values[11]);
			_maxLifes = int.Parse(values[12]);
		}

		#endregion
	}
}
