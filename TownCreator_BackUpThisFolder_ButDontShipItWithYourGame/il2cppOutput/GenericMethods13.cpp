﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// ES3Internal.ES3Member[]
struct ES3MemberU5BU5D_t5320E3A904B7810CCE7F613C15284E403EAEF8DC;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// ES3Reader
struct ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B;
// ES3Settings
struct ES3Settings_t65AC4582C03C21A9D3090FE498071C470A130BF2;
// ES3Types.ES3Type
struct ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE;
// ES3Types.ES3Type_CollisionModule
struct ES3Type_CollisionModule_t729C47500B2E29391D7B4618592652313A7FECFC;
// ES3Types.ES3Type_Color
struct ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41;
// ES3Types.ES3Type_Color32
struct ES3Type_Color32_t97E8BC1A2A90C92D2A62FC8AA3EFF3E00832CC69;
// ES3Types.ES3Type_ColorBySpeedModule
struct ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1;
// ES3Types.ES3Type_ColorOverLifetimeModule
struct ES3Type_ColorOverLifetimeModule_t277620F2F04DEB7133CF4C371959B8CA123A4678;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// System.String
struct String_t;
// System.Type
struct Type_t;

IL2CPP_EXTERN_C RuntimeClass* CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28;
IL2CPP_EXTERN_C String_t* _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D;
IL2CPP_EXTERN_C String_t* _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB;
IL2CPP_EXTERN_C String_t* _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC;
IL2CPP_EXTERN_C String_t* _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D;
IL2CPP_EXTERN_C String_t* _stringLiteral4845015737DC41475709911228278216EE4DC3AF;
IL2CPP_EXTERN_C String_t* _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12;
IL2CPP_EXTERN_C String_t* _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2;
IL2CPP_EXTERN_C String_t* _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765;
IL2CPP_EXTERN_C String_t* _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C;
IL2CPP_EXTERN_C String_t* _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C String_t* _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF;
IL2CPP_EXTERN_C String_t* _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0;
IL2CPP_EXTERN_C String_t* _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406;
IL2CPP_EXTERN_C String_t* _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C String_t* _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Reader
struct ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B  : public RuntimeObject
{
	// ES3Settings ES3Reader::settings
	ES3Settings_t65AC4582C03C21A9D3090FE498071C470A130BF2* ___settings_0;
	// System.Int32 ES3Reader::serializationDepth
	int32_t ___serializationDepth_1;
	// System.String ES3Reader::overridePropertiesName
	String_t* ___overridePropertiesName_2;
};

