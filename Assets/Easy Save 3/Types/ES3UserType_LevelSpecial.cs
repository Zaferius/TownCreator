using System;
using UnityEngine;

namespace ES3Types
{
	[UnityEngine.Scripting.Preserve]
	[ES3PropertiesAttribute("buildIndex")]
	public class ES3UserType_LevelSpecial : ES3ComponentType
	{
		public static ES3Type Instance = null;

		public ES3UserType_LevelSpecial() : base(typeof(LevelSpecial)){ Instance = this; priority = 1;}


		protected override void WriteComponent(object obj, ES3Writer writer)
		{
			var instance = (LevelSpecial)obj;
			
			writer.WriteProperty("buildIndex", instance.buildIndex, ES3Type_int.Instance);
		}

		protected override void ReadComponent<T>(ES3Reader reader, object obj)
		{
			var instance = (LevelSpecial)obj;
			foreach(string propertyName in reader.Properties)
			{
				switch(propertyName)
				{
					
					case "buildIndex":
						instance.buildIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
						break;
					default:
						reader.Skip();
						break;
				}
			}
		}
	}


	public class ES3UserType_LevelSpecialArray : ES3ArrayType
	{
		public static ES3Type Instance;

		public ES3UserType_LevelSpecialArray() : base(typeof(LevelSpecial[]), ES3UserType_LevelSpecial.Instance)
		{
			Instance = this;
		}
	}
}