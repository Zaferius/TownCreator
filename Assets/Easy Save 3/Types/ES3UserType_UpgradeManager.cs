using System;
using UnityEngine;

namespace ES3Types
{
	[UnityEngine.Scripting.Preserve]
	[ES3PropertiesAttribute("plusIncome", "upgradeBuildingIndex", "upgradeResidentsIndex", "upgradeIncomeIndex")]
	public class ES3UserType_UpgradeManager : ES3ComponentType
	{
		public static ES3Type Instance = null;

		public ES3UserType_UpgradeManager() : base(typeof(UpgradeManager)){ Instance = this; priority = 1;}


		protected override void WriteComponent(object obj, ES3Writer writer)
		{
			var instance = (UpgradeManager)obj;
			
			writer.WriteProperty("plusIncome", instance.plusIncome, ES3Type_int.Instance);
			writer.WriteProperty("upgradeBuildingIndex", instance.upgradeBuildingIndex, ES3Type_int.Instance);
			writer.WriteProperty("upgradeResidentsIndex", instance.upgradeResidentsIndex, ES3Type_int.Instance);
			writer.WriteProperty("upgradeIncomeIndex", instance.upgradeIncomeIndex, ES3Type_int.Instance);
		}

		protected override void ReadComponent<T>(ES3Reader reader, object obj)
		{
			var instance = (UpgradeManager)obj;
			foreach(string propertyName in reader.Properties)
			{
				switch(propertyName)
				{
					
					case "plusIncome":
						instance.plusIncome = reader.Read<System.Int32>(ES3Type_int.Instance);
						break;
					case "upgradeBuildingIndex":
						instance.upgradeBuildingIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
						break;
					case "upgradeResidentsIndex":
						instance.upgradeResidentsIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
						break;
					case "upgradeIncomeIndex":
						instance.upgradeIncomeIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
						break;
					default:
						reader.Skip();
						break;
				}
			}
		}
	}


	public class ES3UserType_UpgradeManagerArray : ES3ArrayType
	{
		public static ES3Type Instance;

		public ES3UserType_UpgradeManagerArray() : base(typeof(UpgradeManager[]), ES3UserType_UpgradeManager.Instance)
		{
			Instance = this;
		}
	}
}