// ES3Types.ES3Type
struct ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE  : public RuntimeObject
{
	// ES3Internal.ES3Member[] ES3Types.ES3Type::members
	ES3MemberU5BU5D_t5320E3A904B7810CCE7F613C15284E403EAEF8DC* ___members_1;
	// System.Type ES3Types.ES3Type::type
	Type_t* ___type_2;
	// System.Boolean ES3Types.ES3Type::isPrimitive
	bool ___isPrimitive_3;
	// System.Boolean ES3Types.ES3Type::isValueType
	bool ___isValueType_4;
	// System.Boolean ES3Types.ES3Type::isCollection
	bool ___isCollection_5;
	// System.Boolean ES3Types.ES3Type::isDictionary
	bool ___isDictionary_6;
	// System.Boolean ES3Types.ES3Type::isTuple
	bool ___isTuple_7;
	// System.Boolean ES3Types.ES3Type::isEnum
	bool ___isEnum_8;
	// System.Boolean ES3Types.ES3Type::isES3TypeUnityObject
	bool ___isES3TypeUnityObject_9;
	// System.Boolean ES3Types.ES3Type::isReflectedType
	bool ___isReflectedType_10;
	// System.Boolean ES3Types.ES3Type::isUnsupported
	bool ___isUnsupported_11;
	// System.Int32 ES3Types.ES3Type::priority
	int32_t ___priority_12;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// ES3Types.ES3Type_CollisionModule
struct ES3Type_CollisionModule_t729C47500B2E29391D7B4618592652313A7FECFC  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_CollisionModule_t729C47500B2E29391D7B4618592652313A7FECFC_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_CollisionModule::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_Color
struct ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Color::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_Color32
struct ES3Type_Color32_t97E8BC1A2A90C92D2A62FC8AA3EFF3E00832CC69  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_Color32_t97E8BC1A2A90C92D2A62FC8AA3EFF3E00832CC69_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Color32::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_ColorBySpeedModule
struct ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_ColorBySpeedModule::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_ColorOverLifetimeModule
struct ES3Type_ColorOverLifetimeModule_t277620F2F04DEB7133CF4C371959B8CA123A4678  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_ColorOverLifetimeModule_t277620F2F04DEB7133CF4C371959B8CA123A4678_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_ColorOverLifetimeModule::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_MinMaxCurve
struct ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MinMaxCurve::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_MinMaxGradient
struct ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MinMaxGradient::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_Vector2
struct ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Vector2::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_bool
struct ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_bool::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_byte
struct ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_byte::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_float
struct ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_float::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.ParticleSystem/CollisionModule
struct CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/CollisionModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/CollisionModule
struct CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/CollisionModule
struct CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/ColorBySpeedModule
struct ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/ColorBySpeedModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/ColorBySpeedModule
struct ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/ColorBySpeedModule
struct ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/ColorOverLifetimeModule
struct ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/ColorOverLifetimeModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/ColorOverLifetimeModule
struct ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/ColorOverLifetimeModule
struct ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 
{
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;
};

// UnityEngine.ParticleSystem/MinMaxGradient
struct MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 
{
	// UnityEngine.ParticleSystemGradientMode UnityEngine.ParticleSystem/MinMaxGradient::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMin
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMin_1;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMax
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMax_2;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMin
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMin_3;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMax
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMax_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T ES3Reader::ReadProperty<System.Single>(ES3Types.ES3Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_gshared (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* __this, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___type0, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<System.Byte>(ES3Types.ES3Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_gshared (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* __this, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___type0, const RuntimeMethod* method) ;

// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_type(UnityEngine.ParticleSystemCollisionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_mode(UnityEngine.ParticleSystemCollisionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_dampen(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_dampenMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_bounce(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_bounceMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_lifetimeLoss(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_lifetimeLossMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_minKillSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_maxKillSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_collidesWith(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_enableDynamicColliders(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_maxCollisionShapes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_quality(UnityEngine.ParticleSystemCollisionQuality)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_voxelSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_radiusScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_sendCollisionMessages(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, bool ___value0, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<System.Single>(ES3Types.ES3Type)
inline float ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3 (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* __this, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___type0, const RuntimeMethod* method)
{
	return ((  float (*) (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*, const RuntimeMethod*))ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_gshared)(__this, ___type0, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<System.Byte>(ES3Types.ES3Type)
inline uint8_t ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* __this, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___type0, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*, const RuntimeMethod*))ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_gshared)(__this, ___type0, method);
}
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ColorBySpeedModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81 (ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ColorBySpeedModule::set_color(UnityEngine.ParticleSystem/MinMaxGradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E (ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B* __this, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ColorBySpeedModule::set_range(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB (ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_mE92C577BB1B1F356E944790AEF398D2628694618_gshared (ES3Type_CollisionModule_t729C47500B2E29391D7B4618592652313A7FECFC* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m103A63750D1D05C1CCCF44BC0B4D980FABBA3D06_gshared (ES3Type_CollisionModule_t729C47500B2E29391D7B4618592652313A7FECFC* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_mF28A5D9A92D1D5994ED446BB700710143AA70749_gshared (ES3Type_CollisionModule_t729C47500B2E29391D7B4618592652313A7FECFC* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_mAD38E8E8BE277E53425B9E7ED0E9EB603EB3D8F1_gshared (ES3Type_CollisionModule_t729C47500B2E29391D7B4618592652313A7FECFC* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m022E47D674F64AF0AEB41AFFD94F46965887A94C_gshared (ES3Type_CollisionModule_t729C47500B2E29391D7B4618592652313A7FECFC* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mFE37F9635885DD2859E4DECA571BD360C12E69DD_gshared (ES3Type_CollisionModule_t729C47500B2E29391D7B4618592652313A7FECFC* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mD9AC4141669809E27957089D11F3247E99447FD9_gshared (ES3Type_CollisionModule_t729C47500B2E29391D7B4618592652313A7FECFC* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m0C5634BCE78012A091BD4B07713B72E53A194B13_gshared (ES3Type_CollisionModule_t729C47500B2E29391D7B4618592652313A7FECFC* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m2709CB4DB67009D0B5E0B0E0B8559E0B52D81A91_gshared (ES3Type_CollisionModule_t729C47500B2E29391D7B4618592652313A7FECFC* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_mD68C630D066732AF7709F415E6E2F14940A9A974_gshared (ES3Type_CollisionModule_t729C47500B2E29391D7B4618592652313A7FECFC* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_m8EFB43D8D12AB7E5C0A837C6AF03A4E1958CDE01_gshared (ES3Type_CollisionModule_t729C47500B2E29391D7B4618592652313A7FECFC* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_mFDA72F0F5534A18B23B36AE7EA6FA0C954129DE9_gshared (ES3Type_CollisionModule_t729C47500B2E29391D7B4618592652313A7FECFC* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/ShapeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_m20F235734C9D2AC43186D62E37EC99FF9275ED96_gshared (ES3Type_CollisionModule_t729C47500B2E29391D7B4618592652313A7FECFC* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/SizeBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_m0905531FD281CF5B155A92B30F5A2F714A4C54B2_gshared (ES3Type_CollisionModule_t729C47500B2E29391D7B4618592652313A7FECFC* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/SizeOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_m9106AE8E75B621611E909C7F69D710E2D90D6EED_gshared (ES3Type_CollisionModule_t729C47500B2E29391D7B4618592652313A7FECFC* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_mF3102D259A01338C5C1B3AA44B0239067CAADC69_gshared (ES3Type_CollisionModule_t729C47500B2E29391D7B4618592652313A7FECFC* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_m51532A24B1427699D5CF3C3F934FCFD969968ECF_gshared (ES3Type_CollisionModule_t729C47500B2E29391D7B4618592652313A7FECFC* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m7656F0CA29A87C3461A5738F3E62E754C6ECA3C3_gshared (ES3Type_CollisionModule_t729C47500B2E29391D7B4618592652313A7FECFC* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m3677D5F6F46BAE253A0BED4990328B9646EB226B_gshared (ES3Type_CollisionModule_t729C47500B2E29391D7B4618592652313A7FECFC* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_m563B354361CA3E72E668CCBBA7677126A114D33B_gshared (ES3Type_CollisionModule_t729C47500B2E29391D7B4618592652313A7FECFC* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_mABEEBE9BBEDC1EAD0E7BC68502E1DF0777FE2D9B_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mECA947C888CC082235B5948BD63C51EDBA6EA88D_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m98DFD20D5D6AF663F21D21F733F7FC55E2C52830_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07A43CC5D0A00D37187DA99722A9E39E4B0AECCD_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mFC5ADE7931A46C349FDFFD982F5731FD270154BA_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4F614BF5DB3CF00F2EA2C3EFD58755ED6245EEED_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F1800BF5A009877FDC35DA0C4D445DD379CB28A_gshared (ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mF4C6D9D5BF489722F0959F4605BA4CF6BEF9D2D1_gshared (ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF40C2712CC26E549B91FE9EA9A045F7A66D3F81C_gshared (ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0FE48BBE240C6FAA969CE74279CC14B009D4BB80_gshared (ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m579A9F27F1434F8FB15DC6DB5D1424DFE2E30506_gshared (ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m51140368607F10A79E96F3AD0E6E315495E12367_gshared (ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m3B87D6D05BCACDFB5C2DD7B57D159551AE4FD9AD_gshared (ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m44E02EA9CA5FAA9D6C41814C32D952390B354658_gshared (ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m889ED409B38EB819430DB8E01DD9317D3B946F9C_gshared (ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m4792139F56FD67FB8052A4040663B32522DF5C17_gshared (ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisRuntimeObject_mB9E78E22767F1B3C583A07920DE9BF9E69195C2A_gshared (ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m87B45EAEC3DD9497278A3B956043743F7003BCC5_gshared (ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mE6B2CA2B516231033CE576050F218E7309640D62_gshared (ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m26C61A304D05B54C338A1938CF54C0B58B50E703_gshared (ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m28554E4DC9FF1C960FCD96044ADB3450547482A8_gshared (ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m019615A01B9A907075164A98E8D2E3DFF897FBF4_gshared (ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m63C5B0CA4EA8AD94BA7BBDF3910669D45272D5E5_gshared (ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m1ECFB6ED25F5A7E045B7A4FFD1DF96ABD378E9A6_gshared (ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m8A7103789DE65EBACABADFFE384F3B24A9F50B80_gshared (ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m57BFA620AD3449E52F3A6BFA6B6FCC12F3C25472_gshared (ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mEA7F3FAAF4C57DA4E278F7FD97DF030F3F45EB78_gshared (ES3Type_Color32_t97E8BC1A2A90C92D2A62FC8AA3EFF3E00832CC69* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mAFD5A6659EAA7FD84D2F2A77C59FE981E5089366_gshared (ES3Type_Color32_t97E8BC1A2A90C92D2A62FC8AA3EFF3E00832CC69* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6AF1AB1493B981E54C8B42FF329BD11A19B20D75_gshared (ES3Type_Color32_t97E8BC1A2A90C92D2A62FC8AA3EFF3E00832CC69* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7B6B995A8091C53B10F8C8D15A7537A490E101AA_gshared (ES3Type_Color32_t97E8BC1A2A90C92D2A62FC8AA3EFF3E00832CC69* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC9C4A72FF571474CBE51AF9D2DAB96001ADB3DAB_gshared (ES3Type_Color32_t97E8BC1A2A90C92D2A62FC8AA3EFF3E00832CC69* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE17C875A11EB77F201D067F4BF75F52B8965522B_gshared (ES3Type_Color32_t97E8BC1A2A90C92D2A62FC8AA3EFF3E00832CC69* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA0C6F836BDB75ED74C10EF22274D04DE0B10CBA6_gshared (ES3Type_Color32_t97E8BC1A2A90C92D2A62FC8AA3EFF3E00832CC69* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mD8F7E1C0400ABCF50F510C769BC7877FEEEFC3C7_gshared (ES3Type_Color32_t97E8BC1A2A90C92D2A62FC8AA3EFF3E00832CC69* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mE6171F2E54C5BAB1D6DF6B8CA56116CCBDD83A68_gshared (ES3Type_Color32_t97E8BC1A2A90C92D2A62FC8AA3EFF3E00832CC69* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mE5428558DE73AEF4515B78CDCEE8D229E14BE75A_gshared (ES3Type_Color32_t97E8BC1A2A90C92D2A62FC8AA3EFF3E00832CC69* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisRuntimeObject_m7FDEB97A1BFD1499A0D3ED6E1FA78E1D9792851A_gshared (ES3Type_Color32_t97E8BC1A2A90C92D2A62FC8AA3EFF3E00832CC69* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCFDD167B85F099627AC2D5FF03F898F394E4D72D_gshared (ES3Type_Color32_t97E8BC1A2A90C92D2A62FC8AA3EFF3E00832CC69* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m7FD01D3A3FE56533412541451CCC874BB3B2681A_gshared (ES3Type_Color32_t97E8BC1A2A90C92D2A62FC8AA3EFF3E00832CC69* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mD25BCD33EF1553C46CB139C77C67E2A08239D00D_gshared (ES3Type_Color32_t97E8BC1A2A90C92D2A62FC8AA3EFF3E00832CC69* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD53717D1A6EA93B012AC8C4805943CC72346468B_gshared (ES3Type_Color32_t97E8BC1A2A90C92D2A62FC8AA3EFF3E00832CC69* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB0F46AF63DCD549C9A746E9B6DFFBF6C49FDC99A_gshared (ES3Type_Color32_t97E8BC1A2A90C92D2A62FC8AA3EFF3E00832CC69* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m55A28E889AFA4D51F54D6D78E42D4B4857761BB8_gshared (ES3Type_Color32_t97E8BC1A2A90C92D2A62FC8AA3EFF3E00832CC69* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mD4597DDAC68A533AAB5FE00AE9C8A4BCBF3FAE7D_gshared (ES3Type_Color32_t97E8BC1A2A90C92D2A62FC8AA3EFF3E00832CC69* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mBCF4FF9AB9F5037E411E556C2CE0F8662724DCCB_gshared (ES3Type_Color32_t97E8BC1A2A90C92D2A62FC8AA3EFF3E00832CC69* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mC0A33A6DA13BFB78F2A4E86CD9AF03A6D7A47511_gshared (ES3Type_Color32_t97E8BC1A2A90C92D2A62FC8AA3EFF3E00832CC69* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_tF5F7A44DD780FB7596DFCEC307E9C4BD9F7A22DC_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54BD840EBD03F569F6DA14BA4BFC99F0ED7EFC1B_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m208068BA86DF4C826D089D828C9A92611EC21371_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mF6FF7B5EB81370964F1DF87E04D88E9BFABE4EE8_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mAC3858E9B76D3565766BC06FE0B1724085D81DE4_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m38C5826E5BA52CF25C7DA046814DE4D23C587581_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m92E9F2FE089D295FDBE95B23D92C2DC3C30DFFD9_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m40BA2C9ABCF0B8FA63F9F7781FD47E9CF050BECC_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m4275DF579FE90181DB5FC02AA394201D66394372_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0FE702EE8099EA795CA1148CB767341BCEA81675_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m35928993B054FC48249E25F7EC42EA886F722C62_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m8468AF9AE24FCE2E3B2530198484AB2AA9E8523C_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisRuntimeObject_m7960A72BBFBDD49D8091DC6CE0D58C19C2030FDD_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m6EB95EFB3D614BC4DF02D7D8C2D01BBB3D0FD534_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m1E8D338BFB099AAB8E1207F767A348098CBEA04F_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m3A0D8909A1A2B488B06338561648F0E8043180D6_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m705A15DA8DE6A1BA682BA14B31D63F3CE835652A_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m37A478FCB90F4F6A7E827B0DAAE700FCEEA11993_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m249E859D8CD39351D77BC7538C7D4EC39E85161F_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m9F319B9D31448D5AD306CE4C95B5A5B174EEEDD5_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m3D225803011A0C6E6DC30EF8F4658D74C0563A3F_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m254D8E7229B13F51F55AD15ACA5FD844EF75CDB3_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisRuntimeObject_m59BC5BA29B3F786019976F40B46270C4D7325C23_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_7 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_8 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_10 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_11 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_13 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_14 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m21DEDB9536FC8AAFFE6FDC3C701A4F47226797DB_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_7 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_8 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_10 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_11 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_13 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_14 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m4878A73A7C8BA4B07052B0061AC588089C909F68_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_7 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_8 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_10 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_11 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_13 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_14 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m727EBA72567AB7679C18DAC88F9E91DA2386C85D_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_7 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_8 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_10 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_11 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_13 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_14 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m20D49C9EA99354BA1D48C03A1458CFFDDBDFDBB3_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_7 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_8 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_10 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_11 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_13 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_14 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_mB9DF52C4BC324EE5DDF425837013ACA8F5E25544_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_7 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_8 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_10 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_11 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_13 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_14 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_mAD17296A051B06D91F46B14150B1E48600A744F9_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_7 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_8 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_10 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_11 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_13 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_14 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_m75F8222208C29BBF28E91CADD1FD3460D90BCA13_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_7 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_8 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_10 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_11 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_13 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_14 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_m5977A8525CEA597E9D084E63B9E9E8FCF4950936_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_7 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_8 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_10 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_11 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_13 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_14 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_mC5E122C4AB75B50FFA43767C89883F47ABF8C90C_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_7 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_8 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_10 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_11 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_13 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_14 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_mE7297161A73D5703B16DFC2D67F75D2BEB9C1B3B_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_7 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_8 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_10 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_11 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_13 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_14 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m1324C2E8E52DC480E076505FB7E7524A4132AD82_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_7 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_8 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_10 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_11 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_13 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_14 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_m250BFEC8F2E0456F26F0397E64E9CB2149449A27_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_7 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_8 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_10 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_11 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_13 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_14 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_mCFF2DA9819FB448301E5FA34010D27083BED588E_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_7 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_8 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_10 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_11 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_13 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_14 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ShapeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_m72D0278FB357F48A7EC7882A2CD7E756407EC6C3_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_7 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_8 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_10 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_11 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_13 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_14 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/SizeBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_mF39EE73314A6B5E6FCCE44E91BBB863A6D8B9F5E_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_7 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_8 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_10 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_11 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_13 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_14 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/SizeOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_m941498B989BE2431DA7FC90DF1C4039B195F2B7A_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_7 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_8 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_10 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_11 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_13 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_14 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_mAF53A2084B3E94C334F40A21B7E28C9D3B77641A_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_7 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_8 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_10 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_11 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_13 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_14 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_m07E65BDF68A76F1E4741970BB94ECD2232949651_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_7 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_8 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_10 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_11 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_13 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_14 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_mC4945F94C2097F69FE2003661195132AA48AD1F8_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_7 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_8 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_10 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_11 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_13 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_14 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m6DF9C9793968E2E6172E1D8CA75B3EA638C97619_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_7 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_8 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_10 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_11 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_13 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_14 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_m7F2F7D02ACE273CF9C2F9CEC8F19543602B83D05_gshared (ES3Type_ColorBySpeedModule_tCFA43F6737973F42BB7FAADFDFC7A29517BCB6A1* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_7 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_8 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_10 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_11 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_13 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_14 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_ColorOverLifetimeModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorOverLifetimeModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m40C9447B908F37A6F65813FE5C84100C2D6DEDCE_gshared (ES3Type_ColorOverLifetimeModule_t277620F2F04DEB7133CF4C371959B8CA123A4678* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_1 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_4 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorOverLifetimeModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorOverLifetimeModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m38E53514FF301AAAACADDA7D4D77996FC71C52E1_gshared (ES3Type_ColorOverLifetimeModule_t277620F2F04DEB7133CF4C371959B8CA123A4678* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_1 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_4 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
