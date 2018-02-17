#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// ConfigurationData
struct ConfigurationData_t2890431313;
// Assets.script.gameplay.Ball
struct Ball_t1658906139;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t939494601;
// Assets.script.gameplay.Block
struct Block_t2242439361;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Object
struct Object_t631007953;
// Assets.script.gameplay.Paddle
struct Paddle_t2775217614;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t3581341831;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// System.String
struct String_t;
// UnityEngine.Collision2D
struct Collision2D_t2842956331;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t96683501;
// UnityEngine.Transform
struct Transform_t3600365921;
// Assets.script.util.GameInitializer
struct GameInitializer_t1791085390;
// UnityEngine.Camera
struct Camera_t4157153871;
// System.IO.StreamReader
struct StreamReader_t4009935899;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.Decoder
struct Decoder_t2204182725;
// System.IO.Stream
struct Stream_t1273022909;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;

extern RuntimeClass* ConfigurationUtils_t1137756500_il2cpp_TypeInfo_var;
extern const uint32_t ConfigurationUtils_get_PaddleMoveUnitsPerSecond_m2402272495_MetadataUsageId;
extern const uint32_t ConfigurationUtils_get_BallImpulseForce_m399621394_MetadataUsageId;
extern RuntimeClass* ConfigurationData_t2890431313_il2cpp_TypeInfo_var;
extern const uint32_t ConfigurationUtils_Initialize_m4284182680_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var;
extern const uint32_t Ball_Start_m509216476_MetadataUsageId;
extern const uint32_t Ball_SetDirection_m1649811582_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const uint32_t Block_OnCollisionEnter2D_m1860798875_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t Paddle__ctor_m3228764317_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273_RuntimeMethod_var;
extern const uint32_t Paddle_Start_m2396697167_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4249957904;
extern String_t* _stringLiteral742877631;
extern const uint32_t Paddle_FixedUpdate_m575465342_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisBall_t1658906139_m2648948592_RuntimeMethod_var;
extern String_t* _stringLiteral1201842172;
extern const uint32_t Paddle_OnCollisionEnter2D_m3162447431_MetadataUsageId;
extern const uint32_t Paddle_Move_m170996273_MetadataUsageId;
extern RuntimeClass* ScreenUtils_t3649301747_il2cpp_TypeInfo_var;
extern const uint32_t ScreenUtils_get_ScreenLeft_m927865240_MetadataUsageId;
extern const uint32_t ScreenUtils_get_ScreenRight_m552475080_MetadataUsageId;
extern const uint32_t ScreenUtils_get_ScreenTop_m4206695247_MetadataUsageId;
extern const uint32_t ScreenUtils_get_ScreenBottom_m1175377353_MetadataUsageId;
extern const uint32_t ScreenUtils_Initialize_m2257016456_MetadataUsageId;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1293266066;
extern const uint32_t ConfigurationData__ctor_m2163337534_MetadataUsageId;
extern const uint32_t ConfigurationData_get_PaddleMoveUnitsPerSecond_m2147725164_MetadataUsageId;
extern const uint32_t ConfigurationData_get_BallImpulseForce_m3792104910_MetadataUsageId;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern const uint32_t ConfigurationData_SetConfigurationDataFields_m3437724706_MetadataUsageId;
extern const uint32_t ConfigurationData__cctor_m3674596483_MetadataUsageId;
struct ContactPoint2D_t3390240644 ;

struct ContactPoint2DU5BU5D_t96683501;
struct StringU5BU5D_t1281789340;
struct CharU5BU5D_t3528271667;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CMODULEU3E_T692745536_H
#define U3CMODULEU3E_T692745536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745536 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745536_H
#ifndef TEXTREADER_T283511965_H
#define TEXTREADER_T283511965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_t283511965  : public RuntimeObject
{
public:

public:
};

