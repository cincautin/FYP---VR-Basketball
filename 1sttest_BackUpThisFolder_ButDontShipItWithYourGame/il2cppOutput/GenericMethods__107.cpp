#include "pch-cpp.hpp"





template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};

struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct Dictionary_2U5BU5D_t8D6AC1901F24F556E57DD31832FD521C0201E655;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct ResourcePathU5BU5D_t1A52AE48020C3EB95CB879A811AA792F12F0EF26;
struct STypeU5BU5D_t7F9226F1F49DEB3E55CBA20E7783D5CA9B9B8233;
struct ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct StyleRuleU5BU5D_t7897A39D88CA043B2BFB5B28C53B41564EBA3AF3;
struct StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ImportStructU5BU5D_t42D231FD5BB4B620965D7BED87D56D531B4C7AE9;
struct SavedFrameU5BU5D_tD9AAF519F7968055611B70E14E2280458888ACF4;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFrameAllocator_t5FD81CF51E64C4176DBEF617A55D0285997D3994;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScriptInterpreter_tC774E730E9EEAC5A801687A6E8B424F25F010FC8;
struct String_t;
struct StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD;
struct StyleProperty_tD117EB807BAA83855E65AC56B8D6FB84D6F7CF83;
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
struct Type_t;
struct Value_tCE19CCC1DD61AC835158907DB738939B0E4C58B4;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vm_tC938AD9E0E3B8D0FD2E17DF81CA7F1792FA35DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral25EF8DAFAD021DCAB65A3C4EEC85818E49BE42F4;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_ArrayElementAsRef_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1E646BFF355146C3ED67F27D778DD41355FC2466_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct STypeU5BU5D_t7F9226F1F49DEB3E55CBA20E7783D5CA9B9B8233;
struct StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Vm_tC938AD9E0E3B8D0FD2E17DF81CA7F1792FA35DF7  : public RuntimeObject
{
	ScriptInterpreter_tC774E730E9EEAC5A801687A6E8B424F25F010FC8* ____owner;
	RuntimeObject* ____alloc;
	Value_tCE19CCC1DD61AC835158907DB738939B0E4C58B4* ____num;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____ref;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____steps;
	bool ____disposed;
	int32_t ____base;
	SavedFrameU5BU5D_tD9AAF519F7968055611B70E14E2280458888ACF4* ____frames;
	int32_t ____framesTop;
};
struct PrimitivesConverters_t4AC0AF040C8B4B0C9C0C9A0A6F806521CFD84F27  : public RuntimeObject
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			uint64_t ___m_rawData;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[8];
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 
{
	int32_t ___m_Index1;
	uint16_t ___m_World0;
	uint16_t ___m_Generation;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
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
struct ContactId_tD87E020E1E854F067B05AE73E9C5B3FE3155CF11 
{
	int32_t ___m_IndexId;
	uint16_t ___m_WorldId;
	uint16_t ___m_Padding;
	int32_t ___m_GenerationId;
};
struct Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___m_StyleSheet;
	StyleProperty_tD117EB807BAA83855E65AC56B8D6FB84D6F7CF83* ___m_Property;
};
struct Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___m_StyleSheet;
	StyleProperty_tD117EB807BAA83855E65AC56B8D6FB84D6F7CF83* ___m_Property;
};
struct Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___m_StyleSheet;
	StyleProperty_tD117EB807BAA83855E65AC56B8D6FB84D6F7CF83* ___m_Property;
};
struct ValueSpan_t0B183BF71C7D3F5543356CC5CD002E927E743F4A 
{
	int32_t ___start;
	int32_t ___length;
};
struct ByReference_1_t6E122342EE582C667AE81BF46F0FC40AE59D38AF 
{
	intptr_t ____value;
};
struct ByReference_1_t980890FF18003911D1EB28A73378BCFFF13D63F6 
{
	intptr_t ____value;
};
struct ByReference_1_t14DA1785C6A7CEB73F6E95C352792B0BAC19D4AF 
{
	intptr_t ____value;
};
struct ByReference_1_t789A7DAB8469893D7B5282F5ABEDF6332DC4A60A 
{
	intptr_t ____value;
};
struct ByReference_1_t7C905717FB39AA5DB3745E2324697190FA0C5E40 
{
	intptr_t ____value;
};
struct ByReference_1_t548E663F800F0BAEB863DFE872A7A0B98A1DFBD5 
{
	intptr_t ____value;
};
struct ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 
{
	intptr_t ____value;
};
struct ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A 
{
	intptr_t ____value;
};
struct ByReference_1_t8FA1D7A8A4A2AF99ACEADD2DDA919F268EB04E59 
{
	intptr_t ____value;
};
struct ByReference_1_t41ED60F4920F38C3094CB996FB4FFB03B1DAED0D 
{
	intptr_t ____value;
};
struct ByReference_1_t860FBE0A3D26C3137B6700D2BF7256354D93AD53 
{
	intptr_t ____value;
};
struct ByReference_1_t3154973B13E4D50EE09CC6D096E2082A4EFF1BA7 
{
	intptr_t ____value;
};
struct ByReference_1_t5C4813F1FF4D71BB63A5950E046F757B4C42DE98 
{
	intptr_t ____value;
};
struct ByReference_1_tD749749D32147972D5938DEED561DC6489280F4B 
{
	intptr_t ____value;
};
struct ByReference_1_t5C7F39045D1646C84EE0F07A3A73A02820A81C13 
{
	intptr_t ____value;
};
struct ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 
{
	intptr_t ____value;
};
struct ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 
{
	intptr_t ____value;
};
struct ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 
{
	intptr_t ____value;
};
struct ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 
{
	intptr_t ____value;
};
struct ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF 
{
	intptr_t ____value;
};
struct ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 
{
	intptr_t ____value;
};
struct ByReference_1_t55AA67E29A3ECACAB26A99C259BAE9986833066F 
{
	intptr_t ____value;
};
struct ByReference_1_t36B48293C971AABB7949CED7934A487AB408F9FB 
{
	intptr_t ____value;
};
struct ByReference_1_tFBE5581BA218BD534C93EE5CDBFF72F1850DAB2D 
{
	intptr_t ____value;
};
struct ByReference_1_t35C7A568359B649F81337FEE709ED5AE4A4F5BB0 
{
	intptr_t ____value;
};
struct ByReference_1_t202968E70F3E147C9542F8B8D25464AEC5A17767 
{
	intptr_t ____value;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct CapsuleGeometry_t8CA8C33EE49A6D2C844994843EA844030957489C 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center2;
	float ___m_Radius;
};
struct CircleGeometry_t97E50999C448C5A67CDC19AA5B50FF81EFEAA8FF 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center;
	float ___m_Radius;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FilterParameterType_t7250262A78079140235AAFF6F4FA3CCB2F99E390 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 
{
	PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 ___m_PhysicsHandle;
};
struct PhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884 
{
	PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 ___m_PhysicsHandle;
};
struct PhysicsRotate_t3AF8BA583108282C8B59872CB621EC366BC042B0 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction;
};
struct PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E 
{
	PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 ___m_PhysicsHandle;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SType_tE3DFFE5B3B024FA464DDA118517A9392E882E1C4 
{
	uint8_t ___value__;
};
struct SegmentGeometry_tB93A6D3EFCC2E4140411F9A1EED7746CBD2560B0 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point2;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE 
{
	int32_t ___value__;
};
struct TransformWriteMode_tAC88F83F00B2B74873BDD3631AC07283279591D4 
{
	int32_t ___value__;
};
struct ShapeArray_t2A670C62560EDC01830CE8DEA9AE860765152E61 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Vertex0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Vertex1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Vertex2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Vertex3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Vertex4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Vertex5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Vertex6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Vertex7;
};
struct DrawFillOptions_tEDFBA1E7E9317CE7533535BC608111EE1E408298 
{
	int32_t ___value__;
};
struct PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	float ___radius;
	float ___elementDepth;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct NativeArray_1_t5B687D4D8EF0D5A734B403E25783AA11DAB5ABB9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1955F5A2D6B6CF9C74B693C6993640945C206182 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tFBB41680F508846EF66B64B909CF1C94F028D751 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t513290E0A324DCD182DCA6498DBAF3A05E5CD9B5 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7EE56341AC682502E85A5EF49CC27E17E9690BEB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t52D6C05C06C1C10CBE2B796B376B3C7266352646 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2E2285B626C87F8E3108409F3D80DC1200D3E426 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tFACF37504B027B37F837C5C512620EA6C6C34D17 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4F89B4E62AB90AEF10712018502913808FD186BC 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t43D275834918D28FE4F8A9644B7705940C0AD9A7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDED6FCA1E4D28CF2C395A2A27DD95C54BCA8FCF2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5057373BCCFB0DA5922C43EECB102CA6C709A74C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t242EA087C31CF87D5A5E65EEBF896B10DBF5CB8A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE29E3ED5CA86EDA2FA7172C4E8C5A81CDA112814 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4EA7C2C907A5808957A1EF51CB28B00D72CB4FAA 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7BEEC93A8DEF32C574DE15C99F1CE5CB5FEAB1A3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB4CB6FDB6AC7D660B09475EF4D96C883004E21E9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF8B6C51A82B32878CAD4BB9D0613FAE6B152E340 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct ReadOnlySpan_1_tF0D3F37553DD1B6B958870218E09EE158414F2ED 
{
	ByReference_1_t6E122342EE582C667AE81BF46F0FC40AE59D38AF ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tBE12606EBCA9AA35135C1027DBC000335D3429AA 
{
	ByReference_1_t980890FF18003911D1EB28A73378BCFFF13D63F6 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tD531AA78AA74FE78546EE84A387B9ED77629839F 
{
	ByReference_1_t14DA1785C6A7CEB73F6E95C352792B0BAC19D4AF ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tEBFBB86154B8F846CDA49C4A8FDDF723E53CDAB4 
{
	ByReference_1_t789A7DAB8469893D7B5282F5ABEDF6332DC4A60A ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tDDF73876F1321C012BBAA81983863A4AA515F80B 
{
	ByReference_1_t7C905717FB39AA5DB3745E2324697190FA0C5E40 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t1894F878DC4CD8CF0D78EC486B840E7DBE3C5A2E 
{
	ByReference_1_t548E663F800F0BAEB863DFE872A7A0B98A1DFBD5 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tF22156099B21F5C06598D6E173048F8C01F33D83 
{
	ByReference_1_t8FA1D7A8A4A2AF99ACEADD2DDA919F268EB04E59 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t3807AC5721C4A53979AE58EB07B1EC72F69448EC 
{
	ByReference_1_t41ED60F4920F38C3094CB996FB4FFB03B1DAED0D ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t9E895D63910F259C1074899C550D20E89B2D553F 
{
	ByReference_1_t860FBE0A3D26C3137B6700D2BF7256354D93AD53 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tBC27D59CA47B69695AF9B0FF96B6E1D7C10D5883 
{
	ByReference_1_t3154973B13E4D50EE09CC6D096E2082A4EFF1BA7 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t2874BB641AC0FDE8BDD7E519FE425D7AD97D9A3A 
{
	ByReference_1_t5C4813F1FF4D71BB63A5950E046F757B4C42DE98 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t12C3D31E72C3DDB44A4B2BF75E16DB55699D73B3 
{
	ByReference_1_tD749749D32147972D5938DEED561DC6489280F4B ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC7C975128DC0F98C7ED9FA23FA8763D48DEA8CD2 
{
	ByReference_1_t5C7F39045D1646C84EE0F07A3A73A02820A81C13 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 
{
	ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 
{
	ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 
{
	ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B 
{
	ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 
{
	ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 
{
	ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 ____pointer;
	int32_t ____length;
};
struct Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 
{
	ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A ____pointer;
	int32_t ____length;
};
struct Span_1_t180448960B6B6F682EFC16994B9716109E7DD2C6 
{
	ByReference_1_t55AA67E29A3ECACAB26A99C259BAE9986833066F ____pointer;
	int32_t ____length;
};
struct Span_1_t34B932F5AC7CBB47C9A670FA2E06063AE44CEEEE 
{
	ByReference_1_t36B48293C971AABB7949CED7934A487AB408F9FB ____pointer;
	int32_t ____length;
};
struct Span_1_t497BE6EFB8E493B6B683E05FE152E8C5354022CB 
{
	ByReference_1_tFBE5581BA218BD534C93EE5CDBFF72F1850DAB2D ____pointer;
	int32_t ____length;
};
struct Span_1_tD01BE6CE0AD935A9C7F96CFE915AB46E9ECED0AA 
{
	ByReference_1_t35C7A568359B649F81337FEE709ED5AE4A4F5BB0 ____pointer;
	int32_t ____length;
};
struct Span_1_tFEDD78D7F7F7CAC447265BA315649C319C0AE5A9 
{
	ByReference_1_t202968E70F3E147C9542F8B8D25464AEC5A17767 ____pointer;
	int32_t ____length;
};
struct ChainSegmentGeometry_t483ECD5EAFF90B8C135C3F9FE4AF01938157907B 
{
	SegmentGeometry_tB93A6D3EFCC2E4140411F9A1EED7746CBD2560B0 ___m_Segment;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Ghost1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Ghost2;
	int32_t ___m_ChainId;
};
struct FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 
{
	int32_t ___m_Type;
	float ___m_FloatValue;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorValue;
};
struct PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	PhysicsRotate_t3AF8BA583108282C8B59872CB621EC366BC042B0 ___rotation;
};
struct PolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491 
{
	ShapeArray_t2A670C62560EDC01830CE8DEA9AE860765152E61 ___vertices;
	ShapeArray_t2A670C62560EDC01830CE8DEA9AE860765152E61 ___normals;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid;
	float ___m_Radius;
	int32_t ___m_Count;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct StyleProperty_tD117EB807BAA83855E65AC56B8D6FB84D6F7CF83  : public RuntimeObject
{
	int32_t ___m_Id;
	String_t* ___m_CustomName;
	int32_t ___m_Line;
	StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* ___m_Values;
	bool ___requireVariableResolve;
};
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D 
{
	int32_t ___m_ValueType;
	int32_t ___valueIndex;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeA;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeB;
	ContactId_tD87E020E1E854F067B05AE73E9C5B3FE3155CF11 ___m_ContactId;
};
struct ContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeA;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeB;
	ContactId_tD87E020E1E854F067B05AE73E9C5B3FE3155CF11 ___m_ContactId;
};
struct ContactHitEvent_t11EB60851A1F13BC732A3361C6CB37860A2AA427 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeA;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeB;
	ContactId_tD87E020E1E854F067B05AE73E9C5B3FE3155CF11 ___m_ContactId;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	float ___m_ApproachSpeed;
};
struct JointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A 
{
	PhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884 ___m_Joint;
	intptr_t ___m_UserData;
};
struct TriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_TriggerShape;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_VisitorShape;
};
struct TriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_TriggerShape;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_VisitorShape;
};
struct PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D 
{
	intptr_t ___m_Buffer;
	int32_t ___m_Size;
	int32_t ___m_Allocator;
};
struct TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D 
{
	intptr_t ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_Allocator;
};
struct FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C 
{
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____0;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____1;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____2;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____3;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	bool ___m_RequiresRebuild;
	bool ___m_ImportedWithErrors;
	bool ___m_ImportedWithWarnings;
	StyleRuleU5BU5D_t7897A39D88CA043B2BFB5B28C53B41564EBA3AF3* ___m_Rules;
	ResourcePathU5BU5D_t1A52AE48020C3EB95CB879A811AA792F12F0EF26* ___resourcePaths;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___floats;
	DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B* ___dimensions;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colors;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___strings;
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___assets;
	ImportStructU5BU5D_t42D231FD5BB4B620965D7BED87D56D531B4C7AE9* ___imports;
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___m_FlattenedImportedStyleSheets;
	int32_t ___m_ContentHash;
	ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52* ___scalableImages;
	Dictionary_2U5BU5D_t8D6AC1901F24F556E57DD31832FD521C0201E655* ___m_Tables;
	int32_t ___nonEmptyTablesMask;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___firstRootSelector;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___firstWildCardSelector;
	bool ___m_IsDefaultStyleSheet;
};
struct TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7 
{
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	int32_t ___m_TransformWriteMode;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_PhysicsTransform;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_TransformId;
	int32_t ___m_TransformDepth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearVelocity;
	float ___m_AngularVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_PositionFrom;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_RotationFrom;
};
struct BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6 
{
	intptr_t ___m_UserData;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_Transform;
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	bool ___m_FellAsleep;
};
struct BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_pinvoke
{
	intptr_t ___m_UserData;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_Transform;
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	int32_t ___m_FellAsleep;
};
struct BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_com
{
	intptr_t ___m_UserData;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_Transform;
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	int32_t ___m_FellAsleep;
};
struct ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC 
{
	ContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291 ___m_BeginEvent;
};
struct ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A 
{
	ContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002 ___m_EndEvent;
};
struct JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF 
{
	JointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A ___m_JointThresholdEvent;
};
struct TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576 
{
	TriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9 ___m_BeginEvent;
};
struct TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A 
{
	TriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04 ___m_EndEvent;
};
struct CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E 
{
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___transform;
	float ___radius;
	float ___length;
	float ___elementDepth;
	int32_t ___drawFillOptions;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1 
{
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___transform;
	float ___radius;
	float ___elementDepth;
	int32_t ___drawFillOptions;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct LineElement_t012671A3568902C51830B75D1F5DB18B390F8454 
{
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___transform;
	float ___length;
	float ___elementDepth;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57 
{
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___transform;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p7;
	int32_t ___count;
	float ___radius;
	float ___elementDepth;
	int32_t ___drawFillOptions;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84 
{
	BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6 ___m_BodyUpdateEvent;
};
struct BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_marshaled_pinvoke
{
	BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_pinvoke ___m_BodyUpdateEvent;
};
struct BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_marshaled_com
{
	BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_com ___m_BodyUpdateEvent;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Vm_tC938AD9E0E3B8D0FD2E17DF81CA7F1792FA35DF7_StaticFields
{
	Type_t* ___T_byteA;
	Type_t* ___T_sbyteA;
	Type_t* ___T_shortA;
	Type_t* ___T_ushortA;
	Type_t* ___T_charA;
	Type_t* ___T_boolA;
	Type_t* ___T_intA;
	Type_t* ___T_uintA;
	Type_t* ___T_floatA;
	Type_t* ___T_longA;
	Type_t* ___T_ulongA;
	Type_t* ___T_doubleA;
	bool ___s_PoisonFrames;
	bool ___s_Trace;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct CapsuleGeometry_t8CA8C33EE49A6D2C844994843EA844030957489C_StaticFields
{
	CapsuleGeometry_t8CA8C33EE49A6D2C844994843EA844030957489C ___defaultGeometry;
};
struct CircleGeometry_t97E50999C448C5A67CDC19AA5B50FF81EFEAA8FF_StaticFields
{
	CircleGeometry_t97E50999C448C5A67CDC19AA5B50FF81EFEAA8FF ___defaultGeometry;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct SegmentGeometry_tB93A6D3EFCC2E4140411F9A1EED7746CBD2560B0_StaticFields
{
	SegmentGeometry_tB93A6D3EFCC2E4140411F9A1EED7746CBD2560B0 ___defaultGeometry;
};
struct ChainSegmentGeometry_t483ECD5EAFF90B8C135C3F9FE4AF01938157907B_StaticFields
{
	ChainSegmentGeometry_t483ECD5EAFF90B8C135C3F9FE4AF01938157907B ___defaultGeometry;
};
struct PolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491_StaticFields
{
	PolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491 ___defaultGeometry;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct STypeU5BU5D_t7F9226F1F49DEB3E55CBA20E7783D5CA9B9B8233  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D m_Items[1];

	inline StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBuffer_As_TisIl2CppFullySharedGenericStruct_mAE794C5A00C200AFC74CCF4B4FAB2B5A2694FD93_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* UnsafeUtility_ArrayElementAsRef_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1E646BFF355146C3ED67F27D778DD41355FC2466_gshared_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PhysicsBuffer_AsEngineObject_TisIl2CppSharedGenericObject_m5723F9F7C85223946EA265593949FBDA4A9805BD_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CapsuleGeometry_t8CA8C33EE49A6D2C844994843EA844030957489C* ReadOnlySpan_1_GetPinnableReference_mCD9A5BEAD2D6623C535DCFA8CECC35CEDA90FDFD_gshared (ReadOnlySpan_1_tF0D3F37553DD1B6B958870218E09EE158414F2ED* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m449178AA264C94D941010EDDE025EA50B9B0E811_gshared_inline (ReadOnlySpan_1_tF0D3F37553DD1B6B958870218E09EE158414F2ED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChainSegmentGeometry_t483ECD5EAFF90B8C135C3F9FE4AF01938157907B* ReadOnlySpan_1_GetPinnableReference_m7A69CDDC21C771B70BD96FE6B06C3C5DB85E6FA9_gshared (ReadOnlySpan_1_tBE12606EBCA9AA35135C1027DBC000335D3429AA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m79C31F2A1C10139B17341A32866E4F0FA5697858_gshared_inline (ReadOnlySpan_1_tBE12606EBCA9AA35135C1027DBC000335D3429AA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CircleGeometry_t97E50999C448C5A67CDC19AA5B50FF81EFEAA8FF* ReadOnlySpan_1_GetPinnableReference_m0F95D10E655629C57A5B2103B5BDBF585456F6F7_gshared (ReadOnlySpan_1_tD531AA78AA74FE78546EE84A387B9ED77629839F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_mF1E1657EBF5BE24F7D7D9BE2CAFDD4D71FEC81EA_gshared_inline (ReadOnlySpan_1_tD531AA78AA74FE78546EE84A387B9ED77629839F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E* ReadOnlySpan_1_GetPinnableReference_mEF11FDBD7959E4841FA4B6347A42F15764F013A7_gshared (ReadOnlySpan_1_tEBFBB86154B8F846CDA49C4A8FDDF723E53CDAB4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_mA03C99C74D9153BDEB3BD16E5DA2A5AE7398BB0B_gshared_inline (ReadOnlySpan_1_tEBFBB86154B8F846CDA49C4A8FDDF723E53CDAB4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491* ReadOnlySpan_1_GetPinnableReference_mCA9137548412A20891E6F45CC2FA60EA4EB9EB50_gshared (ReadOnlySpan_1_tDDF73876F1321C012BBAA81983863A4AA515F80B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m73320AEECF6C1AFADC8C19BCB951F343FD281336_gshared_inline (ReadOnlySpan_1_tDDF73876F1321C012BBAA81983863A4AA515F80B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SegmentGeometry_tB93A6D3EFCC2E4140411F9A1EED7746CBD2560B0* ReadOnlySpan_1_GetPinnableReference_mD482EBE84E4AD9CE84AC38798C514FF517555B27_gshared (ReadOnlySpan_1_t1894F878DC4CD8CF0D78EC486B840E7DBE3C5A2E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m30909A25A4B698D6CDE36DD17A2CCF12EB2A7AED_gshared_inline (ReadOnlySpan_1_t1894F878DC4CD8CF0D78EC486B840E7DBE3C5A2E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ReadOnlySpan_1_GetPinnableReference_m4469BE44DC19B575A1F0B8CA6A52BF5051400AF6_gshared (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m5D8561BF76A2451939095A0ABC980794FD4FBC76_gshared_inline (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5B687D4D8EF0D5A734B403E25783AA11DAB5ABB9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisChainSegmentGeometry_t483ECD5EAFF90B8C135C3F9FE4AF01938157907B_m32B41D23DB08BB1F30797EEF773AA9D1EBC71B89_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5B687D4D8EF0D5A734B403E25783AA11DAB5ABB9 PhysicsBuffer_ToNativeArray_TisChainSegmentGeometry_t483ECD5EAFF90B8C135C3F9FE4AF01938157907B_m8A9991FDD9BBE266C09C8288B913DC3D47707B59_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1955F5A2D6B6CF9C74B693C6993640945C206182 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0_m6928B0F59943142D0AA193F98AA997ABEEB8B5ED_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1955F5A2D6B6CF9C74B693C6993640945C206182 PhysicsBuffer_ToNativeArray_TisPhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0_mD2BBE8895EA35EC2012554A8760803D5D89168EE_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFBB41680F508846EF66B64B909CF1C94F028D751 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsComposer_t0D54F067D6F10F1736E0A1667194CA45802E491B_m789C3AFB367AB2CBB5E47DFD26031481A8D25606_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFBB41680F508846EF66B64B909CF1C94F028D751 PhysicsBuffer_ToNativeArray_TisPhysicsComposer_t0D54F067D6F10F1736E0A1667194CA45802E491B_m50860B05893D30A0DF82FDE385D68427881D2BA8_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t513290E0A324DCD182DCA6498DBAF3A05E5CD9B5 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2_m950FA8ECD1115ACDDC4A3DD386FA7ED016CD9B18_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t513290E0A324DCD182DCA6498DBAF3A05E5CD9B5 PhysicsBuffer_ToNativeArray_TisPhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2_mA45877F258189126381DDB425389515CF7F879F2_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7EE56341AC682502E85A5EF49CC27E17E9690BEB NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884_m9D219C57941E9EAF46B14B958A72D3B6AD0BA869_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7EE56341AC682502E85A5EF49CC27E17E9690BEB PhysicsBuffer_ToNativeArray_TisPhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884_m01EDC91A4FFBF1032ADF3888D1BB781C7A9AFD02_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t52D6C05C06C1C10CBE2B796B376B3C7266352646 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E_m1F401867CAC196F0F157B3B7BB9BBBC80DB8A527_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t52D6C05C06C1C10CBE2B796B376B3C7266352646 PhysicsBuffer_ToNativeArray_TisPhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E_m71AA4BFB40CB51963645412092946C7D3EF868E3_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2E2285B626C87F8E3108409F3D80DC1200D3E426 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsUserData_t767769E7B130D2A0974D0FA6F9477DF8AED0D113_m5D54A66E7BB7818506F6D602B1E550303BDEF93E_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2E2285B626C87F8E3108409F3D80DC1200D3E426 PhysicsBuffer_ToNativeArray_TisPhysicsUserData_t767769E7B130D2A0974D0FA6F9477DF8AED0D113_m7CA335F35F624B4A9F88BC1C445C8658AE7F57A0_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFACF37504B027B37F837C5C512620EA6C6C34D17 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsWorld_tD76337CF6B632797461123938E650738C9A18952_m8368BFFFF55BAFBE6EC3F8A61CB4EAAA5339C933_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFACF37504B027B37F837C5C512620EA6C6C34D17 PhysicsBuffer_ToNativeArray_TisPhysicsWorld_tD76337CF6B632797461123938E650738C9A18952_mCCB1DB266C4D369A7E9B15C194EFEB608625237D_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4F89B4E62AB90AEF10712018502913808FD186BC NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491_mDBD3EED4E7583B04BF9A3E47FE66BC1FDCC5FDA0_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4F89B4E62AB90AEF10712018502913808FD186BC PhysicsBuffer_ToNativeArray_TisPolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491_mE3A730A4814767971516F70B7DA143F8151F18B8_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m7BA23DE8D084CC54FCBC238132BD26D78EE99CAC_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 PhysicsBuffer_ToNativeArray_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_mDC12FD391CA2B0DE172852756B47AC04FD341C48_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8CC23F9B357DD3415FAB8C319466BEAA6365AF44_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 PhysicsBuffer_ToNativeArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7D29FD6303FF3F39132017CA90B6D1E366FE379B_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m0F9AFB55DC2B342DB7011F2046193F6C30B035C1_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t43D275834918D28FE4F8A9644B7705940C0AD9A7 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchTransform_tF14188CE07ECF9D6C90EA2D28AD5BD0D102500F8_m2846C2467B152929DBF39BBDD9C732CB8A595AC7_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t43D275834918D28FE4F8A9644B7705940C0AD9A7 PhysicsBuffer_ToNativeArray_TisBatchTransform_tF14188CE07ECF9D6C90EA2D28AD5BD0D102500F8_m934A0CB2DA8DBBE4EA1D60CF9C57E162043FF10F_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDED6FCA1E4D28CF2C395A2A27DD95C54BCA8FCF2 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVelocity_t501F06AA00DEDE1275412DA5B4821CF758D94D9D_m9D5A6E6CFD9A30A200796158A8AA579403DF13AD_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDED6FCA1E4D28CF2C395A2A27DD95C54BCA8FCF2 PhysicsBuffer_ToNativeArray_TisBatchVelocity_t501F06AA00DEDE1275412DA5B4821CF758D94D9D_m719D1C0371596E27E12F271F0466869EE134413C_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mCAB0D1991E3CA4A5F2B29699805088ED767C85BF_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 PhysicsBuffer_ToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m0F0ABCE955A32EF09A1B87865A417AEB795563F6_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5057373BCCFB0DA5922C43EECB102CA6C709A74C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLayerHandle_t06582578F9B5D5AA335BFCDE0973956EF5648900_m61980759D0BB8795012206121AE1C3D14386A38F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5057373BCCFB0DA5922C43EECB102CA6C709A74C PhysicsBuffer_ToNativeArray_TisLayerHandle_t06582578F9B5D5AA335BFCDE0973956EF5648900_mA2469A90E1E98BCA4984B655678FCAAE074DED37_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m9FF20AB277A63B6352D86FBE981963C274C1F6CA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 PhysicsBuffer_ToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_mED810731A42A4D8DA091409BE1118284E1BDCE90_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t242EA087C31CF87D5A5E65EEBF896B10DBF5CB8A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisWorldCastResult_tA5F20990A18CBE633E414F5B797A068CD2BEF350_mF0738D1886BAA339A214E4AED524BA65E8B108D8_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t242EA087C31CF87D5A5E65EEBF896B10DBF5CB8A PhysicsBuffer_ToNativeArray_TisWorldCastResult_tA5F20990A18CBE633E414F5B797A068CD2BEF350_mC34BDA03F7721ADE6FAFC7060A2A9E6FE02A8190_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE29E3ED5CA86EDA2FA7172C4E8C5A81CDA112814 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisWorldOverlapResult_t6440E0FA2B383A6C681DCBC60521D2067324DAC7_m1460A89145B46D715BA52388EAC28A1E67B2C587_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE29E3ED5CA86EDA2FA7172C4E8C5A81CDA112814 PhysicsBuffer_ToNativeArray_TisWorldOverlapResult_t6440E0FA2B383A6C681DCBC60521D2067324DAC7_m0513E79895BED8B1C732A8C6B543F4056D0CF8A3_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4EA7C2C907A5808957A1EF51CB28B00D72CB4FAA NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisContact_tDF846FDDD399484433CB94E46C0F7E64F0281BC7_m8AB9AD9247CB2C1A8DFA5740FF92736DCF0302CD_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4EA7C2C907A5808957A1EF51CB28B00D72CB4FAA PhysicsBuffer_ToNativeArray_TisContact_tDF846FDDD399484433CB94E46C0F7E64F0281BC7_m52BB10FF98D8C77C892B9B98CE83A6BF06692994_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7BEEC93A8DEF32C574DE15C99F1CE5CB5FEAB1A3 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMoverCollision_t603C4D37B274FCFBC00A7E51BA7B3E1E918D0718_mE5B5A5B1998E83725912986A1AA8CEA26C032015_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7BEEC93A8DEF32C574DE15C99F1CE5CB5FEAB1A3 PhysicsBuffer_ToNativeArray_TisMoverCollision_t603C4D37B274FCFBC00A7E51BA7B3E1E918D0718_mF0DD392ABDD2EFFFBB0E16B18040AD8CA36A26CF_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB4CB6FDB6AC7D660B09475EF4D96C883004E21E9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisConvexHull_tF012380011E47752145BD7DA69D0F23CF6A55A17_mAC20678F069EACFC4207BB35131C625A272933FB_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB4CB6FDB6AC7D660B09475EF4D96C883004E21E9 PhysicsBuffer_ToNativeArray_TisConvexHull_tF012380011E47752145BD7DA69D0F23CF6A55A17_mB92B9E0A4B9EA9D2CC86951EB7ACCAF476ECC0F3_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF8B6C51A82B32878CAD4BB9D0613FAE6B152E340 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D_mC584342D045D007A14ABC8CD31D35A3B0532D7CE_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF8B6C51A82B32878CAD4BB9D0613FAE6B152E340 PhysicsBuffer_ToNativeArray_TisPhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D_m774A260C0CBD212023E8B2657027F4411039D53E_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m9060EF20AD31BDDBF8E6A4D61F091D03B101F9E4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m761C52C5AA4ADD227519287E54411DB038E5F202_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mEFA16883E3A65609AE169271BE4C8883BFC02D22_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m37B90A7486634E138E17A378C29EE9B9D5F8D885_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m4A66A3B213055D7307CFE8FEFA301961ABB4D1C8_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 PhysicsBuffer_ToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_mF73C3A8A23424B2EDD8403FA8F98BB08FD0008F3_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m5F6104B7BABDD0AAEFC152E74ED645A50510E900_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 PhysicsBuffer_ToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m879C0DE9D9F6C9C5F2FF350635AC52F4FF874788_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mBFD05CEEFBE002B3A028DCB2B994626108D1DE63_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m8867F6CFE50831DD591716883D3B619545933E0E_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DC92A2EBDE62FBDF265E6AE37A3FAD4CB595ECF_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m2C752E42AC92651414D22133C0C6625168A0A27D_gshared_inline (ReadOnlySpan_1_tF22156099B21F5C06598D6E173048F8C01F33D83* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tF22156099B21F5C06598D6E173048F8C01F33D83 PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_m4C979C268E948FEFF9A617E551F64B7D4F9B949F_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m57750EFD352CEE1134B790C4C6A5DE73ED63B54B_gshared_inline (ReadOnlySpan_1_t3807AC5721C4A53979AE58EB07B1EC72F69448EC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t3807AC5721C4A53979AE58EB07B1EC72F69448EC PhysicsBuffer_ToReadOnlySpan_TisContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291_mC542CF1B4526AFBE92B94E64FCCFE2F710E78118_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m6F6DFB2F6031477E482545515ED358245E10E056_gshared_inline (ReadOnlySpan_1_t9E895D63910F259C1074899C550D20E89B2D553F* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t9E895D63910F259C1074899C550D20E89B2D553F PhysicsBuffer_ToReadOnlySpan_TisContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002_m3B7CBE566D05687D5A0235545815F080D880668D_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m2D32168C1CB70E875B88C363738FB53621F6614D_gshared_inline (ReadOnlySpan_1_tBC27D59CA47B69695AF9B0FF96B6E1D7C10D5883* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tBC27D59CA47B69695AF9B0FF96B6E1D7C10D5883 PhysicsBuffer_ToReadOnlySpan_TisContactHitEvent_t11EB60851A1F13BC732A3361C6CB37860A2AA427_mA26E0EBBB08051C5BE9F415B1A660BEFD046CE56_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m11EA6EEFE4554A846FC9D7B03DDAD330ADF2438C_gshared_inline (ReadOnlySpan_1_t2874BB641AC0FDE8BDD7E519FE425D7AD97D9A3A* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2874BB641AC0FDE8BDD7E519FE425D7AD97D9A3A PhysicsBuffer_ToReadOnlySpan_TisJointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A_mA3C73A1391BA5802340713A354C2FA85082AA83F_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB0245D1D81FC91908DE1B6CA216F03DEB24ED02B_gshared_inline (ReadOnlySpan_1_t12C3D31E72C3DDB44A4B2BF75E16DB55699D73B3* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t12C3D31E72C3DDB44A4B2BF75E16DB55699D73B3 PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9_mBBEBA9055D4B20C9CBFF21DF9E0A0F9158365665_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m10DCBC9FBEEC2E3D3CD372A15F538F7A41C5EA08_gshared_inline (ReadOnlySpan_1_tC7C975128DC0F98C7ED9FA23FA8763D48DEA8CD2* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC7C975128DC0F98C7ED9FA23FA8763D48DEA8CD2 PhysicsBuffer_ToReadOnlySpan_TisTriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04_m7132F18A28541A42906FA743898DEF07780D1B84_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900_gshared_inline (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m770A3C01394D2ADEF3AE05D2F391E494DFA44810_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A_gshared_inline (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m66F49B0125C73F4C2E594465C8514787C9A2CB23_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF_gshared_inline (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m861F78494399043A9EBE243F321F948344054CB9_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81_gshared_inline (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_mB799CAEE69F5B8E6EF2D017D55CE25C100D11ACF_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88_gshared_inline (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m44C156471D4B8D3BB0599508FA4AA95421795B41_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631_gshared_inline (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m230051C58A774BEA26D6962E100FEFF0D990A22F_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_m22DF411BC8A0B8ADBE386340363B69D520FEE64C_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m8B358C367FCD4C5DF714C69892BD3F238BC4BE78_gshared_inline (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 PhysicsBuffer_ToSpan_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2E205B73CBCD92B0B8B173F222A163671DE75E59_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m51D8F679F5F06C1A2F204248F5D37BC1D0F48BBA_gshared_inline (Span_1_t180448960B6B6F682EFC16994B9716109E7DD2C6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t180448960B6B6F682EFC16994B9716109E7DD2C6 PhysicsBuffer_ToSpan_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m2633F9F2C259437058E055B13A7AEC25B8C731E3_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mED035A5AC87B33038AA174619E4302C09155861C_gshared_inline (Span_1_t34B932F5AC7CBB47C9A670FA2E06063AE44CEEEE* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t34B932F5AC7CBB47C9A670FA2E06063AE44CEEEE PhysicsBuffer_ToSpan_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mE3104A1F554819281D6CA3E6A869AF09CB7ABE93_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0CB110DE0E8428040F7C3E546CC39D3A2A9F659C_gshared_inline (Span_1_t497BE6EFB8E493B6B683E05FE152E8C5354022CB* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t497BE6EFB8E493B6B683E05FE152E8C5354022CB PhysicsBuffer_ToSpan_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m1AE628C6071E045075AEB5007377FB7EDD9F7837_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m149D219982FBB2A903D4C4E21FE5FE96FB5F5E06_gshared_inline (Span_1_tD01BE6CE0AD935A9C7F96CFE915AB46E9ECED0AA* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tD01BE6CE0AD935A9C7F96CFE915AB46E9ECED0AA PhysicsBuffer_ToSpan_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m5E2AFF87776C7D8089764ED690EBB5705AE178C8_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB9684F291E4E59C4673BF403C1FBB13959D13ED3_gshared_inline (Span_1_tFEDD78D7F7F7CAC447265BA315649C319C0AE5A9* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tFEDD78D7F7F7CAC447265BA315649C319C0AE5A9 PhysicsBuffer_ToSpan_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m4B91D4B8D3D01B0C43975EDE787675EE031441A5_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manipulator_AddEnum_TisIl2CppFullySharedGenericStruct_mD50E71E36D14FD86128B510DDDA23C8D08E632C6_gshared (Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manipulator_InsertEnum_TisIl2CppFullySharedGenericStruct_m1E38C74DBADD2F9AED561B2B11BDBC2702E8130D_gshared (Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manipulator_SetEnum_TisIl2CppFullySharedGenericStruct_m8D2F788A22BB9A17052A0355E264539ABE3E5F67_gshared (Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manipulator_TryGetAssetReference_TisIl2CppSharedGenericObject_m285F8FB5ADCA1D62E6EE4E7E3D612798CC18A708_gshared (Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102* __this, int32_t ___0_index, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manipulator_TryGetEnum_TisIl2CppFullySharedGenericStruct_m72B758D5A51EBB85E690C3AC9CA0BCE2598F4DC3_gshared (Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* UnsafeUtility_ArrayElementAsRef_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m86F914D25CF4676024DF56901ACD7C8B1A93ECD5_gshared_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 TilemapBuffer_As_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mCAE8D5C369B85A652106EBDC05664C52ACCE9503_gshared (TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapBuffer_As_TisIl2CppFullySharedGenericStruct_mE5ED3A21F10FF229819583D1747D45BDF6789F86_gshared (TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* TilemapBuffer_AsEngineObject_TisIl2CppSharedGenericObject_mCD253AAB6422AD3B53880C8FEDC9E10BE082FD7D_gshared (TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapBuffer_SetEngineObject_TisIl2CppSharedGenericObject_mE1D53CD5BA3B9912C87D5AC67FA3DAE6C8F2D8F7_gshared (TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D* __this, Il2CppSharedGenericObject* ___0_value, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapBuffer_SetValue_TisIl2CppFullySharedGenericStruct_m5F4E87031CCFBDDBE554204063ABBAD64AC9AEB8_gshared (TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D* __this, Il2CppFullySharedGenericStruct ___0_value, int32_t ___1_index, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vm_CoerceBoxedI4_m26C035037F6B6011CF769B8E0BDB7C3863873026 (RuntimeObject* ___0_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vm_CoerceBoxedR4_m05A9198F8D7A26DF1F7FDB250B266405E7B9EC84 (RuntimeObject* ___0_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Vm_CoerceBoxedI8_m25C2802356E5B70518F93D89FE3F55340FD27A27 (RuntimeObject* ___0_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Vm_CoerceBoxedR8_mF7F308B32B132BCB5A666E47D040DEB95332155A (RuntimeObject* ___0_a, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PhysicsBuffer_get_size_mAEAF52B701BE344321D134AB9E325B8CAD461913_inline (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
inline void PhysicsBuffer_As_TisIl2CppFullySharedGenericStruct_mAE794C5A00C200AFC74CCF4B4FAB2B5A2694FD93 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))PhysicsBuffer_As_TisIl2CppFullySharedGenericStruct_mAE794C5A00C200AFC74CCF4B4FAB2B5A2694FD93_gshared)((PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*)__this, ___0_index, il2cppRetVal, method);
}
inline EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* UnsafeUtility_ArrayElementAsRef_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1E646BFF355146C3ED67F27D778DD41355FC2466_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ArrayElementAsRef_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1E646BFF355146C3ED67F27D778DD41355FC2466_gshared_inline)(___0_ptr, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Resources_EntityIdIsValid_m5AC0D5EFD7367CE19AABEE8B081B924BEC5CDE8E (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_entityId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_EntityIdToObject_m4F01E04BA6CCEE4F56172C135C489F90AFF7054C (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_entityId, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* PhysicsBuffer_AsEngineObject_TisIl2CppSharedGenericObject_m5723F9F7C85223946EA265593949FBDA4A9805BD (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, int32_t, const RuntimeMethod*))PhysicsBuffer_AsEngineObject_TisIl2CppSharedGenericObject_m5723F9F7C85223946EA265593949FBDA4A9805BD_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBuffer__ctor_m814B8671FCEF6928660814C51CA6041B662740A9 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, intptr_t ___0_buffer, int32_t ___1_size, int32_t ___2_allocator, const RuntimeMethod* method) ;
inline CapsuleGeometry_t8CA8C33EE49A6D2C844994843EA844030957489C* ReadOnlySpan_1_GetPinnableReference_mCD9A5BEAD2D6623C535DCFA8CECC35CEDA90FDFD (ReadOnlySpan_1_tF0D3F37553DD1B6B958870218E09EE158414F2ED* __this, const RuntimeMethod* method)
{
	return ((  CapsuleGeometry_t8CA8C33EE49A6D2C844994843EA844030957489C* (*) (ReadOnlySpan_1_tF0D3F37553DD1B6B958870218E09EE158414F2ED*, const RuntimeMethod*))ReadOnlySpan_1_GetPinnableReference_mCD9A5BEAD2D6623C535DCFA8CECC35CEDA90FDFD_gshared)(__this, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m449178AA264C94D941010EDDE025EA50B9B0E811_inline (ReadOnlySpan_1_tF0D3F37553DD1B6B958870218E09EE158414F2ED* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tF0D3F37553DD1B6B958870218E09EE158414F2ED*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m449178AA264C94D941010EDDE025EA50B9B0E811_gshared_inline)(__this, method);
}
inline ChainSegmentGeometry_t483ECD5EAFF90B8C135C3F9FE4AF01938157907B* ReadOnlySpan_1_GetPinnableReference_m7A69CDDC21C771B70BD96FE6B06C3C5DB85E6FA9 (ReadOnlySpan_1_tBE12606EBCA9AA35135C1027DBC000335D3429AA* __this, const RuntimeMethod* method)
{
	return ((  ChainSegmentGeometry_t483ECD5EAFF90B8C135C3F9FE4AF01938157907B* (*) (ReadOnlySpan_1_tBE12606EBCA9AA35135C1027DBC000335D3429AA*, const RuntimeMethod*))ReadOnlySpan_1_GetPinnableReference_m7A69CDDC21C771B70BD96FE6B06C3C5DB85E6FA9_gshared)(__this, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m79C31F2A1C10139B17341A32866E4F0FA5697858_inline (ReadOnlySpan_1_tBE12606EBCA9AA35135C1027DBC000335D3429AA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tBE12606EBCA9AA35135C1027DBC000335D3429AA*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m79C31F2A1C10139B17341A32866E4F0FA5697858_gshared_inline)(__this, method);
}
inline CircleGeometry_t97E50999C448C5A67CDC19AA5B50FF81EFEAA8FF* ReadOnlySpan_1_GetPinnableReference_m0F95D10E655629C57A5B2103B5BDBF585456F6F7 (ReadOnlySpan_1_tD531AA78AA74FE78546EE84A387B9ED77629839F* __this, const RuntimeMethod* method)
{
	return ((  CircleGeometry_t97E50999C448C5A67CDC19AA5B50FF81EFEAA8FF* (*) (ReadOnlySpan_1_tD531AA78AA74FE78546EE84A387B9ED77629839F*, const RuntimeMethod*))ReadOnlySpan_1_GetPinnableReference_m0F95D10E655629C57A5B2103B5BDBF585456F6F7_gshared)(__this, method);
}
inline int32_t ReadOnlySpan_1_get_Length_mF1E1657EBF5BE24F7D7D9BE2CAFDD4D71FEC81EA_inline (ReadOnlySpan_1_tD531AA78AA74FE78546EE84A387B9ED77629839F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tD531AA78AA74FE78546EE84A387B9ED77629839F*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_mF1E1657EBF5BE24F7D7D9BE2CAFDD4D71FEC81EA_gshared_inline)(__this, method);
}
inline PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E* ReadOnlySpan_1_GetPinnableReference_mEF11FDBD7959E4841FA4B6347A42F15764F013A7 (ReadOnlySpan_1_tEBFBB86154B8F846CDA49C4A8FDDF723E53CDAB4* __this, const RuntimeMethod* method)
{
	return ((  PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E* (*) (ReadOnlySpan_1_tEBFBB86154B8F846CDA49C4A8FDDF723E53CDAB4*, const RuntimeMethod*))ReadOnlySpan_1_GetPinnableReference_mEF11FDBD7959E4841FA4B6347A42F15764F013A7_gshared)(__this, method);
}
inline int32_t ReadOnlySpan_1_get_Length_mA03C99C74D9153BDEB3BD16E5DA2A5AE7398BB0B_inline (ReadOnlySpan_1_tEBFBB86154B8F846CDA49C4A8FDDF723E53CDAB4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tEBFBB86154B8F846CDA49C4A8FDDF723E53CDAB4*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_mA03C99C74D9153BDEB3BD16E5DA2A5AE7398BB0B_gshared_inline)(__this, method);
}
inline PolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491* ReadOnlySpan_1_GetPinnableReference_mCA9137548412A20891E6F45CC2FA60EA4EB9EB50 (ReadOnlySpan_1_tDDF73876F1321C012BBAA81983863A4AA515F80B* __this, const RuntimeMethod* method)
{
	return ((  PolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491* (*) (ReadOnlySpan_1_tDDF73876F1321C012BBAA81983863A4AA515F80B*, const RuntimeMethod*))ReadOnlySpan_1_GetPinnableReference_mCA9137548412A20891E6F45CC2FA60EA4EB9EB50_gshared)(__this, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m73320AEECF6C1AFADC8C19BCB951F343FD281336_inline (ReadOnlySpan_1_tDDF73876F1321C012BBAA81983863A4AA515F80B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tDDF73876F1321C012BBAA81983863A4AA515F80B*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m73320AEECF6C1AFADC8C19BCB951F343FD281336_gshared_inline)(__this, method);
}
inline SegmentGeometry_tB93A6D3EFCC2E4140411F9A1EED7746CBD2560B0* ReadOnlySpan_1_GetPinnableReference_mD482EBE84E4AD9CE84AC38798C514FF517555B27 (ReadOnlySpan_1_t1894F878DC4CD8CF0D78EC486B840E7DBE3C5A2E* __this, const RuntimeMethod* method)
{
	return ((  SegmentGeometry_tB93A6D3EFCC2E4140411F9A1EED7746CBD2560B0* (*) (ReadOnlySpan_1_t1894F878DC4CD8CF0D78EC486B840E7DBE3C5A2E*, const RuntimeMethod*))ReadOnlySpan_1_GetPinnableReference_mD482EBE84E4AD9CE84AC38798C514FF517555B27_gshared)(__this, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m30909A25A4B698D6CDE36DD17A2CCF12EB2A7AED_inline (ReadOnlySpan_1_t1894F878DC4CD8CF0D78EC486B840E7DBE3C5A2E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t1894F878DC4CD8CF0D78EC486B840E7DBE3C5A2E*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m30909A25A4B698D6CDE36DD17A2CCF12EB2A7AED_gshared_inline)(__this, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ReadOnlySpan_1_GetPinnableReference_m4469BE44DC19B575A1F0B8CA6A52BF5051400AF6 (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* (*) (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64*, const RuntimeMethod*))ReadOnlySpan_1_GetPinnableReference_m4469BE44DC19B575A1F0B8CA6A52BF5051400AF6_gshared)(__this, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m5D8561BF76A2451939095A0ABC980794FD4FBC76_inline (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m5D8561BF76A2451939095A0ABC980794FD4FBC76_gshared_inline)(__this, method);
}
inline NativeArray_1_t5B687D4D8EF0D5A734B403E25783AA11DAB5ABB9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisChainSegmentGeometry_t483ECD5EAFF90B8C135C3F9FE4AF01938157907B_m32B41D23DB08BB1F30797EEF773AA9D1EBC71B89 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t5B687D4D8EF0D5A734B403E25783AA11DAB5ABB9 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisChainSegmentGeometry_t483ECD5EAFF90B8C135C3F9FE4AF01938157907B_m32B41D23DB08BB1F30797EEF773AA9D1EBC71B89_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t5B687D4D8EF0D5A734B403E25783AA11DAB5ABB9 PhysicsBuffer_ToNativeArray_TisChainSegmentGeometry_t483ECD5EAFF90B8C135C3F9FE4AF01938157907B_m8A9991FDD9BBE266C09C8288B913DC3D47707B59 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t5B687D4D8EF0D5A734B403E25783AA11DAB5ABB9 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisChainSegmentGeometry_t483ECD5EAFF90B8C135C3F9FE4AF01938157907B_m8A9991FDD9BBE266C09C8288B913DC3D47707B59_gshared)(__this, method);
}
inline NativeArray_1_t1955F5A2D6B6CF9C74B693C6993640945C206182 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0_m6928B0F59943142D0AA193F98AA997ABEEB8B5ED (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t1955F5A2D6B6CF9C74B693C6993640945C206182 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0_m6928B0F59943142D0AA193F98AA997ABEEB8B5ED_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t1955F5A2D6B6CF9C74B693C6993640945C206182 PhysicsBuffer_ToNativeArray_TisPhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0_mD2BBE8895EA35EC2012554A8760803D5D89168EE (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t1955F5A2D6B6CF9C74B693C6993640945C206182 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisPhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0_mD2BBE8895EA35EC2012554A8760803D5D89168EE_gshared)(__this, method);
}
inline NativeArray_1_tFBB41680F508846EF66B64B909CF1C94F028D751 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsComposer_t0D54F067D6F10F1736E0A1667194CA45802E491B_m789C3AFB367AB2CBB5E47DFD26031481A8D25606 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tFBB41680F508846EF66B64B909CF1C94F028D751 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsComposer_t0D54F067D6F10F1736E0A1667194CA45802E491B_m789C3AFB367AB2CBB5E47DFD26031481A8D25606_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tFBB41680F508846EF66B64B909CF1C94F028D751 PhysicsBuffer_ToNativeArray_TisPhysicsComposer_t0D54F067D6F10F1736E0A1667194CA45802E491B_m50860B05893D30A0DF82FDE385D68427881D2BA8 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tFBB41680F508846EF66B64B909CF1C94F028D751 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisPhysicsComposer_t0D54F067D6F10F1736E0A1667194CA45802E491B_m50860B05893D30A0DF82FDE385D68427881D2BA8_gshared)(__this, method);
}
inline NativeArray_1_t513290E0A324DCD182DCA6498DBAF3A05E5CD9B5 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2_m950FA8ECD1115ACDDC4A3DD386FA7ED016CD9B18 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t513290E0A324DCD182DCA6498DBAF3A05E5CD9B5 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2_m950FA8ECD1115ACDDC4A3DD386FA7ED016CD9B18_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t513290E0A324DCD182DCA6498DBAF3A05E5CD9B5 PhysicsBuffer_ToNativeArray_TisPhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2_mA45877F258189126381DDB425389515CF7F879F2 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t513290E0A324DCD182DCA6498DBAF3A05E5CD9B5 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisPhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2_mA45877F258189126381DDB425389515CF7F879F2_gshared)(__this, method);
}
inline NativeArray_1_t7EE56341AC682502E85A5EF49CC27E17E9690BEB NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884_m9D219C57941E9EAF46B14B958A72D3B6AD0BA869 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t7EE56341AC682502E85A5EF49CC27E17E9690BEB (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884_m9D219C57941E9EAF46B14B958A72D3B6AD0BA869_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t7EE56341AC682502E85A5EF49CC27E17E9690BEB PhysicsBuffer_ToNativeArray_TisPhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884_m01EDC91A4FFBF1032ADF3888D1BB781C7A9AFD02 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t7EE56341AC682502E85A5EF49CC27E17E9690BEB (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisPhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884_m01EDC91A4FFBF1032ADF3888D1BB781C7A9AFD02_gshared)(__this, method);
}
inline NativeArray_1_t52D6C05C06C1C10CBE2B796B376B3C7266352646 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E_m1F401867CAC196F0F157B3B7BB9BBBC80DB8A527 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t52D6C05C06C1C10CBE2B796B376B3C7266352646 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E_m1F401867CAC196F0F157B3B7BB9BBBC80DB8A527_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t52D6C05C06C1C10CBE2B796B376B3C7266352646 PhysicsBuffer_ToNativeArray_TisPhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E_m71AA4BFB40CB51963645412092946C7D3EF868E3 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t52D6C05C06C1C10CBE2B796B376B3C7266352646 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisPhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E_m71AA4BFB40CB51963645412092946C7D3EF868E3_gshared)(__this, method);
}
inline NativeArray_1_t2E2285B626C87F8E3108409F3D80DC1200D3E426 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsUserData_t767769E7B130D2A0974D0FA6F9477DF8AED0D113_m5D54A66E7BB7818506F6D602B1E550303BDEF93E (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t2E2285B626C87F8E3108409F3D80DC1200D3E426 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsUserData_t767769E7B130D2A0974D0FA6F9477DF8AED0D113_m5D54A66E7BB7818506F6D602B1E550303BDEF93E_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t2E2285B626C87F8E3108409F3D80DC1200D3E426 PhysicsBuffer_ToNativeArray_TisPhysicsUserData_t767769E7B130D2A0974D0FA6F9477DF8AED0D113_m7CA335F35F624B4A9F88BC1C445C8658AE7F57A0 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t2E2285B626C87F8E3108409F3D80DC1200D3E426 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisPhysicsUserData_t767769E7B130D2A0974D0FA6F9477DF8AED0D113_m7CA335F35F624B4A9F88BC1C445C8658AE7F57A0_gshared)(__this, method);
}
inline NativeArray_1_tFACF37504B027B37F837C5C512620EA6C6C34D17 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsWorld_tD76337CF6B632797461123938E650738C9A18952_m8368BFFFF55BAFBE6EC3F8A61CB4EAAA5339C933 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tFACF37504B027B37F837C5C512620EA6C6C34D17 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsWorld_tD76337CF6B632797461123938E650738C9A18952_m8368BFFFF55BAFBE6EC3F8A61CB4EAAA5339C933_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tFACF37504B027B37F837C5C512620EA6C6C34D17 PhysicsBuffer_ToNativeArray_TisPhysicsWorld_tD76337CF6B632797461123938E650738C9A18952_mCCB1DB266C4D369A7E9B15C194EFEB608625237D (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tFACF37504B027B37F837C5C512620EA6C6C34D17 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisPhysicsWorld_tD76337CF6B632797461123938E650738C9A18952_mCCB1DB266C4D369A7E9B15C194EFEB608625237D_gshared)(__this, method);
}
inline NativeArray_1_t4F89B4E62AB90AEF10712018502913808FD186BC NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491_mDBD3EED4E7583B04BF9A3E47FE66BC1FDCC5FDA0 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t4F89B4E62AB90AEF10712018502913808FD186BC (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491_mDBD3EED4E7583B04BF9A3E47FE66BC1FDCC5FDA0_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t4F89B4E62AB90AEF10712018502913808FD186BC PhysicsBuffer_ToNativeArray_TisPolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491_mE3A730A4814767971516F70B7DA143F8151F18B8 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t4F89B4E62AB90AEF10712018502913808FD186BC (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisPolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491_mE3A730A4814767971516F70B7DA143F8151F18B8_gshared)(__this, method);
}
inline NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m7BA23DE8D084CC54FCBC238132BD26D78EE99CAC (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m7BA23DE8D084CC54FCBC238132BD26D78EE99CAC_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 PhysicsBuffer_ToNativeArray_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_mDC12FD391CA2B0DE172852756B47AC04FD341C48 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_mDC12FD391CA2B0DE172852756B47AC04FD341C48_gshared)(__this, method);
}
inline NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8CC23F9B357DD3415FAB8C319466BEAA6365AF44 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8CC23F9B357DD3415FAB8C319466BEAA6365AF44_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 PhysicsBuffer_ToNativeArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7D29FD6303FF3F39132017CA90B6D1E366FE379B (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7D29FD6303FF3F39132017CA90B6D1E366FE379B_gshared)(__this, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m0F9AFB55DC2B342DB7011F2046193F6C30B035C1 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m0F9AFB55DC2B342DB7011F2046193F6C30B035C1_gshared)(__this, method);
}
inline NativeArray_1_t43D275834918D28FE4F8A9644B7705940C0AD9A7 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchTransform_tF14188CE07ECF9D6C90EA2D28AD5BD0D102500F8_m2846C2467B152929DBF39BBDD9C732CB8A595AC7 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t43D275834918D28FE4F8A9644B7705940C0AD9A7 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchTransform_tF14188CE07ECF9D6C90EA2D28AD5BD0D102500F8_m2846C2467B152929DBF39BBDD9C732CB8A595AC7_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t43D275834918D28FE4F8A9644B7705940C0AD9A7 PhysicsBuffer_ToNativeArray_TisBatchTransform_tF14188CE07ECF9D6C90EA2D28AD5BD0D102500F8_m934A0CB2DA8DBBE4EA1D60CF9C57E162043FF10F (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t43D275834918D28FE4F8A9644B7705940C0AD9A7 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisBatchTransform_tF14188CE07ECF9D6C90EA2D28AD5BD0D102500F8_m934A0CB2DA8DBBE4EA1D60CF9C57E162043FF10F_gshared)(__this, method);
}
inline NativeArray_1_tDED6FCA1E4D28CF2C395A2A27DD95C54BCA8FCF2 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVelocity_t501F06AA00DEDE1275412DA5B4821CF758D94D9D_m9D5A6E6CFD9A30A200796158A8AA579403DF13AD (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDED6FCA1E4D28CF2C395A2A27DD95C54BCA8FCF2 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVelocity_t501F06AA00DEDE1275412DA5B4821CF758D94D9D_m9D5A6E6CFD9A30A200796158A8AA579403DF13AD_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tDED6FCA1E4D28CF2C395A2A27DD95C54BCA8FCF2 PhysicsBuffer_ToNativeArray_TisBatchVelocity_t501F06AA00DEDE1275412DA5B4821CF758D94D9D_m719D1C0371596E27E12F271F0466869EE134413C (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDED6FCA1E4D28CF2C395A2A27DD95C54BCA8FCF2 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisBatchVelocity_t501F06AA00DEDE1275412DA5B4821CF758D94D9D_m719D1C0371596E27E12F271F0466869EE134413C_gshared)(__this, method);
}
inline NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mCAB0D1991E3CA4A5F2B29699805088ED767C85BF (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mCAB0D1991E3CA4A5F2B29699805088ED767C85BF_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 PhysicsBuffer_ToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m0F0ABCE955A32EF09A1B87865A417AEB795563F6 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m0F0ABCE955A32EF09A1B87865A417AEB795563F6_gshared)(__this, method);
}
inline NativeArray_1_t5057373BCCFB0DA5922C43EECB102CA6C709A74C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLayerHandle_t06582578F9B5D5AA335BFCDE0973956EF5648900_m61980759D0BB8795012206121AE1C3D14386A38F (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t5057373BCCFB0DA5922C43EECB102CA6C709A74C (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLayerHandle_t06582578F9B5D5AA335BFCDE0973956EF5648900_m61980759D0BB8795012206121AE1C3D14386A38F_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t5057373BCCFB0DA5922C43EECB102CA6C709A74C PhysicsBuffer_ToNativeArray_TisLayerHandle_t06582578F9B5D5AA335BFCDE0973956EF5648900_mA2469A90E1E98BCA4984B655678FCAAE074DED37 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t5057373BCCFB0DA5922C43EECB102CA6C709A74C (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisLayerHandle_t06582578F9B5D5AA335BFCDE0973956EF5648900_mA2469A90E1E98BCA4984B655678FCAAE074DED37_gshared)(__this, method);
}
inline NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m9FF20AB277A63B6352D86FBE981963C274C1F6CA (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m9FF20AB277A63B6352D86FBE981963C274C1F6CA_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 PhysicsBuffer_ToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_mED810731A42A4D8DA091409BE1118284E1BDCE90 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_mED810731A42A4D8DA091409BE1118284E1BDCE90_gshared)(__this, method);
}
inline NativeArray_1_t242EA087C31CF87D5A5E65EEBF896B10DBF5CB8A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisWorldCastResult_tA5F20990A18CBE633E414F5B797A068CD2BEF350_mF0738D1886BAA339A214E4AED524BA65E8B108D8 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t242EA087C31CF87D5A5E65EEBF896B10DBF5CB8A (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisWorldCastResult_tA5F20990A18CBE633E414F5B797A068CD2BEF350_mF0738D1886BAA339A214E4AED524BA65E8B108D8_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t242EA087C31CF87D5A5E65EEBF896B10DBF5CB8A PhysicsBuffer_ToNativeArray_TisWorldCastResult_tA5F20990A18CBE633E414F5B797A068CD2BEF350_mC34BDA03F7721ADE6FAFC7060A2A9E6FE02A8190 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t242EA087C31CF87D5A5E65EEBF896B10DBF5CB8A (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisWorldCastResult_tA5F20990A18CBE633E414F5B797A068CD2BEF350_mC34BDA03F7721ADE6FAFC7060A2A9E6FE02A8190_gshared)(__this, method);
}
inline NativeArray_1_tE29E3ED5CA86EDA2FA7172C4E8C5A81CDA112814 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisWorldOverlapResult_t6440E0FA2B383A6C681DCBC60521D2067324DAC7_m1460A89145B46D715BA52388EAC28A1E67B2C587 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tE29E3ED5CA86EDA2FA7172C4E8C5A81CDA112814 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisWorldOverlapResult_t6440E0FA2B383A6C681DCBC60521D2067324DAC7_m1460A89145B46D715BA52388EAC28A1E67B2C587_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tE29E3ED5CA86EDA2FA7172C4E8C5A81CDA112814 PhysicsBuffer_ToNativeArray_TisWorldOverlapResult_t6440E0FA2B383A6C681DCBC60521D2067324DAC7_m0513E79895BED8B1C732A8C6B543F4056D0CF8A3 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tE29E3ED5CA86EDA2FA7172C4E8C5A81CDA112814 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisWorldOverlapResult_t6440E0FA2B383A6C681DCBC60521D2067324DAC7_m0513E79895BED8B1C732A8C6B543F4056D0CF8A3_gshared)(__this, method);
}
inline NativeArray_1_t4EA7C2C907A5808957A1EF51CB28B00D72CB4FAA NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisContact_tDF846FDDD399484433CB94E46C0F7E64F0281BC7_m8AB9AD9247CB2C1A8DFA5740FF92736DCF0302CD (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t4EA7C2C907A5808957A1EF51CB28B00D72CB4FAA (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisContact_tDF846FDDD399484433CB94E46C0F7E64F0281BC7_m8AB9AD9247CB2C1A8DFA5740FF92736DCF0302CD_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t4EA7C2C907A5808957A1EF51CB28B00D72CB4FAA PhysicsBuffer_ToNativeArray_TisContact_tDF846FDDD399484433CB94E46C0F7E64F0281BC7_m52BB10FF98D8C77C892B9B98CE83A6BF06692994 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t4EA7C2C907A5808957A1EF51CB28B00D72CB4FAA (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisContact_tDF846FDDD399484433CB94E46C0F7E64F0281BC7_m52BB10FF98D8C77C892B9B98CE83A6BF06692994_gshared)(__this, method);
}
inline NativeArray_1_t7BEEC93A8DEF32C574DE15C99F1CE5CB5FEAB1A3 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMoverCollision_t603C4D37B274FCFBC00A7E51BA7B3E1E918D0718_mE5B5A5B1998E83725912986A1AA8CEA26C032015 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t7BEEC93A8DEF32C574DE15C99F1CE5CB5FEAB1A3 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMoverCollision_t603C4D37B274FCFBC00A7E51BA7B3E1E918D0718_mE5B5A5B1998E83725912986A1AA8CEA26C032015_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t7BEEC93A8DEF32C574DE15C99F1CE5CB5FEAB1A3 PhysicsBuffer_ToNativeArray_TisMoverCollision_t603C4D37B274FCFBC00A7E51BA7B3E1E918D0718_mF0DD392ABDD2EFFFBB0E16B18040AD8CA36A26CF (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t7BEEC93A8DEF32C574DE15C99F1CE5CB5FEAB1A3 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisMoverCollision_t603C4D37B274FCFBC00A7E51BA7B3E1E918D0718_mF0DD392ABDD2EFFFBB0E16B18040AD8CA36A26CF_gshared)(__this, method);
}
inline NativeArray_1_tB4CB6FDB6AC7D660B09475EF4D96C883004E21E9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisConvexHull_tF012380011E47752145BD7DA69D0F23CF6A55A17_mAC20678F069EACFC4207BB35131C625A272933FB (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tB4CB6FDB6AC7D660B09475EF4D96C883004E21E9 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisConvexHull_tF012380011E47752145BD7DA69D0F23CF6A55A17_mAC20678F069EACFC4207BB35131C625A272933FB_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tB4CB6FDB6AC7D660B09475EF4D96C883004E21E9 PhysicsBuffer_ToNativeArray_TisConvexHull_tF012380011E47752145BD7DA69D0F23CF6A55A17_mB92B9E0A4B9EA9D2CC86951EB7ACCAF476ECC0F3 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tB4CB6FDB6AC7D660B09475EF4D96C883004E21E9 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisConvexHull_tF012380011E47752145BD7DA69D0F23CF6A55A17_mB92B9E0A4B9EA9D2CC86951EB7ACCAF476ECC0F3_gshared)(__this, method);
}
inline NativeArray_1_tF8B6C51A82B32878CAD4BB9D0613FAE6B152E340 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D_mC584342D045D007A14ABC8CD31D35A3B0532D7CE (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tF8B6C51A82B32878CAD4BB9D0613FAE6B152E340 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D_mC584342D045D007A14ABC8CD31D35A3B0532D7CE_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tF8B6C51A82B32878CAD4BB9D0613FAE6B152E340 PhysicsBuffer_ToNativeArray_TisPhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D_m774A260C0CBD212023E8B2657027F4411039D53E (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tF8B6C51A82B32878CAD4BB9D0613FAE6B152E340 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisPhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D_m774A260C0CBD212023E8B2657027F4411039D53E_gshared)(__this, method);
}
inline NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m9060EF20AD31BDDBF8E6A4D61F091D03B101F9E4 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m9060EF20AD31BDDBF8E6A4D61F091D03B101F9E4_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m761C52C5AA4ADD227519287E54411DB038E5F202 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m761C52C5AA4ADD227519287E54411DB038E5F202_gshared)(__this, method);
}
inline NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mEFA16883E3A65609AE169271BE4C8883BFC02D22 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mEFA16883E3A65609AE169271BE4C8883BFC02D22_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m37B90A7486634E138E17A378C29EE9B9D5F8D885 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m37B90A7486634E138E17A378C29EE9B9D5F8D885_gshared)(__this, method);
}
inline NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m4A66A3B213055D7307CFE8FEFA301961ABB4D1C8 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m4A66A3B213055D7307CFE8FEFA301961ABB4D1C8_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 PhysicsBuffer_ToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_mF73C3A8A23424B2EDD8403FA8F98BB08FD0008F3 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_mF73C3A8A23424B2EDD8403FA8F98BB08FD0008F3_gshared)(__this, method);
}
inline NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m5F6104B7BABDD0AAEFC152E74ED645A50510E900 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m5F6104B7BABDD0AAEFC152E74ED645A50510E900_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 PhysicsBuffer_ToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m879C0DE9D9F6C9C5F2FF350635AC52F4FF874788 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m879C0DE9D9F6C9C5F2FF350635AC52F4FF874788_gshared)(__this, method);
}
inline NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mBFD05CEEFBE002B3A028DCB2B994626108D1DE63 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mBFD05CEEFBE002B3A028DCB2B994626108D1DE63_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m8867F6CFE50831DD591716883D3B619545933E0E (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m8867F6CFE50831DD591716883D3B619545933E0E_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DC92A2EBDE62FBDF265E6AE37A3FAD4CB595ECF (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DC92A2EBDE62FBDF265E6AE37A3FAD4CB595ECF_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m2C752E42AC92651414D22133C0C6625168A0A27D_inline (ReadOnlySpan_1_tF22156099B21F5C06598D6E173048F8C01F33D83* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tF22156099B21F5C06598D6E173048F8C01F33D83*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m2C752E42AC92651414D22133C0C6625168A0A27D_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_tF22156099B21F5C06598D6E173048F8C01F33D83 PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_m4C979C268E948FEFF9A617E551F64B7D4F9B949F (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tF22156099B21F5C06598D6E173048F8C01F33D83 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_m4C979C268E948FEFF9A617E551F64B7D4F9B949F_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m57750EFD352CEE1134B790C4C6A5DE73ED63B54B_inline (ReadOnlySpan_1_t3807AC5721C4A53979AE58EB07B1EC72F69448EC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t3807AC5721C4A53979AE58EB07B1EC72F69448EC*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m57750EFD352CEE1134B790C4C6A5DE73ED63B54B_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t3807AC5721C4A53979AE58EB07B1EC72F69448EC PhysicsBuffer_ToReadOnlySpan_TisContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291_mC542CF1B4526AFBE92B94E64FCCFE2F710E78118 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t3807AC5721C4A53979AE58EB07B1EC72F69448EC (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291_mC542CF1B4526AFBE92B94E64FCCFE2F710E78118_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m6F6DFB2F6031477E482545515ED358245E10E056_inline (ReadOnlySpan_1_t9E895D63910F259C1074899C550D20E89B2D553F* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t9E895D63910F259C1074899C550D20E89B2D553F*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m6F6DFB2F6031477E482545515ED358245E10E056_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t9E895D63910F259C1074899C550D20E89B2D553F PhysicsBuffer_ToReadOnlySpan_TisContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002_m3B7CBE566D05687D5A0235545815F080D880668D (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t9E895D63910F259C1074899C550D20E89B2D553F (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002_m3B7CBE566D05687D5A0235545815F080D880668D_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m2D32168C1CB70E875B88C363738FB53621F6614D_inline (ReadOnlySpan_1_tBC27D59CA47B69695AF9B0FF96B6E1D7C10D5883* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tBC27D59CA47B69695AF9B0FF96B6E1D7C10D5883*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m2D32168C1CB70E875B88C363738FB53621F6614D_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_tBC27D59CA47B69695AF9B0FF96B6E1D7C10D5883 PhysicsBuffer_ToReadOnlySpan_TisContactHitEvent_t11EB60851A1F13BC732A3361C6CB37860A2AA427_mA26E0EBBB08051C5BE9F415B1A660BEFD046CE56 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tBC27D59CA47B69695AF9B0FF96B6E1D7C10D5883 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisContactHitEvent_t11EB60851A1F13BC732A3361C6CB37860A2AA427_mA26E0EBBB08051C5BE9F415B1A660BEFD046CE56_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m11EA6EEFE4554A846FC9D7B03DDAD330ADF2438C_inline (ReadOnlySpan_1_t2874BB641AC0FDE8BDD7E519FE425D7AD97D9A3A* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t2874BB641AC0FDE8BDD7E519FE425D7AD97D9A3A*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m11EA6EEFE4554A846FC9D7B03DDAD330ADF2438C_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t2874BB641AC0FDE8BDD7E519FE425D7AD97D9A3A PhysicsBuffer_ToReadOnlySpan_TisJointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A_mA3C73A1391BA5802340713A354C2FA85082AA83F (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t2874BB641AC0FDE8BDD7E519FE425D7AD97D9A3A (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisJointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A_mA3C73A1391BA5802340713A354C2FA85082AA83F_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_mB0245D1D81FC91908DE1B6CA216F03DEB24ED02B_inline (ReadOnlySpan_1_t12C3D31E72C3DDB44A4B2BF75E16DB55699D73B3* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t12C3D31E72C3DDB44A4B2BF75E16DB55699D73B3*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mB0245D1D81FC91908DE1B6CA216F03DEB24ED02B_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t12C3D31E72C3DDB44A4B2BF75E16DB55699D73B3 PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9_mBBEBA9055D4B20C9CBFF21DF9E0A0F9158365665 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t12C3D31E72C3DDB44A4B2BF75E16DB55699D73B3 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9_mBBEBA9055D4B20C9CBFF21DF9E0A0F9158365665_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m10DCBC9FBEEC2E3D3CD372A15F538F7A41C5EA08_inline (ReadOnlySpan_1_tC7C975128DC0F98C7ED9FA23FA8763D48DEA8CD2* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC7C975128DC0F98C7ED9FA23FA8763D48DEA8CD2*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m10DCBC9FBEEC2E3D3CD372A15F538F7A41C5EA08_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_tC7C975128DC0F98C7ED9FA23FA8763D48DEA8CD2 PhysicsBuffer_ToReadOnlySpan_TisTriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04_m7132F18A28541A42906FA743898DEF07780D1B84 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tC7C975128DC0F98C7ED9FA23FA8763D48DEA8CD2 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisTriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04_m7132F18A28541A42906FA743898DEF07780D1B84_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900_inline (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m770A3C01394D2ADEF3AE05D2F391E494DFA44810 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m770A3C01394D2ADEF3AE05D2F391E494DFA44810_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A_inline (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m66F49B0125C73F4C2E594465C8514787C9A2CB23 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m66F49B0125C73F4C2E594465C8514787C9A2CB23_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF_inline (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m861F78494399043A9EBE243F321F948344054CB9 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m861F78494399043A9EBE243F321F948344054CB9_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81_inline (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_mB799CAEE69F5B8E6EF2D017D55CE25C100D11ACF (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_mB799CAEE69F5B8E6EF2D017D55CE25C100D11ACF_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88_inline (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m44C156471D4B8D3BB0599508FA4AA95421795B41 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m44C156471D4B8D3BB0599508FA4AA95421795B41_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631_inline (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m230051C58A774BEA26D6962E100FEFF0D990A22F (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m230051C58A774BEA26D6962E100FEFF0D990A22F_gshared)(__this, method);
}
inline void Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_m22DF411BC8A0B8ADBE386340363B69D520FEE64C (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_m22DF411BC8A0B8ADBE386340363B69D520FEE64C_gshared)(__this, method);
}
inline void Span_1__ctor_m8B358C367FCD4C5DF714C69892BD3F238BC4BE78_inline (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m8B358C367FCD4C5DF714C69892BD3F238BC4BE78_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 PhysicsBuffer_ToSpan_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2E205B73CBCD92B0B8B173F222A163671DE75E59 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToSpan_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2E205B73CBCD92B0B8B173F222A163671DE75E59_gshared)(__this, method);
}
inline void Span_1__ctor_m51D8F679F5F06C1A2F204248F5D37BC1D0F48BBA_inline (Span_1_t180448960B6B6F682EFC16994B9716109E7DD2C6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t180448960B6B6F682EFC16994B9716109E7DD2C6*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m51D8F679F5F06C1A2F204248F5D37BC1D0F48BBA_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline Span_1_t180448960B6B6F682EFC16994B9716109E7DD2C6 PhysicsBuffer_ToSpan_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m2633F9F2C259437058E055B13A7AEC25B8C731E3 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  Span_1_t180448960B6B6F682EFC16994B9716109E7DD2C6 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToSpan_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m2633F9F2C259437058E055B13A7AEC25B8C731E3_gshared)(__this, method);
}
inline void Span_1__ctor_mED035A5AC87B33038AA174619E4302C09155861C_inline (Span_1_t34B932F5AC7CBB47C9A670FA2E06063AE44CEEEE* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t34B932F5AC7CBB47C9A670FA2E06063AE44CEEEE*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_mED035A5AC87B33038AA174619E4302C09155861C_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline Span_1_t34B932F5AC7CBB47C9A670FA2E06063AE44CEEEE PhysicsBuffer_ToSpan_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mE3104A1F554819281D6CA3E6A869AF09CB7ABE93 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  Span_1_t34B932F5AC7CBB47C9A670FA2E06063AE44CEEEE (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToSpan_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mE3104A1F554819281D6CA3E6A869AF09CB7ABE93_gshared)(__this, method);
}
inline void Span_1__ctor_m0CB110DE0E8428040F7C3E546CC39D3A2A9F659C_inline (Span_1_t497BE6EFB8E493B6B683E05FE152E8C5354022CB* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t497BE6EFB8E493B6B683E05FE152E8C5354022CB*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m0CB110DE0E8428040F7C3E546CC39D3A2A9F659C_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline Span_1_t497BE6EFB8E493B6B683E05FE152E8C5354022CB PhysicsBuffer_ToSpan_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m1AE628C6071E045075AEB5007377FB7EDD9F7837 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  Span_1_t497BE6EFB8E493B6B683E05FE152E8C5354022CB (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToSpan_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m1AE628C6071E045075AEB5007377FB7EDD9F7837_gshared)(__this, method);
}
inline void Span_1__ctor_m149D219982FBB2A903D4C4E21FE5FE96FB5F5E06_inline (Span_1_tD01BE6CE0AD935A9C7F96CFE915AB46E9ECED0AA* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tD01BE6CE0AD935A9C7F96CFE915AB46E9ECED0AA*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m149D219982FBB2A903D4C4E21FE5FE96FB5F5E06_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline Span_1_tD01BE6CE0AD935A9C7F96CFE915AB46E9ECED0AA PhysicsBuffer_ToSpan_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m5E2AFF87776C7D8089764ED690EBB5705AE178C8 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  Span_1_tD01BE6CE0AD935A9C7F96CFE915AB46E9ECED0AA (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToSpan_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m5E2AFF87776C7D8089764ED690EBB5705AE178C8_gshared)(__this, method);
}
inline void Span_1__ctor_mB9684F291E4E59C4673BF403C1FBB13959D13ED3_inline (Span_1_tFEDD78D7F7F7CAC447265BA315649C319C0AE5A9* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tFEDD78D7F7F7CAC447265BA315649C319C0AE5A9*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_mB9684F291E4E59C4673BF403C1FBB13959D13ED3_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline Span_1_tFEDD78D7F7F7CAC447265BA315649C319C0AE5A9 PhysicsBuffer_ToSpan_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m4B91D4B8D3D01B0C43975EDE787675EE031441A5 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  Span_1_tFEDD78D7F7F7CAC447265BA315649C319C0AE5A9 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToSpan_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m4B91D4B8D3D01B0C43975EDE787675EE031441A5_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manipulator_AddHandle_m7B6C6084B72FBE7A2CDA7DEC8647C25223279190 (Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_handle, const RuntimeMethod* method) ;
inline void Manipulator_AddEnum_TisIl2CppFullySharedGenericStruct_mD50E71E36D14FD86128B510DDDA23C8D08E632C6 (Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))Manipulator_AddEnum_TisIl2CppFullySharedGenericStruct_mD50E71E36D14FD86128B510DDDA23C8D08E632C6_gshared)((Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102*)__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueSpan_t0B183BF71C7D3F5543356CC5CD002E927E743F4A Manipulator_GetValueSpan_m4217D468AF82D348F2EBC72B03EF04D531D69752 (Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102* __this, int32_t ___0_index, bool ___1_insertMode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manipulator_Insert_m4733FDCC00C3BB977351BED144E7333BAE7F1AF9 (StyleProperty_tD117EB807BAA83855E65AC56B8D6FB84D6F7CF83* ___0_property, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* StyleProperty_get_values_mC1D996097014576222150D2F84685850FF4CEE2B_inline (StyleProperty_tD117EB807BAA83855E65AC56B8D6FB84D6F7CF83* __this, const RuntimeMethod* method) ;
inline void Manipulator_InsertEnum_TisIl2CppFullySharedGenericStruct_m1E38C74DBADD2F9AED561B2B11BDBC2702E8130D (Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102*, int32_t, Il2CppFullySharedGenericStruct, const RuntimeMethod*))Manipulator_InsertEnum_TisIl2CppFullySharedGenericStruct_m1E38C74DBADD2F9AED561B2B11BDBC2702E8130D_gshared)((Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102*)__this, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manipulator_ResizeValue_m0B9B2C0B4D35B4F1FB63A199F20DBF610179504B (Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102* __this, ValueSpan_t0B183BF71C7D3F5543356CC5CD002E927E743F4A* ___0_span, int32_t ___1_count, const RuntimeMethod* method) ;
inline void Manipulator_SetEnum_TisIl2CppFullySharedGenericStruct_m8D2F788A22BB9A17052A0355E264539ABE3E5F67 (Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102*, int32_t, Il2CppFullySharedGenericStruct, const RuntimeMethod*))Manipulator_SetEnum_TisIl2CppFullySharedGenericStruct_m8D2F788A22BB9A17052A0355E264539ABE3E5F67_gshared)((Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102*)__this, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleSheet_TryReadAssetReference_m2E9C311E4692494508CC6BB3DDEA3A1255DF1A22 (StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_handle, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** ___1_value, const RuntimeMethod* method) ;
inline bool Manipulator_TryGetAssetReference_TisIl2CppSharedGenericObject_m285F8FB5ADCA1D62E6EE4E7E3D612798CC18A708 (Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102* __this, int32_t ___0_index, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102*, int32_t, Il2CppSharedGenericObject**, const RuntimeMethod*))Manipulator_TryGetAssetReference_TisIl2CppSharedGenericObject_m285F8FB5ADCA1D62E6EE4E7E3D612798CC18A708_gshared)(__this, ___0_index, ___1_value, method);
}
inline bool Manipulator_TryGetEnum_TisIl2CppFullySharedGenericStruct_m72B758D5A51EBB85E690C3AC9CA0BCE2598F4DC3 (Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Manipulator_TryGetEnum_TisIl2CppFullySharedGenericStruct_m72B758D5A51EBB85E690C3AC9CA0BCE2598F4DC3_gshared)(__this, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* UnsafeUtility_ArrayElementAsRef_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m86F914D25CF4676024DF56901ACD7C8B1A93ECD5_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ArrayElementAsRef_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m86F914D25CF4676024DF56901ACD7C8B1A93ECD5_gshared_inline)(___0_ptr, ___1_index, method);
}
inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 TilemapBuffer_As_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mCAE8D5C369B85A652106EBDC05664C52ACCE9503 (TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 (*) (TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D*, int32_t, const RuntimeMethod*))TilemapBuffer_As_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mCAE8D5C369B85A652106EBDC05664C52ACCE9503_gshared)(__this, ___0_index, method);
}
inline void TilemapBuffer_As_TisIl2CppFullySharedGenericStruct_mE5ED3A21F10FF229819583D1747D45BDF6789F86 (TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))TilemapBuffer_As_TisIl2CppFullySharedGenericStruct_mE5ED3A21F10FF229819583D1747D45BDF6789F86_gshared)((TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D*)__this, ___0_index, il2cppRetVal, method);
}
inline Il2CppSharedGenericObject* TilemapBuffer_AsEngineObject_TisIl2CppSharedGenericObject_mCD253AAB6422AD3B53880C8FEDC9E10BE082FD7D (TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D*, int32_t, const RuntimeMethod*))TilemapBuffer_AsEngineObject_TisIl2CppSharedGenericObject_mCD253AAB6422AD3B53880C8FEDC9E10BE082FD7D_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 EntityId_get_None_mD09599DF1A9CD1DA879B59F1512CDFD4DAFCB39B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 Object_GetEntityId_mA47FDD98E6DEC141206BD6B02F31B6436C6EF1D7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
inline void TilemapBuffer_SetEngineObject_TisIl2CppSharedGenericObject_mE1D53CD5BA3B9912C87D5AC67FA3DAE6C8F2D8F7 (TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D* __this, Il2CppSharedGenericObject* ___0_value, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D*, Il2CppSharedGenericObject*, int32_t, const RuntimeMethod*))TilemapBuffer_SetEngineObject_TisIl2CppSharedGenericObject_mE1D53CD5BA3B9912C87D5AC67FA3DAE6C8F2D8F7_gshared)(__this, ___0_value, ___1_index, method);
}
inline void TilemapBuffer_SetValue_TisIl2CppFullySharedGenericStruct_m5F4E87031CCFBDDBE554204063ABBAD64AC9AEB8 (TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D* __this, Il2CppFullySharedGenericStruct ___0_value, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D*, Il2CppFullySharedGenericStruct, int32_t, const RuntimeMethod*))TilemapBuffer_SetValue_TisIl2CppFullySharedGenericStruct_m5F4E87031CCFBDDBE554204063ABBAD64AC9AEB8_gshared)((TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D*)__this, ___0_value, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
// Method Definition Index: 133574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vm_WriteTypedArg_TisIl2CppFullySharedGenericAny_mAD73844CC61FF676A3740834CF0549D3932139C1_gshared (uint8_t* ___0_num, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_r, STypeU5BU5D_t7F9226F1F49DEB3E55CBA20E7783D5CA9B9B8233* ___2_t, int32_t ___3_bp, int32_t ___4_slot, Il2CppFullySharedGenericAny ___5_val, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vm_tC938AD9E0E3B8D0FD2E17DF81CA7F1792FA35DF7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t3D55EB701580274AECCA1495ED282F2A50E48977 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t3D55EB701580274AECCA1495ED282F2A50E48977);
	const Il2CppFullySharedGenericAny L_29 = L_9;
	const Il2CppFullySharedGenericAny L_51 = L_9;
	const Il2CppFullySharedGenericAny L_64 = L_9;
	const Il2CppFullySharedGenericAny L_70 = L_9;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t G_B7_0 = 0;
	float G_B15_0 = 0.0f;
	{
		int32_t L_0 = ___4_slot;
		STypeU5BU5D_t7F9226F1F49DEB3E55CBA20E7783D5CA9B9B8233* L_1 = ___2_t;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0073;
		}
	}
	{
		STypeU5BU5D_t7F9226F1F49DEB3E55CBA20E7783D5CA9B9B8233* L_3 = ___2_t;
		int32_t L_4 = ___4_slot;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint8_t L_6 = (uint8_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		bool L_7 = (il2cpp_defaults.int32_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (L_7)
		{
			goto IL_005f;
		}
	}
	{
		bool L_8 = (il2cpp_defaults.boolean_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (L_8)
		{
			goto IL_0052;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___5_val : &___5_val), SizeOf_T_t3D55EB701580274AECCA1495ED282F2A50E48977);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_9);
		il2cpp_codegen_runtime_class_init_inline(Vm_tC938AD9E0E3B8D0FD2E17DF81CA7F1792FA35DF7_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Vm_CoerceBoxedI4_m26C035037F6B6011CF769B8E0BDB7C3863873026(L_10, NULL);
		G_B7_0 = L_11;
		goto IL_0067;
	}

IL_0052:
	{
		bool* L_12;
		L_12 = il2cpp_unsafe_as_ref<bool>((Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___5_val : &___5_val));
		int32_t L_13 = il2cpp_codegen_ldind<int32_t, uint8_t>(((uint8_t*)L_12));
		G_B7_0 = ((!(((uint32_t)L_13) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0067;
	}

IL_005f:
	{
		int32_t* L_14;
		L_14 = il2cpp_unsafe_as_ref<int32_t>((Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___5_val : &___5_val));
		int32_t L_15 = il2cpp_codegen_ldind<int32_t, int32_t>(L_14);
		G_B7_0 = L_15;
	}

IL_0067:
	{
		V_0 = G_B7_0;
		uint8_t* L_16 = ___0_num;
		int32_t L_17 = ___3_bp;
		int32_t L_18 = ___4_slot;
		int32_t L_19 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_17, L_18)), 4)))), (int32_t)L_19);
		return;
	}

IL_0073:
	{
		int32_t L_20 = ___4_slot;
		STypeU5BU5D_t7F9226F1F49DEB3E55CBA20E7783D5CA9B9B8233* L_21 = ___2_t;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) >= ((int32_t)L_22)))
		{
			goto IL_00e4;
		}
	}
	{
		STypeU5BU5D_t7F9226F1F49DEB3E55CBA20E7783D5CA9B9B8233* L_23 = ___2_t;
		int32_t L_24 = ___4_slot;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		uint8_t L_26 = (uint8_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		if ((!(((uint32_t)L_26) == ((uint32_t)2))))
		{
			goto IL_00e4;
		}
	}
	{
		bool L_27 = (il2cpp_defaults.single_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (L_27)
		{
			goto IL_00d0;
		}
	}
	{
		bool L_28 = (il2cpp_defaults.int32_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (L_28)
		{
			goto IL_00c5;
		}
	}
	{
		il2cpp_codegen_memcpy(L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___5_val : &___5_val), SizeOf_T_t3D55EB701580274AECCA1495ED282F2A50E48977);
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_29);
		il2cpp_codegen_runtime_class_init_inline(Vm_tC938AD9E0E3B8D0FD2E17DF81CA7F1792FA35DF7_il2cpp_TypeInfo_var);
		float L_31;
		L_31 = Vm_CoerceBoxedR4_m05A9198F8D7A26DF1F7FDB250B266405E7B9EC84(L_30, NULL);
		G_B15_0 = L_31;
		goto IL_00d8;
	}

IL_00c5:
	{
		int32_t* L_32;
		L_32 = il2cpp_unsafe_as_ref<int32_t>((Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___5_val : &___5_val));
		int32_t L_33 = il2cpp_codegen_ldind<int32_t, int32_t>(L_32);
		float L_34 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_33,NULL));
		G_B15_0 = L_34;
		goto IL_00d8;
	}

IL_00d0:
	{
		float* L_35;
		L_35 = il2cpp_unsafe_as_ref<float>((Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___5_val : &___5_val));
		float L_36 = il2cpp_codegen_ldind<float, float>(L_35);
		G_B15_0 = L_36;
	}

IL_00d8:
	{
		V_1 = G_B15_0;
		uint8_t* L_37 = ___0_num;
		int32_t L_38 = ___3_bp;
		int32_t L_39 = ___4_slot;
		float L_40 = V_1;
		il2cpp_codegen_stind<float>((float*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_37, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_38, L_39)), 4)))), (float)L_40);
		return;
	}

IL_00e4:
	{
		int32_t L_41 = ___4_slot;
		STypeU5BU5D_t7F9226F1F49DEB3E55CBA20E7783D5CA9B9B8233* L_42 = ___2_t;
		NullCheck(L_42);
		int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
		if ((((int32_t)L_41) >= ((int32_t)L_43)))
		{
			goto IL_010c;
		}
	}
	{
		STypeU5BU5D_t7F9226F1F49DEB3E55CBA20E7783D5CA9B9B8233* L_44 = ___2_t;
		int32_t L_45 = ___4_slot;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		uint8_t L_47 = (uint8_t)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		if ((!(((uint32_t)L_47) == ((uint32_t)4))))
		{
			goto IL_010c;
		}
	}
	{
		uint8_t* L_48 = ___0_num;
		int32_t L_49 = ___3_bp;
		int32_t L_50 = ___4_slot;
		il2cpp_codegen_memcpy(L_51, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___5_val : &___5_val), SizeOf_T_t3D55EB701580274AECCA1495ED282F2A50E48977);
		RuntimeObject* L_52 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_51);
		il2cpp_codegen_runtime_class_init_inline(Vm_tC938AD9E0E3B8D0FD2E17DF81CA7F1792FA35DF7_il2cpp_TypeInfo_var);
		int64_t L_53;
		L_53 = Vm_CoerceBoxedI8_m25C2802356E5B70518F93D89FE3F55340FD27A27(L_52, NULL);
		il2cpp_unsafe_write_unaligned((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_48, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_49, L_50)), 4)))), L_53);
		return;
	}

IL_010c:
	{
		int32_t L_54 = ___4_slot;
		STypeU5BU5D_t7F9226F1F49DEB3E55CBA20E7783D5CA9B9B8233* L_55 = ___2_t;
		NullCheck(L_55);
		int32_t L_56 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_55)->max_length),NULL));
		if ((((int32_t)L_54) >= ((int32_t)L_56)))
		{
			goto IL_0134;
		}
	}
	{
		STypeU5BU5D_t7F9226F1F49DEB3E55CBA20E7783D5CA9B9B8233* L_57 = ___2_t;
		int32_t L_58 = ___4_slot;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		uint8_t L_60 = (uint8_t)(L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		if ((!(((uint32_t)L_60) == ((uint32_t)5))))
		{
			goto IL_0134;
		}
	}
	{
		uint8_t* L_61 = ___0_num;
		int32_t L_62 = ___3_bp;
		int32_t L_63 = ___4_slot;
		il2cpp_codegen_memcpy(L_64, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___5_val : &___5_val), SizeOf_T_t3D55EB701580274AECCA1495ED282F2A50E48977);
		RuntimeObject* L_65 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_64);
		il2cpp_codegen_runtime_class_init_inline(Vm_tC938AD9E0E3B8D0FD2E17DF81CA7F1792FA35DF7_il2cpp_TypeInfo_var);
		double L_66;
		L_66 = Vm_CoerceBoxedR8_mF7F308B32B132BCB5A666E47D040DEB95332155A(L_65, NULL);
		il2cpp_unsafe_write_unaligned((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_61, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_62, L_63)), 4)))), L_66);
		return;
	}

IL_0134:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_67 = ___1_r;
		int32_t L_68 = ___3_bp;
		int32_t L_69 = ___4_slot;
		il2cpp_codegen_memcpy(L_70, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___5_val : &___5_val), SizeOf_T_t3D55EB701580274AECCA1495ED282F2A50E48977);
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_70);
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_71);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_68, L_69))), (RuntimeObject*)L_71);
		return;
	}
}
// Method Definition Index: 124651
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBuffer_As_TisIl2CppFullySharedGenericStruct_mAE794C5A00C200AFC74CCF4B4FAB2B5A2694FD93_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBBB9985B91877399493741FCE2956EECA89B19C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_tBBB9985B91877399493741FCE2956EECA89B19C8);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = PhysicsBuffer_get_size_mAEAF52B701BE344321D134AB9E325B8CAD461913_inline(__this, NULL);
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25EF8DAFAD021DCAB65A3C4EEC85818E49BE42F4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001d:
	{
		intptr_t* L_4 = (intptr_t*)(&__this->___m_Buffer);
		void* L_5;
		L_5 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_4, NULL);
		int32_t L_6 = ___0_index;
		Il2CppFullySharedGenericStruct* L_7;
		L_7 = ((  Il2CppFullySharedGenericStruct* (*) (void*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_8, L_7, SizeOf_T_tBBB9985B91877399493741FCE2956EECA89B19C8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_T_tBBB9985B91877399493741FCE2956EECA89B19C8);
		return;
	}
}
IL2CPP_EXTERN_C  void PhysicsBuffer_As_TisIl2CppFullySharedGenericStruct_mAE794C5A00C200AFC74CCF4B4FAB2B5A2694FD93_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	PhysicsBuffer_As_TisIl2CppFullySharedGenericStruct_mAE794C5A00C200AFC74CCF4B4FAB2B5A2694FD93(_thisAdjusted, ___0_index, il2cppRetVal, method);
	return;
}
// Method Definition Index: 124650
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PhysicsBuffer_AsEngineObject_TisIl2CppSharedGenericObject_m5723F9F7C85223946EA265593949FBDA4A9805BD_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_ArrayElementAsRef_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1E646BFF355146C3ED67F27D778DD41355FC2466_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = PhysicsBuffer_get_size_mAEAF52B701BE344321D134AB9E325B8CAD461913_inline(__this, NULL);
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25EF8DAFAD021DCAB65A3C4EEC85818E49BE42F4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001d:
	{
		intptr_t* L_4 = (intptr_t*)(&__this->___m_Buffer);
		void* L_5;
		L_5 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_4, NULL);
		int32_t L_6 = ___0_index;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_7;
		L_7 = UnsafeUtility_ArrayElementAsRef_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1E646BFF355146C3ED67F27D778DD41355FC2466_inline(L_5, L_6, UnsafeUtility_ArrayElementAsRef_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1E646BFF355146C3ED67F27D778DD41355FC2466_RuntimeMethod_var);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_8 = (*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_7);
		V_0 = L_8;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_9 = V_0;
		bool L_10;
		L_10 = Resources_EntityIdIsValid_m5AC0D5EFD7367CE19AABEE8B081B924BEC5CDE8E(L_9, NULL);
		if (L_10)
		{
			goto IL_0046;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_11 = V_1;
		return L_11;
	}

IL_0046:
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_12 = V_0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_13;
		L_13 = Resources_EntityIdToObject_m4F01E04BA6CCEE4F56172C135C489F90AFF7054C(L_12, NULL);
		return ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_13, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
IL2CPP_EXTERN_C  Il2CppSharedGenericObject* PhysicsBuffer_AsEngineObject_TisIl2CppSharedGenericObject_m5723F9F7C85223946EA265593949FBDA4A9805BD_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	Il2CppSharedGenericObject* _returnValue;
	_returnValue = PhysicsBuffer_AsEngineObject_TisIl2CppSharedGenericObject_m5723F9F7C85223946EA265593949FBDA4A9805BD(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
// Method Definition Index: 124645
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D PhysicsBuffer_FromNativeArray_TisIl2CppFullySharedGenericStruct_m906E14015AB07957F99A05463F115D299068323E_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1;
		L_1 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_1, NULL);
		int32_t L_3;
		L_3 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___0_nativeArray), il2cpp_rgctx_method(method->rgctx_data, 2));
		PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D L_4;
		memset((&L_4), 0, sizeof(L_4));
		PhysicsBuffer__ctor_m814B8671FCEF6928660814C51CA6041B662740A9((&L_4), L_2, L_3, (int32_t)1, NULL);
		return L_4;
	}
}
// Method Definition Index: 124646
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D PhysicsBuffer_FromSpan_TisCapsuleGeometry_t8CA8C33EE49A6D2C844994843EA844030957489C_m70A98981993818BA68ED58AF6D1F58DAF76421FA_gshared (ReadOnlySpan_1_tF0D3F37553DD1B6B958870218E09EE158414F2ED ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	CapsuleGeometry_t8CA8C33EE49A6D2C844994843EA844030957489C* V_0 = NULL;
	{
		CapsuleGeometry_t8CA8C33EE49A6D2C844994843EA844030957489C* L_0;
		L_0 = ReadOnlySpan_1_GetPinnableReference_mCD9A5BEAD2D6623C535DCFA8CECC35CEDA90FDFD((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		CapsuleGeometry_t8CA8C33EE49A6D2C844994843EA844030957489C* L_1 = V_0;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,CapsuleGeometry_t8CA8C33EE49A6D2C844994843EA844030957489C*,intptr_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m449178AA264C94D941010EDDE025EA50B9B0E811_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D L_5;
		memset((&L_5), 0, sizeof(L_5));
		PhysicsBuffer__ctor_m814B8671FCEF6928660814C51CA6041B662740A9((&L_5), L_3, L_4, (int32_t)1, NULL);
		return L_5;
	}
}
// Method Definition Index: 124646
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D PhysicsBuffer_FromSpan_TisChainSegmentGeometry_t483ECD5EAFF90B8C135C3F9FE4AF01938157907B_mDA539ED5AB5FEC48E7527F3C8E5EF9296172CA4C_gshared (ReadOnlySpan_1_tBE12606EBCA9AA35135C1027DBC000335D3429AA ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	ChainSegmentGeometry_t483ECD5EAFF90B8C135C3F9FE4AF01938157907B* V_0 = NULL;
	{
		ChainSegmentGeometry_t483ECD5EAFF90B8C135C3F9FE4AF01938157907B* L_0;
		L_0 = ReadOnlySpan_1_GetPinnableReference_m7A69CDDC21C771B70BD96FE6B06C3C5DB85E6FA9((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		ChainSegmentGeometry_t483ECD5EAFF90B8C135C3F9FE4AF01938157907B* L_1 = V_0;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,ChainSegmentGeometry_t483ECD5EAFF90B8C135C3F9FE4AF01938157907B*,intptr_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m79C31F2A1C10139B17341A32866E4F0FA5697858_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D L_5;
		memset((&L_5), 0, sizeof(L_5));
		PhysicsBuffer__ctor_m814B8671FCEF6928660814C51CA6041B662740A9((&L_5), L_3, L_4, (int32_t)1, NULL);
		return L_5;
	}
}
// Method Definition Index: 124646
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D PhysicsBuffer_FromSpan_TisCircleGeometry_t97E50999C448C5A67CDC19AA5B50FF81EFEAA8FF_mDC657F21EE5E07763ACCEBF986A0BD1C82202355_gshared (ReadOnlySpan_1_tD531AA78AA74FE78546EE84A387B9ED77629839F ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	CircleGeometry_t97E50999C448C5A67CDC19AA5B50FF81EFEAA8FF* V_0 = NULL;
	{
		CircleGeometry_t97E50999C448C5A67CDC19AA5B50FF81EFEAA8FF* L_0;
		L_0 = ReadOnlySpan_1_GetPinnableReference_m0F95D10E655629C57A5B2103B5BDBF585456F6F7((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		CircleGeometry_t97E50999C448C5A67CDC19AA5B50FF81EFEAA8FF* L_1 = V_0;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,CircleGeometry_t97E50999C448C5A67CDC19AA5B50FF81EFEAA8FF*,intptr_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_mF1E1657EBF5BE24F7D7D9BE2CAFDD4D71FEC81EA_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D L_5;
		memset((&L_5), 0, sizeof(L_5));
		PhysicsBuffer__ctor_m814B8671FCEF6928660814C51CA6041B662740A9((&L_5), L_3, L_4, (int32_t)1, NULL);
		return L_5;
	}
}
// Method Definition Index: 124646
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D PhysicsBuffer_FromSpan_TisPhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E_m6655DAAC734BDBFAD4A4FA08B011FF3C78FBE181_gshared (ReadOnlySpan_1_tEBFBB86154B8F846CDA49C4A8FDDF723E53CDAB4 ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E* V_0 = NULL;
	{
		PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E* L_0;
		L_0 = ReadOnlySpan_1_GetPinnableReference_mEF11FDBD7959E4841FA4B6347A42F15764F013A7((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E* L_1 = V_0;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E*,intptr_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_mA03C99C74D9153BDEB3BD16E5DA2A5AE7398BB0B_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D L_5;
		memset((&L_5), 0, sizeof(L_5));
		PhysicsBuffer__ctor_m814B8671FCEF6928660814C51CA6041B662740A9((&L_5), L_3, L_4, (int32_t)1, NULL);
		return L_5;
	}
}
// Method Definition Index: 124646
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D PhysicsBuffer_FromSpan_TisPolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491_mA0A1B38A7AF1932D4E1E21E32B685B35F7453C8A_gshared (ReadOnlySpan_1_tDDF73876F1321C012BBAA81983863A4AA515F80B ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	PolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491* V_0 = NULL;
	{
		PolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491* L_0;
		L_0 = ReadOnlySpan_1_GetPinnableReference_mCA9137548412A20891E6F45CC2FA60EA4EB9EB50((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		PolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491* L_1 = V_0;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,PolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491*,intptr_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m73320AEECF6C1AFADC8C19BCB951F343FD281336_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D L_5;
		memset((&L_5), 0, sizeof(L_5));
		PhysicsBuffer__ctor_m814B8671FCEF6928660814C51CA6041B662740A9((&L_5), L_3, L_4, (int32_t)1, NULL);
		return L_5;
	}
}
// Method Definition Index: 124646
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D PhysicsBuffer_FromSpan_TisSegmentGeometry_tB93A6D3EFCC2E4140411F9A1EED7746CBD2560B0_m8DEDA19F1551625A9AD624099FB763F609C43FEB_gshared (ReadOnlySpan_1_t1894F878DC4CD8CF0D78EC486B840E7DBE3C5A2E ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	SegmentGeometry_tB93A6D3EFCC2E4140411F9A1EED7746CBD2560B0* V_0 = NULL;
	{
		SegmentGeometry_tB93A6D3EFCC2E4140411F9A1EED7746CBD2560B0* L_0;
		L_0 = ReadOnlySpan_1_GetPinnableReference_mD482EBE84E4AD9CE84AC38798C514FF517555B27((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		SegmentGeometry_tB93A6D3EFCC2E4140411F9A1EED7746CBD2560B0* L_1 = V_0;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,SegmentGeometry_tB93A6D3EFCC2E4140411F9A1EED7746CBD2560B0*,intptr_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m30909A25A4B698D6CDE36DD17A2CCF12EB2A7AED_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D L_5;
		memset((&L_5), 0, sizeof(L_5));
		PhysicsBuffer__ctor_m814B8671FCEF6928660814C51CA6041B662740A9((&L_5), L_3, L_4, (int32_t)1, NULL);
		return L_5;
	}
}
// Method Definition Index: 124646
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D PhysicsBuffer_FromSpan_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m9E26006FE9FA225AC1DB63022129B19C35B2FC07_gshared (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64 ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* V_0 = NULL;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0;
		L_0 = ReadOnlySpan_1_GetPinnableReference_m4469BE44DC19B575A1F0B8CA6A52BF5051400AF6((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = V_0;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*,intptr_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m5D8561BF76A2451939095A0ABC980794FD4FBC76_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D L_5;
		memset((&L_5), 0, sizeof(L_5));
		PhysicsBuffer__ctor_m814B8671FCEF6928660814C51CA6041B662740A9((&L_5), L_3, L_4, (int32_t)1, NULL);
		return L_5;
	}
}
// Method Definition Index: 124646
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D PhysicsBuffer_FromSpan_TisIl2CppFullySharedGenericStruct_mCE92AD089F7A536C1AA3CF27549D37BDAD6EE02F_gshared (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	{
		Il2CppFullySharedGenericStruct* L_0;
		L_0 = ((  Il2CppFullySharedGenericStruct* (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		Il2CppFullySharedGenericStruct* L_1 = V_0;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		int32_t L_4;
		L_4 = ((  int32_t (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D L_5;
		memset((&L_5), 0, sizeof(L_5));
		PhysicsBuffer__ctor_m814B8671FCEF6928660814C51CA6041B662740A9((&L_5), L_3, L_4, (int32_t)1, NULL);
		return L_5;
	}
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5B687D4D8EF0D5A734B403E25783AA11DAB5ABB9 PhysicsBuffer_ToNativeArray_TisChainSegmentGeometry_t483ECD5EAFF90B8C135C3F9FE4AF01938157907B_m8A9991FDD9BBE266C09C8288B913DC3D47707B59_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_t5B687D4D8EF0D5A734B403E25783AA11DAB5ABB9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t5B687D4D8EF0D5A734B403E25783AA11DAB5ABB9));
		NativeArray_1_t5B687D4D8EF0D5A734B403E25783AA11DAB5ABB9 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t5B687D4D8EF0D5A734B403E25783AA11DAB5ABB9 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisChainSegmentGeometry_t483ECD5EAFF90B8C135C3F9FE4AF01938157907B_m32B41D23DB08BB1F30797EEF773AA9D1EBC71B89(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t5B687D4D8EF0D5A734B403E25783AA11DAB5ABB9 PhysicsBuffer_ToNativeArray_TisChainSegmentGeometry_t483ECD5EAFF90B8C135C3F9FE4AF01938157907B_m8A9991FDD9BBE266C09C8288B913DC3D47707B59_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_t5B687D4D8EF0D5A734B403E25783AA11DAB5ABB9 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisChainSegmentGeometry_t483ECD5EAFF90B8C135C3F9FE4AF01938157907B_m8A9991FDD9BBE266C09C8288B913DC3D47707B59(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1955F5A2D6B6CF9C74B693C6993640945C206182 PhysicsBuffer_ToNativeArray_TisPhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0_mD2BBE8895EA35EC2012554A8760803D5D89168EE_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_t1955F5A2D6B6CF9C74B693C6993640945C206182 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t1955F5A2D6B6CF9C74B693C6993640945C206182));
		NativeArray_1_t1955F5A2D6B6CF9C74B693C6993640945C206182 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t1955F5A2D6B6CF9C74B693C6993640945C206182 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0_m6928B0F59943142D0AA193F98AA997ABEEB8B5ED(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t1955F5A2D6B6CF9C74B693C6993640945C206182 PhysicsBuffer_ToNativeArray_TisPhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0_mD2BBE8895EA35EC2012554A8760803D5D89168EE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_t1955F5A2D6B6CF9C74B693C6993640945C206182 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisPhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0_mD2BBE8895EA35EC2012554A8760803D5D89168EE(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFBB41680F508846EF66B64B909CF1C94F028D751 PhysicsBuffer_ToNativeArray_TisPhysicsComposer_t0D54F067D6F10F1736E0A1667194CA45802E491B_m50860B05893D30A0DF82FDE385D68427881D2BA8_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_tFBB41680F508846EF66B64B909CF1C94F028D751 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tFBB41680F508846EF66B64B909CF1C94F028D751));
		NativeArray_1_tFBB41680F508846EF66B64B909CF1C94F028D751 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tFBB41680F508846EF66B64B909CF1C94F028D751 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsComposer_t0D54F067D6F10F1736E0A1667194CA45802E491B_m789C3AFB367AB2CBB5E47DFD26031481A8D25606(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tFBB41680F508846EF66B64B909CF1C94F028D751 PhysicsBuffer_ToNativeArray_TisPhysicsComposer_t0D54F067D6F10F1736E0A1667194CA45802E491B_m50860B05893D30A0DF82FDE385D68427881D2BA8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tFBB41680F508846EF66B64B909CF1C94F028D751 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisPhysicsComposer_t0D54F067D6F10F1736E0A1667194CA45802E491B_m50860B05893D30A0DF82FDE385D68427881D2BA8(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t513290E0A324DCD182DCA6498DBAF3A05E5CD9B5 PhysicsBuffer_ToNativeArray_TisPhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2_mA45877F258189126381DDB425389515CF7F879F2_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_t513290E0A324DCD182DCA6498DBAF3A05E5CD9B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t513290E0A324DCD182DCA6498DBAF3A05E5CD9B5));
		NativeArray_1_t513290E0A324DCD182DCA6498DBAF3A05E5CD9B5 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t513290E0A324DCD182DCA6498DBAF3A05E5CD9B5 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2_m950FA8ECD1115ACDDC4A3DD386FA7ED016CD9B18(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t513290E0A324DCD182DCA6498DBAF3A05E5CD9B5 PhysicsBuffer_ToNativeArray_TisPhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2_mA45877F258189126381DDB425389515CF7F879F2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_t513290E0A324DCD182DCA6498DBAF3A05E5CD9B5 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisPhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2_mA45877F258189126381DDB425389515CF7F879F2(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7EE56341AC682502E85A5EF49CC27E17E9690BEB PhysicsBuffer_ToNativeArray_TisPhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884_m01EDC91A4FFBF1032ADF3888D1BB781C7A9AFD02_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_t7EE56341AC682502E85A5EF49CC27E17E9690BEB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t7EE56341AC682502E85A5EF49CC27E17E9690BEB));
		NativeArray_1_t7EE56341AC682502E85A5EF49CC27E17E9690BEB L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t7EE56341AC682502E85A5EF49CC27E17E9690BEB L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884_m9D219C57941E9EAF46B14B958A72D3B6AD0BA869(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t7EE56341AC682502E85A5EF49CC27E17E9690BEB PhysicsBuffer_ToNativeArray_TisPhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884_m01EDC91A4FFBF1032ADF3888D1BB781C7A9AFD02_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_t7EE56341AC682502E85A5EF49CC27E17E9690BEB _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisPhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884_m01EDC91A4FFBF1032ADF3888D1BB781C7A9AFD02(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t52D6C05C06C1C10CBE2B796B376B3C7266352646 PhysicsBuffer_ToNativeArray_TisPhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E_m71AA4BFB40CB51963645412092946C7D3EF868E3_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_t52D6C05C06C1C10CBE2B796B376B3C7266352646 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t52D6C05C06C1C10CBE2B796B376B3C7266352646));
		NativeArray_1_t52D6C05C06C1C10CBE2B796B376B3C7266352646 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t52D6C05C06C1C10CBE2B796B376B3C7266352646 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E_m1F401867CAC196F0F157B3B7BB9BBBC80DB8A527(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t52D6C05C06C1C10CBE2B796B376B3C7266352646 PhysicsBuffer_ToNativeArray_TisPhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E_m71AA4BFB40CB51963645412092946C7D3EF868E3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_t52D6C05C06C1C10CBE2B796B376B3C7266352646 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisPhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E_m71AA4BFB40CB51963645412092946C7D3EF868E3(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2E2285B626C87F8E3108409F3D80DC1200D3E426 PhysicsBuffer_ToNativeArray_TisPhysicsUserData_t767769E7B130D2A0974D0FA6F9477DF8AED0D113_m7CA335F35F624B4A9F88BC1C445C8658AE7F57A0_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_t2E2285B626C87F8E3108409F3D80DC1200D3E426 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t2E2285B626C87F8E3108409F3D80DC1200D3E426));
		NativeArray_1_t2E2285B626C87F8E3108409F3D80DC1200D3E426 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t2E2285B626C87F8E3108409F3D80DC1200D3E426 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsUserData_t767769E7B130D2A0974D0FA6F9477DF8AED0D113_m5D54A66E7BB7818506F6D602B1E550303BDEF93E(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t2E2285B626C87F8E3108409F3D80DC1200D3E426 PhysicsBuffer_ToNativeArray_TisPhysicsUserData_t767769E7B130D2A0974D0FA6F9477DF8AED0D113_m7CA335F35F624B4A9F88BC1C445C8658AE7F57A0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_t2E2285B626C87F8E3108409F3D80DC1200D3E426 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisPhysicsUserData_t767769E7B130D2A0974D0FA6F9477DF8AED0D113_m7CA335F35F624B4A9F88BC1C445C8658AE7F57A0(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFACF37504B027B37F837C5C512620EA6C6C34D17 PhysicsBuffer_ToNativeArray_TisPhysicsWorld_tD76337CF6B632797461123938E650738C9A18952_mCCB1DB266C4D369A7E9B15C194EFEB608625237D_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_tFACF37504B027B37F837C5C512620EA6C6C34D17 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tFACF37504B027B37F837C5C512620EA6C6C34D17));
		NativeArray_1_tFACF37504B027B37F837C5C512620EA6C6C34D17 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tFACF37504B027B37F837C5C512620EA6C6C34D17 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsWorld_tD76337CF6B632797461123938E650738C9A18952_m8368BFFFF55BAFBE6EC3F8A61CB4EAAA5339C933(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tFACF37504B027B37F837C5C512620EA6C6C34D17 PhysicsBuffer_ToNativeArray_TisPhysicsWorld_tD76337CF6B632797461123938E650738C9A18952_mCCB1DB266C4D369A7E9B15C194EFEB608625237D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tFACF37504B027B37F837C5C512620EA6C6C34D17 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisPhysicsWorld_tD76337CF6B632797461123938E650738C9A18952_mCCB1DB266C4D369A7E9B15C194EFEB608625237D(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4F89B4E62AB90AEF10712018502913808FD186BC PhysicsBuffer_ToNativeArray_TisPolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491_mE3A730A4814767971516F70B7DA143F8151F18B8_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_t4F89B4E62AB90AEF10712018502913808FD186BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t4F89B4E62AB90AEF10712018502913808FD186BC));
		NativeArray_1_t4F89B4E62AB90AEF10712018502913808FD186BC L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t4F89B4E62AB90AEF10712018502913808FD186BC L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491_mDBD3EED4E7583B04BF9A3E47FE66BC1FDCC5FDA0(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t4F89B4E62AB90AEF10712018502913808FD186BC PhysicsBuffer_ToNativeArray_TisPolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491_mE3A730A4814767971516F70B7DA143F8151F18B8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_t4F89B4E62AB90AEF10712018502913808FD186BC _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisPolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491_mE3A730A4814767971516F70B7DA143F8151F18B8(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 PhysicsBuffer_ToNativeArray_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_mDC12FD391CA2B0DE172852756B47AC04FD341C48_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395));
		NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m7BA23DE8D084CC54FCBC238132BD26D78EE99CAC(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 PhysicsBuffer_ToNativeArray_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_mDC12FD391CA2B0DE172852756B47AC04FD341C48_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_mDC12FD391CA2B0DE172852756B47AC04FD341C48(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 PhysicsBuffer_ToNativeArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7D29FD6303FF3F39132017CA90B6D1E366FE379B_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70));
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8CC23F9B357DD3415FAB8C319466BEAA6365AF44(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 PhysicsBuffer_ToNativeArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7D29FD6303FF3F39132017CA90B6D1E366FE379B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7D29FD6303FF3F39132017CA90B6D1E366FE379B(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m0F9AFB55DC2B342DB7011F2046193F6C30B035C1_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6;
		L_6 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m0F9AFB55DC2B342DB7011F2046193F6C30B035C1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m0F9AFB55DC2B342DB7011F2046193F6C30B035C1(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t43D275834918D28FE4F8A9644B7705940C0AD9A7 PhysicsBuffer_ToNativeArray_TisBatchTransform_tF14188CE07ECF9D6C90EA2D28AD5BD0D102500F8_m934A0CB2DA8DBBE4EA1D60CF9C57E162043FF10F_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_t43D275834918D28FE4F8A9644B7705940C0AD9A7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t43D275834918D28FE4F8A9644B7705940C0AD9A7));
		NativeArray_1_t43D275834918D28FE4F8A9644B7705940C0AD9A7 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t43D275834918D28FE4F8A9644B7705940C0AD9A7 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchTransform_tF14188CE07ECF9D6C90EA2D28AD5BD0D102500F8_m2846C2467B152929DBF39BBDD9C732CB8A595AC7(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t43D275834918D28FE4F8A9644B7705940C0AD9A7 PhysicsBuffer_ToNativeArray_TisBatchTransform_tF14188CE07ECF9D6C90EA2D28AD5BD0D102500F8_m934A0CB2DA8DBBE4EA1D60CF9C57E162043FF10F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_t43D275834918D28FE4F8A9644B7705940C0AD9A7 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisBatchTransform_tF14188CE07ECF9D6C90EA2D28AD5BD0D102500F8_m934A0CB2DA8DBBE4EA1D60CF9C57E162043FF10F(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDED6FCA1E4D28CF2C395A2A27DD95C54BCA8FCF2 PhysicsBuffer_ToNativeArray_TisBatchVelocity_t501F06AA00DEDE1275412DA5B4821CF758D94D9D_m719D1C0371596E27E12F271F0466869EE134413C_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_tDED6FCA1E4D28CF2C395A2A27DD95C54BCA8FCF2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDED6FCA1E4D28CF2C395A2A27DD95C54BCA8FCF2));
		NativeArray_1_tDED6FCA1E4D28CF2C395A2A27DD95C54BCA8FCF2 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tDED6FCA1E4D28CF2C395A2A27DD95C54BCA8FCF2 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVelocity_t501F06AA00DEDE1275412DA5B4821CF758D94D9D_m9D5A6E6CFD9A30A200796158A8AA579403DF13AD(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tDED6FCA1E4D28CF2C395A2A27DD95C54BCA8FCF2 PhysicsBuffer_ToNativeArray_TisBatchVelocity_t501F06AA00DEDE1275412DA5B4821CF758D94D9D_m719D1C0371596E27E12F271F0466869EE134413C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tDED6FCA1E4D28CF2C395A2A27DD95C54BCA8FCF2 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisBatchVelocity_t501F06AA00DEDE1275412DA5B4821CF758D94D9D_m719D1C0371596E27E12F271F0466869EE134413C(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 PhysicsBuffer_ToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m0F0ABCE955A32EF09A1B87865A417AEB795563F6_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86));
		NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mCAB0D1991E3CA4A5F2B29699805088ED767C85BF(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 PhysicsBuffer_ToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m0F0ABCE955A32EF09A1B87865A417AEB795563F6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m0F0ABCE955A32EF09A1B87865A417AEB795563F6(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5057373BCCFB0DA5922C43EECB102CA6C709A74C PhysicsBuffer_ToNativeArray_TisLayerHandle_t06582578F9B5D5AA335BFCDE0973956EF5648900_mA2469A90E1E98BCA4984B655678FCAAE074DED37_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_t5057373BCCFB0DA5922C43EECB102CA6C709A74C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t5057373BCCFB0DA5922C43EECB102CA6C709A74C));
		NativeArray_1_t5057373BCCFB0DA5922C43EECB102CA6C709A74C L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t5057373BCCFB0DA5922C43EECB102CA6C709A74C L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLayerHandle_t06582578F9B5D5AA335BFCDE0973956EF5648900_m61980759D0BB8795012206121AE1C3D14386A38F(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t5057373BCCFB0DA5922C43EECB102CA6C709A74C PhysicsBuffer_ToNativeArray_TisLayerHandle_t06582578F9B5D5AA335BFCDE0973956EF5648900_mA2469A90E1E98BCA4984B655678FCAAE074DED37_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_t5057373BCCFB0DA5922C43EECB102CA6C709A74C _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisLayerHandle_t06582578F9B5D5AA335BFCDE0973956EF5648900_mA2469A90E1E98BCA4984B655678FCAAE074DED37(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 PhysicsBuffer_ToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_mED810731A42A4D8DA091409BE1118284E1BDCE90_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68));
		NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m9FF20AB277A63B6352D86FBE981963C274C1F6CA(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 PhysicsBuffer_ToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_mED810731A42A4D8DA091409BE1118284E1BDCE90_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_mED810731A42A4D8DA091409BE1118284E1BDCE90(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t242EA087C31CF87D5A5E65EEBF896B10DBF5CB8A PhysicsBuffer_ToNativeArray_TisWorldCastResult_tA5F20990A18CBE633E414F5B797A068CD2BEF350_mC34BDA03F7721ADE6FAFC7060A2A9E6FE02A8190_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_t242EA087C31CF87D5A5E65EEBF896B10DBF5CB8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t242EA087C31CF87D5A5E65EEBF896B10DBF5CB8A));
		NativeArray_1_t242EA087C31CF87D5A5E65EEBF896B10DBF5CB8A L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t242EA087C31CF87D5A5E65EEBF896B10DBF5CB8A L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisWorldCastResult_tA5F20990A18CBE633E414F5B797A068CD2BEF350_mF0738D1886BAA339A214E4AED524BA65E8B108D8(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t242EA087C31CF87D5A5E65EEBF896B10DBF5CB8A PhysicsBuffer_ToNativeArray_TisWorldCastResult_tA5F20990A18CBE633E414F5B797A068CD2BEF350_mC34BDA03F7721ADE6FAFC7060A2A9E6FE02A8190_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_t242EA087C31CF87D5A5E65EEBF896B10DBF5CB8A _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisWorldCastResult_tA5F20990A18CBE633E414F5B797A068CD2BEF350_mC34BDA03F7721ADE6FAFC7060A2A9E6FE02A8190(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE29E3ED5CA86EDA2FA7172C4E8C5A81CDA112814 PhysicsBuffer_ToNativeArray_TisWorldOverlapResult_t6440E0FA2B383A6C681DCBC60521D2067324DAC7_m0513E79895BED8B1C732A8C6B543F4056D0CF8A3_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_tE29E3ED5CA86EDA2FA7172C4E8C5A81CDA112814 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tE29E3ED5CA86EDA2FA7172C4E8C5A81CDA112814));
		NativeArray_1_tE29E3ED5CA86EDA2FA7172C4E8C5A81CDA112814 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tE29E3ED5CA86EDA2FA7172C4E8C5A81CDA112814 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisWorldOverlapResult_t6440E0FA2B383A6C681DCBC60521D2067324DAC7_m1460A89145B46D715BA52388EAC28A1E67B2C587(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tE29E3ED5CA86EDA2FA7172C4E8C5A81CDA112814 PhysicsBuffer_ToNativeArray_TisWorldOverlapResult_t6440E0FA2B383A6C681DCBC60521D2067324DAC7_m0513E79895BED8B1C732A8C6B543F4056D0CF8A3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tE29E3ED5CA86EDA2FA7172C4E8C5A81CDA112814 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisWorldOverlapResult_t6440E0FA2B383A6C681DCBC60521D2067324DAC7_m0513E79895BED8B1C732A8C6B543F4056D0CF8A3(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4EA7C2C907A5808957A1EF51CB28B00D72CB4FAA PhysicsBuffer_ToNativeArray_TisContact_tDF846FDDD399484433CB94E46C0F7E64F0281BC7_m52BB10FF98D8C77C892B9B98CE83A6BF06692994_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_t4EA7C2C907A5808957A1EF51CB28B00D72CB4FAA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t4EA7C2C907A5808957A1EF51CB28B00D72CB4FAA));
		NativeArray_1_t4EA7C2C907A5808957A1EF51CB28B00D72CB4FAA L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t4EA7C2C907A5808957A1EF51CB28B00D72CB4FAA L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisContact_tDF846FDDD399484433CB94E46C0F7E64F0281BC7_m8AB9AD9247CB2C1A8DFA5740FF92736DCF0302CD(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t4EA7C2C907A5808957A1EF51CB28B00D72CB4FAA PhysicsBuffer_ToNativeArray_TisContact_tDF846FDDD399484433CB94E46C0F7E64F0281BC7_m52BB10FF98D8C77C892B9B98CE83A6BF06692994_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_t4EA7C2C907A5808957A1EF51CB28B00D72CB4FAA _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisContact_tDF846FDDD399484433CB94E46C0F7E64F0281BC7_m52BB10FF98D8C77C892B9B98CE83A6BF06692994(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7BEEC93A8DEF32C574DE15C99F1CE5CB5FEAB1A3 PhysicsBuffer_ToNativeArray_TisMoverCollision_t603C4D37B274FCFBC00A7E51BA7B3E1E918D0718_mF0DD392ABDD2EFFFBB0E16B18040AD8CA36A26CF_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_t7BEEC93A8DEF32C574DE15C99F1CE5CB5FEAB1A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t7BEEC93A8DEF32C574DE15C99F1CE5CB5FEAB1A3));
		NativeArray_1_t7BEEC93A8DEF32C574DE15C99F1CE5CB5FEAB1A3 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t7BEEC93A8DEF32C574DE15C99F1CE5CB5FEAB1A3 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMoverCollision_t603C4D37B274FCFBC00A7E51BA7B3E1E918D0718_mE5B5A5B1998E83725912986A1AA8CEA26C032015(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t7BEEC93A8DEF32C574DE15C99F1CE5CB5FEAB1A3 PhysicsBuffer_ToNativeArray_TisMoverCollision_t603C4D37B274FCFBC00A7E51BA7B3E1E918D0718_mF0DD392ABDD2EFFFBB0E16B18040AD8CA36A26CF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_t7BEEC93A8DEF32C574DE15C99F1CE5CB5FEAB1A3 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisMoverCollision_t603C4D37B274FCFBC00A7E51BA7B3E1E918D0718_mF0DD392ABDD2EFFFBB0E16B18040AD8CA36A26CF(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB4CB6FDB6AC7D660B09475EF4D96C883004E21E9 PhysicsBuffer_ToNativeArray_TisConvexHull_tF012380011E47752145BD7DA69D0F23CF6A55A17_mB92B9E0A4B9EA9D2CC86951EB7ACCAF476ECC0F3_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_tB4CB6FDB6AC7D660B09475EF4D96C883004E21E9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tB4CB6FDB6AC7D660B09475EF4D96C883004E21E9));
		NativeArray_1_tB4CB6FDB6AC7D660B09475EF4D96C883004E21E9 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tB4CB6FDB6AC7D660B09475EF4D96C883004E21E9 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisConvexHull_tF012380011E47752145BD7DA69D0F23CF6A55A17_mAC20678F069EACFC4207BB35131C625A272933FB(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tB4CB6FDB6AC7D660B09475EF4D96C883004E21E9 PhysicsBuffer_ToNativeArray_TisConvexHull_tF012380011E47752145BD7DA69D0F23CF6A55A17_mB92B9E0A4B9EA9D2CC86951EB7ACCAF476ECC0F3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tB4CB6FDB6AC7D660B09475EF4D96C883004E21E9 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisConvexHull_tF012380011E47752145BD7DA69D0F23CF6A55A17_mB92B9E0A4B9EA9D2CC86951EB7ACCAF476ECC0F3(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF8B6C51A82B32878CAD4BB9D0613FAE6B152E340 PhysicsBuffer_ToNativeArray_TisPhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D_m774A260C0CBD212023E8B2657027F4411039D53E_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_tF8B6C51A82B32878CAD4BB9D0613FAE6B152E340 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tF8B6C51A82B32878CAD4BB9D0613FAE6B152E340));
		NativeArray_1_tF8B6C51A82B32878CAD4BB9D0613FAE6B152E340 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tF8B6C51A82B32878CAD4BB9D0613FAE6B152E340 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D_mC584342D045D007A14ABC8CD31D35A3B0532D7CE(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tF8B6C51A82B32878CAD4BB9D0613FAE6B152E340 PhysicsBuffer_ToNativeArray_TisPhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D_m774A260C0CBD212023E8B2657027F4411039D53E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tF8B6C51A82B32878CAD4BB9D0613FAE6B152E340 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisPhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D_m774A260C0CBD212023E8B2657027F4411039D53E(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m761C52C5AA4ADD227519287E54411DB038E5F202_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602));
		NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m9060EF20AD31BDDBF8E6A4D61F091D03B101F9E4(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m761C52C5AA4ADD227519287E54411DB038E5F202_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m761C52C5AA4ADD227519287E54411DB038E5F202(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m37B90A7486634E138E17A378C29EE9B9D5F8D885_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF));
		NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mEFA16883E3A65609AE169271BE4C8883BFC02D22(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m37B90A7486634E138E17A378C29EE9B9D5F8D885_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m37B90A7486634E138E17A378C29EE9B9D5F8D885(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 PhysicsBuffer_ToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_mF73C3A8A23424B2EDD8403FA8F98BB08FD0008F3_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683));
		NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m4A66A3B213055D7307CFE8FEFA301961ABB4D1C8(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 PhysicsBuffer_ToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_mF73C3A8A23424B2EDD8403FA8F98BB08FD0008F3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_mF73C3A8A23424B2EDD8403FA8F98BB08FD0008F3(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 PhysicsBuffer_ToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m879C0DE9D9F6C9C5F2FF350635AC52F4FF874788_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8));
		NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m5F6104B7BABDD0AAEFC152E74ED645A50510E900(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 PhysicsBuffer_ToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m879C0DE9D9F6C9C5F2FF350635AC52F4FF874788_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m879C0DE9D9F6C9C5F2FF350635AC52F4FF874788(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m8867F6CFE50831DD591716883D3B619545933E0E_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D));
		NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mBFD05CEEFBE002B3A028DCB2B994626108D1DE63(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m8867F6CFE50831DD591716883D3B619545933E0E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m8867F6CFE50831DD591716883D3B619545933E0E(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124649
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DC92A2EBDE62FBDF265E6AE37A3FAD4CB595ECF_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DC92A2EBDE62FBDF265E6AE37A3FAD4CB595ECF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DC92A2EBDE62FBDF265E6AE37A3FAD4CB595ECF(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124649
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tF22156099B21F5C06598D6E173048F8C01F33D83 PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_m4C979C268E948FEFF9A617E551F64B7D4F9B949F_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_tF22156099B21F5C06598D6E173048F8C01F33D83 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m2C752E42AC92651414D22133C0C6625168A0A27D_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_tF22156099B21F5C06598D6E173048F8C01F33D83 PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_m4C979C268E948FEFF9A617E551F64B7D4F9B949F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_tF22156099B21F5C06598D6E173048F8C01F33D83 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_m4C979C268E948FEFF9A617E551F64B7D4F9B949F(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124649
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t3807AC5721C4A53979AE58EB07B1EC72F69448EC PhysicsBuffer_ToReadOnlySpan_TisContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291_mC542CF1B4526AFBE92B94E64FCCFE2F710E78118_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t3807AC5721C4A53979AE58EB07B1EC72F69448EC L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m57750EFD352CEE1134B790C4C6A5DE73ED63B54B_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t3807AC5721C4A53979AE58EB07B1EC72F69448EC PhysicsBuffer_ToReadOnlySpan_TisContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291_mC542CF1B4526AFBE92B94E64FCCFE2F710E78118_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_t3807AC5721C4A53979AE58EB07B1EC72F69448EC _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291_mC542CF1B4526AFBE92B94E64FCCFE2F710E78118(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124649
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t9E895D63910F259C1074899C550D20E89B2D553F PhysicsBuffer_ToReadOnlySpan_TisContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002_m3B7CBE566D05687D5A0235545815F080D880668D_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t9E895D63910F259C1074899C550D20E89B2D553F L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m6F6DFB2F6031477E482545515ED358245E10E056_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t9E895D63910F259C1074899C550D20E89B2D553F PhysicsBuffer_ToReadOnlySpan_TisContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002_m3B7CBE566D05687D5A0235545815F080D880668D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_t9E895D63910F259C1074899C550D20E89B2D553F _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002_m3B7CBE566D05687D5A0235545815F080D880668D(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124649
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tBC27D59CA47B69695AF9B0FF96B6E1D7C10D5883 PhysicsBuffer_ToReadOnlySpan_TisContactHitEvent_t11EB60851A1F13BC732A3361C6CB37860A2AA427_mA26E0EBBB08051C5BE9F415B1A660BEFD046CE56_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_tBC27D59CA47B69695AF9B0FF96B6E1D7C10D5883 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m2D32168C1CB70E875B88C363738FB53621F6614D_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_tBC27D59CA47B69695AF9B0FF96B6E1D7C10D5883 PhysicsBuffer_ToReadOnlySpan_TisContactHitEvent_t11EB60851A1F13BC732A3361C6CB37860A2AA427_mA26E0EBBB08051C5BE9F415B1A660BEFD046CE56_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_tBC27D59CA47B69695AF9B0FF96B6E1D7C10D5883 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisContactHitEvent_t11EB60851A1F13BC732A3361C6CB37860A2AA427_mA26E0EBBB08051C5BE9F415B1A660BEFD046CE56(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124649
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2874BB641AC0FDE8BDD7E519FE425D7AD97D9A3A PhysicsBuffer_ToReadOnlySpan_TisJointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A_mA3C73A1391BA5802340713A354C2FA85082AA83F_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t2874BB641AC0FDE8BDD7E519FE425D7AD97D9A3A L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m11EA6EEFE4554A846FC9D7B03DDAD330ADF2438C_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t2874BB641AC0FDE8BDD7E519FE425D7AD97D9A3A PhysicsBuffer_ToReadOnlySpan_TisJointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A_mA3C73A1391BA5802340713A354C2FA85082AA83F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_t2874BB641AC0FDE8BDD7E519FE425D7AD97D9A3A _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisJointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A_mA3C73A1391BA5802340713A354C2FA85082AA83F(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124649
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t12C3D31E72C3DDB44A4B2BF75E16DB55699D73B3 PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9_mBBEBA9055D4B20C9CBFF21DF9E0A0F9158365665_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t12C3D31E72C3DDB44A4B2BF75E16DB55699D73B3 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_mB0245D1D81FC91908DE1B6CA216F03DEB24ED02B_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t12C3D31E72C3DDB44A4B2BF75E16DB55699D73B3 PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9_mBBEBA9055D4B20C9CBFF21DF9E0A0F9158365665_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_t12C3D31E72C3DDB44A4B2BF75E16DB55699D73B3 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9_mBBEBA9055D4B20C9CBFF21DF9E0A0F9158365665(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124649
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC7C975128DC0F98C7ED9FA23FA8763D48DEA8CD2 PhysicsBuffer_ToReadOnlySpan_TisTriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04_m7132F18A28541A42906FA743898DEF07780D1B84_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_tC7C975128DC0F98C7ED9FA23FA8763D48DEA8CD2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m10DCBC9FBEEC2E3D3CD372A15F538F7A41C5EA08_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_tC7C975128DC0F98C7ED9FA23FA8763D48DEA8CD2 PhysicsBuffer_ToReadOnlySpan_TisTriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04_m7132F18A28541A42906FA743898DEF07780D1B84_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_tC7C975128DC0F98C7ED9FA23FA8763D48DEA8CD2 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisTriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04_m7132F18A28541A42906FA743898DEF07780D1B84(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124649
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m770A3C01394D2ADEF3AE05D2F391E494DFA44810_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m770A3C01394D2ADEF3AE05D2F391E494DFA44810_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m770A3C01394D2ADEF3AE05D2F391E494DFA44810(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124649
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m66F49B0125C73F4C2E594465C8514787C9A2CB23_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m66F49B0125C73F4C2E594465C8514787C9A2CB23_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m66F49B0125C73F4C2E594465C8514787C9A2CB23(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124649
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m861F78494399043A9EBE243F321F948344054CB9_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m861F78494399043A9EBE243F321F948344054CB9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m861F78494399043A9EBE243F321F948344054CB9(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124649
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_mB799CAEE69F5B8E6EF2D017D55CE25C100D11ACF_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_mB799CAEE69F5B8E6EF2D017D55CE25C100D11ACF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_mB799CAEE69F5B8E6EF2D017D55CE25C100D11ACF(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124649
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m44C156471D4B8D3BB0599508FA4AA95421795B41_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m44C156471D4B8D3BB0599508FA4AA95421795B41_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m44C156471D4B8D3BB0599508FA4AA95421795B41(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124649
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m230051C58A774BEA26D6962E100FEFF0D990A22F_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m230051C58A774BEA26D6962E100FEFF0D990A22F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m230051C58A774BEA26D6962E100FEFF0D990A22F(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124648
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_m22DF411BC8A0B8ADBE386340363B69D520FEE64C_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_m22DF411BC8A0B8ADBE386340363B69D520FEE64C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD _returnValue;
	_returnValue = PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_m22DF411BC8A0B8ADBE386340363B69D520FEE64C(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124648
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 PhysicsBuffer_ToSpan_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2E205B73CBCD92B0B8B173F222A163671DE75E59_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m8B358C367FCD4C5DF714C69892BD3F238BC4BE78_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 PhysicsBuffer_ToSpan_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2E205B73CBCD92B0B8B173F222A163671DE75E59_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 _returnValue;
	_returnValue = PhysicsBuffer_ToSpan_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2E205B73CBCD92B0B8B173F222A163671DE75E59(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124648
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t180448960B6B6F682EFC16994B9716109E7DD2C6 PhysicsBuffer_ToSpan_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m2633F9F2C259437058E055B13A7AEC25B8C731E3_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		Span_1_t180448960B6B6F682EFC16994B9716109E7DD2C6 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m51D8F679F5F06C1A2F204248F5D37BC1D0F48BBA_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  Span_1_t180448960B6B6F682EFC16994B9716109E7DD2C6 PhysicsBuffer_ToSpan_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m2633F9F2C259437058E055B13A7AEC25B8C731E3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	Span_1_t180448960B6B6F682EFC16994B9716109E7DD2C6 _returnValue;
	_returnValue = PhysicsBuffer_ToSpan_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m2633F9F2C259437058E055B13A7AEC25B8C731E3(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124648
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t34B932F5AC7CBB47C9A670FA2E06063AE44CEEEE PhysicsBuffer_ToSpan_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mE3104A1F554819281D6CA3E6A869AF09CB7ABE93_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		Span_1_t34B932F5AC7CBB47C9A670FA2E06063AE44CEEEE L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_mED035A5AC87B33038AA174619E4302C09155861C_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  Span_1_t34B932F5AC7CBB47C9A670FA2E06063AE44CEEEE PhysicsBuffer_ToSpan_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mE3104A1F554819281D6CA3E6A869AF09CB7ABE93_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	Span_1_t34B932F5AC7CBB47C9A670FA2E06063AE44CEEEE _returnValue;
	_returnValue = PhysicsBuffer_ToSpan_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mE3104A1F554819281D6CA3E6A869AF09CB7ABE93(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124648
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t497BE6EFB8E493B6B683E05FE152E8C5354022CB PhysicsBuffer_ToSpan_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m1AE628C6071E045075AEB5007377FB7EDD9F7837_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		Span_1_t497BE6EFB8E493B6B683E05FE152E8C5354022CB L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m0CB110DE0E8428040F7C3E546CC39D3A2A9F659C_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  Span_1_t497BE6EFB8E493B6B683E05FE152E8C5354022CB PhysicsBuffer_ToSpan_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m1AE628C6071E045075AEB5007377FB7EDD9F7837_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	Span_1_t497BE6EFB8E493B6B683E05FE152E8C5354022CB _returnValue;
	_returnValue = PhysicsBuffer_ToSpan_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m1AE628C6071E045075AEB5007377FB7EDD9F7837(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124648
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tD01BE6CE0AD935A9C7F96CFE915AB46E9ECED0AA PhysicsBuffer_ToSpan_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m5E2AFF87776C7D8089764ED690EBB5705AE178C8_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		Span_1_tD01BE6CE0AD935A9C7F96CFE915AB46E9ECED0AA L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m149D219982FBB2A903D4C4E21FE5FE96FB5F5E06_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  Span_1_tD01BE6CE0AD935A9C7F96CFE915AB46E9ECED0AA PhysicsBuffer_ToSpan_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m5E2AFF87776C7D8089764ED690EBB5705AE178C8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	Span_1_tD01BE6CE0AD935A9C7F96CFE915AB46E9ECED0AA _returnValue;
	_returnValue = PhysicsBuffer_ToSpan_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m5E2AFF87776C7D8089764ED690EBB5705AE178C8(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 124648
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tFEDD78D7F7F7CAC447265BA315649C319C0AE5A9 PhysicsBuffer_ToSpan_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m4B91D4B8D3D01B0C43975EDE787675EE031441A5_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		Span_1_tFEDD78D7F7F7CAC447265BA315649C319C0AE5A9 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_mB9684F291E4E59C4673BF403C1FBB13959D13ED3_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  Span_1_tFEDD78D7F7F7CAC447265BA315649C319C0AE5A9 PhysicsBuffer_ToSpan_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m4B91D4B8D3D01B0C43975EDE787675EE031441A5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	Span_1_tFEDD78D7F7F7CAC447265BA315649C319C0AE5A9 _returnValue;
	_returnValue = PhysicsBuffer_ToSpan_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m4B91D4B8D3D01B0C43975EDE787675EE031441A5(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 25275
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manipulator_AddEnum_TisIl2CppFullySharedGenericStruct_mD50E71E36D14FD86128B510DDDA23C8D08E632C6_gshared (Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TEnum_t0DB63B528225BAE68E3D90636357C2D13B26914E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TEnum_t0DB63B528225BAE68E3D90636357C2D13B26914E);
	//<source_info:<no-source>:1>
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D));
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_0 = __this->___m_StyleSheet;
		il2cpp_codegen_memcpy(L_1, ___0_value, SizeOf_TEnum_t0DB63B528225BAE68E3D90636357C2D13B26914E);
		NullCheck(L_0);
		InvokerActionInvoker2< StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D*, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0, (&V_0), L_1);
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_2 = V_0;
		Manipulator_AddHandle_m7B6C6084B72FBE7A2CDA7DEC8647C25223279190(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Manipulator_AddEnum_TisIl2CppFullySharedGenericStruct_mD50E71E36D14FD86128B510DDDA23C8D08E632C6_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102>(__this);
	Manipulator_AddEnum_TisIl2CppFullySharedGenericStruct_mD50E71E36D14FD86128B510DDDA23C8D08E632C6(_thisAdjusted, ___0_value, method);
}
// Method Definition Index: 25281
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manipulator_InsertEnum_TisIl2CppFullySharedGenericStruct_m1E38C74DBADD2F9AED561B2B11BDBC2702E8130D_gshared (Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TEnum_t03BB014AD20289640FA83C2316B0FE6DD7AF4F81 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_TEnum_t03BB014AD20289640FA83C2316B0FE6DD7AF4F81);
	//<source_info:<no-source>:1>
	ValueSpan_t0B183BF71C7D3F5543356CC5CD002E927E743F4A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		ValueSpan_t0B183BF71C7D3F5543356CC5CD002E927E743F4A L_1;
		L_1 = Manipulator_GetValueSpan_m4217D468AF82D348F2EBC72B03EF04D531D69752(__this, L_0, (bool)1, NULL);
		V_0 = L_1;
		StyleProperty_tD117EB807BAA83855E65AC56B8D6FB84D6F7CF83* L_2 = __this->___m_Property;
		ValueSpan_t0B183BF71C7D3F5543356CC5CD002E927E743F4A L_3 = V_0;
		int32_t L_4 = L_3.___start;
		Manipulator_Insert_m4733FDCC00C3BB977351BED144E7333BAE7F1AF9(L_2, L_4, 1, NULL);
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_5 = __this->___m_StyleSheet;
		StyleProperty_tD117EB807BAA83855E65AC56B8D6FB84D6F7CF83* L_6 = __this->___m_Property;
		NullCheck(L_6);
		StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* L_7;
		L_7 = StyleProperty_get_values_mC1D996097014576222150D2F84685850FF4CEE2B_inline(L_6, NULL);
		ValueSpan_t0B183BF71C7D3F5543356CC5CD002E927E743F4A L_8 = V_0;
		int32_t L_9 = L_8.___start;
		NullCheck(L_7);
		il2cpp_codegen_memcpy(L_10, ___1_value, SizeOf_TEnum_t03BB014AD20289640FA83C2316B0FE6DD7AF4F81);
		NullCheck(L_5);
		InvokerActionInvoker2< StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D*, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_5, ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), L_10);
		return;
	}
}
IL2CPP_EXTERN_C  void Manipulator_InsertEnum_TisIl2CppFullySharedGenericStruct_m1E38C74DBADD2F9AED561B2B11BDBC2702E8130D_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method)
{
	Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102>(__this);
	Manipulator_InsertEnum_TisIl2CppFullySharedGenericStruct_m1E38C74DBADD2F9AED561B2B11BDBC2702E8130D(_thisAdjusted, ___0_index, ___1_value, method);
}
// Method Definition Index: 25278
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manipulator_SetEnum_TisIl2CppFullySharedGenericStruct_m8D2F788A22BB9A17052A0355E264539ABE3E5F67_gshared (Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TEnum_t9AF97EF896BA2C2537A4FF85517AFEB04478B12A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_TEnum_t9AF97EF896BA2C2537A4FF85517AFEB04478B12A);
	//<source_info:<no-source>:1>
	ValueSpan_t0B183BF71C7D3F5543356CC5CD002E927E743F4A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		ValueSpan_t0B183BF71C7D3F5543356CC5CD002E927E743F4A L_1;
		L_1 = Manipulator_GetValueSpan_m4217D468AF82D348F2EBC72B03EF04D531D69752(__this, L_0, (bool)0, NULL);
		V_0 = L_1;
		Manipulator_ResizeValue_m0B9B2C0B4D35B4F1FB63A199F20DBF610179504B(__this, (&V_0), 1, NULL);
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_2 = __this->___m_StyleSheet;
		StyleProperty_tD117EB807BAA83855E65AC56B8D6FB84D6F7CF83* L_3 = __this->___m_Property;
		NullCheck(L_3);
		StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* L_4;
		L_4 = StyleProperty_get_values_mC1D996097014576222150D2F84685850FF4CEE2B_inline(L_3, NULL);
		ValueSpan_t0B183BF71C7D3F5543356CC5CD002E927E743F4A L_5 = V_0;
		int32_t L_6 = L_5.___start;
		NullCheck(L_4);
		il2cpp_codegen_memcpy(L_7, ___1_value, SizeOf_TEnum_t9AF97EF896BA2C2537A4FF85517AFEB04478B12A);
		NullCheck(L_2);
		InvokerActionInvoker2< StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D*, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_2, ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), L_7);
		return;
	}
}
IL2CPP_EXTERN_C  void Manipulator_SetEnum_TisIl2CppFullySharedGenericStruct_m8D2F788A22BB9A17052A0355E264539ABE3E5F67_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method)
{
	Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102>(__this);
	Manipulator_SetEnum_TisIl2CppFullySharedGenericStruct_m8D2F788A22BB9A17052A0355E264539ABE3E5F67(_thisAdjusted, ___0_index, ___1_value, method);
}
// Method Definition Index: 25297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manipulator_TryGetAssetReference_TisIl2CppSharedGenericObject_m285F8FB5ADCA1D62E6EE4E7E3D612798CC18A708_gshared (Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102* __this, int32_t ___0_index, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	ValueSpan_t0B183BF71C7D3F5543356CC5CD002E927E743F4A V_0;
	memset((&V_0), 0, sizeof(V_0));
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	Il2CppSharedGenericObject* V_2 = NULL;
	{
		int32_t L_0 = ___0_index;
		ValueSpan_t0B183BF71C7D3F5543356CC5CD002E927E743F4A L_1;
		L_1 = Manipulator_GetValueSpan_m4217D468AF82D348F2EBC72B03EF04D531D69752(__this, L_0, (bool)0, NULL);
		V_0 = L_1;
		ValueSpan_t0B183BF71C7D3F5543356CC5CD002E927E743F4A L_2 = V_0;
		int32_t L_3 = L_2.___length;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		Il2CppSharedGenericObject** L_4 = ___1_value;
		il2cpp_codegen_initobj(L_4, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}

IL_001b:
	{
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_5 = __this->___m_StyleSheet;
		StyleProperty_tD117EB807BAA83855E65AC56B8D6FB84D6F7CF83* L_6 = __this->___m_Property;
		NullCheck(L_6);
		StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* L_7;
		L_7 = StyleProperty_get_values_mC1D996097014576222150D2F84685850FF4CEE2B_inline(L_6, NULL);
		ValueSpan_t0B183BF71C7D3F5543356CC5CD002E927E743F4A L_8 = V_0;
		int32_t L_9 = L_8.___start;
		NullCheck(L_7);
		int32_t L_10 = L_9;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_5);
		bool L_12;
		L_12 = StyleSheet_TryReadAssetReference_m2E9C311E4692494508CC6BB3DDEA3A1255DF1A22(L_5, L_11, (&V_1), NULL);
		if (!L_12)
		{
			goto IL_005d;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_13 = V_1;
		V_2 = ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_13, il2cpp_rgctx_data(method->rgctx_data, 1)));
		Il2CppSharedGenericObject* L_14 = V_2;
		if (!L_14)
		{
			goto IL_005d;
		}
	}
	{
		Il2CppSharedGenericObject** L_15 = ___1_value;
		Il2CppSharedGenericObject* L_16 = V_2;
		*(Il2CppSharedGenericObject**)L_15 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_15, (void*)L_16);
		return (bool)1;
	}

IL_005d:
	{
		Il2CppSharedGenericObject** L_17 = ___1_value;
		il2cpp_codegen_initobj(L_17, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Manipulator_TryGetAssetReference_TisIl2CppSharedGenericObject_m285F8FB5ADCA1D62E6EE4E7E3D612798CC18A708_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method)
{
	Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102>(__this);
	bool _returnValue;
	_returnValue = Manipulator_TryGetAssetReference_TisIl2CppSharedGenericObject_m285F8FB5ADCA1D62E6EE4E7E3D612798CC18A708(_thisAdjusted, ___0_index, ___1_value, method);
	return _returnValue;
}
// Method Definition Index: 25283
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manipulator_TryGetEnum_TisIl2CppFullySharedGenericStruct_m72B758D5A51EBB85E690C3AC9CA0BCE2598F4DC3_gshared (Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TEnum_t854988443EE375C81CA1B408FB35E78D1E28D0F2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	//<source_info:<no-source>:1>
	ValueSpan_t0B183BF71C7D3F5543356CC5CD002E927E743F4A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		ValueSpan_t0B183BF71C7D3F5543356CC5CD002E927E743F4A L_1;
		L_1 = Manipulator_GetValueSpan_m4217D468AF82D348F2EBC72B03EF04D531D69752(__this, L_0, (bool)0, NULL);
		V_0 = L_1;
		ValueSpan_t0B183BF71C7D3F5543356CC5CD002E927E743F4A L_2 = V_0;
		int32_t L_3 = L_2.___length;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_4 = ___1_value;
		il2cpp_codegen_initobj(L_4, SizeOf_TEnum_t854988443EE375C81CA1B408FB35E78D1E28D0F2);
		return (bool)0;
	}

IL_001b:
	{
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_5 = __this->___m_StyleSheet;
		StyleProperty_tD117EB807BAA83855E65AC56B8D6FB84D6F7CF83* L_6 = __this->___m_Property;
		NullCheck(L_6);
		StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* L_7;
		L_7 = StyleProperty_get_values_mC1D996097014576222150D2F84685850FF4CEE2B_inline(L_6, NULL);
		ValueSpan_t0B183BF71C7D3F5543356CC5CD002E927E743F4A L_8 = V_0;
		int32_t L_9 = L_8.___start;
		NullCheck(L_7);
		int32_t L_10 = L_9;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Il2CppFullySharedGenericStruct* L_12 = ___1_value;
		NullCheck(L_5);
		bool L_13;
		L_13 = ((  bool (*) (StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428*, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_5, L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_13;
	}
}
IL2CPP_EXTERN_C  bool Manipulator_TryGetEnum_TisIl2CppFullySharedGenericStruct_m72B758D5A51EBB85E690C3AC9CA0BCE2598F4DC3_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* ___1_value, const RuntimeMethod* method)
{
	Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Manipulator_t50FBD9D9BA758EFF1C1D0333D4B02D3A9A3E8102>(__this);
	bool _returnValue;
	_returnValue = Manipulator_TryGetEnum_TisIl2CppFullySharedGenericStruct_m72B758D5A51EBB85E690C3AC9CA0BCE2598F4DC3(_thisAdjusted, ___0_index, ___1_value, method);
	return _returnValue;
}
// Method Definition Index: 173183
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 TilemapBuffer_As_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mCAE8D5C369B85A652106EBDC05664C52ACCE9503_gshared (TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		intptr_t* L_4 = (intptr_t*)(&__this->___m_Buffer);
		void* L_5;
		L_5 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_4, NULL);
		int32_t L_6 = ___0_index;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_7;
		L_7 = UnsafeUtility_ArrayElementAsRef_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m86F914D25CF4676024DF56901ACD7C8B1A93ECD5_inline(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_8 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_7);
		return L_8;
	}
}
IL2CPP_EXTERN_C  Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 TilemapBuffer_As_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mCAE8D5C369B85A652106EBDC05664C52ACCE9503_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D>(__this);
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 _returnValue;
	_returnValue = TilemapBuffer_As_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mCAE8D5C369B85A652106EBDC05664C52ACCE9503(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
// Method Definition Index: 173183
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapBuffer_As_TisIl2CppFullySharedGenericStruct_mE5ED3A21F10FF229819583D1747D45BDF6789F86_gshared (TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t436F604BB7B0CE3EEA1DB1E85CC8CB85886374E3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t436F604BB7B0CE3EEA1DB1E85CC8CB85886374E3);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		intptr_t* L_4 = (intptr_t*)(&__this->___m_Buffer);
		void* L_5;
		L_5 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_4, NULL);
		int32_t L_6 = ___0_index;
		Il2CppFullySharedGenericStruct* L_7;
		L_7 = ((  Il2CppFullySharedGenericStruct* (*) (void*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_8, L_7, SizeOf_T_t436F604BB7B0CE3EEA1DB1E85CC8CB85886374E3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_T_t436F604BB7B0CE3EEA1DB1E85CC8CB85886374E3);
		return;
	}
}
IL2CPP_EXTERN_C  void TilemapBuffer_As_TisIl2CppFullySharedGenericStruct_mE5ED3A21F10FF229819583D1747D45BDF6789F86_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D>(__this);
	TilemapBuffer_As_TisIl2CppFullySharedGenericStruct_mE5ED3A21F10FF229819583D1747D45BDF6789F86(_thisAdjusted, ___0_index, il2cppRetVal, method);
	return;
}
// Method Definition Index: 173182
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* TilemapBuffer_AsEngineObject_TisIl2CppSharedGenericObject_mCD253AAB6422AD3B53880C8FEDC9E10BE082FD7D_gshared (TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_ArrayElementAsRef_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1E646BFF355146C3ED67F27D778DD41355FC2466_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		intptr_t* L_4 = (intptr_t*)(&__this->___m_Buffer);
		void* L_5;
		L_5 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_4, NULL);
		int32_t L_6 = ___0_index;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_7;
		L_7 = UnsafeUtility_ArrayElementAsRef_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1E646BFF355146C3ED67F27D778DD41355FC2466_inline(L_5, L_6, UnsafeUtility_ArrayElementAsRef_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1E646BFF355146C3ED67F27D778DD41355FC2466_RuntimeMethod_var);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_8 = (*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_7);
		V_0 = L_8;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_9 = V_0;
		bool L_10;
		L_10 = Resources_EntityIdIsValid_m5AC0D5EFD7367CE19AABEE8B081B924BEC5CDE8E(L_9, NULL);
		if (L_10)
		{
			goto IL_0041;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_11 = V_1;
		return L_11;
	}

IL_0041:
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_12 = V_0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_13;
		L_13 = Resources_EntityIdToObject_m4F01E04BA6CCEE4F56172C135C489F90AFF7054C(L_12, NULL);
		return ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_13, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
IL2CPP_EXTERN_C  Il2CppSharedGenericObject* TilemapBuffer_AsEngineObject_TisIl2CppSharedGenericObject_mCD253AAB6422AD3B53880C8FEDC9E10BE082FD7D_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D>(__this);
	Il2CppSharedGenericObject* _returnValue;
	_returnValue = TilemapBuffer_AsEngineObject_TisIl2CppSharedGenericObject_mCD253AAB6422AD3B53880C8FEDC9E10BE082FD7D(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
// Method Definition Index: 173184
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapBuffer_SetEngineObject_TisIl2CppSharedGenericObject_mE1D53CD5BA3B9912C87D5AC67FA3DAE6C8F2D8F7_gshared (TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D* __this, Il2CppSharedGenericObject* ___0_value, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_ArrayElementAsRef_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1E646BFF355146C3ED67F27D778DD41355FC2466_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___1_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_4;
		L_4 = EntityId_get_None_mD09599DF1A9CD1DA879B59F1512CDFD4DAFCB39B(NULL);
		V_0 = L_4;
		Il2CppSharedGenericObject* L_5 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Il2CppSharedGenericObject* L_7 = ___0_value;
		NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_7);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_8;
		L_8 = Object_GetEntityId_mA47FDD98E6DEC141206BD6B02F31B6436C6EF1D7((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_7, NULL);
		V_0 = L_8;
	}

IL_0038:
	{
		intptr_t* L_9 = (intptr_t*)(&__this->___m_Buffer);
		void* L_10;
		L_10 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_9, NULL);
		int32_t L_11 = ___1_index;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_12;
		L_12 = UnsafeUtility_ArrayElementAsRef_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1E646BFF355146C3ED67F27D778DD41355FC2466_inline(L_10, L_11, UnsafeUtility_ArrayElementAsRef_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1E646BFF355146C3ED67F27D778DD41355FC2466_RuntimeMethod_var);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_13 = V_0;
		*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_12 = L_13;
		return;
	}
}
IL2CPP_EXTERN_C  void TilemapBuffer_SetEngineObject_TisIl2CppSharedGenericObject_mE1D53CD5BA3B9912C87D5AC67FA3DAE6C8F2D8F7_AdjustorThunk (RuntimeObject* __this, Il2CppSharedGenericObject* ___0_value, int32_t ___1_index, const RuntimeMethod* method)
{
	TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D>(__this);
	TilemapBuffer_SetEngineObject_TisIl2CppSharedGenericObject_mE1D53CD5BA3B9912C87D5AC67FA3DAE6C8F2D8F7(_thisAdjusted, ___0_value, ___1_index, method);
}
// Method Definition Index: 173185
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapBuffer_SetValue_TisIl2CppFullySharedGenericStruct_m5F4E87031CCFBDDBE554204063ABBAD64AC9AEB8_gshared (TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D* __this, Il2CppFullySharedGenericStruct ___0_value, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tF4D6759473695A476D39FDBF1914C94B2656502A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_tF4D6759473695A476D39FDBF1914C94B2656502A);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___1_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		intptr_t* L_4 = (intptr_t*)(&__this->___m_Buffer);
		void* L_5;
		L_5 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_4, NULL);
		int32_t L_6 = ___1_index;
		Il2CppFullySharedGenericStruct* L_7;
		L_7 = ((  Il2CppFullySharedGenericStruct* (*) (void*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_8, ___0_value, SizeOf_T_tF4D6759473695A476D39FDBF1914C94B2656502A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_7, L_8, SizeOf_T_tF4D6759473695A476D39FDBF1914C94B2656502A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericStruct*)L_7, (void*)L_8);
		return;
	}
}
IL2CPP_EXTERN_C  void TilemapBuffer_SetValue_TisIl2CppFullySharedGenericStruct_m5F4E87031CCFBDDBE554204063ABBAD64AC9AEB8_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_value, int32_t ___1_index, const RuntimeMethod* method)
{
	TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<TilemapBuffer_t4A8A7E7C56F1129D6E11C87A2DB28D9F780BCF6D>(__this);
	TilemapBuffer_SetValue_TisIl2CppFullySharedGenericStruct_m5F4E87031CCFBDDBE554204063ABBAD64AC9AEB8(_thisAdjusted, ___0_value, ___1_index, method);
}
// Method Definition Index: 164213
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C PrimitivesConverters_DoConvert_TisFixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C_mF087794AC88641223D5440A13521BF5D140F0E50_gshared (bool* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_0027;
	}

IL_0027:
	{
		goto IL_0056;
	}

IL_0056:
	{
		goto IL_0085;
	}

IL_0085:
	{
		goto IL_00c6;
	}

IL_00c6:
	{
		goto IL_00f5;
	}

IL_00f5:
	{
		goto IL_0124;
	}

IL_0124:
	{
		goto IL_0154;
	}

IL_0154:
	{
		goto IL_0184;
	}

IL_0184:
	{
		goto IL_01be;
	}

IL_01be:
	{
		goto IL_01f8;
	}

IL_01f8:
	{
		goto IL_0228;
	}

IL_0228:
	{
		goto IL_0257;
	}

IL_0257:
	{
		goto IL_0287;
	}

IL_0287:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_0 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 164214
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C PrimitivesConverters_DoConvert_TisFixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C_mDC5B08074D4779E7BEF2555A2AC17454AE2E0CB0_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_0055;
	}

IL_0055:
	{
		goto IL_0080;
	}

IL_0080:
	{
		goto IL_00ac;
	}

IL_00ac:
	{
		goto IL_00d7;
	}

IL_00d7:
	{
		goto IL_0103;
	}

IL_0103:
	{
		goto IL_0130;
	}

IL_0130:
	{
		goto IL_015d;
	}

IL_015d:
	{
		goto IL_018a;
	}

IL_018a:
	{
		goto IL_01bf;
	}

IL_01bf:
	{
		goto IL_01eb;
	}

IL_01eb:
	{
		goto IL_0217;
	}

IL_0217:
	{
		goto IL_0244;
	}

IL_0244:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_0 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 164215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C PrimitivesConverters_DoConvert_TisFixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C_mCDF5BDAB12038B18483F81B0E663413E857AD012_gshared (Il2CppChar* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_005a;
	}

IL_005a:
	{
		goto IL_0081;
	}

IL_0081:
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		goto IL_00d9;
	}

IL_00d9:
	{
		goto IL_0105;
	}

IL_0105:
	{
		goto IL_0132;
	}

IL_0132:
	{
		goto IL_015f;
	}

IL_015f:
	{
		goto IL_018c;
	}

IL_018c:
	{
		goto IL_01c1;
	}

IL_01c1:
	{
		goto IL_01ed;
	}

IL_01ed:
	{
		goto IL_0219;
	}

IL_0219:
	{
		goto IL_0246;
	}

IL_0246:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_0 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 164216
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C PrimitivesConverters_DoConvert_TisFixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C_mC1E78E75FA2A0ECFF6828636A83DD02587BE83A8_gshared (double* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_0039;
	}

IL_0039:
	{
		goto IL_0065;
	}

IL_0065:
	{
		goto IL_0091;
	}

IL_0091:
	{
		goto IL_00b8;
	}

IL_00b8:
	{
		goto IL_00e4;
	}

IL_00e4:
	{
		goto IL_0111;
	}

IL_0111:
	{
		goto IL_013e;
	}

IL_013e:
	{
		goto IL_016b;
	}

IL_016b:
	{
		goto IL_0198;
	}

IL_0198:
	{
		goto IL_01cd;
	}

IL_01cd:
	{
		goto IL_01fa;
	}

IL_01fa:
	{
		goto IL_0227;
	}

IL_0227:
	{
		goto IL_0254;
	}

IL_0254:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_0 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 164217
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C PrimitivesConverters_DoConvert_TisFixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C_m4234CDC3C0C49B2258B27CAC89E981D8AE88B86C_gshared (int16_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_005a;
	}

IL_005a:
	{
		goto IL_0086;
	}

IL_0086:
	{
		goto IL_00b2;
	}

IL_00b2:
	{
		goto IL_00d9;
	}

IL_00d9:
	{
		goto IL_0105;
	}

IL_0105:
	{
		goto IL_0132;
	}

IL_0132:
	{
		goto IL_015f;
	}

IL_015f:
	{
		goto IL_018c;
	}

IL_018c:
	{
		goto IL_01c1;
	}

IL_01c1:
	{
		goto IL_01ee;
	}

IL_01ee:
	{
		goto IL_021a;
	}

IL_021a:
	{
		goto IL_0247;
	}

IL_0247:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_0 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 164218
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C PrimitivesConverters_DoConvert_TisFixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C_m0A9BCAF2D5BE65B8FA90D0DA9D98B07625531E89_gshared (int32_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_005a;
	}

IL_005a:
	{
		goto IL_0086;
	}

IL_0086:
	{
		goto IL_00b2;
	}

IL_00b2:
	{
		goto IL_00df;
	}

IL_00df:
	{
		goto IL_010b;
	}

IL_010b:
	{
		goto IL_0138;
	}

IL_0138:
	{
		goto IL_0165;
	}

IL_0165:
	{
		goto IL_0192;
	}

IL_0192:
	{
		goto IL_01c7;
	}

IL_01c7:
	{
		goto IL_01f4;
	}

IL_01f4:
	{
		goto IL_0220;
	}

IL_0220:
	{
		goto IL_024d;
	}

IL_024d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_0 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 164219
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C PrimitivesConverters_DoConvert_TisFixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C_m12E902E30BF0E6D4F56AF8FC196A02234DC73CA9_gshared (int64_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002f;
	}

IL_002f:
	{
		goto IL_005b;
	}

IL_005b:
	{
		goto IL_0087;
	}

IL_0087:
	{
		goto IL_00b3;
	}

IL_00b3:
	{
		goto IL_00e0;
	}

IL_00e0:
	{
		goto IL_010d;
	}

IL_010d:
	{
		goto IL_0139;
	}

IL_0139:
	{
		goto IL_0166;
	}

IL_0166:
	{
		goto IL_0193;
	}

IL_0193:
	{
		goto IL_01c8;
	}

IL_01c8:
	{
		goto IL_01f5;
	}

IL_01f5:
	{
		goto IL_0222;
	}

IL_0222:
	{
		goto IL_024e;
	}

IL_024e:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_0 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 164220
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C PrimitivesConverters_DoConvert_TisFixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C_m160BFF95BFD59CE1945C3D94A4FD5F1D30D3882B_gshared (int8_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_005a;
	}

IL_005a:
	{
		goto IL_0086;
	}

IL_0086:
	{
		goto IL_00b2;
	}

IL_00b2:
	{
		goto IL_00de;
	}

IL_00de:
	{
		goto IL_010a;
	}

IL_010a:
	{
		goto IL_0137;
	}

IL_0137:
	{
		goto IL_0163;
	}

IL_0163:
	{
		goto IL_0190;
	}

IL_0190:
	{
		goto IL_01c5;
	}

IL_01c5:
	{
		goto IL_01f2;
	}

IL_01f2:
	{
		goto IL_021e;
	}

IL_021e:
	{
		goto IL_024b;
	}

IL_024b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_0 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 164221
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C PrimitivesConverters_DoConvert_TisFixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C_m50FE08654DFBC8FD2600E8C401CA8FD99B9D13EA_gshared (float* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_0035;
	}

IL_0035:
	{
		goto IL_0061;
	}

IL_0061:
	{
		goto IL_008d;
	}

IL_008d:
	{
		goto IL_00b9;
	}

IL_00b9:
	{
		goto IL_00e6;
	}

IL_00e6:
	{
		goto IL_0113;
	}

IL_0113:
	{
		goto IL_0140;
	}

IL_0140:
	{
		goto IL_016d;
	}

IL_016d:
	{
		goto IL_0199;
	}

IL_0199:
	{
		goto IL_01ce;
	}

IL_01ce:
	{
		goto IL_01fb;
	}

IL_01fb:
	{
		goto IL_0228;
	}

IL_0228:
	{
		goto IL_0255;
	}

IL_0255:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_0 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 164222
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C PrimitivesConverters_DoConvert_TisFixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C_m52E291C6C62783A5A3ECD261EAADB22E48E5F852_gshared (String_t** ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	double V_1 = 0.0;
	bool V_2 = false;
	FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint8_t V_4 = 0x0;
	double V_5 = 0.0;
	uint8_t V_6 = 0x0;
	Il2CppChar V_7 = 0x0;
	double V_8 = 0.0;
	int16_t V_9 = 0;
	double V_10 = 0.0;
	int16_t V_11 = 0;
	int32_t V_12 = 0;
	double V_13 = 0.0;
	int32_t V_14 = 0;
	int64_t V_15 = 0;
	double V_16 = 0.0;
	int64_t V_17 = 0;
	int8_t V_18 = 0x0;
	double V_19 = 0.0;
	int8_t V_20 = 0x0;
	float V_21 = 0.0f;
	double V_22 = 0.0;
	float V_23 = 0.0f;
	uint16_t V_24 = 0;
	double V_25 = 0.0;
	uint16_t V_26 = 0;
	uint32_t V_27 = 0;
	double V_28 = 0.0;
	uint32_t V_29 = 0;
	uint64_t V_30 = 0;
	double V_31 = 0.0;
	uint64_t V_32 = 0;
	{
		goto IL_0060;
	}

IL_0060:
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		goto IL_00fe;
	}

IL_00fe:
	{
		goto IL_013b;
	}

IL_013b:
	{
		goto IL_019b;
	}

IL_019b:
	{
		goto IL_01fb;
	}

IL_01fb:
	{
		goto IL_025b;
	}

IL_025b:
	{
		goto IL_02bb;
	}

IL_02bb:
	{
		goto IL_031b;
	}

IL_031b:
	{
		goto IL_0342;
	}

IL_0342:
	{
		goto IL_03a2;
	}

IL_03a2:
	{
		goto IL_0402;
	}

IL_0402:
	{
		goto IL_0462;
	}

IL_0462:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_0 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 164223
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C PrimitivesConverters_DoConvert_TisFixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C_m56D294D1AC150DD9F9EF0D7F47DC67C02EF54964_gshared (uint16_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_005a;
	}

IL_005a:
	{
		goto IL_0085;
	}

IL_0085:
	{
		goto IL_00b1;
	}

IL_00b1:
	{
		goto IL_00de;
	}

IL_00de:
	{
		goto IL_010a;
	}

IL_010a:
	{
		goto IL_0137;
	}

IL_0137:
	{
		goto IL_0164;
	}

IL_0164:
	{
		goto IL_0191;
	}

IL_0191:
	{
		goto IL_01c6;
	}

IL_01c6:
	{
		goto IL_01f2;
	}

IL_01f2:
	{
		goto IL_021e;
	}

IL_021e:
	{
		goto IL_024b;
	}

IL_024b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_0 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 164224
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C PrimitivesConverters_DoConvert_TisFixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C_m46E6FC2D7B4575E71EFAE67B02C2455B8E937B34_gshared (uint32_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_005a;
	}

IL_005a:
	{
		goto IL_0086;
	}

IL_0086:
	{
		goto IL_00b3;
	}

IL_00b3:
	{
		goto IL_00e0;
	}

IL_00e0:
	{
		goto IL_010c;
	}

IL_010c:
	{
		goto IL_0139;
	}

IL_0139:
	{
		goto IL_0166;
	}

IL_0166:
	{
		goto IL_0194;
	}

IL_0194:
	{
		goto IL_01c9;
	}

IL_01c9:
	{
		goto IL_01f6;
	}

IL_01f6:
	{
		goto IL_0222;
	}

IL_0222:
	{
		goto IL_024f;
	}

IL_024f:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_0 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 164225
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C PrimitivesConverters_DoConvert_TisFixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C_m4190F890FD9D13BE681EBEDF53C406A34ED3A8A6_gshared (uint64_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	{
		goto IL_002f;
	}

IL_002f:
	{
		goto IL_005b;
	}

IL_005b:
	{
		goto IL_0087;
	}

IL_0087:
	{
		goto IL_00b4;
	}

IL_00b4:
	{
		goto IL_00e1;
	}

IL_00e1:
	{
		goto IL_010e;
	}

IL_010e:
	{
		goto IL_013a;
	}

IL_013a:
	{
		goto IL_0167;
	}

IL_0167:
	{
		goto IL_0195;
	}

IL_0195:
	{
		goto IL_01ca;
	}

IL_01ca:
	{
		goto IL_01f7;
	}

IL_01f7:
	{
		goto IL_0224;
	}

IL_0224:
	{
		goto IL_024b;
	}

IL_024b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_0 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 164213
// Method Definition Index: 164214
// Method Definition Index: 164215
// Method Definition Index: 164216
// Method Definition Index: 164217
// Method Definition Index: 164218
// Method Definition Index: 164219
// Method Definition Index: 164220
// Method Definition Index: 164221
// Method Definition Index: 164222
// Method Definition Index: 164223
// Method Definition Index: 164224
// Method Definition Index: 164225
// Method Definition Index: 164213
// Method Definition Index: 164214
// Method Definition Index: 164215
// Method Definition Index: 164216
// Method Definition Index: 164217
// Method Definition Index: 164218
// Method Definition Index: 164219
// Method Definition Index: 164220
// Method Definition Index: 164221
// Method Definition Index: 164222
// Method Definition Index: 124641
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PhysicsBuffer_get_size_mAEAF52B701BE344321D134AB9E325B8CAD461913_inline (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Size;
		return L_0;
	}
}
// Method Definition Index: 4167
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
// Method Definition Index: 25159
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* StyleProperty_get_values_mC1D996097014576222150D2F84685850FF4CEE2B_inline (StyleProperty_tD117EB807BAA83855E65AC56B8D6FB84D6F7CF83* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* L_0 = __this->___m_Values;
		return L_0;
	}
}
// Method Definition Index: 31302
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* UnsafeUtility_ArrayElementAsRef_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1E646BFF355146C3ED67F27D778DD41355FC2466_gshared_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_ptr;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		return (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)(((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
	}
}
// Method Definition Index: 2557
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m449178AA264C94D941010EDDE025EA50B9B0E811_gshared_inline (ReadOnlySpan_1_tF0D3F37553DD1B6B958870218E09EE158414F2ED* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2557
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m79C31F2A1C10139B17341A32866E4F0FA5697858_gshared_inline (ReadOnlySpan_1_tBE12606EBCA9AA35135C1027DBC000335D3429AA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2557
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_mF1E1657EBF5BE24F7D7D9BE2CAFDD4D71FEC81EA_gshared_inline (ReadOnlySpan_1_tD531AA78AA74FE78546EE84A387B9ED77629839F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2557
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_mA03C99C74D9153BDEB3BD16E5DA2A5AE7398BB0B_gshared_inline (ReadOnlySpan_1_tEBFBB86154B8F846CDA49C4A8FDDF723E53CDAB4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2557
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m73320AEECF6C1AFADC8C19BCB951F343FD281336_gshared_inline (ReadOnlySpan_1_tDDF73876F1321C012BBAA81983863A4AA515F80B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2557
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m30909A25A4B698D6CDE36DD17A2CCF12EB2A7AED_gshared_inline (ReadOnlySpan_1_t1894F878DC4CD8CF0D78EC486B840E7DBE3C5A2E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2557
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m5D8561BF76A2451939095A0ABC980794FD4FBC76_gshared_inline (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2546
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2546
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m2C752E42AC92651414D22133C0C6625168A0A27D_gshared_inline (ReadOnlySpan_1_tF22156099B21F5C06598D6E173048F8C01F33D83* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6* L_2;
		L_2 = il2cpp_unsafe_as_ref<BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6>((uint8_t*)L_1);
		ByReference_1_t8FA1D7A8A4A2AF99ACEADD2DDA919F268EB04E59 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2546
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m57750EFD352CEE1134B790C4C6A5DE73ED63B54B_gshared_inline (ReadOnlySpan_1_t3807AC5721C4A53979AE58EB07B1EC72F69448EC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291* L_2;
		L_2 = il2cpp_unsafe_as_ref<ContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291>((uint8_t*)L_1);
		ByReference_1_t41ED60F4920F38C3094CB996FB4FFB03B1DAED0D L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2546
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m6F6DFB2F6031477E482545515ED358245E10E056_gshared_inline (ReadOnlySpan_1_t9E895D63910F259C1074899C550D20E89B2D553F* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002* L_2;
		L_2 = il2cpp_unsafe_as_ref<ContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002>((uint8_t*)L_1);
		ByReference_1_t860FBE0A3D26C3137B6700D2BF7256354D93AD53 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2546
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m2D32168C1CB70E875B88C363738FB53621F6614D_gshared_inline (ReadOnlySpan_1_tBC27D59CA47B69695AF9B0FF96B6E1D7C10D5883* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ContactHitEvent_t11EB60851A1F13BC732A3361C6CB37860A2AA427* L_2;
		L_2 = il2cpp_unsafe_as_ref<ContactHitEvent_t11EB60851A1F13BC732A3361C6CB37860A2AA427>((uint8_t*)L_1);
		ByReference_1_t3154973B13E4D50EE09CC6D096E2082A4EFF1BA7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2546
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m11EA6EEFE4554A846FC9D7B03DDAD330ADF2438C_gshared_inline (ReadOnlySpan_1_t2874BB641AC0FDE8BDD7E519FE425D7AD97D9A3A* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		JointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A* L_2;
		L_2 = il2cpp_unsafe_as_ref<JointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A>((uint8_t*)L_1);
		ByReference_1_t5C4813F1FF4D71BB63A5950E046F757B4C42DE98 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2546
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB0245D1D81FC91908DE1B6CA216F03DEB24ED02B_gshared_inline (ReadOnlySpan_1_t12C3D31E72C3DDB44A4B2BF75E16DB55699D73B3* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9* L_2;
		L_2 = il2cpp_unsafe_as_ref<TriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9>((uint8_t*)L_1);
		ByReference_1_tD749749D32147972D5938DEED561DC6489280F4B L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2546
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m10DCBC9FBEEC2E3D3CD372A15F538F7A41C5EA08_gshared_inline (ReadOnlySpan_1_tC7C975128DC0F98C7ED9FA23FA8763D48DEA8CD2* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04* L_2;
		L_2 = il2cpp_unsafe_as_ref<TriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04>((uint8_t*)L_1);
		ByReference_1_t5C7F39045D1646C84EE0F07A3A73A02820A81C13 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2546
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900_gshared_inline (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* L_2;
		L_2 = il2cpp_unsafe_as_ref<BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84>((uint8_t*)L_1);
		ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2546
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A_gshared_inline (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* L_2;
		L_2 = il2cpp_unsafe_as_ref<ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC>((uint8_t*)L_1);
		ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2546
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF_gshared_inline (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* L_2;
		L_2 = il2cpp_unsafe_as_ref<ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A>((uint8_t*)L_1);
		ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2546
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81_gshared_inline (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* L_2;
		L_2 = il2cpp_unsafe_as_ref<JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF>((uint8_t*)L_1);
		ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2546
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88_gshared_inline (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* L_2;
		L_2 = il2cpp_unsafe_as_ref<TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576>((uint8_t*)L_1);
		ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2546
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631_gshared_inline (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* L_2;
		L_2 = il2cpp_unsafe_as_ref<TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A>((uint8_t*)L_1);
		ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2645
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 10)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2645
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m8B358C367FCD4C5DF714C69892BD3F238BC4BE78_gshared_inline (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_2;
		L_2 = il2cpp_unsafe_as_ref<TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7>((uint8_t*)L_1);
		ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2645
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m51D8F679F5F06C1A2F204248F5D37BC1D0F48BBA_gshared_inline (Span_1_t180448960B6B6F682EFC16994B9716109E7DD2C6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* L_2;
		L_2 = il2cpp_unsafe_as_ref<CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E>((uint8_t*)L_1);
		ByReference_1_t55AA67E29A3ECACAB26A99C259BAE9986833066F L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2645
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mED035A5AC87B33038AA174619E4302C09155861C_gshared_inline (Span_1_t34B932F5AC7CBB47C9A670FA2E06063AE44CEEEE* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* L_2;
		L_2 = il2cpp_unsafe_as_ref<CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1>((uint8_t*)L_1);
		ByReference_1_t36B48293C971AABB7949CED7934A487AB408F9FB L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2645
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0CB110DE0E8428040F7C3E546CC39D3A2A9F659C_gshared_inline (Span_1_t497BE6EFB8E493B6B683E05FE152E8C5354022CB* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* L_2;
		L_2 = il2cpp_unsafe_as_ref<LineElement_t012671A3568902C51830B75D1F5DB18B390F8454>((uint8_t*)L_1);
		ByReference_1_tFBE5581BA218BD534C93EE5CDBFF72F1850DAB2D L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2645
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m149D219982FBB2A903D4C4E21FE5FE96FB5F5E06_gshared_inline (Span_1_tD01BE6CE0AD935A9C7F96CFE915AB46E9ECED0AA* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* L_2;
		L_2 = il2cpp_unsafe_as_ref<PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0>((uint8_t*)L_1);
		ByReference_1_t35C7A568359B649F81337FEE709ED5AE4A4F5BB0 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2645
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB9684F291E4E59C4673BF403C1FBB13959D13ED3_gshared_inline (Span_1_tFEDD78D7F7F7CAC447265BA315649C319C0AE5A9* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* L_2;
		L_2 = il2cpp_unsafe_as_ref<PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57>((uint8_t*)L_1);
		ByReference_1_t202968E70F3E147C9542F8B8D25464AEC5A17767 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 31302
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* UnsafeUtility_ArrayElementAsRef_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m86F914D25CF4676024DF56901ACD7C8B1A93ECD5_gshared_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_ptr;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		return (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
	}
}
