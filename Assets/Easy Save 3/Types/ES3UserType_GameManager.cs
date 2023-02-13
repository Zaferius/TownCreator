using System;
using UnityEngine;

namespace ES3Types
{
	[UnityEngine.Scripting.Preserve]
	[ES3PropertiesAttribute("levelFieldIndex", "activeLevelsCenterPos", "currentCoin", "income")]
	public class ES3UserType_GameManager : ES3ComponentType
	{
		public static ES3Type Instance = null;

		public ES3UserType_GameManager() : base(typeof(GameManager)){ Instance = this; priority = 1;}


		protected override void WriteComponent(object obj, ES3Writer writer)
		{
			var instance = (GameManager)obj;
			
			writer.WriteProperty("levelFieldIndex", instance.levelFieldIndex, ES3Type_int.Instance);
			writer.WriteProperty("activeLevelsCenterPos", instance.activeLevelsCenterPos, ES3Internal.ES3TypeMgr.GetOrCreateES3Type(typeof(System.Collections.Generic.List<UnityEngine.GameObject>)));
			writer.WriteProperty("currentCoin", instance.currentCoin, ES3Type_int.Instance);
			writer.WriteProperty("income", instance.income, ES3Type_int.Instance);
		}

		protected override void ReadComponent<T>(ES3Reader reader, object obj)
		{
			var instance = (GameManager)obj;
			foreach(string propertyName in reader.Properties)
			{
				switch(propertyName)
				{
					
					case "levelFieldIndex":
						instance.levelFieldIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
						break;
					case "activeLevelsCenterPos":
						instance.activeLevelsCenterPos = reader.Read<System.Collections.Generic.List<UnityEngine.GameObject>>();
						break;
					case "currentCoin":
						instance.currentCoin = reader.Read<System.Int32>(ES3Type_int.Instance);
						break;
					case "income":
						instance.income = reader.Read<System.Int32>(ES3Type_int.Instance);
						break;
					default:
						reader.Skip();
						break;
				}
			}
		}
	}


	public class ES3UserType_GameManagerArray : ES3ArrayType
	{
		public static ES3Type Instance;

		public ES3UserType_GameManagerArray() : base(typeof(GameManager[]), ES3UserType_GameManager.Instance)
		{
			Instance = this;
		}
	}
}