struct TextReader_t283511965_StaticFields
{
public:
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t283511965 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ___Null_0)); }
	inline TextReader_t283511965 * get_Null_0() const { return ___Null_0; }
	inline TextReader_t283511965 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(TextReader_t283511965 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_T283511965_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef SCREENUTILS_T3649301747_H
#define SCREENUTILS_T3649301747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.script.util.ScreenUtils
struct  ScreenUtils_t3649301747  : public RuntimeObject
{
public:

public:
};

struct ScreenUtils_t3649301747_StaticFields
{
public:
	// System.Single Assets.script.util.ScreenUtils::screenLeft
	float ___screenLeft_0;
	// System.Single Assets.script.util.ScreenUtils::screenRight
	float ___screenRight_1;
	// System.Single Assets.script.util.ScreenUtils::screenTop
	float ___screenTop_2;
	// System.Single Assets.script.util.ScreenUtils::screenBottom
	float ___screenBottom_3;

public:
	inline static int32_t get_offset_of_screenLeft_0() { return static_cast<int32_t>(offsetof(ScreenUtils_t3649301747_StaticFields, ___screenLeft_0)); }
	inline float get_screenLeft_0() const { return ___screenLeft_0; }
	inline float* get_address_of_screenLeft_0() { return &___screenLeft_0; }
	inline void set_screenLeft_0(float value)
	{
		___screenLeft_0 = value;
	}

	inline static int32_t get_offset_of_screenRight_1() { return static_cast<int32_t>(offsetof(ScreenUtils_t3649301747_StaticFields, ___screenRight_1)); }
	inline float get_screenRight_1() const { return ___screenRight_1; }
	inline float* get_address_of_screenRight_1() { return &___screenRight_1; }
	inline void set_screenRight_1(float value)
	{
		___screenRight_1 = value;
	}

	inline static int32_t get_offset_of_screenTop_2() { return static_cast<int32_t>(offsetof(ScreenUtils_t3649301747_StaticFields, ___screenTop_2)); }
	inline float get_screenTop_2() const { return ___screenTop_2; }
	inline float* get_address_of_screenTop_2() { return &___screenTop_2; }
	inline void set_screenTop_2(float value)
	{
		___screenTop_2 = value;
	}

	inline static int32_t get_offset_of_screenBottom_3() { return static_cast<int32_t>(offsetof(ScreenUtils_t3649301747_StaticFields, ___screenBottom_3)); }
	inline float get_screenBottom_3() const { return ___screenBottom_3; }
	inline float* get_address_of_screenBottom_3() { return &___screenBottom_3; }
	inline void set_screenBottom_3(float value)
	{
		___screenBottom_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENUTILS_T3649301747_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef CONFIGURATIONDATA_T2890431313_H
#define CONFIGURATIONDATA_T2890431313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConfigurationData
struct  ConfigurationData_t2890431313  : public RuntimeObject
{
public:

public:
};

struct ConfigurationData_t2890431313_StaticFields
{
public:
	// System.Single ConfigurationData::paddleMoveUnitsPerSecond
	float ___paddleMoveUnitsPerSecond_1;
	// System.Single ConfigurationData::ballImpulseForce
	float ___ballImpulseForce_2;

public:
	inline static int32_t get_offset_of_paddleMoveUnitsPerSecond_1() { return static_cast<int32_t>(offsetof(ConfigurationData_t2890431313_StaticFields, ___paddleMoveUnitsPerSecond_1)); }
	inline float get_paddleMoveUnitsPerSecond_1() const { return ___paddleMoveUnitsPerSecond_1; }
	inline float* get_address_of_paddleMoveUnitsPerSecond_1() { return &___paddleMoveUnitsPerSecond_1; }
	inline void set_paddleMoveUnitsPerSecond_1(float value)
	{
		___paddleMoveUnitsPerSecond_1 = value;
	}

	inline static int32_t get_offset_of_ballImpulseForce_2() { return static_cast<int32_t>(offsetof(ConfigurationData_t2890431313_StaticFields, ___ballImpulseForce_2)); }
	inline float get_ballImpulseForce_2() const { return ___ballImpulseForce_2; }
	inline float* get_address_of_ballImpulseForce_2() { return &___ballImpulseForce_2; }
	inline void set_ballImpulseForce_2(float value)
	{
		___ballImpulseForce_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONDATA_T2890431313_H
#ifndef CONFIGURATIONUTILS_T1137756500_H
#define CONFIGURATIONUTILS_T1137756500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.script.configuration.ConfigurationUtils
struct  ConfigurationUtils_t1137756500  : public RuntimeObject
{
public:

public:
};

struct ConfigurationUtils_t1137756500_StaticFields
{
public:
	// ConfigurationData Assets.script.configuration.ConfigurationUtils::_configurationData
	ConfigurationData_t2890431313 * ____configurationData_0;

public:
	inline static int32_t get_offset_of__configurationData_0() { return static_cast<int32_t>(offsetof(ConfigurationUtils_t1137756500_StaticFields, ____configurationData_0)); }
	inline ConfigurationData_t2890431313 * get__configurationData_0() const { return ____configurationData_0; }
	inline ConfigurationData_t2890431313 ** get_address_of__configurationData_0() { return &____configurationData_0; }
	inline void set__configurationData_0(ConfigurationData_t2890431313 * value)
	{
		____configurationData_0 = value;
		Il2CppCodeGenWriteBarrier((&____configurationData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONUTILS_T1137756500_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_1;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_2;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_3;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_4;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_5;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_6;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_7;

public:
	inline static int32_t get_offset_of_category_data_1() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_1)); }
	inline uint8_t* get_category_data_1() const { return ___category_data_1; }
	inline uint8_t** get_address_of_category_data_1() { return &___category_data_1; }
	inline void set_category_data_1(uint8_t* value)
	{
		___category_data_1 = value;
	}

	inline static int32_t get_offset_of_numeric_data_2() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_2)); }
	inline uint8_t* get_numeric_data_2() const { return ___numeric_data_2; }
	inline uint8_t** get_address_of_numeric_data_2() { return &___numeric_data_2; }
	inline void set_numeric_data_2(uint8_t* value)
	{
		___numeric_data_2 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_3)); }
	inline double* get_numeric_data_values_3() const { return ___numeric_data_values_3; }
	inline double** get_address_of_numeric_data_values_3() { return &___numeric_data_values_3; }
	inline void set_numeric_data_values_3(double* value)
	{
		___numeric_data_values_3 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_4)); }
	inline uint16_t* get_to_lower_data_low_4() const { return ___to_lower_data_low_4; }
	inline uint16_t** get_address_of_to_lower_data_low_4() { return &___to_lower_data_low_4; }
	inline void set_to_lower_data_low_4(uint16_t* value)
	{
		___to_lower_data_low_4 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_5)); }
	inline uint16_t* get_to_lower_data_high_5() const { return ___to_lower_data_high_5; }
	inline uint16_t** get_address_of_to_lower_data_high_5() { return &___to_lower_data_high_5; }
	inline void set_to_lower_data_high_5(uint16_t* value)
	{
		___to_lower_data_high_5 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_6)); }
	inline uint16_t* get_to_upper_data_low_6() const { return ___to_upper_data_low_6; }
	inline uint16_t** get_address_of_to_upper_data_low_6() { return &___to_upper_data_low_6; }
	inline void set_to_upper_data_low_6(uint16_t* value)
	{
		___to_upper_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_7)); }
	inline uint16_t* get_to_upper_data_high_7() const { return ___to_upper_data_high_7; }
	inline uint16_t** get_address_of_to_upper_data_high_7() { return &___to_upper_data_high_7; }
	inline void set_to_upper_data_high_7(uint16_t* value)
	{
		___to_upper_data_high_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef STREAMREADER_T4009935899_H
#define STREAMREADER_T4009935899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamReader
struct  StreamReader_t4009935899  : public TextReader_t283511965
{
public:
	// System.Byte[] System.IO.StreamReader::input_buffer
	ByteU5BU5D_t4116647657* ___input_buffer_1;
	// System.Char[] System.IO.StreamReader::decoded_buffer
	CharU5BU5D_t3528271667* ___decoded_buffer_2;
	// System.Int32 System.IO.StreamReader::decoded_count
	int32_t ___decoded_count_3;
	// System.Int32 System.IO.StreamReader::pos
	int32_t ___pos_4;
	// System.Int32 System.IO.StreamReader::buffer_size
	int32_t ___buffer_size_5;
	// System.Int32 System.IO.StreamReader::do_checks
	int32_t ___do_checks_6;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t1523322056 * ___encoding_7;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t2204182725 * ___decoder_8;
	// System.IO.Stream System.IO.StreamReader::base_stream
	Stream_t1273022909 * ___base_stream_9;
	// System.Boolean System.IO.StreamReader::mayBlock
	bool ___mayBlock_10;
	// System.Text.StringBuilder System.IO.StreamReader::line_builder
	StringBuilder_t * ___line_builder_11;
	// System.Boolean System.IO.StreamReader::foundCR
	bool ___foundCR_13;

public:
	inline static int32_t get_offset_of_input_buffer_1() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___input_buffer_1)); }
	inline ByteU5BU5D_t4116647657* get_input_buffer_1() const { return ___input_buffer_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_input_buffer_1() { return &___input_buffer_1; }
	inline void set_input_buffer_1(ByteU5BU5D_t4116647657* value)
	{
		___input_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___input_buffer_1), value);
	}

	inline static int32_t get_offset_of_decoded_buffer_2() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoded_buffer_2)); }
	inline CharU5BU5D_t3528271667* get_decoded_buffer_2() const { return ___decoded_buffer_2; }
	inline CharU5BU5D_t3528271667** get_address_of_decoded_buffer_2() { return &___decoded_buffer_2; }
	inline void set_decoded_buffer_2(CharU5BU5D_t3528271667* value)
	{
		___decoded_buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___decoded_buffer_2), value);
	}

	inline static int32_t get_offset_of_decoded_count_3() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoded_count_3)); }
	inline int32_t get_decoded_count_3() const { return ___decoded_count_3; }
	inline int32_t* get_address_of_decoded_count_3() { return &___decoded_count_3; }
	inline void set_decoded_count_3(int32_t value)
	{
		___decoded_count_3 = value;
	}

	inline static int32_t get_offset_of_pos_4() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___pos_4)); }
	inline int32_t get_pos_4() const { return ___pos_4; }
	inline int32_t* get_address_of_pos_4() { return &___pos_4; }
	inline void set_pos_4(int32_t value)
	{
		___pos_4 = value;
	}

	inline static int32_t get_offset_of_buffer_size_5() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___buffer_size_5)); }
	inline int32_t get_buffer_size_5() const { return ___buffer_size_5; }
	inline int32_t* get_address_of_buffer_size_5() { return &___buffer_size_5; }
	inline void set_buffer_size_5(int32_t value)
	{
		___buffer_size_5 = value;
	}

	inline static int32_t get_offset_of_do_checks_6() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___do_checks_6)); }
	inline int32_t get_do_checks_6() const { return ___do_checks_6; }
	inline int32_t* get_address_of_do_checks_6() { return &___do_checks_6; }
	inline void set_do_checks_6(int32_t value)
	{
		___do_checks_6 = value;
	}

	inline static int32_t get_offset_of_encoding_7() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___encoding_7)); }
	inline Encoding_t1523322056 * get_encoding_7() const { return ___encoding_7; }
	inline Encoding_t1523322056 ** get_address_of_encoding_7() { return &___encoding_7; }
	inline void set_encoding_7(Encoding_t1523322056 * value)
	{
		___encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_7), value);
	}

	inline static int32_t get_offset_of_decoder_8() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoder_8)); }
	inline Decoder_t2204182725 * get_decoder_8() const { return ___decoder_8; }
	inline Decoder_t2204182725 ** get_address_of_decoder_8() { return &___decoder_8; }
	inline void set_decoder_8(Decoder_t2204182725 * value)
	{
		___decoder_8 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_8), value);
	}

	inline static int32_t get_offset_of_base_stream_9() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___base_stream_9)); }
	inline Stream_t1273022909 * get_base_stream_9() const { return ___base_stream_9; }
	inline Stream_t1273022909 ** get_address_of_base_stream_9() { return &___base_stream_9; }
	inline void set_base_stream_9(Stream_t1273022909 * value)
	{
		___base_stream_9 = value;
		Il2CppCodeGenWriteBarrier((&___base_stream_9), value);
	}

	inline static int32_t get_offset_of_mayBlock_10() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___mayBlock_10)); }
	inline bool get_mayBlock_10() const { return ___mayBlock_10; }
	inline bool* get_address_of_mayBlock_10() { return &___mayBlock_10; }
	inline void set_mayBlock_10(bool value)
	{
		___mayBlock_10 = value;
	}

	inline static int32_t get_offset_of_line_builder_11() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___line_builder_11)); }
	inline StringBuilder_t * get_line_builder_11() const { return ___line_builder_11; }
	inline StringBuilder_t ** get_address_of_line_builder_11() { return &___line_builder_11; }
	inline void set_line_builder_11(StringBuilder_t * value)
	{
		___line_builder_11 = value;
		Il2CppCodeGenWriteBarrier((&___line_builder_11), value);
	}

	inline static int32_t get_offset_of_foundCR_13() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___foundCR_13)); }
	inline bool get_foundCR_13() const { return ___foundCR_13; }
	inline bool* get_address_of_foundCR_13() { return &___foundCR_13; }
	inline void set_foundCR_13(bool value)
	{
		___foundCR_13 = value;
	}
};

