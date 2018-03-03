namespace Assets.script.Configuration
{
	/// <summary>
	/// Provides access to configuration data
	/// </summary>
	public static class ConfigurationUtils
	{
		private static ConfigurationData _configurationData;

		#region Properties

		/// <summary>
		/// Gets the paddle move units per second
		/// </summary>
		/// <value>paddle move units per second</value>
		public static float PaddleMoveUnitsPerSecond
		{
			get { return _configurationData.PaddleMoveUnitsPerSecond; }
		}

		public static float BallImpulseForce
		{
			get { return _configurationData.BallImpulseForce; }
		}

		public static float BallLifeTime
		{
			get { return _configurationData.BallLifeTime; }
		}

		public static float MaxSecondsToSpawn
		{
			get { return _configurationData.MaxSecondsToSpawn; }
		}

		public static float MinSecondsToSpawn
		{
			get { return _configurationData.MinSecondsToSpawn; }
		}

		public static int StandartBlockWorth
		{
			get { return _configurationData.StandartBlockWorth; }
		}

		public static int BonusBlockWorth
		{
			get { return _configurationData.BonusBlockWorth; }
		}

		public static int PickupBlockWorth
		{
			get { return _configurationData.PickupBlockWorth; }
		}

		public static float SpeedupBlockWorthProbability
		{
			get { return _configurationData.SpeedupBlockWorthProbability; }
		}

		public static float StandartBlockWorthProbability
		{
			get { return _configurationData.StandartBlockWorthProbability; }
		}

		public static float FreezeBlockWorthProbability
		{
			get { return _configurationData.FreezeBlockWorthProbability; }
		}

		public static float BonusBlockWorthProbability
		{
			get { return _configurationData.BonusBlockWorthProbability; }
		}

		public static int MaxLifes
		{
			get { return _configurationData.MaxLifes; }
		}

		public static int FreezerEffectInSeconds
		{
			get { return _configurationData.FreezerEffectInSeconds; }
		}
		public static int SpeedupEffectInSeconds
		{
			get { return _configurationData.SpeedupEffectInSeconds; }
		}

		public static float SpeedupEffectFactor
		{
			get { return _configurationData.SpeedupEffectFactor; }
		}
		#endregion

		/// <summary>
		/// Initializes the configuration utils
		/// </summary>
		public static void Initialize()
		{
			_configurationData = new ConfigurationData();
			_configurationData.Configure();
		}
	}
}
