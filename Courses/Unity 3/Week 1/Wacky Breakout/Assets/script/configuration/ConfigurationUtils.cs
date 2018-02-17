namespace Assets.script.configuration
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

		#endregion

		/// <summary>
		/// Initializes the configuration utils
		/// </summary>
		public static void Initialize()
		{
			_configurationData = new ConfigurationData();
		}
	}
}