struct StreamReader_t4009935899_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t4009935899 * ___Null_12;

public:
	inline static int32_t get_offset_of_Null_12() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899_StaticFields, ___Null_12)); }
	inline StreamReader_t4009935899 * get_Null_12() const { return ___Null_12; }
	inline StreamReader_t4009935899 ** get_address_of_Null_12() { return &___Null_12; }
	inline void set_Null_12(StreamReader_t4009935899 * value)
	{
		___Null_12 = value;
		Il2CppCodeGenWriteBarrier((&___Null_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMREADER_T4009935899_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef CONTACTPOINT2D_T3390240644_H
#define CONTACTPOINT2D_T3390240644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint2D
struct  ContactPoint2D_t3390240644 
{
public:
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_t2156229523  ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_t2156229523  ___m_Normal_1;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_RelativeVelocity
	Vector2_t2156229523  ___m_RelativeVelocity_2;
	// System.Single UnityEngine.ContactPoint2D::m_Separation
	float ___m_Separation_3;
	// System.Single UnityEngine.ContactPoint2D::m_NormalImpulse
	float ___m_NormalImpulse_4;
	// System.Single UnityEngine.ContactPoint2D::m_TangentImpulse
	float ___m_TangentImpulse_5;
	// System.Int32 UnityEngine.ContactPoint2D::m_Collider
	int32_t ___m_Collider_6;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherCollider
	int32_t ___m_OtherCollider_7;
	// System.Int32 UnityEngine.ContactPoint2D::m_Rigidbody
	int32_t ___m_Rigidbody_8;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_9;
	// System.Int32 UnityEngine.ContactPoint2D::m_Enabled
	int32_t ___m_Enabled_10;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Point_0)); }
	inline Vector2_t2156229523  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector2_t2156229523 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector2_t2156229523  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Normal_1)); }
	inline Vector2_t2156229523  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector2_t2156229523 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector2_t2156229523  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_2() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_RelativeVelocity_2)); }
	inline Vector2_t2156229523  get_m_RelativeVelocity_2() const { return ___m_RelativeVelocity_2; }
	inline Vector2_t2156229523 * get_address_of_m_RelativeVelocity_2() { return &___m_RelativeVelocity_2; }
	inline void set_m_RelativeVelocity_2(Vector2_t2156229523  value)
	{
		___m_RelativeVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_Separation_3() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Separation_3)); }
	inline float get_m_Separation_3() const { return ___m_Separation_3; }
	inline float* get_address_of_m_Separation_3() { return &___m_Separation_3; }
	inline void set_m_Separation_3(float value)
	{
		___m_Separation_3 = value;
	}

	inline static int32_t get_offset_of_m_NormalImpulse_4() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_NormalImpulse_4)); }
	inline float get_m_NormalImpulse_4() const { return ___m_NormalImpulse_4; }
	inline float* get_address_of_m_NormalImpulse_4() { return &___m_NormalImpulse_4; }
	inline void set_m_NormalImpulse_4(float value)
	{
		___m_NormalImpulse_4 = value;
	}

	inline static int32_t get_offset_of_m_TangentImpulse_5() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_TangentImpulse_5)); }
	inline float get_m_TangentImpulse_5() const { return ___m_TangentImpulse_5; }
	inline float* get_address_of_m_TangentImpulse_5() { return &___m_TangentImpulse_5; }
	inline void set_m_TangentImpulse_5(float value)
	{
		___m_TangentImpulse_5 = value;
	}

	inline static int32_t get_offset_of_m_Collider_6() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Collider_6)); }
	inline int32_t get_m_Collider_6() const { return ___m_Collider_6; }
	inline int32_t* get_address_of_m_Collider_6() { return &___m_Collider_6; }
	inline void set_m_Collider_6(int32_t value)
	{
		___m_Collider_6 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_7() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_OtherCollider_7)); }
	inline int32_t get_m_OtherCollider_7() const { return ___m_OtherCollider_7; }
	inline int32_t* get_address_of_m_OtherCollider_7() { return &___m_OtherCollider_7; }
	inline void set_m_OtherCollider_7(int32_t value)
	{
		___m_OtherCollider_7 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_8() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Rigidbody_8)); }
	inline int32_t get_m_Rigidbody_8() const { return ___m_Rigidbody_8; }
	inline int32_t* get_address_of_m_Rigidbody_8() { return &___m_Rigidbody_8; }
	inline void set_m_Rigidbody_8(int32_t value)
	{
		___m_Rigidbody_8 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_9() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_OtherRigidbody_9)); }
	inline int32_t get_m_OtherRigidbody_9() const { return ___m_OtherRigidbody_9; }
	inline int32_t* get_address_of_m_OtherRigidbody_9() { return &___m_OtherRigidbody_9; }
	inline void set_m_OtherRigidbody_9(int32_t value)
	{
		___m_OtherRigidbody_9 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_10() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Enabled_10)); }
	inline int32_t get_m_Enabled_10() const { return ___m_Enabled_10; }
	inline int32_t* get_address_of_m_Enabled_10() { return &___m_Enabled_10; }
	inline void set_m_Enabled_10(int32_t value)
	{
		___m_Enabled_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT2D_T3390240644_H
#ifndef FORCEMODE2D_T255358695_H
#define FORCEMODE2D_T255358695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ForceMode2D
struct  ForceMode2D_t255358695 
{
public:
	// System.Int32 UnityEngine.ForceMode2D::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ForceMode2D_t255358695, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORCEMODE2D_T255358695_H
#ifndef COLLISION2D_T2842956331_H
#define COLLISION2D_T2842956331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision2D
struct  Collision2D_t2842956331  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_Contacts
	ContactPoint2DU5BU5D_t96683501* ___m_Contacts_4;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t2156229523  ___m_RelativeVelocity_5;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_6;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Contacts_4)); }
	inline ContactPoint2DU5BU5D_t96683501* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPoint2DU5BU5D_t96683501** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPoint2DU5BU5D_t96683501* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_5() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_RelativeVelocity_5)); }
	inline Vector2_t2156229523  get_m_RelativeVelocity_5() const { return ___m_RelativeVelocity_5; }
	inline Vector2_t2156229523 * get_address_of_m_RelativeVelocity_5() { return &___m_RelativeVelocity_5; }
	inline void set_m_RelativeVelocity_5(Vector2_t2156229523  value)
	{
		___m_RelativeVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_6() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Enabled_6)); }
	inline int32_t get_m_Enabled_6() const { return ___m_Enabled_6; }
	inline int32_t* get_address_of_m_Enabled_6() { return &___m_Enabled_6; }
	inline void set_m_Enabled_6(int32_t value)
	{
		___m_Enabled_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	ContactPoint2D_t3390240644 * ___m_Contacts_4;
	Vector2_t2156229523  ___m_RelativeVelocity_5;
	int32_t ___m_Enabled_6;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	ContactPoint2D_t3390240644 * ___m_Contacts_4;
	Vector2_t2156229523  ___m_RelativeVelocity_5;
	int32_t ___m_Enabled_6;
};
#endif // COLLISION2D_T2842956331_H
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef RIGIDBODY2D_T939494601_H
#define RIGIDBODY2D_T939494601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t939494601  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T939494601_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
#ifndef BOXCOLLIDER2D_T3581341831_H
#define BOXCOLLIDER2D_T3581341831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider2D
struct  BoxCollider2D_t3581341831  : public Collider2D_t2806799626
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER2D_T3581341831_H
#ifndef GAMEINITIALIZER_T1791085390_H
#define GAMEINITIALIZER_T1791085390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.script.util.GameInitializer
struct  GameInitializer_t1791085390  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEINITIALIZER_T1791085390_H
#ifndef BLOCK_T2242439361_H
#define BLOCK_T2242439361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.script.gameplay.Block
struct  Block_t2242439361  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCK_T2242439361_H
#ifndef BALL_T1658906139_H
#define BALL_T1658906139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.script.gameplay.Ball
struct  Ball_t1658906139  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Rigidbody2D Assets.script.gameplay.Ball::_rb
	Rigidbody2D_t939494601 * ____rb_2;

