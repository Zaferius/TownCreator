using System;
using UnityEngine;

namespace ES3Types
{
	[UnityEngine.Scripting.Preserve]
	[ES3PropertiesAttribute("m_Targets")]
	public class ES3UserType_CinemachineTargetGroup : ES3ComponentType
	{
		public static ES3Type Instance = null;

		public ES3UserType_CinemachineTargetGroup() : base(typeof(Cinemachine.CinemachineTargetGroup)){ Instance = this; priority = 1;}


		protected override void WriteComponent(object obj, ES3Writer writer)
		{
			var instance = (Cinemachine.CinemachineTargetGroup)obj;
			
			writer.WriteProperty("m_Targets", instance.m_Targets, ES3Internal.ES3TypeMgr.GetOrCreateES3Type(typeof(Cinemachine.CinemachineTargetGroup.Target[])));
		}

		protected override void ReadComponent<T>(ES3Reader reader, object obj)
		{
			var instance = (Cinemachine.CinemachineTargetGroup)obj;
			foreach(string propertyName in reader.Properties)
			{
				switch(propertyName)
				{
					
					case "m_Targets":
						instance.m_Targets = reader.Read<Cinemachine.CinemachineTargetGroup.Target[]>();
						break;
					default:
						reader.Skip();
						break;
				}
			}
		}
	}


	public class ES3UserType_CinemachineTargetGroupArray : ES3ArrayType
	{
		public static ES3Type Instance;

		public ES3UserType_CinemachineTargetGroupArray() : base(typeof(Cinemachine.CinemachineTargetGroup[]), ES3UserType_CinemachineTargetGroup.Instance)
		{
			Instance = this;
		}
	}
}