public:
	inline static int32_t get_offset_of__rb_2() { return static_cast<int32_t>(offsetof(Ball_t1658906139, ____rb_2)); }
	inline Rigidbody2D_t939494601 * get__rb_2() const { return ____rb_2; }
	inline Rigidbody2D_t939494601 ** get_address_of__rb_2() { return &____rb_2; }
	inline void set__rb_2(Rigidbody2D_t939494601 * value)
	{
		____rb_2 = value;
		Il2CppCodeGenWriteBarrier((&____rb_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALL_T1658906139_H
#ifndef PADDLE_T2775217614_H
#define PADDLE_T2775217614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.script.gameplay.Paddle
struct  Paddle_t2775217614  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Rigidbody2D Assets.script.gameplay.Paddle::_rb
	Rigidbody2D_t939494601 * ____rb_2;
	// UnityEngine.Vector3 Assets.script.gameplay.Paddle::_navigationVector
	Vector3_t3722313464  ____navigationVector_3;
	// System.Single Assets.script.gameplay.Paddle::_halfColliderWidth
	float ____halfColliderWidth_4;
	// System.Single Assets.script.gameplay.Paddle::_halfColliderHeight
	float ____halfColliderHeight_5;

public:
	inline static int32_t get_offset_of__rb_2() { return static_cast<int32_t>(offsetof(Paddle_t2775217614, ____rb_2)); }
	inline Rigidbody2D_t939494601 * get__rb_2() const { return ____rb_2; }
	inline Rigidbody2D_t939494601 ** get_address_of__rb_2() { return &____rb_2; }
	inline void set__rb_2(Rigidbody2D_t939494601 * value)
	{
		____rb_2 = value;
		Il2CppCodeGenWriteBarrier((&____rb_2), value);
	}

	inline static int32_t get_offset_of__navigationVector_3() { return static_cast<int32_t>(offsetof(Paddle_t2775217614, ____navigationVector_3)); }
	inline Vector3_t3722313464  get__navigationVector_3() const { return ____navigationVector_3; }
	inline Vector3_t3722313464 * get_address_of__navigationVector_3() { return &____navigationVector_3; }
	inline void set__navigationVector_3(Vector3_t3722313464  value)
	{
		____navigationVector_3 = value;
	}

	inline static int32_t get_offset_of__halfColliderWidth_4() { return static_cast<int32_t>(offsetof(Paddle_t2775217614, ____halfColliderWidth_4)); }
	inline float get__halfColliderWidth_4() const { return ____halfColliderWidth_4; }
	inline float* get_address_of__halfColliderWidth_4() { return &____halfColliderWidth_4; }
	inline void set__halfColliderWidth_4(float value)
	{
		____halfColliderWidth_4 = value;
	}

	inline static int32_t get_offset_of__halfColliderHeight_5() { return static_cast<int32_t>(offsetof(Paddle_t2775217614, ____halfColliderHeight_5)); }
	inline float get__halfColliderHeight_5() const { return ____halfColliderHeight_5; }
	inline float* get_address_of__halfColliderHeight_5() { return &____halfColliderHeight_5; }
	inline void set__halfColliderHeight_5(float value)
	{
		____halfColliderHeight_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PADDLE_T2775217614_H
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t96683501  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ContactPoint2D_t3390240644  m_Items[1];

public:
	inline ContactPoint2D_t3390240644  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint2D_t3390240644 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint2D_t3390240644  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint2D_t3390240644  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint2D_t3390240644 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint2D_t3390240644  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m3920941149_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);

// System.Single ConfigurationData::get_PaddleMoveUnitsPerSecond()
extern "C"  float ConfigurationData_get_PaddleMoveUnitsPerSecond_m2147725164 (ConfigurationData_t2890431313 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single ConfigurationData::get_BallImpulseForce()
extern "C"  float ConfigurationData_get_BallImpulseForce_m3792104910 (ConfigurationData_t2890431313 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ConfigurationData::.ctor()
extern "C"  void ConfigurationData__ctor_m2163337534 (ConfigurationData_t2890431313 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, method) ((  Rigidbody2D_t939494601 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Vector2 UnityEngine.Vector2::get_down()
extern "C"  Vector2_t2156229523  Vector2_get_down_m2886001705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Assets.script.configuration.ConfigurationUtils::get_BallImpulseForce()
extern "C"  float ConfigurationUtils_get_BallImpulseForce_m399621394 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2156229523  Vector2_op_Multiply_m2347887432 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
extern "C"  void Rigidbody2D_AddForce_m1099013366 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C"  Vector2_t2156229523  Rigidbody2D_get_velocity_m366589732 (Rigidbody2D_t939494601 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C"  float Vector2_get_magnitude_m2752892833 (Vector2_t2156229523 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_Multiply_m3294489634 (RuntimeObject * __this /* static, unused */, float p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_set_velocity_m2898400508 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
#define Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273(__this, method) ((  BoxCollider2D_t3581341831 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Bounds UnityEngine.Collider2D::get_bounds()
extern "C"  Bounds_t2266837910  Collider2D_get_bounds_m1364963828 (Collider2D_t2806799626 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern "C"  Vector3_t3722313464  Bounds_get_size_m1178783246 (Bounds_t2266837910 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m4009438427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Assets.script.gameplay.Paddle::CalculateClampedXForLeft()
extern "C"  float Paddle_CalculateClampedXForLeft_m2805002435 (Paddle_t2775217614 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Assets.script.gameplay.Paddle::Move(System.Single)
extern "C"  void Paddle_Move_m170996273 (Paddle_t2775217614 * __this, float ___paddle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Assets.script.gameplay.Paddle::CalculateClampedXForRight()
extern "C"  float Paddle_CalculateClampedXForRight_m3793157070 (Paddle_t2775217614 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
extern "C"  GameObject_t1113636619 * Collision2D_get_gameObject_m1443495885 (Collision2D_t2842956331 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
extern "C"  bool GameObject_CompareTag_m3144439756 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::get_contacts()
extern "C"  ContactPoint2DU5BU5D_t96683501* Collision2D_get_contacts_m696521713 (Collision2D_t2842956331 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Assets.script.gameplay.Paddle::IsCollisionHappensOnTopOfThePaddle(UnityEngine.ContactPoint2D)
extern "C"  bool Paddle_IsCollisionHappensOnTopOfThePaddle_m3191873226 (Paddle_t2775217614 * __this, ContactPoint2D_t3390240644  ___point0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Collision2D::get_transform()
extern "C"  Transform_t3600365921 * Collision2D_get_transform_m2670923831 (Collision2D_t2842956331 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<Assets.script.gameplay.Ball>()
#define GameObject_GetComponent_TisBall_t1658906139_m2648948592(__this, method) ((  Ball_t1658906139 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m3920941149_gshared)(__this, method)
// System.Void Assets.script.gameplay.Ball::SetDirection(UnityEngine.Vector2)
extern "C"  void Ball_SetDirection_m1649811582 (Ball_t1658906139 * __this, Vector2_t2156229523  ___direction0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.ContactPoint2D::get_point()
extern "C"  Vector2_t2156229523  ContactPoint2D_get_point_m346644250 (ContactPoint2D_t3390240644 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_MovePosition_m1934912072 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Assets.script.configuration.ConfigurationUtils::get_PaddleMoveUnitsPerSecond()
extern "C"  float ConfigurationUtils_get_PaddleMoveUnitsPerSecond_m2402272495 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Assets.script.util.ScreenUtils::get_ScreenLeft()
extern "C"  float ScreenUtils_get_ScreenLeft_m927865240 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Assets.script.util.ScreenUtils::get_ScreenRight()
extern "C"  float ScreenUtils_get_ScreenRight_m552475080 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Assets.script.util.ScreenUtils::Initialize()
extern "C"  void ScreenUtils_Initialize_m2257016456 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Assets.script.configuration.ConfigurationUtils::Initialize()
extern "C"  void ConfigurationUtils_Initialize_m4284182680 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_height()
extern "C"  int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Camera_ScreenToWorldPoint_m3978588570 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_streamingAssetsPath()
extern "C"  String_t* Application_get_streamingAssetsPath_m1172141117 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C"  String_t* Path_Combine_m3389272516 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamReader System.IO.File::OpenText(System.String)
extern "C"  StreamReader_t4009935899 * File_OpenText_m196858847 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ConfigurationData::SetConfigurationDataFields(System.String)
extern "C"  void ConfigurationData_SetConfigurationDataFields_m3437724706 (RuntimeObject * __this /* static, unused */, String_t* ___csvValues0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
extern "C"  StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.Single::Parse(System.String)
extern "C"  float Single_Parse_m364357836 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Assets.script.configuration.ConfigurationUtils::get_PaddleMoveUnitsPerSecond()
extern "C"  float ConfigurationUtils_get_PaddleMoveUnitsPerSecond_m2402272495 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigurationUtils_get_PaddleMoveUnitsPerSecond_m2402272495_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConfigurationData_t2890431313 * L_0 = ((ConfigurationUtils_t1137756500_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationUtils_t1137756500_il2cpp_TypeInfo_var))->get__configurationData_0();
		float L_1 = ConfigurationData_get_PaddleMoveUnitsPerSecond_m2147725164(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single Assets.script.configuration.ConfigurationUtils::get_BallImpulseForce()
extern "C"  float ConfigurationUtils_get_BallImpulseForce_m399621394 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigurationUtils_get_BallImpulseForce_m399621394_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConfigurationData_t2890431313 * L_0 = ((ConfigurationUtils_t1137756500_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationUtils_t1137756500_il2cpp_TypeInfo_var))->get__configurationData_0();
		float L_1 = ConfigurationData_get_BallImpulseForce_m3792104910(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Assets.script.configuration.ConfigurationUtils::Initialize()
extern "C"  void ConfigurationUtils_Initialize_m4284182680 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigurationUtils_Initialize_m4284182680_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConfigurationData_t2890431313 * L_0 = (ConfigurationData_t2890431313 *)il2cpp_codegen_object_new(ConfigurationData_t2890431313_il2cpp_TypeInfo_var);
		ConfigurationData__ctor_m2163337534(L_0, /*hidden argument*/NULL);
		((ConfigurationUtils_t1137756500_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationUtils_t1137756500_il2cpp_TypeInfo_var))->set__configurationData_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Assets.script.gameplay.Ball::.ctor()
extern "C"  void Ball__ctor_m223458602 (Ball_t1658906139 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Assets.script.gameplay.Ball::Start()
extern "C"  void Ball_Start_m509216476 (Ball_t1658906139 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ball_Start_m509216476_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody2D_t939494601 * L_0 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		__this->set__rb_2(L_0);
		Rigidbody2D_t939494601 * L_1 = __this->get__rb_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_get_down_m2886001705(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = ConfigurationUtils_get_BallImpulseForce_m399621394(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2156229523  L_4 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m1099013366(L_1, L_4, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Assets.script.gameplay.Ball::Update()
extern "C"  void Ball_Update_m1278080369 (Ball_t1658906139 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Assets.script.gameplay.Ball::SetDirection(UnityEngine.Vector2)
extern "C"  void Ball_SetDirection_m1649811582 (Ball_t1658906139 * __this, Vector2_t2156229523  ___direction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ball_SetDirection_m1649811582_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Rigidbody2D_t939494601 * L_0 = __this->get__rb_2();
		Rigidbody2D_t939494601 * L_1 = __this->get__rb_2();
		Vector2_t2156229523  L_2 = Rigidbody2D_get_velocity_m366589732(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Vector2_get_magnitude_m2752892833((&V_0), /*hidden argument*/NULL);
		Vector2_t2156229523  L_4 = ___direction0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_5 = Vector2_op_Multiply_m3294489634(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m2898400508(L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Assets.script.gameplay.Block::.ctor()
extern "C"  void Block__ctor_m3959246870 (Block_t2242439361 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Assets.script.gameplay.Block::Start()
extern "C"  void Block_Start_m364615510 (Block_t2242439361 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Assets.script.gameplay.Block::Update()
extern "C"  void Block_Update_m2948896156 (Block_t2242439361 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Assets.script.gameplay.Block::OnCollisionEnter2D()
extern "C"  void Block_OnCollisionEnter2D_m1860798875 (Block_t2242439361 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Block_OnCollisionEnter2D_m1860798875_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Assets.script.gameplay.Paddle::.ctor()
extern "C"  void Paddle__ctor_m3228764317 (Paddle_t2775217614 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Paddle__ctor_m3228764317_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__navigationVector_3(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Assets.script.gameplay.Paddle::Start()
extern "C"  void Paddle_Start_m2396697167 (Paddle_t2775217614 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Paddle_Start_m2396697167_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BoxCollider2D_t3581341831 * V_0 = NULL;
	Bounds_t2266837910  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Bounds_t2266837910  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		Rigidbody2D_t939494601 * L_0 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		__this->set__rb_2(L_0);
		BoxCollider2D_t3581341831 * L_1 = Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273_RuntimeMethod_var);
		V_0 = L_1;
		BoxCollider2D_t3581341831 * L_2 = V_0;
		Bounds_t2266837910  L_3 = Collider2D_get_bounds_m1364963828(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Vector3_t3722313464  L_4 = Bounds_get_size_m1178783246((&V_1), /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = (&V_2)->get_x_1();
		__this->set__halfColliderWidth_4(((float)((float)L_5/(float)(2.0f))));
		BoxCollider2D_t3581341831 * L_6 = V_0;
		Bounds_t2266837910  L_7 = Collider2D_get_bounds_m1364963828(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		Vector3_t3722313464  L_8 = Bounds_get_size_m1178783246((&V_3), /*hidden argument*/NULL);
		V_4 = L_8;
		float L_9 = (&V_4)->get_y_2();
		__this->set__halfColliderHeight_5(((float)((float)L_9/(float)(2.0f))));
		return;
	}
}
// System.Void Assets.script.gameplay.Paddle::FixedUpdate()
extern "C"  void Paddle_FixedUpdate_m575465342 (Paddle_t2775217614 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Paddle_FixedUpdate_m575465342_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral4249957904, /*hidden argument*/NULL);
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0025;
		}
	}
	{
		float L_1 = Paddle_CalculateClampedXForLeft_m2805002435(__this, /*hidden argument*/NULL);
		Paddle_Move_m170996273(__this, L_1, /*hidden argument*/NULL);
		goto IL_0045;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_2 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral742877631, /*hidden argument*/NULL);
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0045;
		}
	}
	{
		float L_3 = Paddle_CalculateClampedXForRight_m3793157070(__this, /*hidden argument*/NULL);
		Paddle_Move_m170996273(__this, L_3, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void Assets.script.gameplay.Paddle::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void Paddle_OnCollisionEnter2D_m3162447431 (Paddle_t2775217614 * __this, Collision2D_t2842956331 * ___coll0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Paddle_OnCollisionEnter2D_m3162447431_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector2_t2156229523  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Ball_t1658906139 * V_7 = NULL;
	{
		Collision2D_t2842956331 * L_0 = ___coll0;
		GameObject_t1113636619 * L_1 = Collision2D_get_gameObject_m1443495885(L_0, /*hidden argument*/NULL);
		bool L_2 = GameObject_CompareTag_m3144439756(L_1, _stringLiteral1201842172, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00a0;
		}
	}
	{
		Collision2D_t2842956331 * L_3 = ___coll0;
		ContactPoint2DU5BU5D_t96683501* L_4 = Collision2D_get_contacts_m696521713(L_3, /*hidden argument*/NULL);
		bool L_5 = Paddle_IsCollisionHappensOnTopOfThePaddle_m3191873226(__this, (*(ContactPoint2D_t3390240644 *)((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)))), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00a0;
		}
	}
	{
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = (&V_1)->get_x_1();
		Collision2D_t2842956331 * L_9 = ___coll0;
		Transform_t3600365921 * L_10 = Collision2D_get_transform_m2670923831(L_9, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		float L_12 = (&V_2)->get_x_1();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_8, (float)L_12));
		float L_13 = V_0;
		float L_14 = __this->get__halfColliderWidth_4();
		V_3 = ((float)((float)L_13/(float)L_14));
		float L_15 = V_3;
		V_4 = ((float)il2cpp_codegen_multiply((float)L_15, (float)(1.04719758f)));
		float L_16 = V_4;
		V_5 = ((float)il2cpp_codegen_add((float)(1.57079637f), (float)L_16));
		float L_17 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_18 = cosf(L_17);
		float L_19 = V_5;
		float L_20 = sinf(L_19);
		Vector2__ctor_m3970636864((&V_6), L_18, L_20, /*hidden argument*/NULL);
		Collision2D_t2842956331 * L_21 = ___coll0;
		GameObject_t1113636619 * L_22 = Collision2D_get_gameObject_m1443495885(L_21, /*hidden argument*/NULL);
		Ball_t1658906139 * L_23 = GameObject_GetComponent_TisBall_t1658906139_m2648948592(L_22, /*hidden argument*/GameObject_GetComponent_TisBall_t1658906139_m2648948592_RuntimeMethod_var);
		V_7 = L_23;
		Ball_t1658906139 * L_24 = V_7;
		Vector2_t2156229523  L_25 = V_6;
		Ball_SetDirection_m1649811582(L_24, L_25, /*hidden argument*/NULL);
	}

IL_00a0:
	{
		return;
	}
}
// System.Boolean Assets.script.gameplay.Paddle::IsCollisionHappensOnTopOfThePaddle(UnityEngine.ContactPoint2D)
extern "C"  bool Paddle_IsCollisionHappensOnTopOfThePaddle_m3191873226 (Paddle_t2775217614 * __this, ContactPoint2D_t3390240644  ___point0, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector2_t2156229523  L_0 = ContactPoint2D_get_point_m346644250((&___point0), /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = (&V_0)->get_y_1();
		float L_2 = fabsf(L_1);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = (&V_1)->get_y_2();
		float L_6 = __this->get__halfColliderHeight_5();
		float L_7 = fabsf(((float)il2cpp_codegen_add((float)L_5, (float)L_6)));
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_2, (float)L_7))) < ((float)(0.06f)))))
		{
			goto IL_0040;
		}
	}
	{
		return (bool)1;
	}

IL_0040:
	{
		return (bool)0;
	}
}
// System.Void Assets.script.gameplay.Paddle::Move(System.Single)
extern "C"  void Paddle_Move_m170996273 (Paddle_t2775217614 * __this, float ___paddle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Paddle_Move_m170996273_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		__this->set__navigationVector_3(L_1);
		Vector3_t3722313464 * L_2 = __this->get_address_of__navigationVector_3();
		float L_3 = ___paddle0;
		L_2->set_x_1(L_3);
		Rigidbody2D_t939494601 * L_4 = __this->get__rb_2();
		Vector3_t3722313464  L_5 = __this->get__navigationVector_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_6 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_m1934912072(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Assets.script.gameplay.Paddle::CalculateClampedXForLeft()
extern "C"  float Paddle_CalculateClampedXForLeft_m2805002435 (Paddle_t2775217614 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		float L_0 = ConfigurationUtils_get_PaddleMoveUnitsPerSecond_m2402272495(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)((-L_0)), (float)L_1));
		float L_2 = ScreenUtils_get_ScreenLeft_m927865240(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = (&V_1)->get_x_1();
		float L_6 = __this->get__halfColliderWidth_4();
		float L_7 = V_0;
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_2, (float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_6))))) > ((float)L_7))))
		{
			goto IL_0040;
		}
	}
	{
		float L_8 = ScreenUtils_get_ScreenLeft_m927865240(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = __this->get__halfColliderWidth_4();
		return ((float)il2cpp_codegen_add((float)L_8, (float)L_9));
	}

IL_0040:
	{
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		float L_12 = (&V_2)->get_x_1();
		float L_13 = V_0;
		return ((float)il2cpp_codegen_add((float)L_12, (float)L_13));
	}
}
// System.Single Assets.script.gameplay.Paddle::CalculateClampedXForRight()
extern "C"  float Paddle_CalculateClampedXForRight_m3793157070 (Paddle_t2775217614 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		float L_0 = ConfigurationUtils_get_PaddleMoveUnitsPerSecond_m2402272495(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		float L_2 = ScreenUtils_get_ScreenRight_m552475080(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = (&V_1)->get_x_1();
		float L_6 = __this->get__halfColliderWidth_4();
		float L_7 = V_0;
		if ((!(((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_2, (float)L_5)), (float)L_6))) < ((float)L_7))))
		{
			goto IL_003f;
		}
	}
	{
		float L_8 = ScreenUtils_get_ScreenRight_m552475080(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = __this->get__halfColliderWidth_4();
		return ((float)il2cpp_codegen_subtract((float)L_8, (float)L_9));
	}

IL_003f:
	{
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		float L_12 = (&V_2)->get_x_1();
		float L_13 = V_0;
		return ((float)il2cpp_codegen_add((float)L_12, (float)L_13));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Assets.script.util.GameInitializer::.ctor()
extern "C"  void GameInitializer__ctor_m756930092 (GameInitializer_t1791085390 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Assets.script.util.GameInitializer::Awake()
extern "C"  void GameInitializer_Awake_m3062907803 (GameInitializer_t1791085390 * __this, const RuntimeMethod* method)
{
	{
		ScreenUtils_Initialize_m2257016456(NULL /*static, unused*/, /*hidden argument*/NULL);
		ConfigurationUtils_Initialize_m4284182680(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Assets.script.util.ScreenUtils::get_ScreenLeft()
extern "C"  float ScreenUtils_get_ScreenLeft_m927865240 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenUtils_get_ScreenLeft_m927865240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ((ScreenUtils_t3649301747_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t3649301747_il2cpp_TypeInfo_var))->get_screenLeft_0();
		return L_0;
	}
}
// System.Single Assets.script.util.ScreenUtils::get_ScreenRight()
extern "C"  float ScreenUtils_get_ScreenRight_m552475080 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenUtils_get_ScreenRight_m552475080_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ((ScreenUtils_t3649301747_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t3649301747_il2cpp_TypeInfo_var))->get_screenRight_1();
		return L_0;
	}
}
// System.Single Assets.script.util.ScreenUtils::get_ScreenTop()
extern "C"  float ScreenUtils_get_ScreenTop_m4206695247 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenUtils_get_ScreenTop_m4206695247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ((ScreenUtils_t3649301747_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t3649301747_il2cpp_TypeInfo_var))->get_screenTop_2();
		return L_0;
	}
}
// System.Single Assets.script.util.ScreenUtils::get_ScreenBottom()
extern "C"  float ScreenUtils_get_ScreenBottom_m1175377353 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenUtils_get_ScreenBottom_m1175377353_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ((ScreenUtils_t3649301747_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t3649301747_il2cpp_TypeInfo_var))->get_screenBottom_3();
		return L_0;
	}
}
// System.Void Assets.script.util.ScreenUtils::Initialize()
extern "C"  void ScreenUtils_Initialize_m2257016456 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenUtils_Initialize_m2257016456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_z_3();
		V_0 = ((-L_3));
		float L_4 = V_0;
		Vector3__ctor_m3353183577((&V_2), (0.0f), (0.0f), L_4, /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = V_0;
		Vector3__ctor_m3353183577((&V_3), (((float)((float)L_5))), (((float)((float)L_6))), L_7, /*hidden argument*/NULL);
		Camera_t4157153871 * L_8 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = V_2;
		Vector3_t3722313464  L_10 = Camera_ScreenToWorldPoint_m3978588570(L_8, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		Camera_t4157153871 * L_11 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_12 = V_3;
		Vector3_t3722313464  L_13 = Camera_ScreenToWorldPoint_m3978588570(L_11, L_12, /*hidden argument*/NULL);
		V_5 = L_13;
		float L_14 = (&V_4)->get_x_1();
		((ScreenUtils_t3649301747_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t3649301747_il2cpp_TypeInfo_var))->set_screenLeft_0(L_14);
		float L_15 = (&V_5)->get_x_1();
		((ScreenUtils_t3649301747_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t3649301747_il2cpp_TypeInfo_var))->set_screenRight_1(L_15);
		float L_16 = (&V_5)->get_y_2();
		((ScreenUtils_t3649301747_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t3649301747_il2cpp_TypeInfo_var))->set_screenTop_2(L_16);
		float L_17 = (&V_4)->get_y_2();
		((ScreenUtils_t3649301747_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t3649301747_il2cpp_TypeInfo_var))->set_screenBottom_3(L_17);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ConfigurationData::.ctor()
extern "C"  void ConfigurationData__ctor_m2163337534 (ConfigurationData_t2890431313 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigurationData__ctor_m2163337534_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StreamReader_t4009935899 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		V_0 = (StreamReader_t4009935899 *)NULL;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		String_t* L_0 = Application_get_streamingAssetsPath_m1172141117(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_1 = Path_Combine_m3389272516(NULL /*static, unused*/, L_0, _stringLiteral1293266066, /*hidden argument*/NULL);
		StreamReader_t4009935899 * L_2 = File_OpenText_m196858847(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		StreamReader_t4009935899 * L_3 = V_0;
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.IO.TextReader::ReadLine() */, L_3);
		V_1 = L_4;
		StreamReader_t4009935899 * L_5 = V_0;
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.IO.TextReader::ReadLine() */, L_5);
		V_2 = L_6;
		String_t* L_7 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationData_t2890431313_il2cpp_TypeInfo_var);
		ConfigurationData_SetConfigurationDataFields_m3437724706(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x43, FINALLY_0036);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		{
			StreamReader_t4009935899 * L_8 = V_0;
			if (!L_8)
			{
				goto IL_0042;
			}
		}

IL_003c:
		{
			StreamReader_t4009935899 * L_9 = V_0;
			VirtActionInvoker0::Invoke(5 /* System.Void System.IO.TextReader::Close() */, L_9);
		}

IL_0042:
		{
			IL2CPP_END_FINALLY(54)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0043:
	{
		return;
	}
}
// System.Single ConfigurationData::get_PaddleMoveUnitsPerSecond()
extern "C"  float ConfigurationData_get_PaddleMoveUnitsPerSecond_m2147725164 (ConfigurationData_t2890431313 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigurationData_get_PaddleMoveUnitsPerSecond_m2147725164_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationData_t2890431313_il2cpp_TypeInfo_var);
		float L_0 = ((ConfigurationData_t2890431313_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationData_t2890431313_il2cpp_TypeInfo_var))->get_paddleMoveUnitsPerSecond_1();
		return L_0;
	}
}
// System.Single ConfigurationData::get_BallImpulseForce()
extern "C"  float ConfigurationData_get_BallImpulseForce_m3792104910 (ConfigurationData_t2890431313 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigurationData_get_BallImpulseForce_m3792104910_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationData_t2890431313_il2cpp_TypeInfo_var);
		float L_0 = ((ConfigurationData_t2890431313_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationData_t2890431313_il2cpp_TypeInfo_var))->get_ballImpulseForce_2();
		return L_0;
	}
}
// System.Void ConfigurationData::SetConfigurationDataFields(System.String)
extern "C"  void ConfigurationData_SetConfigurationDataFields_m3437724706 (RuntimeObject * __this /* static, unused */, String_t* ___csvValues0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigurationData_SetConfigurationDataFields_m3437724706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	{
		String_t* L_0 = ___csvValues0;
		CharU5BU5D_t3528271667* L_1 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		StringU5BU5D_t1281789340* L_2 = String_Split_m3646115398(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		StringU5BU5D_t1281789340* L_3 = V_0;
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		float L_6 = Single_Parse_m364357836(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationData_t2890431313_il2cpp_TypeInfo_var);
		((ConfigurationData_t2890431313_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationData_t2890431313_il2cpp_TypeInfo_var))->set_paddleMoveUnitsPerSecond_1(L_6);
		StringU5BU5D_t1281789340* L_7 = V_0;
		int32_t L_8 = 1;
		String_t* L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = Single_Parse_m364357836(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		((ConfigurationData_t2890431313_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationData_t2890431313_il2cpp_TypeInfo_var))->set_ballImpulseForce_2(L_10);
		return;
	}
}
// System.Void ConfigurationData::.cctor()
extern "C"  void ConfigurationData__cctor_m3674596483 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigurationData__cctor_m3674596483_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ConfigurationData_t2890431313_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationData_t2890431313_il2cpp_TypeInfo_var))->set_paddleMoveUnitsPerSecond_1((10.0f));
		((ConfigurationData_t2890431313_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationData_t2890431313_il2cpp_TypeInfo_var))->set_ballImpulseForce_2((200.0f));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
