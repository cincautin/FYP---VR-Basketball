#include "pch-cpp.hpp"





template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1, T2, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { &p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30;
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563;
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B;
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98;
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985;
struct Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8;
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B;
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B;
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70;
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
struct ITypeConstructor_1_tB2DD89428461A05CF6E816371383E28A1BE94440;
struct ITypeConstructor_1_tDAA233DB1688C5FB7BD7AF226A333DD7A2941503;
struct ITypeConstructor_1_t0971F82FF696636B5980191704D34EBCFF2C221C;
struct ITypeConstructor_1_t92BF5480882C77EA0B787B3019468C8CE698038F;
struct ITypeConstructor_1_t904441E1C0121C34AC6AD7781FE42BB12D65B0CC;
struct ITypeConstructor_1_t0DE810CBEA8E0C10D5D20B7C36C1CA72894A52BD;
struct ITypeConstructor_1_t582CFC95E88EC57D0E7E6117FEB627A227046DEE;
struct ITypeConstructor_1_t6036708AD53BE0A247E0419392149C29294321CA;
struct ITypeConstructor_1_tEF28DA219D7FF879BD72DF2D3B3F20BF8F2AF895;
struct ITypeConstructor_1_tF00D3ECE32D00E64FAF9ADF197160A1D21F8B72B;
struct ITypeConstructor_1_t81670FEA206550EF92A986F4A63FC5302AB1D638;
struct ITypeConstructor_1_t3B0FE01881012CC548F6EE132D9D04AA93EDE092;
struct ITypeConstructor_1_t2957C3F3F922000D05C6AE59163AF0088BB8D2E4;
struct ITypeConstructor_1_tCBC012543956694556936EABE7ADF797F6355DF3;
struct ITypeConstructor_1_tE1377AF96A9B7EE3D4A4E9ABE45EA59810967EE2;
struct ITypeConstructor_1_tCC1F968D05C3AC8284127679F78CE36F9B1AE0E9;
struct ITypeConstructor_1_t4897169091A9172B21833243B015C7DE4665B282;
struct ITypeConstructor_1_t27421517365CBD568D0A3034E958CA28C13B80B1;
struct ITypeConstructor_1_t57C2278A991E4D01DF2BCEC922A39878CA264659;
struct ITypeConstructor_1_tB7ECA756C8B2659037F30C5E519FECB8EE650390;
struct ITypeConstructor_1_t0FE2B73907C0A0AEB0E84716E021DD7420B23A2B;
struct ITypeConstructor_1_t5E4FD8D127EC0F24B375DF611109A9783C9949D0;
struct ITypeConstructor_1_t556D14AA6F555F7364C62810932429031A39D050;
struct ITypeConstructor_1_t70FBC2A64E826431437D61A731F9026F2A329F53;
struct ITypeConstructor_1_t0450D7ABE6B0EC16038EEC5B027801981910C44C;
struct ITypeConstructor_1_tFACF935003548E97E3078FD8D6EA60429E86AD89;
struct ITypeConstructor_1_t1CC673F9CA9B6725DDE78E2F1C42BCC34A188A4C;
struct ITypeConstructor_1_t8F9D67739EBCE9CB50D0A3DCDC2EB180ADCD7153;
struct ITypeConstructor_1_tDB6611BF0502D2DE05D2B73BEFF0FBFB1D28FFF8;
struct ITypeConstructor_1_t015DDC9674C028839167F0DDF73583C7A8C0741D;
struct ITypeConstructor_1_t7E6EAA0BFBCCC6CE6DC49D2A818432D6C5AC990B;
struct ITypeConstructor_1_t785B35377CAB1421A62974313C9F0A614DF68FEF;
struct ITypeConstructor_1_t3C4E282D8CD3393ECB5ED8D2DA57BF9A6543BD6D;
struct ITypeConstructor_1_t51151016E912F38CEEF52AA31DB0C51D4013E9AE;
struct ITypeConstructor_1_t762E618FFA66D8CD05D0BA1254FB9FF99E532CFE;
struct ITypeConstructor_1_t7102F20E0DFAD03FD0C2E63098B64421902D420C;
struct ITypeConstructor_1_t148DEE696C67531ED0CC0C434029ED58D3900F40;
struct ITypeConstructor_1_t7AF3E225EB331261E85F3CFB7D4126FC73860649;
struct ITypeConstructor_1_tE167B37F2C433203C8B36AEB6AD2B06199C295D1;
struct ITypeConstructor_1_t70364E6E4EBD878F8E808FD1664EE1243E531B47;
struct ITypeConstructor_1_tFE631B93680CA0A906C987E9FEF7D34B14BFA655;
struct ITypeConstructor_1_tAE0A14502D1468290040C786788E78725BD529CD;
struct ITypeConstructor_1_t8DE731ADC15DD7971C02EB4C0B29ECCBF08F7623;
struct ITypeConstructor_1_t485348645D91F4C7E50906786F15660FB86F01C1;
struct ITypeConstructor_1_t645F4AB9BDB1589528A84F96AA921E2B8BFBF421;
struct ITypeConstructor_1_tAE8FA5C60F9AAD93E337D3B0A7838C1BF07539B8;
struct ITypeConstructor_1_t4FC204E1D4F5983B37CBC1C3B8407A9A568E5B6A;
struct ITypeConstructor_1_t9F314495BA8A0A3F7B6A20A3EDDB29132FF7959B;
struct ITypeConstructor_1_t19EAD6BE3670B81303A7F04C46F8FA2B8E948A3D;
struct ITypeConstructor_1_tCC196E183FB5A7CF798C682F9C3B70CDDA50CFFF;
struct ITypeConstructor_1_tADCE5163310B602EB1878CA0050295BFB0F6B542;
struct ITypeConstructor_1_t61D5D3D9EDD28391B0FE316A5641A34D7FF16FD0;
struct ITypeConstructor_1_t5B814DBA70C191660AF27E38032998417073D7A2;
struct ITypeConstructor_1_t63AA3F84ED218C4C0589371B74758F62E3EFCF85;
struct ITypeConstructor_1_tE8F6FB08714C8CB10D2287D360560F082E591BF9;
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct Dictionary_2U5BU5D_t8D6AC1901F24F556E57DD31832FD521C0201E655;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct ResourcePathU5BU5D_t1A52AE48020C3EB95CB879A811AA792F12F0EF26;
struct ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct StyleRuleU5BU5D_t7897A39D88CA043B2BFB5B28C53B41564EBA3AF3;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct ImportStructU5BU5D_t42D231FD5BB4B620965D7BED87D56D531B4C7AE9;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct String_t;
struct StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD;
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
struct Type_t;
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF;
struct UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C;
struct UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2;
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08;
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F;
struct Element_t179C2EB2265F9878720AC84FD76D0A65EFD7F61E;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_PropertiesModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UIElementsModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Burst[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Collections[];
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ByteU2A_t7A03686A8034AF92EF1EA2D09B280EF590D1174D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Element_t179C2EB2265F9878720AC84FD76D0A65EFD7F61E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30  : public RuntimeObject
{
};
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563  : public RuntimeObject
{
};
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B  : public RuntimeObject
{
};
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98  : public RuntimeObject
{
};
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985  : public RuntimeObject
{
};
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8  : public RuntimeObject
{
};
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B  : public RuntimeObject
{
};
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B  : public RuntimeObject
{
};
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70  : public RuntimeObject
{
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};
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
struct PrimitivesConverters_t4AC0AF040C8B4B0C9C0C9A0A6F806521CFD84F27  : public RuntimeObject
{
};
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F  : public RuntimeObject
{
	RuntimeObject* ___TypeConstructor;
};
struct Avx2_tEF5390382630DE33677921890832DA46CE372FBC  : public RuntimeObject
{
};
struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C  : public RuntimeObject
{
};
struct CustomStyleProperty_1_tB73A4836B6E305C3DB7FE82821F7E521F6048231 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke_define
#define CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke_define
struct CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com_define
#define CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com_define
struct CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
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
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
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
struct UIntPtr_t 
{
	void* ____pointer;
};
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t* ___values;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t* ___values_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keys_OffsetPadding[8];
			uint8_t* ___keys;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keys_OffsetPadding_forAlignmentOnly[8];
			uint8_t* ___keys_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___next_OffsetPadding[16];
			uint8_t* ___next;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___next_OffsetPadding_forAlignmentOnly[16];
			uint8_t* ___next_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___buckets_OffsetPadding[24];
			uint8_t* ___buckets;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___buckets_OffsetPadding_forAlignmentOnly[24];
			uint8_t* ___buckets_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyCapacity_OffsetPadding[32];
			int32_t ___keyCapacity;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyCapacity_OffsetPadding_forAlignmentOnly[32];
			int32_t ___keyCapacity_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding[36];
			int32_t ___bucketCapacityMask;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding_forAlignmentOnly[36];
			int32_t ___bucketCapacityMask_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding[40];
			int32_t ___allocatedIndexLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding_forAlignmentOnly[40];
			int32_t ___allocatedIndexLength_forAlignmentOnly;
		};
	};
};
struct UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C 
{
	UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* ___m_NextBlock;
	int32_t ___m_NumItems;
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
struct v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_OffsetPadding[1];
			uint8_t ___Byte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_OffsetPadding[2];
			uint8_t ___Byte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_OffsetPadding[3];
			uint8_t ___Byte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_OffsetPadding[4];
			uint8_t ___Byte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_OffsetPadding[5];
			uint8_t ___Byte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_OffsetPadding[6];
			uint8_t ___Byte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_OffsetPadding[7];
			uint8_t ___Byte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___SByte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_OffsetPadding[1];
			int8_t ___SByte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_OffsetPadding[2];
			int8_t ___SByte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_OffsetPadding[3];
			int8_t ___SByte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_OffsetPadding[4];
			int8_t ___SByte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_OffsetPadding[5];
			int8_t ___SByte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_OffsetPadding[6];
			int8_t ___SByte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_OffsetPadding[7];
			int8_t ___SByte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___UShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_OffsetPadding[2];
			uint16_t ___UShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_OffsetPadding[4];
			uint16_t ___UShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_OffsetPadding[6];
			uint16_t ___UShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___SShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_OffsetPadding[2];
			int16_t ___SShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_OffsetPadding[4];
			int16_t ___SShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_OffsetPadding[6];
			int16_t ___SShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___UInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_OffsetPadding[4];
			uint32_t ___UInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___SInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_OffsetPadding[4];
			int32_t ___SInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___ULong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___SLong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___Float0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_OffsetPadding[4];
			float ___Float1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___Double0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_forAlignmentOnly;
		};
	};
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct Union_t651696C44E98CE15C53FE2628FA73E4B102D6C21 
{
	int64_t ___m_long;
};
struct Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6 
{
	uint8_t* ___Ptr;
	int32_t ___Size;
	int32_t ___Offset;
};
struct U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116__padding[1];
	};
};
struct Array_t3B8F006A80A48C83471DE3516556F1AFE6873381 
{
	union
	{
		struct
		{
		};
		uint8_t Array_t3B8F006A80A48C83471DE3516556F1AFE6873381__padding[1];
	};
};
struct StreamingStateData_tB4ECCAB2ECCD0555A32604F161D9B80D9FA42B3A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___Acc;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Acc_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Buffer_OffsetPadding[64];
			uint8_t ___Buffer;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Buffer_OffsetPadding_forAlignmentOnly[64];
			uint8_t ___Buffer_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IsHash64_OffsetPadding[320];
			int32_t ___IsHash64;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___IsHash64_OffsetPadding_forAlignmentOnly[320];
			int32_t ___IsHash64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___BufferedSize_OffsetPadding[324];
			int32_t ___BufferedSize;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___BufferedSize_OffsetPadding_forAlignmentOnly[324];
			int32_t ___BufferedSize_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___NbStripesSoFar_OffsetPadding[328];
			int32_t ___NbStripesSoFar;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___NbStripesSoFar_OffsetPadding_forAlignmentOnly[328];
			int32_t ___NbStripesSoFar_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___TotalLength_OffsetPadding[336];
			int64_t ___TotalLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___TotalLength_OffsetPadding_forAlignmentOnly[336];
			int64_t ___TotalLength_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Seed_OffsetPadding[344];
			uint64_t ___Seed;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Seed_OffsetPadding_forAlignmentOnly[344];
			uint64_t ___Seed_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SecretKey_OffsetPadding[352];
			uint8_t ___SecretKey;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SecretKey_OffsetPadding_forAlignmentOnly[352];
			uint8_t ___SecretKey_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____PadEnd_OffsetPadding[540];
			uint8_t ____PadEnd;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____PadEnd_OffsetPadding_forAlignmentOnly[540];
			uint8_t ____PadEnd_forAlignmentOnly;
		};
	};
};
struct U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD 
{
	union
	{
		struct
		{
			uint16_t ___FixedElementField;
		};
		uint8_t U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD__padding[32];
	};
};
struct HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4 
{
	uint8_t* ___Ptr;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___Keys;
	int32_t* ___Next;
	int32_t* ___Buckets;
	int32_t ___Count;
	int32_t ___Capacity;
	int32_t ___Log2MinGrowth;
	int32_t ___BucketCapacity;
	int32_t ___AllocatedIndex;
	int32_t ___FirstFreeIdx;
	int32_t ___SizeOfTValue;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B 
{
	uint8_t* ___Ptr;
	int32_t* ___Keys;
	int32_t* ___Next;
	int32_t* ___Buckets;
	int32_t ___Count;
	int32_t ___Capacity;
	int32_t ___Log2MinGrowth;
	int32_t ___BucketCapacity;
	int32_t ___AllocatedIndex;
	int32_t ___FirstFreeIdx;
	int32_t ___SizeOfTValue;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258 
{
	UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD 
{
	UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515 
{
	UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6 
{
	int32_t* ___Ptr;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___m_Capacity;
	int32_t ___m_Filled;
	int32_t ___m_Write;
	int32_t ___m_Read;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct CustomPropertyList_t48CD7F57B3FAE18133914CE45C38B1B6620A9B3A 
{
	intptr_t ___m_Data;
};
struct Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153 
{
	intptr_t ___m_Node;
	int32_t ___Version;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
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
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE 
{
	int32_t ___value__;
};
struct TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79 
{
	int32_t ___value__;
};
struct UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4 
{
	uint64_t* ___Ptr;
	int32_t ___Length;
	int32_t ___Capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2 
{
	intptr_t ___m_FirstBlock;
	intptr_t ___m_LastBlock;
	int32_t ___m_MaxItems;
	int32_t ___m_CurrentRead;
	uint8_t* ___m_CurrentWriteBlockTLS;
};
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C 
{
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Next;
	U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116 ___Data;
};
struct UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2 
{
	void* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_OffsetPadding[1];
			uint8_t ___Byte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_OffsetPadding[2];
			uint8_t ___Byte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_OffsetPadding[3];
			uint8_t ___Byte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_OffsetPadding[4];
			uint8_t ___Byte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_OffsetPadding[5];
			uint8_t ___Byte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_OffsetPadding[6];
			uint8_t ___Byte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_OffsetPadding[7];
			uint8_t ___Byte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_OffsetPadding[8];
			uint8_t ___Byte8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_OffsetPadding[9];
			uint8_t ___Byte9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_OffsetPadding[10];
			uint8_t ___Byte10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_OffsetPadding[11];
			uint8_t ___Byte11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_OffsetPadding[12];
			uint8_t ___Byte12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_OffsetPadding[13];
			uint8_t ___Byte13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_OffsetPadding[14];
			uint8_t ___Byte14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_OffsetPadding[15];
			uint8_t ___Byte15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___SByte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_OffsetPadding[1];
			int8_t ___SByte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_OffsetPadding[2];
			int8_t ___SByte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_OffsetPadding[3];
			int8_t ___SByte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_OffsetPadding[4];
			int8_t ___SByte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_OffsetPadding[5];
			int8_t ___SByte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_OffsetPadding[6];
			int8_t ___SByte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_OffsetPadding[7];
			int8_t ___SByte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte8_OffsetPadding[8];
			int8_t ___SByte8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte8_OffsetPadding_forAlignmentOnly[8];
			int8_t ___SByte8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte9_OffsetPadding[9];
			int8_t ___SByte9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte9_OffsetPadding_forAlignmentOnly[9];
			int8_t ___SByte9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte10_OffsetPadding[10];
			int8_t ___SByte10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte10_OffsetPadding_forAlignmentOnly[10];
			int8_t ___SByte10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte11_OffsetPadding[11];
			int8_t ___SByte11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte11_OffsetPadding_forAlignmentOnly[11];
			int8_t ___SByte11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte12_OffsetPadding[12];
			int8_t ___SByte12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte12_OffsetPadding_forAlignmentOnly[12];
			int8_t ___SByte12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte13_OffsetPadding[13];
			int8_t ___SByte13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte13_OffsetPadding_forAlignmentOnly[13];
			int8_t ___SByte13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte14_OffsetPadding[14];
			int8_t ___SByte14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte14_OffsetPadding_forAlignmentOnly[14];
			int8_t ___SByte14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte15_OffsetPadding[15];
			int8_t ___SByte15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte15_OffsetPadding_forAlignmentOnly[15];
			int8_t ___SByte15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___UShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_OffsetPadding[2];
			uint16_t ___UShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_OffsetPadding[4];
			uint16_t ___UShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_OffsetPadding[6];
			uint16_t ___UShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort4_OffsetPadding[8];
			uint16_t ___UShort4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort4_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___UShort4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort5_OffsetPadding[10];
			uint16_t ___UShort5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort5_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___UShort5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort6_OffsetPadding[12];
			uint16_t ___UShort6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort6_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___UShort6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort7_OffsetPadding[14];
			uint16_t ___UShort7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort7_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___UShort7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___SShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_OffsetPadding[2];
			int16_t ___SShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_OffsetPadding[4];
			int16_t ___SShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_OffsetPadding[6];
			int16_t ___SShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort4_OffsetPadding[8];
			int16_t ___SShort4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort4_OffsetPadding_forAlignmentOnly[8];
			int16_t ___SShort4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort5_OffsetPadding[10];
			int16_t ___SShort5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort5_OffsetPadding_forAlignmentOnly[10];
			int16_t ___SShort5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort6_OffsetPadding[12];
			int16_t ___SShort6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort6_OffsetPadding_forAlignmentOnly[12];
			int16_t ___SShort6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort7_OffsetPadding[14];
			int16_t ___SShort7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort7_OffsetPadding_forAlignmentOnly[14];
			int16_t ___SShort7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___UInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_OffsetPadding[4];
			uint32_t ___UInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt2_OffsetPadding[8];
			uint32_t ___UInt2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___UInt2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt3_OffsetPadding[12];
			uint32_t ___UInt3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___UInt3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___SInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_OffsetPadding[4];
			int32_t ___SInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt2_OffsetPadding[8];
			int32_t ___SInt2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt2_OffsetPadding_forAlignmentOnly[8];
			int32_t ___SInt2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt3_OffsetPadding[12];
			int32_t ___SInt3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt3_OffsetPadding_forAlignmentOnly[12];
			int32_t ___SInt3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___ULong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong1_OffsetPadding[8];
			uint64_t ___ULong1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ULong1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___SLong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong1_OffsetPadding[8];
			int64_t ___SLong1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong1_OffsetPadding_forAlignmentOnly[8];
			int64_t ___SLong1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___Float0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_OffsetPadding[4];
			float ___Float1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_OffsetPadding[8];
			float ___Float2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_OffsetPadding[12];
			float ___Float3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___Double0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double1_OffsetPadding[8];
			double ___Double1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double1_OffsetPadding_forAlignmentOnly[8];
			double ___Double1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64;
		};
		#pragma pack(pop, tp)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Hi64_OffsetPadding[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Hi64_OffsetPadding_forAlignmentOnly[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_forAlignmentOnly;
		};
	};
};
struct Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC 
{
	intptr_t ___Pointer;
	int32_t ___Items;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84 
{
	uint8_t* ___m_pointer;
	int64_t ___m_bytes;
	Union_t651696C44E98CE15C53FE2628FA73E4B102D6C21 ___m_union;
};
struct StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020 
{
	StreamingStateData_tB4ECCAB2ECCD0555A32604F161D9B80D9FA42B3A ___State;
};
struct StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 
{
	U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD ___Bits;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct CustomPropertyListRef_t132B9890006F76BAE81BFAF35C9944D2364E1DC7 
{
	CustomPropertyList_t48CD7F57B3FAE18133914CE45C38B1B6620A9B3A ___m_Self;
};
struct MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 
{
	union
	{
		struct
		{
			intptr_t ___pointer;
			int32_t ___allocator;
		};
		uint8_t MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2__padding[16];
	};
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
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D 
{
	int32_t ___m_ValueType;
	int32_t ___valueIndex;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67 
{
	UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2 ___m_UntypedListData;
};
struct Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 
{
	Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC ___Range;
	int32_t ___BytesPerItem;
	int32_t ___AllocatedItems;
	uint8_t ___Log2Alignment;
	uint8_t ___Padding0;
	uint16_t ___Padding1;
	uint32_t ___Padding2;
};
struct Element_t179C2EB2265F9878720AC84FD76D0A65EFD7F61E 
{
	int64_t ___TypeHash;
	void* ___m_Data;
	int32_t ___m_Size;
	int32_t ___m_Align;
	Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153 ___m_AudioHandle;
	Element_t179C2EB2265F9878720AC84FD76D0A65EFD7F61E* ___m_NextElement;
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle;
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle;
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle;
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
struct Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458 
{
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 ___m_BlockData;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_CurrentBlock;
	uint8_t* ___m_CurrentPtr;
	uint8_t* ___m_CurrentBlockEnd;
	int32_t ___m_RemainingItemCount;
	int32_t ___m_LastBlockSize;
};
struct Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F 
{
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 ___m_BlockData;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_CurrentBlock;
	uint8_t* ___m_CurrentPtr;
	uint8_t* ___m_CurrentBlockEnd;
	int32_t ___m_ForeachIndex;
	int32_t ___m_ElementCount;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_FirstBlock;
	int32_t ___m_FirstOffset;
	int32_t ___m_NumberOfBlocks;
	int32_t ___m_ThreadIndex;
};
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1 
{
	CustomPropertyListRef_t132B9890006F76BAE81BFAF35C9944D2364E1DC7 ___m_CustomProperties;
	float ___m_DpiScaling;
};
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30_StaticFields
{
	Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* ___defaultComparer;
};
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563_StaticFields
{
	Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* ___defaultComparer;
};
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B_StaticFields
{
	Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* ___defaultComparer;
};
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98_StaticFields
{
	Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* ___defaultComparer;
};
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985_StaticFields
{
	Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* ___defaultComparer;
};
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields
{
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* ___defaultComparer;
};
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields
{
	EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* ___defaultComparer;
};
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields
{
	EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* ___defaultComparer;
};
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields
{
	EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* ___defaultComparer;
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crctab;
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
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_StaticFields
{
	int32_t ___SECRET_LIMIT;
	int32_t ___NB_STRIPES_PER_BLOCK;
	int32_t ___INTERNAL_BUFFER_SIZE;
	int32_t ___INTERNAL_BUFFER_STRIPES;
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m28FA73F1F5BC07ACE456EF93F6E6B7BD0938F042_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_mB8B1381DBA9D2EE1F9028234499565CC8673E01D_gshared (bool* ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m68A03EAC3EF1E3D87716659FE2B94A318E2CC737_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_mE9FA251F0E064A307ABB035CDF9BBD3A15E27BCA_gshared (uint8_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m81A546574CE59EE2FCC473F6C9A4C54058C951A0_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m4FB087BE50BBBC116BB397335507FADBB0C9BA7C_gshared (Il2CppChar* ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mEF488EFA39A9905B46391683B7C5485D386C3174_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m3F725A3F60885B2C4C53E9D71B73908F48A5AD38_gshared (double* ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m538759A01D54657B61C90855D5152866766EBC6C_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_mDA6B34A52B8E82977098FF1769B01EA488A3DE22_gshared (int16_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1D2EE7A9133800F11380FA5913822DCF99A9778F_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m157E4DC3B387E09D703AAAE4D11CBB0267C04EF2_gshared (int32_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC8E26CF8B62C6C774EC7E13806715DB69E37D16A_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m9C7E45305F24B5B40039759DE564DBD2C20C917C_gshared (int64_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m41488C4DFA5B8D5051F3F8733A9BBCFCBDC2F626_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m7F72C2DD7DA9FA08BDE8C9339D2264EFFBAE924D_gshared (int8_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m898B6F75C97955142F1E0A159F1288EDD93C754F_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m8AD5F4AC534C179A15C38FC7CBCE73B8851EB345_gshared (float* ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject** UnsafeUtility_As_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m7E01BE5B3130A632C43D1F86A8781C30A93D3DCF_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m1EA769184550962A9DF9311283B2D7AD443D08F1_gshared (String_t** ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m434C034D74938711222B7470BF18EA08297229DA_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_mCBD4D3D8D704C26BF5CF2A001A7616AEC6CFFA8D_gshared (uint16_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9CA0DF2BED961B37E81FA80C847F8479ED4CCA34_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m842227440C31A6B77458253EC8F7640AB89B8994_gshared (uint32_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mBB92BB87798B838422C987018A335ED57D57C8C3_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m1ACC6E3377FC08FF9B75BE388A57B42D8CDB46E8_gshared (uint64_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mE0DC79FF1C497009BF0353150C38089129E7181F_gshared (bool* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mD1AD82D45713FC4D3ABF17A4CE9DFAC3D6B50036_gshared (uint8_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mE94669BAB537C289DBC6D88FDCEACB902F6E3E5F_gshared (Il2CppChar* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mAC94ECBBBA0113FE60617D98B603CD695A2AB46B_gshared (double* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m3D942B8720C7E94174784DCB3E9A3EF77703E4BD_gshared (int16_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m07151E0E8ECF93730F0619B52F833F95F80ADF8F_gshared (int32_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mEA15854F2BC72DEB49A3CE9F744E6FED4EF19D86_gshared (int64_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCE38C9553121C2238C13A6E0C293D42B12274CF3_gshared (int8_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m765D509EE2FCD19F073A160225AC7CB93FC34A1F_gshared (float* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m98291F31A0DA4DB43357507B5A3C782590F51F18_gshared (String_t** ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m33268C04763ACF5671BBE83CB5F9C5E5ECBF263C_gshared (uint16_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m3601A3DD9D205B4287F652C6E9777EE0B3F65EB0_gshared (uint32_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mA17DACB2249A5DA0F11E9AE211E44BB0916F8B14_gshared (uint64_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m3AE60763095766AFC3503FE5D4E612F2137E1D64_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m599FB404D66BF2E53D69FF27AB599535E75EB37A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m976FAA642AA009127703997A127677B3216E665F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mE47B5AABDD458396FF45F684A23B9BC83413CFC6_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m62F419D5A5A80806DB030B830E2E2F5ADE5990FD_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mD18F666EDE420221F4D0FD07CAE28E509B3C1A8A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m78D6914DCC2C28FFB3F4181426EE05583F178370_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m7167A90AD1C837F457ED5841B6B2E41BBFF6C41C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m05AA5F40C3C0FC8ACBB072D55942F0AEC5EB4F96_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m71F2558D12040ACEBCD2F96428E0D31D8B409096_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBBCB804F367E06EA4D482F1B69165DD2B5BF38FF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m6E84570538BC9A257F375DE16EC3D98D9076B2B4_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m5F90346B16182C4121698F7426124A040ECAAFF0_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m75FA295E357B5011AD69844490BAC145368D5EBC_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mC453F012B2E08302A2BB03765FD1B61189E606D7_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mF7B295F81A4BCD99A3E33CD14E19CB95AEECFC24_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m7DA57A68CA4B7EC816C6C904A108D584F4FC22DE_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mE1FFC902149E42012D1AF4A1470972459DC88EB3_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mBF77CFD9D634306003AB5234BDE7B8B99F066A6A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m09F1ADDF010320442C5637A9E913FADC5A2C63EA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m3DFFA3C3D2F7C8C394C4C4A1BB44A871725C6866_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mAEBA4084CCA2A97C257494BFD183083F050CF7B4_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mA71660AC59A96100C6151468D4DA76E0B12F6A3E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m3A53F8C10F926A93DFD07F939804AD8130EABAC0_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mEEBF4924146F4A42DDE1E35E0A26B679C339435A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m1CF96D2F60E32144748F4414C4E41831D7BAE521_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mA5B98899114EC8F7236468B743FA0A2D39E7AB34_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m8D2A9D8897BBA98BDB7D706C0543FF73D80A808F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m0438BBE2D84D4D7F65443E9CD69FD10A7C91913B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mBC2ABA1E056B7FAD0435F07A5EB1F9034DCFF66F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mC9663B2959C464E82F145504604CD37077158821_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m8BEBCC60926ABBB1F1076342E3FD913512A5C16E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mA602486BE28FFE8EB43A7068D62272C9CDE30858_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mC4DA417C6DE13CB6931467DEDDE302BE8AFA20A5_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m4B4AB46D74BC3E0692C0A1AAF4E6D39037B8C84E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m57E942527218C6493C68644B1AA97BB885395B5C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mB9B9C72E7FD4A8BCDA73B89EE69B962587C8A564_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m42EFE354BF99B9E9014DD781F311FD87DAFEAAAE_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m19E0B09B99B71048B79509AFE0C77D3531A65FE7_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mDD0856F80893293EDE8EC2991546BBDBE15344A8_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m42819B71853F9C6B85E90BEC348D59D44D6C4CA2_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mC593D3B28F7463E77C8C177DE3411E364A815DB9_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mB9A75977F7532FB14C755CFFF50A1E528CE9C8FC_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mE45BA68543511F0DEFE7A1749238AA591895FF9B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mE0E17266C9705B431697EB67A97990F414FA7954_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE0C65F4221E48BB07F75856972A0CCDAE284AB9F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1AB8BF0921C24186B3C43FC4341AAD2F6FE87C4D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mED1DC338E5DB62F3E64F6272A9F12150DA5CC1B9_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisIl2CppSharedGenericObject_m2137DD4D5FD5998392651B678C11AE04FC8ABFC3_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9A1240B1BCA4029B93CBDCE0196491FEC192E38_gshared_inline (void* ___0_ptr, int32_t* ___1_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CustomStyleProperty_1_get_name_m50215025D84B5D090C2C03D30BDB064B9874EEED_gshared_inline (CustomStyleProperty_1_tB73A4836B6E305C3DB7FE82821F7E521F6048231* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared (uint8_t* ___0_a, int32_t ___1_alen, uint8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared (int16_t* ___0_a, int32_t ___1_alen, int16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared (int8_t* ___0_a, int32_t ___1_alen, int8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared (uint16_t* ___0_a, int32_t ___1_alen, uint16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared (int32_t ___0_len, int32_t ___1_imm8, uint8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared (int32_t ___0_len, int32_t ___1_imm8, int16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared (int32_t ___0_len, int32_t ___1_imm8, int8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared (int32_t ___0_len, int32_t ___1_imm8, uint16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared (uint8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared (int16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared (int8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared (uint16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3_gshared (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m0593078BB9DC842E2FE2C88E802B606CDC972402_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m9D33FAB445EBAAEAB91BED2D158B3290B610D47E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m796E3C1D5F3A55A9EFFD1AA98C09AB788198C7A1_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_m70E5F2C375F3B4039114929EBDF86DFCBF1EF99C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_m756E0E44BD2515C8949896575600531B61F5B16B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m219DC3BB1EF8E9E18A66470555A9974E2C7D9EC6_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIntPtr_t_mB17C6C168D8CA088879EDD0D5B9923F70F5269B8_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m56B5B812224539B0C633BABE891ADDE1973580F6_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mC1EBD5161294EF95B8AC378DDF616869D287DC36_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_m3DF404928C7038CCD5C05BBBA41C4B2FD35A4253_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_mD84C2AFFB4ED036B913CEAD2FBF8A60E9C3A017D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m5892DF1B875736B0E3612716E560A4E4AD5F6591_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalCopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D446ED46691A93FCA713FB662C464A32EC57539_gshared (void* ___0_ptr, int32_t* ___1_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8_gshared (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Type_GetTypeCode_m2CE476933AF4B381D7A52F4343B70E9878FDF466 (Type_t* ___0_type, const RuntimeMethod* method) ;
inline bool* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m28FA73F1F5BC07ACE456EF93F6E6B7BD0938F042_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method)
{
	return ((  bool* (*) (Il2CppSharedGenericObject**, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m28FA73F1F5BC07ACE456EF93F6E6B7BD0938F042_gshared_inline)(___0_from, method);
}
inline Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_mB8B1381DBA9D2EE1F9028234499565CC8673E01D (bool* ___0_source, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (bool*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_mB8B1381DBA9D2EE1F9028234499565CC8673E01D_gshared)(___0_source, method);
}
inline uint8_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m68A03EAC3EF1E3D87716659FE2B94A318E2CC737_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Il2CppSharedGenericObject**, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m68A03EAC3EF1E3D87716659FE2B94A318E2CC737_gshared_inline)(___0_from, method);
}
inline Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_mE9FA251F0E064A307ABB035CDF9BBD3A15E27BCA (uint8_t* ___0_source, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (uint8_t*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_mE9FA251F0E064A307ABB035CDF9BBD3A15E27BCA_gshared)(___0_source, method);
}
inline Il2CppChar* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m81A546574CE59EE2FCC473F6C9A4C54058C951A0_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (Il2CppSharedGenericObject**, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m81A546574CE59EE2FCC473F6C9A4C54058C951A0_gshared_inline)(___0_from, method);
}
inline Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m4FB087BE50BBBC116BB397335507FADBB0C9BA7C (Il2CppChar* ___0_source, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Il2CppChar*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m4FB087BE50BBBC116BB397335507FADBB0C9BA7C_gshared)(___0_source, method);
}
inline double* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mEF488EFA39A9905B46391683B7C5485D386C3174_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method)
{
	return ((  double* (*) (Il2CppSharedGenericObject**, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mEF488EFA39A9905B46391683B7C5485D386C3174_gshared_inline)(___0_from, method);
}
inline Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m3F725A3F60885B2C4C53E9D71B73908F48A5AD38 (double* ___0_source, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (double*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m3F725A3F60885B2C4C53E9D71B73908F48A5AD38_gshared)(___0_source, method);
}
inline int16_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m538759A01D54657B61C90855D5152866766EBC6C_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method)
{
	return ((  int16_t* (*) (Il2CppSharedGenericObject**, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m538759A01D54657B61C90855D5152866766EBC6C_gshared_inline)(___0_from, method);
}
inline Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_mDA6B34A52B8E82977098FF1769B01EA488A3DE22 (int16_t* ___0_source, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (int16_t*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_mDA6B34A52B8E82977098FF1769B01EA488A3DE22_gshared)(___0_source, method);
}
inline int32_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1D2EE7A9133800F11380FA5913822DCF99A9778F_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method)
{
	return ((  int32_t* (*) (Il2CppSharedGenericObject**, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1D2EE7A9133800F11380FA5913822DCF99A9778F_gshared_inline)(___0_from, method);
}
inline Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m157E4DC3B387E09D703AAAE4D11CBB0267C04EF2 (int32_t* ___0_source, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (int32_t*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m157E4DC3B387E09D703AAAE4D11CBB0267C04EF2_gshared)(___0_source, method);
}
inline int64_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC8E26CF8B62C6C774EC7E13806715DB69E37D16A_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method)
{
	return ((  int64_t* (*) (Il2CppSharedGenericObject**, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC8E26CF8B62C6C774EC7E13806715DB69E37D16A_gshared_inline)(___0_from, method);
}
inline Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m9C7E45305F24B5B40039759DE564DBD2C20C917C (int64_t* ___0_source, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (int64_t*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m9C7E45305F24B5B40039759DE564DBD2C20C917C_gshared)(___0_source, method);
}
inline int8_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m41488C4DFA5B8D5051F3F8733A9BBCFCBDC2F626_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method)
{
	return ((  int8_t* (*) (Il2CppSharedGenericObject**, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m41488C4DFA5B8D5051F3F8733A9BBCFCBDC2F626_gshared_inline)(___0_from, method);
}
inline Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m7F72C2DD7DA9FA08BDE8C9339D2264EFFBAE924D (int8_t* ___0_source, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (int8_t*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m7F72C2DD7DA9FA08BDE8C9339D2264EFFBAE924D_gshared)(___0_source, method);
}
inline float* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m898B6F75C97955142F1E0A159F1288EDD93C754F_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method)
{
	return ((  float* (*) (Il2CppSharedGenericObject**, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m898B6F75C97955142F1E0A159F1288EDD93C754F_gshared_inline)(___0_from, method);
}
inline Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m8AD5F4AC534C179A15C38FC7CBCE73B8851EB345 (float* ___0_source, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (float*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m8AD5F4AC534C179A15C38FC7CBCE73B8851EB345_gshared)(___0_source, method);
}
inline String_t** UnsafeUtility_As_TisIl2CppSharedGenericObject_TisString_t_mC2AA2202E26CE0522A927F31A2652697F2871F61_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method)
{
	return ((  String_t** (*) (Il2CppSharedGenericObject**, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m7E01BE5B3130A632C43D1F86A8781C30A93D3DCF_gshared_inline)(___0_from, method);
}
inline Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m1EA769184550962A9DF9311283B2D7AD443D08F1 (String_t** ___0_source, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (String_t**, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m1EA769184550962A9DF9311283B2D7AD443D08F1_gshared)(___0_source, method);
}
inline uint16_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m434C034D74938711222B7470BF18EA08297229DA_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method)
{
	return ((  uint16_t* (*) (Il2CppSharedGenericObject**, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m434C034D74938711222B7470BF18EA08297229DA_gshared_inline)(___0_from, method);
}
inline Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_mCBD4D3D8D704C26BF5CF2A001A7616AEC6CFFA8D (uint16_t* ___0_source, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (uint16_t*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_mCBD4D3D8D704C26BF5CF2A001A7616AEC6CFFA8D_gshared)(___0_source, method);
}
inline uint32_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9CA0DF2BED961B37E81FA80C847F8479ED4CCA34_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method)
{
	return ((  uint32_t* (*) (Il2CppSharedGenericObject**, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9CA0DF2BED961B37E81FA80C847F8479ED4CCA34_gshared_inline)(___0_from, method);
}
inline Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m842227440C31A6B77458253EC8F7640AB89B8994 (uint32_t* ___0_source, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (uint32_t*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m842227440C31A6B77458253EC8F7640AB89B8994_gshared)(___0_source, method);
}
inline uint64_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mBB92BB87798B838422C987018A335ED57D57C8C3_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method)
{
	return ((  uint64_t* (*) (Il2CppSharedGenericObject**, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mBB92BB87798B838422C987018A335ED57D57C8C3_gshared_inline)(___0_from, method);
}
inline Il2CppSharedGenericObject* PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m1ACC6E3377FC08FF9B75BE388A57B42D8CDB46E8 (uint64_t* ___0_source, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (uint64_t*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m1ACC6E3377FC08FF9B75BE388A57B42D8CDB46E8_gshared)(___0_source, method);
}
inline int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mE0DC79FF1C497009BF0353150C38089129E7181F (bool* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (bool*, const RuntimeMethod*))PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mE0DC79FF1C497009BF0353150C38089129E7181F_gshared)(___0_source, method);
}
inline int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mD1AD82D45713FC4D3ABF17A4CE9DFAC3D6B50036 (uint8_t* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint8_t*, const RuntimeMethod*))PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mD1AD82D45713FC4D3ABF17A4CE9DFAC3D6B50036_gshared)(___0_source, method);
}
inline int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mE94669BAB537C289DBC6D88FDCEACB902F6E3E5F (Il2CppChar* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Il2CppChar*, const RuntimeMethod*))PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mE94669BAB537C289DBC6D88FDCEACB902F6E3E5F_gshared)(___0_source, method);
}
inline int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mAC94ECBBBA0113FE60617D98B603CD695A2AB46B (double* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (double*, const RuntimeMethod*))PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mAC94ECBBBA0113FE60617D98B603CD695A2AB46B_gshared)(___0_source, method);
}
inline int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m3D942B8720C7E94174784DCB3E9A3EF77703E4BD (int16_t* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int16_t*, const RuntimeMethod*))PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m3D942B8720C7E94174784DCB3E9A3EF77703E4BD_gshared)(___0_source, method);
}
inline int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m07151E0E8ECF93730F0619B52F833F95F80ADF8F (int32_t* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t*, const RuntimeMethod*))PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m07151E0E8ECF93730F0619B52F833F95F80ADF8F_gshared)(___0_source, method);
}
inline int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mEA15854F2BC72DEB49A3CE9F744E6FED4EF19D86 (int64_t* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int64_t*, const RuntimeMethod*))PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mEA15854F2BC72DEB49A3CE9F744E6FED4EF19D86_gshared)(___0_source, method);
}
inline int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCE38C9553121C2238C13A6E0C293D42B12274CF3 (int8_t* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int8_t*, const RuntimeMethod*))PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCE38C9553121C2238C13A6E0C293D42B12274CF3_gshared)(___0_source, method);
}
inline int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m765D509EE2FCD19F073A160225AC7CB93FC34A1F (float* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (float*, const RuntimeMethod*))PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m765D509EE2FCD19F073A160225AC7CB93FC34A1F_gshared)(___0_source, method);
}
inline int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m98291F31A0DA4DB43357507B5A3C782590F51F18 (String_t** ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (String_t**, const RuntimeMethod*))PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m98291F31A0DA4DB43357507B5A3C782590F51F18_gshared)(___0_source, method);
}
inline int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m33268C04763ACF5671BBE83CB5F9C5E5ECBF263C (uint16_t* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint16_t*, const RuntimeMethod*))PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m33268C04763ACF5671BBE83CB5F9C5E5ECBF263C_gshared)(___0_source, method);
}
inline int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m3601A3DD9D205B4287F652C6E9777EE0B3F65EB0 (uint32_t* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint32_t*, const RuntimeMethod*))PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m3601A3DD9D205B4287F652C6E9777EE0B3F65EB0_gshared)(___0_source, method);
}
inline int32_t PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mA17DACB2249A5DA0F11E9AE211E44BB0916F8B14 (uint64_t* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint64_t*, const RuntimeMethod*))PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mA17DACB2249A5DA0F11E9AE211E44BB0916F8B14_gshared)(___0_source, method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m3AE60763095766AFC3503FE5D4E612F2137E1D64 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m3AE60763095766AFC3503FE5D4E612F2137E1D64_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m599FB404D66BF2E53D69FF27AB599535E75EB37A (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m599FB404D66BF2E53D69FF27AB599535E75EB37A_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m976FAA642AA009127703997A127677B3216E665F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m976FAA642AA009127703997A127677B3216E665F_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mE47B5AABDD458396FF45F684A23B9BC83413CFC6 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mE47B5AABDD458396FF45F684A23B9BC83413CFC6_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m62F419D5A5A80806DB030B830E2E2F5ADE5990FD (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m62F419D5A5A80806DB030B830E2E2F5ADE5990FD_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mD18F666EDE420221F4D0FD07CAE28E509B3C1A8A (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mD18F666EDE420221F4D0FD07CAE28E509B3C1A8A_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m78D6914DCC2C28FFB3F4181426EE05583F178370 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m78D6914DCC2C28FFB3F4181426EE05583F178370_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m7167A90AD1C837F457ED5841B6B2E41BBFF6C41C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m7167A90AD1C837F457ED5841B6B2E41BBFF6C41C_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m05AA5F40C3C0FC8ACBB072D55942F0AEC5EB4F96 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m05AA5F40C3C0FC8ACBB072D55942F0AEC5EB4F96_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m71F2558D12040ACEBCD2F96428E0D31D8B409096 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m71F2558D12040ACEBCD2F96428E0D31D8B409096_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBBCB804F367E06EA4D482F1B69165DD2B5BF38FF (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBBCB804F367E06EA4D482F1B69165DD2B5BF38FF_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m6E84570538BC9A257F375DE16EC3D98D9076B2B4 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m6E84570538BC9A257F375DE16EC3D98D9076B2B4_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m5F90346B16182C4121698F7426124A040ECAAFF0 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m5F90346B16182C4121698F7426124A040ECAAFF0_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m75FA295E357B5011AD69844490BAC145368D5EBC (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m75FA295E357B5011AD69844490BAC145368D5EBC_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mC453F012B2E08302A2BB03765FD1B61189E606D7 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mC453F012B2E08302A2BB03765FD1B61189E606D7_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mF7B295F81A4BCD99A3E33CD14E19CB95AEECFC24 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mF7B295F81A4BCD99A3E33CD14E19CB95AEECFC24_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m7DA57A68CA4B7EC816C6C904A108D584F4FC22DE (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m7DA57A68CA4B7EC816C6C904A108D584F4FC22DE_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mE1FFC902149E42012D1AF4A1470972459DC88EB3 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mE1FFC902149E42012D1AF4A1470972459DC88EB3_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mBF77CFD9D634306003AB5234BDE7B8B99F066A6A (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mBF77CFD9D634306003AB5234BDE7B8B99F066A6A_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m09F1ADDF010320442C5637A9E913FADC5A2C63EA (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m09F1ADDF010320442C5637A9E913FADC5A2C63EA_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m3DFFA3C3D2F7C8C394C4C4A1BB44A871725C6866 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m3DFFA3C3D2F7C8C394C4C4A1BB44A871725C6866_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mAEBA4084CCA2A97C257494BFD183083F050CF7B4 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mAEBA4084CCA2A97C257494BFD183083F050CF7B4_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mA71660AC59A96100C6151468D4DA76E0B12F6A3E (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mA71660AC59A96100C6151468D4DA76E0B12F6A3E_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m3A53F8C10F926A93DFD07F939804AD8130EABAC0 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m3A53F8C10F926A93DFD07F939804AD8130EABAC0_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mEEBF4924146F4A42DDE1E35E0A26B679C339435A (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mEEBF4924146F4A42DDE1E35E0A26B679C339435A_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m1CF96D2F60E32144748F4414C4E41831D7BAE521 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m1CF96D2F60E32144748F4414C4E41831D7BAE521_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mA5B98899114EC8F7236468B743FA0A2D39E7AB34 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mA5B98899114EC8F7236468B743FA0A2D39E7AB34_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m8D2A9D8897BBA98BDB7D706C0543FF73D80A808F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m8D2A9D8897BBA98BDB7D706C0543FF73D80A808F_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m0438BBE2D84D4D7F65443E9CD69FD10A7C91913B (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m0438BBE2D84D4D7F65443E9CD69FD10A7C91913B_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mBC2ABA1E056B7FAD0435F07A5EB1F9034DCFF66F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mBC2ABA1E056B7FAD0435F07A5EB1F9034DCFF66F_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mC9663B2959C464E82F145504604CD37077158821 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mC9663B2959C464E82F145504604CD37077158821_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m8BEBCC60926ABBB1F1076342E3FD913512A5C16E (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m8BEBCC60926ABBB1F1076342E3FD913512A5C16E_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mA602486BE28FFE8EB43A7068D62272C9CDE30858 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mA602486BE28FFE8EB43A7068D62272C9CDE30858_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mC4DA417C6DE13CB6931467DEDDE302BE8AFA20A5 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mC4DA417C6DE13CB6931467DEDDE302BE8AFA20A5_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m4B4AB46D74BC3E0692C0A1AAF4E6D39037B8C84E (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m4B4AB46D74BC3E0692C0A1AAF4E6D39037B8C84E_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m57E942527218C6493C68644B1AA97BB885395B5C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m57E942527218C6493C68644B1AA97BB885395B5C_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mB9B9C72E7FD4A8BCDA73B89EE69B962587C8A564 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mB9B9C72E7FD4A8BCDA73B89EE69B962587C8A564_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m42EFE354BF99B9E9014DD781F311FD87DAFEAAAE (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m42EFE354BF99B9E9014DD781F311FD87DAFEAAAE_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m19E0B09B99B71048B79509AFE0C77D3531A65FE7 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m19E0B09B99B71048B79509AFE0C77D3531A65FE7_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mDD0856F80893293EDE8EC2991546BBDBE15344A8 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mDD0856F80893293EDE8EC2991546BBDBE15344A8_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m42819B71853F9C6B85E90BEC348D59D44D6C4CA2 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m42819B71853F9C6B85E90BEC348D59D44D6C4CA2_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mC593D3B28F7463E77C8C177DE3411E364A815DB9 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mC593D3B28F7463E77C8C177DE3411E364A815DB9_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mB9A75977F7532FB14C755CFFF50A1E528CE9C8FC (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mB9A75977F7532FB14C755CFFF50A1E528CE9C8FC_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mE45BA68543511F0DEFE7A1749238AA591895FF9B (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mE45BA68543511F0DEFE7A1749238AA591895FF9B_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mE0E17266C9705B431697EB67A97990F414FA7954 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mE0E17266C9705B431697EB67A97990F414FA7954_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE0C65F4221E48BB07F75856972A0CCDAE284AB9F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE0C65F4221E48BB07F75856972A0CCDAE284AB9F_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1AB8BF0921C24186B3C43FC4341AAD2F6FE87C4D (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1AB8BF0921C24186B3C43FC4341AAD2F6FE87C4D_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mED1DC338E5DB62F3E64F6272A9F12150DA5CC1B9 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mED1DC338E5DB62F3E64F6272A9F12150DA5CC1B9_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisIl2CppSharedGenericObject_m2137DD4D5FD5998392651B678C11AE04FC8ABFC3 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisIl2CppSharedGenericObject_m2137DD4D5FD5998392651B678C11AE04FC8ABFC3_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionHelper_IsAligned_m4761669B9084B892256349C0FF27DBF494DA9AE9 (uint64_t ___0_offset, int32_t ___1_alignmentPowerOfTwo, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline int32_t Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, const RuntimeMethod*))Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_gshared)(__this, method);
}
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared)((Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*)__this, il2cppRetVal, method);
}
inline void UnsafeUtility_CopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9A1240B1BCA4029B93CBDCE0196491FEC192E38_inline (void* ___0_ptr, int32_t* ___1_output, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t*, const RuntimeMethod*))UnsafeUtility_CopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9A1240B1BCA4029B93CBDCE0196491FEC192E38_gshared_inline)(___0_ptr, ___1_output, method);
}
inline void Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, int32_t*, const RuntimeMethod*))Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9_gshared)(__this, ___0_value, method);
}
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t ___0_structSize, const RuntimeMethod* method) ;
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared)(__this, ___0_value, ___1_allocator, method);
}
inline void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_length, const RuntimeMethod* method)
{
	return ((  void* (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, int32_t*, const RuntimeMethod*))Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared)(__this, ___0_length, method);
}
inline Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*, const RuntimeMethod*))Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Reader_ReadUnsafePtr_m6CDEF727114990BC4C2DF321BE752F229104A888 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, int32_t ___0_size, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*, const RuntimeMethod*))Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Writer_Allocate_m85F9D4FF8746C0A59DC23A9003398A6D9D42526D (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, int32_t ___0_size, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7 (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*, const RuntimeMethod*))Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared)(__this, method);
}
inline void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917 (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared)((Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*)__this, ___0_value, method);
}
inline String_t* CustomStyleProperty_1_get_name_m50215025D84B5D090C2C03D30BDB064B9874EEED_inline (CustomStyleProperty_1_tB73A4836B6E305C3DB7FE82821F7E521F6048231* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (CustomStyleProperty_1_tB73A4836B6E305C3DB7FE82821F7E521F6048231*, const RuntimeMethod*))CustomStyleProperty_1_get_name_m50215025D84B5D090C2C03D30BDB064B9874EEED_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomPropertyListRef_TryGetValue_m9C93FD01B7EC14D4F7C6E880A8F8FB75B9ADAAD5 (CustomPropertyListRef_t132B9890006F76BAE81BFAF35C9944D2364E1DC7* __this, String_t* ___0_name, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleSheet_TryReadAssetReference_m2E9C311E4692494508CC6BB3DDEA3A1255DF1A22 (StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_handle, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490 (int64_t* __this, int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586 (int32_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline)(method);
}
inline Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB (const RuntimeMethod* method)
{
	return ((  Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* (*) (const RuntimeMethod*))Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___0_aindex, int32_t ___1_bindex, bool ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___0_aindex, int32_t ___1_bindex, const RuntimeMethod* method) ;
inline EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline)(method);
}
inline Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* (*) (const RuntimeMethod*))Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407_gshared)(method);
}
inline EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline)(method);
}
inline Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F (const RuntimeMethod* method)
{
	return ((  Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* (*) (const RuntimeMethod*))Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F_gshared)(method);
}
inline EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline)(method);
}
inline Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* (*) (const RuntimeMethod*))Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36_gshared)(method);
}
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B (uint8_t* ___0_a, int32_t ___1_alen, uint8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint8_t*, int32_t, uint8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared)(___0_a, ___1_alen, ___2_b, ___3_blen, ___4_len, ___5_imm8, ___6_allOnes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123 (int32_t ___0_len, int32_t ___1_imm8, int32_t ___2_intRes2, const RuntimeMethod* method) ;
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960 (int16_t* ___0_a, int32_t ___1_alen, int16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int16_t*, int32_t, int16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared)(___0_a, ___1_alen, ___2_b, ___3_blen, ___4_len, ___5_imm8, ___6_allOnes, method);
}
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD (int8_t* ___0_a, int32_t ___1_alen, int8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int8_t*, int32_t, int8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared)(___0_a, ___1_alen, ___2_b, ___3_blen, ___4_len, ___5_imm8, ___6_allOnes, method);
}
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB (uint16_t* ___0_a, int32_t ___1_alen, uint16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint16_t*, int32_t, uint16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared)(___0_a, ___1_alen, ___2_b, ___3_blen, ___4_len, ___5_imm8, ___6_allOnes, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235 (int32_t ___0_len, int32_t ___1_imm8, uint8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint8_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared)(___0_len, ___1_imm8, ___2_allOnesT, ___3_intRes2, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8 (int32_t ___0_len, int32_t ___1_imm8, int16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int16_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared)(___0_len, ___1_imm8, ___2_allOnesT, ___3_intRes2, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455 (int32_t ___0_len, int32_t ___1_imm8, int8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int8_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared)(___0_len, ___1_imm8, ___2_allOnesT, ___3_intRes2, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1 (int32_t ___0_len, int32_t ___1_imm8, uint16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint16_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared)(___0_len, ___1_imm8, ___2_allOnesT, ___3_intRes2, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A (uint8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint8_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared)(___0_ptr, ___1_max, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3 (int16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int16_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared)(___0_ptr, ___1_max, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171 (int8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int8_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared)(___0_ptr, ___1_max, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D (uint16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint16_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared)(___0_ptr, ___1_max, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_mD0C172FBC9AB99BC72DF8CC3665ABB61658AB9E5 (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, void* ___0_input, int32_t ___1_length, const RuntimeMethod* method) ;
inline void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method)
{
	((  void (*) (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared)(__this, ___0_input, method);
}
inline MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3 (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* (*) (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m0593078BB9DC842E2FE2C88E802B606CDC972402 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m0593078BB9DC842E2FE2C88E802B606CDC972402_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380 (void* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, int64_t ___4_size, int32_t ___5_align, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m9D33FAB445EBAAEAB91BED2D158B3290B610D47E (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m9D33FAB445EBAAEAB91BED2D158B3290B610D47E_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m796E3C1D5F3A55A9EFFD1AA98C09AB788198C7A1 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m796E3C1D5F3A55A9EFFD1AA98C09AB788198C7A1_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_m70E5F2C375F3B4039114929EBDF86DFCBF1EF99C (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_m70E5F2C375F3B4039114929EBDF86DFCBF1EF99C_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_m756E0E44BD2515C8949896575600531B61F5B16B (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_m756E0E44BD2515C8949896575600531B61F5B16B_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m219DC3BB1EF8E9E18A66470555A9974E2C7D9EC6 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m219DC3BB1EF8E9E18A66470555A9974E2C7D9EC6_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisIntPtr_t_mB17C6C168D8CA088879EDD0D5B9923F70F5269B8 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisIntPtr_t_mB17C6C168D8CA088879EDD0D5B9923F70F5269B8_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m56B5B812224539B0C633BABE891ADDE1973580F6 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m56B5B812224539B0C633BABE891ADDE1973580F6_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mC1EBD5161294EF95B8AC378DDF616869D287DC36 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mC1EBD5161294EF95B8AC378DDF616869D287DC36_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_m3DF404928C7038CCD5C05BBBA41C4B2FD35A4253 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_m3DF404928C7038CCD5C05BBBA41C4B2FD35A4253_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_mD84C2AFFB4ED036B913CEAD2FBF8A60E9C3A017D (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_mD84C2AFFB4ED036B913CEAD2FBF8A60E9C3A017D_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m5892DF1B875736B0E3612716E560A4E4AD5F6591 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m5892DF1B875736B0E3612716E560A4E4AD5F6591_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_Resize_mA60C117B1C01C122EB2D509DD4EADE4FB44C2150 (void* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___3_label, int64_t ___4_size, int32_t ___5_align, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05_gshared)(method);
}
inline void UnsafeUtility_InternalCopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D446ED46691A93FCA713FB662C464A32EC57539 (void* ___0_ptr, int32_t* ___1_output, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t*, const RuntimeMethod*))UnsafeUtility_InternalCopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D446ED46691A93FCA713FB662C464A32EC57539_gshared)(___0_ptr, ___1_output, method);
}
inline EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377_gshared)(method);
}
inline EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B_gshared)(method);
}
inline EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D_gshared)(method);
}
inline EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8_gshared)(method);
}
// Method Definition Index: 164988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m8343A93DAE3091C3CD02BAC3040AB4BB095DB4ED_gshared (Il2CppSharedGenericObject** ___0_source, Il2CppSharedGenericObject** ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	int32_t V_3 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source), (&___1_destination));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3403));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3404));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:451>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3405));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3406));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3406));
		V_0 = L_1;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:452>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3407));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3408));
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3408));
		V_1 = L_3;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:454>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3409));
		Type_t* L_4 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3410));
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3410));
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		Type_t* L_6 = V_1;
		Type_t* L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3411));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_6, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3411));
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:456>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3412));
		Il2CppSharedGenericObject** L_9 = ___1_destination;
		il2cpp_codegen_initobj(L_9, sizeof(Il2CppSharedGenericObject*));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:457>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3413));
		return (bool)0;
	}

IL_0030:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:460>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3414));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 4)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3415));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3415));
		V_2 = L_11;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:461>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3416));
		Type_t* L_12 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3417));
		NullCheck(L_12);
		bool L_13;
		L_13 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3417));
		if (L_13)
		{
			goto IL_0055;
		}
	}
	{
		Type_t* L_14 = V_2;
		Type_t* L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3418));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_16;
		L_16 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_14, L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3418));
		if (!L_16)
		{
			goto IL_0055;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:463>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3419));
		Il2CppSharedGenericObject** L_17 = ___1_destination;
		il2cpp_codegen_initobj(L_17, sizeof(Il2CppSharedGenericObject*));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:464>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3420));
		return (bool)0;
	}

IL_0055:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:467>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3421));
		Type_t* L_18 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3422));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		int32_t L_19;
		L_19 = Type_GetTypeCode_m2CE476933AF4B381D7A52F4343B70E9878FDF466(L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3422));
		V_3 = L_19;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3423));
		int32_t L_20 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_20, 3)))
		{
			case 0:
			{
				goto IL_00a9;
			}
			case 1:
			{
				goto IL_00cf;
			}
			case 2:
			{
				goto IL_012e;
			}
			case 3:
			{
				goto IL_00bc;
			}
			case 4:
			{
				goto IL_00f5;
			}
			case 5:
			{
				goto IL_0167;
			}
			case 6:
			{
				goto IL_0108;
			}
			case 7:
			{
				goto IL_017a;
			}
			case 8:
			{
				goto IL_011b;
			}
			case 9:
			{
				goto IL_018d;
			}
			case 10:
			{
				goto IL_0141;
			}
			case 11:
			{
				goto IL_00e2;
			}
			case 12:
			{
				goto IL_01a0;
			}
			case 13:
			{
				goto IL_01a0;
			}
			case 14:
			{
				goto IL_01a0;
			}
			case 15:
			{
				goto IL_0154;
			}
		}
	}
	{
		goto IL_01a0;
	}

IL_00a9:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:472>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3424));
		Il2CppSharedGenericObject** L_21 = ___1_destination;
		Il2CppSharedGenericObject** L_22 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3425));
		bool* L_23;
		L_23 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m28FA73F1F5BC07ACE456EF93F6E6B7BD0938F042_inline(L_22, il2cpp_rgctx_method(method->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3425));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3426));
		Il2CppSharedGenericObject* L_24;
		L_24 = PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_mB8B1381DBA9D2EE1F9028234499565CC8673E01D(L_23, il2cpp_rgctx_method(method->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3426));
		*(Il2CppSharedGenericObject**)L_21 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_21, (void*)L_24);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:473>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3427));
		return (bool)1;
	}

IL_00bc:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:475>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3428));
		Il2CppSharedGenericObject** L_25 = ___1_destination;
		Il2CppSharedGenericObject** L_26 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3429));
		uint8_t* L_27;
		L_27 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m68A03EAC3EF1E3D87716659FE2B94A318E2CC737_inline(L_26, il2cpp_rgctx_method(method->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3429));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3430));
		Il2CppSharedGenericObject* L_28;
		L_28 = PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_mE9FA251F0E064A307ABB035CDF9BBD3A15E27BCA(L_27, il2cpp_rgctx_method(method->rgctx_data, 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3430));
		*(Il2CppSharedGenericObject**)L_25 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_25, (void*)L_28);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:476>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3431));
		return (bool)1;
	}

IL_00cf:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:478>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3432));
		Il2CppSharedGenericObject** L_29 = ___1_destination;
		Il2CppSharedGenericObject** L_30 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3433));
		Il2CppChar* L_31;
		L_31 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m81A546574CE59EE2FCC473F6C9A4C54058C951A0_inline(L_30, il2cpp_rgctx_method(method->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3433));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3434));
		Il2CppSharedGenericObject* L_32;
		L_32 = PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m4FB087BE50BBBC116BB397335507FADBB0C9BA7C(L_31, il2cpp_rgctx_method(method->rgctx_data, 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3434));
		*(Il2CppSharedGenericObject**)L_29 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_29, (void*)L_32);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:479>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3435));
		return (bool)1;
	}

IL_00e2:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:481>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3436));
		Il2CppSharedGenericObject** L_33 = ___1_destination;
		Il2CppSharedGenericObject** L_34 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3437));
		double* L_35;
		L_35 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mEF488EFA39A9905B46391683B7C5485D386C3174_inline(L_34, il2cpp_rgctx_method(method->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3437));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3438));
		Il2CppSharedGenericObject* L_36;
		L_36 = PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m3F725A3F60885B2C4C53E9D71B73908F48A5AD38(L_35, il2cpp_rgctx_method(method->rgctx_data, 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3438));
		*(Il2CppSharedGenericObject**)L_33 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_33, (void*)L_36);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:482>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3439));
		return (bool)1;
	}

IL_00f5:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:484>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3440));
		Il2CppSharedGenericObject** L_37 = ___1_destination;
		Il2CppSharedGenericObject** L_38 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3441));
		int16_t* L_39;
		L_39 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m538759A01D54657B61C90855D5152866766EBC6C_inline(L_38, il2cpp_rgctx_method(method->rgctx_data, 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3441));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3442));
		Il2CppSharedGenericObject* L_40;
		L_40 = PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_mDA6B34A52B8E82977098FF1769B01EA488A3DE22(L_39, il2cpp_rgctx_method(method->rgctx_data, 15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3442));
		*(Il2CppSharedGenericObject**)L_37 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_37, (void*)L_40);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:485>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3443));
		return (bool)1;
	}

IL_0108:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:487>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3444));
		Il2CppSharedGenericObject** L_41 = ___1_destination;
		Il2CppSharedGenericObject** L_42 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3445));
		int32_t* L_43;
		L_43 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1D2EE7A9133800F11380FA5913822DCF99A9778F_inline(L_42, il2cpp_rgctx_method(method->rgctx_data, 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3445));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3446));
		Il2CppSharedGenericObject* L_44;
		L_44 = PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m157E4DC3B387E09D703AAAE4D11CBB0267C04EF2(L_43, il2cpp_rgctx_method(method->rgctx_data, 17));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3446));
		*(Il2CppSharedGenericObject**)L_41 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_41, (void*)L_44);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:488>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3447));
		return (bool)1;
	}

IL_011b:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:490>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3448));
		Il2CppSharedGenericObject** L_45 = ___1_destination;
		Il2CppSharedGenericObject** L_46 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3449));
		int64_t* L_47;
		L_47 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC8E26CF8B62C6C774EC7E13806715DB69E37D16A_inline(L_46, il2cpp_rgctx_method(method->rgctx_data, 18));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3449));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3450));
		Il2CppSharedGenericObject* L_48;
		L_48 = PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m9C7E45305F24B5B40039759DE564DBD2C20C917C(L_47, il2cpp_rgctx_method(method->rgctx_data, 19));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3450));
		*(Il2CppSharedGenericObject**)L_45 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_45, (void*)L_48);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:491>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3451));
		return (bool)1;
	}

IL_012e:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:493>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3452));
		Il2CppSharedGenericObject** L_49 = ___1_destination;
		Il2CppSharedGenericObject** L_50 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3453));
		int8_t* L_51;
		L_51 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m41488C4DFA5B8D5051F3F8733A9BBCFCBDC2F626_inline(L_50, il2cpp_rgctx_method(method->rgctx_data, 20));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3453));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3454));
		Il2CppSharedGenericObject* L_52;
		L_52 = PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m7F72C2DD7DA9FA08BDE8C9339D2264EFFBAE924D(L_51, il2cpp_rgctx_method(method->rgctx_data, 21));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3454));
		*(Il2CppSharedGenericObject**)L_49 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_49, (void*)L_52);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:494>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3455));
		return (bool)1;
	}

IL_0141:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:496>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3456));
		Il2CppSharedGenericObject** L_53 = ___1_destination;
		Il2CppSharedGenericObject** L_54 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3457));
		float* L_55;
		L_55 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m898B6F75C97955142F1E0A159F1288EDD93C754F_inline(L_54, il2cpp_rgctx_method(method->rgctx_data, 22));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3457));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3458));
		Il2CppSharedGenericObject* L_56;
		L_56 = PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m8AD5F4AC534C179A15C38FC7CBCE73B8851EB345(L_55, il2cpp_rgctx_method(method->rgctx_data, 23));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3458));
		*(Il2CppSharedGenericObject**)L_53 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_53, (void*)L_56);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:497>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3459));
		return (bool)1;
	}

IL_0154:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:499>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3460));
		Il2CppSharedGenericObject** L_57 = ___1_destination;
		Il2CppSharedGenericObject** L_58 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3461));
		String_t** L_59;
		L_59 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisString_t_mC2AA2202E26CE0522A927F31A2652697F2871F61_inline(L_58, il2cpp_rgctx_method(method->rgctx_data, 24));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3461));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3462));
		Il2CppSharedGenericObject* L_60;
		L_60 = PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m1EA769184550962A9DF9311283B2D7AD443D08F1(L_59, il2cpp_rgctx_method(method->rgctx_data, 25));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3462));
		*(Il2CppSharedGenericObject**)L_57 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_57, (void*)L_60);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:500>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3463));
		return (bool)1;
	}

IL_0167:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:502>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3464));
		Il2CppSharedGenericObject** L_61 = ___1_destination;
		Il2CppSharedGenericObject** L_62 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3465));
		uint16_t* L_63;
		L_63 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m434C034D74938711222B7470BF18EA08297229DA_inline(L_62, il2cpp_rgctx_method(method->rgctx_data, 26));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3465));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3466));
		Il2CppSharedGenericObject* L_64;
		L_64 = PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_mCBD4D3D8D704C26BF5CF2A001A7616AEC6CFFA8D(L_63, il2cpp_rgctx_method(method->rgctx_data, 27));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3466));
		*(Il2CppSharedGenericObject**)L_61 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_61, (void*)L_64);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:503>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3467));
		return (bool)1;
	}

IL_017a:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:505>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3468));
		Il2CppSharedGenericObject** L_65 = ___1_destination;
		Il2CppSharedGenericObject** L_66 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3469));
		uint32_t* L_67;
		L_67 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9CA0DF2BED961B37E81FA80C847F8479ED4CCA34_inline(L_66, il2cpp_rgctx_method(method->rgctx_data, 28));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3469));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3470));
		Il2CppSharedGenericObject* L_68;
		L_68 = PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m842227440C31A6B77458253EC8F7640AB89B8994(L_67, il2cpp_rgctx_method(method->rgctx_data, 29));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3470));
		*(Il2CppSharedGenericObject**)L_65 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_65, (void*)L_68);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:506>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3471));
		return (bool)1;
	}

IL_018d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:508>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3472));
		Il2CppSharedGenericObject** L_69 = ___1_destination;
		Il2CppSharedGenericObject** L_70 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3473));
		uint64_t* L_71;
		L_71 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mBB92BB87798B838422C987018A335ED57D57C8C3_inline(L_70, il2cpp_rgctx_method(method->rgctx_data, 30));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3473));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3474));
		Il2CppSharedGenericObject* L_72;
		L_72 = PrimitivesConverters_DoConvert_TisIl2CppSharedGenericObject_m1ACC6E3377FC08FF9B75BE388A57B42D8CDB46E8(L_71, il2cpp_rgctx_method(method->rgctx_data, 31));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3474));
		*(Il2CppSharedGenericObject**)L_69 = L_72;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_69, (void*)L_72);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:509>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3475));
		return (bool)1;
	}

IL_01a0:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:511>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3476));
		Il2CppSharedGenericObject** L_73 = ___1_destination;
		il2cpp_codegen_initobj(L_73, sizeof(Il2CppSharedGenericObject*));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:512>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3477));
		return (bool)0;
	}
}
// Method Definition Index: 164988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisIl2CppSharedGenericObject_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m316683D4F266C24D4C1495CD004BDC50F3AE3827_gshared (Il2CppSharedGenericObject** ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	int32_t V_3 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source), (&___1_destination));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3403));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3404));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:451>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3405));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3406));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3406));
		V_0 = L_1;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:452>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3407));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3408));
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3408));
		V_1 = L_3;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:454>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3409));
		Type_t* L_4 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3410));
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3410));
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		Type_t* L_6 = V_1;
		Type_t* L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3411));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_6, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3411));
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:456>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3412));
		int32_t* L_9 = ___1_destination;
		il2cpp_codegen_initobj(L_9, sizeof(int32_t));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:457>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3413));
		return (bool)0;
	}

IL_0030:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:460>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3414));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 4)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3415));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3415));
		V_2 = L_11;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:461>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3416));
		Type_t* L_12 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3417));
		NullCheck(L_12);
		bool L_13;
		L_13 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3417));
		if (L_13)
		{
			goto IL_0055;
		}
	}
	{
		Type_t* L_14 = V_2;
		Type_t* L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3418));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_16;
		L_16 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_14, L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3418));
		if (!L_16)
		{
			goto IL_0055;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:463>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3419));
		int32_t* L_17 = ___1_destination;
		il2cpp_codegen_initobj(L_17, sizeof(int32_t));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:464>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3420));
		return (bool)0;
	}

IL_0055:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:467>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3421));
		Type_t* L_18 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3422));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		int32_t L_19;
		L_19 = Type_GetTypeCode_m2CE476933AF4B381D7A52F4343B70E9878FDF466(L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3422));
		V_3 = L_19;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3423));
		int32_t L_20 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_20, 3)))
		{
			case 0:
			{
				goto IL_00a9;
			}
			case 1:
			{
				goto IL_00cf;
			}
			case 2:
			{
				goto IL_012e;
			}
			case 3:
			{
				goto IL_00bc;
			}
			case 4:
			{
				goto IL_00f5;
			}
			case 5:
			{
				goto IL_0167;
			}
			case 6:
			{
				goto IL_0108;
			}
			case 7:
			{
				goto IL_017a;
			}
			case 8:
			{
				goto IL_011b;
			}
			case 9:
			{
				goto IL_018d;
			}
			case 10:
			{
				goto IL_0141;
			}
			case 11:
			{
				goto IL_00e2;
			}
			case 12:
			{
				goto IL_01a0;
			}
			case 13:
			{
				goto IL_01a0;
			}
			case 14:
			{
				goto IL_01a0;
			}
			case 15:
			{
				goto IL_0154;
			}
		}
	}
	{
		goto IL_01a0;
	}

IL_00a9:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:472>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3424));
		int32_t* L_21 = ___1_destination;
		Il2CppSharedGenericObject** L_22 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3425));
		bool* L_23;
		L_23 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m28FA73F1F5BC07ACE456EF93F6E6B7BD0938F042_inline(L_22, il2cpp_rgctx_method(method->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3425));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3426));
		int32_t L_24;
		L_24 = PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mE0DC79FF1C497009BF0353150C38089129E7181F(L_23, il2cpp_rgctx_method(method->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3426));
		*(int32_t*)L_21 = L_24;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:473>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3427));
		return (bool)1;
	}

IL_00bc:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:475>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3428));
		int32_t* L_25 = ___1_destination;
		Il2CppSharedGenericObject** L_26 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3429));
		uint8_t* L_27;
		L_27 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m68A03EAC3EF1E3D87716659FE2B94A318E2CC737_inline(L_26, il2cpp_rgctx_method(method->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3429));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3430));
		int32_t L_28;
		L_28 = PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mD1AD82D45713FC4D3ABF17A4CE9DFAC3D6B50036(L_27, il2cpp_rgctx_method(method->rgctx_data, 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3430));
		*(int32_t*)L_25 = L_28;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:476>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3431));
		return (bool)1;
	}

IL_00cf:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:478>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3432));
		int32_t* L_29 = ___1_destination;
		Il2CppSharedGenericObject** L_30 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3433));
		Il2CppChar* L_31;
		L_31 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m81A546574CE59EE2FCC473F6C9A4C54058C951A0_inline(L_30, il2cpp_rgctx_method(method->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3433));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3434));
		int32_t L_32;
		L_32 = PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mE94669BAB537C289DBC6D88FDCEACB902F6E3E5F(L_31, il2cpp_rgctx_method(method->rgctx_data, 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3434));
		*(int32_t*)L_29 = L_32;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:479>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3435));
		return (bool)1;
	}

IL_00e2:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:481>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3436));
		int32_t* L_33 = ___1_destination;
		Il2CppSharedGenericObject** L_34 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3437));
		double* L_35;
		L_35 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mEF488EFA39A9905B46391683B7C5485D386C3174_inline(L_34, il2cpp_rgctx_method(method->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3437));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3438));
		int32_t L_36;
		L_36 = PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mAC94ECBBBA0113FE60617D98B603CD695A2AB46B(L_35, il2cpp_rgctx_method(method->rgctx_data, 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3438));
		*(int32_t*)L_33 = L_36;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:482>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3439));
		return (bool)1;
	}

IL_00f5:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:484>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3440));
		int32_t* L_37 = ___1_destination;
		Il2CppSharedGenericObject** L_38 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3441));
		int16_t* L_39;
		L_39 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m538759A01D54657B61C90855D5152866766EBC6C_inline(L_38, il2cpp_rgctx_method(method->rgctx_data, 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3441));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3442));
		int32_t L_40;
		L_40 = PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m3D942B8720C7E94174784DCB3E9A3EF77703E4BD(L_39, il2cpp_rgctx_method(method->rgctx_data, 15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3442));
		*(int32_t*)L_37 = L_40;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:485>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3443));
		return (bool)1;
	}

IL_0108:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:487>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3444));
		int32_t* L_41 = ___1_destination;
		Il2CppSharedGenericObject** L_42 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3445));
		int32_t* L_43;
		L_43 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1D2EE7A9133800F11380FA5913822DCF99A9778F_inline(L_42, il2cpp_rgctx_method(method->rgctx_data, 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3445));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3446));
		int32_t L_44;
		L_44 = PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m07151E0E8ECF93730F0619B52F833F95F80ADF8F(L_43, il2cpp_rgctx_method(method->rgctx_data, 17));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3446));
		*(int32_t*)L_41 = L_44;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:488>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3447));
		return (bool)1;
	}

IL_011b:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:490>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3448));
		int32_t* L_45 = ___1_destination;
		Il2CppSharedGenericObject** L_46 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3449));
		int64_t* L_47;
		L_47 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC8E26CF8B62C6C774EC7E13806715DB69E37D16A_inline(L_46, il2cpp_rgctx_method(method->rgctx_data, 18));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3449));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3450));
		int32_t L_48;
		L_48 = PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mEA15854F2BC72DEB49A3CE9F744E6FED4EF19D86(L_47, il2cpp_rgctx_method(method->rgctx_data, 19));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3450));
		*(int32_t*)L_45 = L_48;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:491>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3451));
		return (bool)1;
	}

IL_012e:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:493>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3452));
		int32_t* L_49 = ___1_destination;
		Il2CppSharedGenericObject** L_50 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3453));
		int8_t* L_51;
		L_51 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m41488C4DFA5B8D5051F3F8733A9BBCFCBDC2F626_inline(L_50, il2cpp_rgctx_method(method->rgctx_data, 20));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3453));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3454));
		int32_t L_52;
		L_52 = PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCE38C9553121C2238C13A6E0C293D42B12274CF3(L_51, il2cpp_rgctx_method(method->rgctx_data, 21));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3454));
		*(int32_t*)L_49 = L_52;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:494>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3455));
		return (bool)1;
	}

IL_0141:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:496>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3456));
		int32_t* L_53 = ___1_destination;
		Il2CppSharedGenericObject** L_54 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3457));
		float* L_55;
		L_55 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m898B6F75C97955142F1E0A159F1288EDD93C754F_inline(L_54, il2cpp_rgctx_method(method->rgctx_data, 22));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3457));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3458));
		int32_t L_56;
		L_56 = PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m765D509EE2FCD19F073A160225AC7CB93FC34A1F(L_55, il2cpp_rgctx_method(method->rgctx_data, 23));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3458));
		*(int32_t*)L_53 = L_56;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:497>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3459));
		return (bool)1;
	}

IL_0154:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:499>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3460));
		int32_t* L_57 = ___1_destination;
		Il2CppSharedGenericObject** L_58 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3461));
		String_t** L_59;
		L_59 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisString_t_mC2AA2202E26CE0522A927F31A2652697F2871F61_inline(L_58, il2cpp_rgctx_method(method->rgctx_data, 24));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3461));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3462));
		int32_t L_60;
		L_60 = PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m98291F31A0DA4DB43357507B5A3C782590F51F18(L_59, il2cpp_rgctx_method(method->rgctx_data, 25));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3462));
		*(int32_t*)L_57 = L_60;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:500>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3463));
		return (bool)1;
	}

IL_0167:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:502>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3464));
		int32_t* L_61 = ___1_destination;
		Il2CppSharedGenericObject** L_62 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3465));
		uint16_t* L_63;
		L_63 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m434C034D74938711222B7470BF18EA08297229DA_inline(L_62, il2cpp_rgctx_method(method->rgctx_data, 26));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3465));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3466));
		int32_t L_64;
		L_64 = PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m33268C04763ACF5671BBE83CB5F9C5E5ECBF263C(L_63, il2cpp_rgctx_method(method->rgctx_data, 27));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3466));
		*(int32_t*)L_61 = L_64;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:503>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3467));
		return (bool)1;
	}

IL_017a:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:505>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3468));
		int32_t* L_65 = ___1_destination;
		Il2CppSharedGenericObject** L_66 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3469));
		uint32_t* L_67;
		L_67 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9CA0DF2BED961B37E81FA80C847F8479ED4CCA34_inline(L_66, il2cpp_rgctx_method(method->rgctx_data, 28));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3469));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3470));
		int32_t L_68;
		L_68 = PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m3601A3DD9D205B4287F652C6E9777EE0B3F65EB0(L_67, il2cpp_rgctx_method(method->rgctx_data, 29));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3470));
		*(int32_t*)L_65 = L_68;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:506>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3471));
		return (bool)1;
	}

IL_018d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:508>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3472));
		int32_t* L_69 = ___1_destination;
		Il2CppSharedGenericObject** L_70 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3473));
		uint64_t* L_71;
		L_71 = UnsafeUtility_As_TisIl2CppSharedGenericObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mBB92BB87798B838422C987018A335ED57D57C8C3_inline(L_70, il2cpp_rgctx_method(method->rgctx_data, 30));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3473));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3474));
		int32_t L_72;
		L_72 = PrimitivesConverters_DoConvert_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mA17DACB2249A5DA0F11E9AE211E44BB0916F8B14(L_71, il2cpp_rgctx_method(method->rgctx_data, 31));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3474));
		*(int32_t*)L_69 = L_72;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:509>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3475));
		return (bool)1;
	}

IL_01a0:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:511>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3476));
		int32_t* L_73 = ___1_destination;
		il2cpp_codegen_initobj(L_73, sizeof(int32_t));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:512>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3477));
		return (bool)0;
	}
}
// Method Definition Index: 164988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAB1C0FA38D627EE2BBBA73E2152077F2231E1A9C_gshared (Il2CppFullySharedGenericAny* ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
	const Il2CppFullySharedGenericAny L_28 = L_24;
	const Il2CppFullySharedGenericAny L_32 = L_24;
	const Il2CppFullySharedGenericAny L_36 = L_24;
	const Il2CppFullySharedGenericAny L_40 = L_24;
	const Il2CppFullySharedGenericAny L_44 = L_24;
	const Il2CppFullySharedGenericAny L_48 = L_24;
	const Il2CppFullySharedGenericAny L_52 = L_24;
	const Il2CppFullySharedGenericAny L_56 = L_24;
	const Il2CppFullySharedGenericAny L_60 = L_24;
	const Il2CppFullySharedGenericAny L_64 = L_24;
	const Il2CppFullySharedGenericAny L_68 = L_24;
	const Il2CppFullySharedGenericAny L_72 = L_24;
	ProfilerMethodSentry _profilerMethodSentry(method);
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	int32_t V_3 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source), (&___1_destination));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3403));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3404));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:451>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3405));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3406));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3406));
		V_0 = L_1;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:452>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3407));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3408));
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3408));
		V_1 = L_3;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:454>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3409));
		Type_t* L_4 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3410));
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3410));
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		Type_t* L_6 = V_1;
		Type_t* L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3411));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_6, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3411));
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:456>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3412));
		Il2CppFullySharedGenericAny* L_9 = ___1_destination;
		il2cpp_codegen_initobj(L_9, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:457>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3413));
		return (bool)0;
	}

IL_0030:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:460>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3414));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 4)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3415));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3415));
		V_2 = L_11;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:461>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3416));
		Type_t* L_12 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3417));
		NullCheck(L_12);
		bool L_13;
		L_13 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3417));
		if (L_13)
		{
			goto IL_0055;
		}
	}
	{
		Type_t* L_14 = V_2;
		Type_t* L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3418));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_16;
		L_16 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_14, L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3418));
		if (!L_16)
		{
			goto IL_0055;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:463>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3419));
		Il2CppFullySharedGenericAny* L_17 = ___1_destination;
		il2cpp_codegen_initobj(L_17, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:464>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3420));
		return (bool)0;
	}

IL_0055:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:467>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3421));
		Type_t* L_18 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3422));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		int32_t L_19;
		L_19 = Type_GetTypeCode_m2CE476933AF4B381D7A52F4343B70E9878FDF466(L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3422));
		V_3 = L_19;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3423));
		int32_t L_20 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_20, 3)))
		{
			case 0:
			{
				goto IL_00a9;
			}
			case 1:
			{
				goto IL_00cf;
			}
			case 2:
			{
				goto IL_012e;
			}
			case 3:
			{
				goto IL_00bc;
			}
			case 4:
			{
				goto IL_00f5;
			}
			case 5:
			{
				goto IL_0167;
			}
			case 6:
			{
				goto IL_0108;
			}
			case 7:
			{
				goto IL_017a;
			}
			case 8:
			{
				goto IL_011b;
			}
			case 9:
			{
				goto IL_018d;
			}
			case 10:
			{
				goto IL_0141;
			}
			case 11:
			{
				goto IL_00e2;
			}
			case 12:
			{
				goto IL_01a0;
			}
			case 13:
			{
				goto IL_01a0;
			}
			case 14:
			{
				goto IL_01a0;
			}
			case 15:
			{
				goto IL_0154;
			}
		}
	}
	{
		goto IL_01a0;
	}

IL_00a9:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:472>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3424));
		Il2CppFullySharedGenericAny* L_21 = ___1_destination;
		Il2CppFullySharedGenericAny* L_22 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3425));
		bool* L_23;
		L_23 = ((  bool* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_22, il2cpp_rgctx_method(method->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3425));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3426));
		InvokerActionInvoker2< bool*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), NULL, L_23, (Il2CppFullySharedGenericAny*)L_24);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3426));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_21, L_24, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_21, (void*)L_24);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:473>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3427));
		return (bool)1;
	}

IL_00bc:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:475>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3428));
		Il2CppFullySharedGenericAny* L_25 = ___1_destination;
		Il2CppFullySharedGenericAny* L_26 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3429));
		uint8_t* L_27;
		L_27 = ((  uint8_t* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))(L_26, il2cpp_rgctx_method(method->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3429));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3430));
		InvokerActionInvoker2< uint8_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)), il2cpp_rgctx_method(method->rgctx_data, 9), NULL, L_27, (Il2CppFullySharedGenericAny*)L_28);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3430));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_25, L_28, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_25, (void*)L_28);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:476>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3431));
		return (bool)1;
	}

IL_00cf:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:478>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3432));
		Il2CppFullySharedGenericAny* L_29 = ___1_destination;
		Il2CppFullySharedGenericAny* L_30 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3433));
		Il2CppChar* L_31;
		L_31 = ((  Il2CppChar* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 10)))(L_30, il2cpp_rgctx_method(method->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3433));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3434));
		InvokerActionInvoker2< Il2CppChar*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)), il2cpp_rgctx_method(method->rgctx_data, 11), NULL, L_31, (Il2CppFullySharedGenericAny*)L_32);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3434));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_29, L_32, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_29, (void*)L_32);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:479>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3435));
		return (bool)1;
	}

IL_00e2:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:481>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3436));
		Il2CppFullySharedGenericAny* L_33 = ___1_destination;
		Il2CppFullySharedGenericAny* L_34 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3437));
		double* L_35;
		L_35 = ((  double* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_34, il2cpp_rgctx_method(method->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3437));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3438));
		InvokerActionInvoker2< double*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)), il2cpp_rgctx_method(method->rgctx_data, 13), NULL, L_35, (Il2CppFullySharedGenericAny*)L_36);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3438));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_33, L_36, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_33, (void*)L_36);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:482>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3439));
		return (bool)1;
	}

IL_00f5:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:484>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3440));
		Il2CppFullySharedGenericAny* L_37 = ___1_destination;
		Il2CppFullySharedGenericAny* L_38 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3441));
		int16_t* L_39;
		L_39 = ((  int16_t* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 14)))(L_38, il2cpp_rgctx_method(method->rgctx_data, 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3441));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3442));
		InvokerActionInvoker2< int16_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 15)), il2cpp_rgctx_method(method->rgctx_data, 15), NULL, L_39, (Il2CppFullySharedGenericAny*)L_40);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3442));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_37, L_40, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_37, (void*)L_40);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:485>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3443));
		return (bool)1;
	}

IL_0108:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:487>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3444));
		Il2CppFullySharedGenericAny* L_41 = ___1_destination;
		Il2CppFullySharedGenericAny* L_42 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3445));
		int32_t* L_43;
		L_43 = ((  int32_t* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 16)))(L_42, il2cpp_rgctx_method(method->rgctx_data, 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3445));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3446));
		InvokerActionInvoker2< int32_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 17)), il2cpp_rgctx_method(method->rgctx_data, 17), NULL, L_43, (Il2CppFullySharedGenericAny*)L_44);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3446));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_41, L_44, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_41, (void*)L_44);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:488>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3447));
		return (bool)1;
	}

IL_011b:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:490>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3448));
		Il2CppFullySharedGenericAny* L_45 = ___1_destination;
		Il2CppFullySharedGenericAny* L_46 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3449));
		int64_t* L_47;
		L_47 = ((  int64_t* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 18)))(L_46, il2cpp_rgctx_method(method->rgctx_data, 18));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3449));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3450));
		InvokerActionInvoker2< int64_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 19)), il2cpp_rgctx_method(method->rgctx_data, 19), NULL, L_47, (Il2CppFullySharedGenericAny*)L_48);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3450));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_45, L_48, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_45, (void*)L_48);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:491>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3451));
		return (bool)1;
	}

IL_012e:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:493>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3452));
		Il2CppFullySharedGenericAny* L_49 = ___1_destination;
		Il2CppFullySharedGenericAny* L_50 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3453));
		int8_t* L_51;
		L_51 = ((  int8_t* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 20)))(L_50, il2cpp_rgctx_method(method->rgctx_data, 20));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3453));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3454));
		InvokerActionInvoker2< int8_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 21)), il2cpp_rgctx_method(method->rgctx_data, 21), NULL, L_51, (Il2CppFullySharedGenericAny*)L_52);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3454));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_49, L_52, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_49, (void*)L_52);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:494>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3455));
		return (bool)1;
	}

IL_0141:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:496>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3456));
		Il2CppFullySharedGenericAny* L_53 = ___1_destination;
		Il2CppFullySharedGenericAny* L_54 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3457));
		float* L_55;
		L_55 = ((  float* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 22)))(L_54, il2cpp_rgctx_method(method->rgctx_data, 22));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3457));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3458));
		InvokerActionInvoker2< float*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 23)), il2cpp_rgctx_method(method->rgctx_data, 23), NULL, L_55, (Il2CppFullySharedGenericAny*)L_56);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3458));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_53, L_56, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_53, (void*)L_56);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:497>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3459));
		return (bool)1;
	}

IL_0154:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:499>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3460));
		Il2CppFullySharedGenericAny* L_57 = ___1_destination;
		Il2CppFullySharedGenericAny* L_58 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3461));
		String_t** L_59;
		L_59 = ((  String_t** (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 24)))(L_58, il2cpp_rgctx_method(method->rgctx_data, 24));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3461));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3462));
		InvokerActionInvoker2< String_t**, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 25)), il2cpp_rgctx_method(method->rgctx_data, 25), NULL, L_59, (Il2CppFullySharedGenericAny*)L_60);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3462));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_57, L_60, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_57, (void*)L_60);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:500>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3463));
		return (bool)1;
	}

IL_0167:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:502>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3464));
		Il2CppFullySharedGenericAny* L_61 = ___1_destination;
		Il2CppFullySharedGenericAny* L_62 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3465));
		uint16_t* L_63;
		L_63 = ((  uint16_t* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 26)))(L_62, il2cpp_rgctx_method(method->rgctx_data, 26));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3465));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3466));
		InvokerActionInvoker2< uint16_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 27)), il2cpp_rgctx_method(method->rgctx_data, 27), NULL, L_63, (Il2CppFullySharedGenericAny*)L_64);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3466));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_61, L_64, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_61, (void*)L_64);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:503>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3467));
		return (bool)1;
	}

IL_017a:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:505>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3468));
		Il2CppFullySharedGenericAny* L_65 = ___1_destination;
		Il2CppFullySharedGenericAny* L_66 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3469));
		uint32_t* L_67;
		L_67 = ((  uint32_t* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 28)))(L_66, il2cpp_rgctx_method(method->rgctx_data, 28));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3469));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3470));
		InvokerActionInvoker2< uint32_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 29)), il2cpp_rgctx_method(method->rgctx_data, 29), NULL, L_67, (Il2CppFullySharedGenericAny*)L_68);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3470));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_65, L_68, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_65, (void*)L_68);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:506>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3471));
		return (bool)1;
	}

IL_018d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:508>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3472));
		Il2CppFullySharedGenericAny* L_69 = ___1_destination;
		Il2CppFullySharedGenericAny* L_70 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3473));
		uint64_t* L_71;
		L_71 = ((  uint64_t* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 30)))(L_70, il2cpp_rgctx_method(method->rgctx_data, 30));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3473));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3474));
		InvokerActionInvoker2< uint64_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 31)), il2cpp_rgctx_method(method->rgctx_data, 31), NULL, L_71, (Il2CppFullySharedGenericAny*)L_72);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3474));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_69, L_72, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_69, (void*)L_72);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:509>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3475));
		return (bool)1;
	}

IL_01a0:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:511>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3476));
		Il2CppFullySharedGenericAny* L_73 = ___1_destination;
		il2cpp_codegen_initobj(L_73, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:512>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3477));
		return (bool)0;
	}
}
// Method Definition Index: 165067
// Method Definition Index: 165067
// Method Definition Index: 165067
// Method Definition Index: 165067
// Method Definition Index: 165067
// Method Definition Index: 165067
// Method Definition Index: 165067
// Method Definition Index: 165067
// Method Definition Index: 165067
// Method Definition Index: 165067
// Method Definition Index: 165067
// Method Definition Index: 165067
// Method Definition Index: 165067
// Method Definition Index: 165067
// Method Definition Index: 165067
// Method Definition Index: 165067
// Method Definition Index: 165067
// Method Definition Index: 165067
// Method Definition Index: 165067
// Method Definition Index: 165067
// Method Definition Index: 165067
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mD068FB1F97879B43AC987D93387D703FF8C69339_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m3AE60763095766AFC3503FE5D4E612F2137E1D64(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mCE9C891875E6FD8C0C4C98C24CB3E1CA348657B5_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m599FB404D66BF2E53D69FF27AB599535E75EB37A(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mEA509F70B8228AAB7C98DF5094BBED8348B1CF81_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m976FAA642AA009127703997A127677B3216E665F(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mC2E675394CDF2FF32620335DF734CF2ADE6F3200_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mE47B5AABDD458396FF45F684A23B9BC83413CFC6(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mB65DD3D47B46A2660D302BDF8816DDFAA39AA48A_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m62F419D5A5A80806DB030B830E2E2F5ADE5990FD(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m0CDE36A55A511DCBA0B87284A7DF69F6F6B01532_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mD18F666EDE420221F4D0FD07CAE28E509B3C1A8A(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mDDD1574216112181EA73200608BF04B59DC514E5_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m78D6914DCC2C28FFB3F4181426EE05583F178370(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m0C24B05DCD6ADB430963C9EA5D3EA54F3CA503C1_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m7167A90AD1C837F457ED5841B6B2E41BBFF6C41C(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_mBBBD5D09159A615D2AB8CFCC5C8644143483DEAE_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m05AA5F40C3C0FC8ACBB072D55942F0AEC5EB4F96(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m22B3BA52C38D3199C6B4CC95F05F2FE6901EE666_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m71F2558D12040ACEBCD2F96428E0D31D8B409096(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2A21711A3D655B51E421ACBEA3F03A09C8BBC250_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_mA9E7AA6DB293483965B65EEEBF63885DEF084EA2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mFE98C0ECD8751FEC86E5F9CD2AFC20794571C81C_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBBCB804F367E06EA4D482F1B69165DD2B5BF38FF(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m1B9FE4AB7F77AAFD254FE0D0E323555AACBCA675_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m6E84570538BC9A257F375DE16EC3D98D9076B2B4(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m70D02A744A39B4C4C7FDBFD7BD540EB27D11062A_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m5F90346B16182C4121698F7426124A040ECAAFF0(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m86432E81A4DB62CA17EE2EE79D7747BF03F6F763_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m75FA295E357B5011AD69844490BAC145368D5EBC(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mDB6BC2FC3367778FCA876D31356DEAF57C8EC145_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mC453F012B2E08302A2BB03765FD1B61189E606D7(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mFD1A6BF0BEE9AA5DB563546D8BEBE4A0360219F6_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mF7B295F81A4BCD99A3E33CD14E19CB95AEECFC24(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_mDED556CE99CCB9A1742FE73A600182FE2E78AC24_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m7DA57A68CA4B7EC816C6C904A108D584F4FC22DE(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m53023196AD1E9D48F7F22EFF00956E222BFE1D19_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mE1FFC902149E42012D1AF4A1470972459DC88EB3(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m97DBB59374BCA99C98C45F169AF69955608B68AA_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_m7C42EB46E69BD2515C39AB6013A0763C6479AD66_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m89DFD20CBFEB5DA80772932DF0014027C0BFBC43_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mBF77CFD9D634306003AB5234BDE7B8B99F066A6A(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m0D0A6847749D34A8D1EF8B4FA76DC18DFE20BEB2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m09F1ADDF010320442C5637A9E913FADC5A2C63EA(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m199DEDC1B73BE7AF0A3B7250D109C9DD3037585F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m3DFFA3C3D2F7C8C394C4C4A1BB44A871725C6866(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m976461D8AAAE30D157B56275947EA11AEAF37D1A_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mAEBA4084CCA2A97C257494BFD183083F050CF7B4(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m434EF41561D979B71E84A2BD68938764C3682E85_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mA71660AC59A96100C6151468D4DA76E0B12F6A3E(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m60D4BF9DDDFBB1E20546723259282EA23406F677_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m3A53F8C10F926A93DFD07F939804AD8130EABAC0(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m23ABCBDD6D919E8D101AF77C1AA0DB5138A54ABA_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mEEBF4924146F4A42DDE1E35E0A26B679C339435A(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m1DAF8591331E2CDB1AA69C174DF8CBBD43C6C236_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m1CF96D2F60E32144748F4414C4E41831D7BAE521(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mA985A0FCBA315177E282C0A09EA20698AAFBEE52_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mA5B98899114EC8F7236468B743FA0A2D39E7AB34(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mFDE68151C846F63DBB1B61635B5BA4D619DD9802_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m8D2A9D8897BBA98BDB7D706C0543FF73D80A808F(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m706A3B05E0D84C8C24FBBB6F3CA1F3C1EA21C38E_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m0438BBE2D84D4D7F65443E9CD69FD10A7C91913B(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mB5B35FCE75797210B5A280F9F80FBBAD15E574D0_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mBC2ABA1E056B7FAD0435F07A5EB1F9034DCFF66F(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mB12AC6E8C71E981B89A6FF90B8C7CD1C10247686_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mC9663B2959C464E82F145504604CD37077158821(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m1F07FE9FAFFFC334D2F4CBE38FB7E2381FB753BC_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m8BEBCC60926ABBB1F1076342E3FD913512A5C16E(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mBCF34FB8CE82B2B0669816100D2FCB3F558A0860_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mA602486BE28FFE8EB43A7068D62272C9CDE30858(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mF399A60565834612727266FD56DE2798B50E1160_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mC4DA417C6DE13CB6931467DEDDE302BE8AFA20A5(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m72E371DA95DB8AAE5FCADA53AC525A5DD5C56BB3_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m4B4AB46D74BC3E0692C0A1AAF4E6D39037B8C84E(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m1527CB8E3B73B1B5F302097FBC877B571F22493F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m57E942527218C6493C68644B1AA97BB885395B5C(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m1FBFA6CE737A040BF640F11C91CA949E5437FB52_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mB9B9C72E7FD4A8BCDA73B89EE69B962587C8A564(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mFB9BB983B46154E98DC40ADEB67FD0D914C8D50F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m42EFE354BF99B9E9014DD781F311FD87DAFEAAAE(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mCE988F9CFE539AE2AE8C5C5E9F209FAD4D59A17F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m19E0B09B99B71048B79509AFE0C77D3531A65FE7(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mB336225D285D32A1C7C3979B4DD46B038498172B_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mDD0856F80893293EDE8EC2991546BBDBE15344A8(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_mEA88165CB7BBD2FF7FE2EDE49041DC14E5CDCEBA_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m42819B71853F9C6B85E90BEC348D59D44D6C4CA2(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m6FA56F8B1B20A1E19074D750247D3A05FCCEBD37_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mC593D3B28F7463E77C8C177DE3411E364A815DB9(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m9215F03EF1AF55A0D98A5089C121FD8FBB3BFC72_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mB9A75977F7532FB14C755CFFF50A1E528CE9C8FC(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m2611ACAADCE84DB1244DB56136D39D20D0DDF190_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mE45BA68543511F0DEFE7A1749238AA591895FF9B(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m8798BE107DBDA81B08AA6FC004902CA3DE5461AE_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mE0E17266C9705B431697EB67A97990F414FA7954(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m032CA5A330B4032D164F88B2B40B6A7F2590357F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE0C65F4221E48BB07F75856972A0CCDAE284AB9F(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m0E8E39845CA3F1BFADAC1B15E849E5885D813E6F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA88A16DC097E207AD6CE15E89D3B94DBB01BDACE_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1AB8BF0921C24186B3C43FC4341AAD2F6FE87C4D(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m28D19B06528A4614AF9C3E29DC8274DE067868D8_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3CD9CD3C768BBCC83DD02B2C76300A03AF1B1AD6_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mED1DC338E5DB62F3E64F6272A9F12150DA5CC1B9(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisIl2CppSharedGenericObject_m605856D300205D523BA8BB84C019885CD338F878_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisIl2CppSharedGenericObject_m2137DD4D5FD5998392651B678C11AE04FC8ABFC3(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 165067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisIl2CppFullySharedGenericAny_m8B414261A078E3FE7517FAF2F9E944969F6B73E2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5413));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5415));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 117619
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31831));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 31832));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31833));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:392>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31834));
		uint32_t L_0 = sizeof(int32_t);
		V_0 = (int32_t)L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:396>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31835));
		uint8_t* L_1 = __this->___Ptr;
		int32_t L_2 = __this->___Offset;
		V_2 = (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:397>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31836));
		void* L_3 = V_2;
		uint64_t L_4 = (il2cpp_codegen_conv<uint64_t,void*,intptr_t,false,false>(L_3,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31837));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF(il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31837));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31838));
		bool L_6;
		L_6 = CollectionHelper_IsAligned_m4761669B9084B892256349C0FF27DBF494DA9AE9(L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31838));
		V_3 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31839));
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:398>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31840));
		void* L_8 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31841));
		int32_t L_9;
		L_9 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_8, 0, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31841));
		V_1 = L_9;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31842));
		goto IL_003c;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:400>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31843));
		uintptr_t L_10 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>((&V_1),NULL));
		void* L_11 = V_2;
		int32_t L_12 = V_0;
		int64_t L_13 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_12,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31844));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_10, L_11, L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31844));
	}

IL_003c:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:402>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31845));
		int32_t L_14 = __this->___Offset;
		int32_t L_15 = V_0;
		__this->___Offset = ((int32_t)il2cpp_codegen_add(L_14, L_15));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:403>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31846));
		int32_t L_16 = V_1;
		V_4 = L_16;
		goto IL_004f;
	}

IL_004f:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:404>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31847));
		int32_t L_17 = V_4;
		return L_17;
	}
}
IL2CPP_EXTERN_C  int32_t Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6>(__this);
	int32_t _returnValue;
	_returnValue = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 117619
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	const Il2CppFullySharedGenericStruct L_16 = L_9;
	const Il2CppFullySharedGenericStruct L_17 = L_9;
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	memset(V_1, 0, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	void* V_2 = NULL;
	bool V_3 = false;
	Il2CppFullySharedGenericStruct V_4 = alloca(SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	memset(V_4, 0, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), V_1, (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31831));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 31832));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31833));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:392>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31834));
		uint32_t L_0 = SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49;
		V_0 = (int32_t)L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:396>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31835));
		uint8_t* L_1 = __this->___Ptr;
		int32_t L_2 = __this->___Offset;
		V_2 = (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:397>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31836));
		void* L_3 = V_2;
		uint64_t L_4 = (il2cpp_codegen_conv<uint64_t,void*,intptr_t,false,false>(L_3,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31837));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31837));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31838));
		bool L_6;
		L_6 = CollectionHelper_IsAligned_m4761669B9084B892256349C0FF27DBF494DA9AE9(L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31838));
		V_3 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31839));
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:398>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31840));
		void* L_8 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31841));
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_8, 0, (Il2CppFullySharedGenericStruct*)L_9);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31841));
		il2cpp_codegen_memcpy(V_1, L_9, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31842));
		goto IL_003c;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:400>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31843));
		uintptr_t L_10 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>((Il2CppFullySharedGenericStruct*)V_1,NULL));
		void* L_11 = V_2;
		int32_t L_12 = V_0;
		int64_t L_13 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_12,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31844));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_10, L_11, L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31844));
	}

IL_003c:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:402>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31845));
		int32_t L_14 = __this->___Offset;
		int32_t L_15 = V_0;
		__this->___Offset = ((int32_t)il2cpp_codegen_add(L_14, L_15));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:403>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31846));
		il2cpp_codegen_memcpy(L_16, V_1, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		il2cpp_codegen_memcpy(V_4, L_16, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		goto IL_004f;
	}

IL_004f:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:404>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31847));
		il2cpp_codegen_memcpy(L_17, V_4, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		il2cpp_codegen_memcpy(il2cppRetVal, L_17, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6>(__this);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2(_thisAdjusted, il2cppRetVal, method);
	return;
}
// Method Definition Index: 117618
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	void* V_1 = NULL;
	bool V_2 = false;
	void* V_3 = NULL;
	int32_t* V_4 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31813));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 31814));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31815));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:371>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31816));
		uint32_t L_0 = sizeof(int32_t);
		V_0 = (int32_t)L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:374>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31817));
		uint8_t* L_1 = __this->___Ptr;
		int32_t L_2 = __this->___Offset;
		V_1 = (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:375>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31818));
		void* L_3 = V_1;
		uint64_t L_4 = (il2cpp_codegen_conv<uint64_t,void*,intptr_t,false,false>(L_3,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31819));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF(il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31819));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31820));
		bool L_6;
		L_6 = CollectionHelper_IsAligned_m4761669B9084B892256349C0FF27DBF494DA9AE9(L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31820));
		V_2 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31821));
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:376>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31822));
		void* L_8 = V_1;
		int32_t* L_9 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31823));
		UnsafeUtility_CopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9A1240B1BCA4029B93CBDCE0196491FEC192E38_inline(L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31823));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31824));
		goto IL_0045;
	}

IL_0030:
	{
		int32_t* L_10 = ___0_value;
		V_4 = L_10;
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:378>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31825));
		int32_t* L_11 = V_4;
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>(L_11,NULL));
		V_3 = (void*)L_12;
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:378>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31826));
		void* L_13 = V_3;
		void* L_14 = V_1;
		int32_t L_15 = V_0;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31827));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_13, L_14, L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31827));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31828));
		uintptr_t L_17 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_4 = (int32_t*)L_17;
	}

IL_0045:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:380>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31829));
		int32_t L_18 = __this->___Offset;
		int32_t L_19 = V_0;
		__this->___Offset = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:381>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31830));
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9_AdjustorThunk (RuntimeObject* __this, int32_t* ___0_value, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6>(__this);
	Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9(_thisAdjusted, ___0_value, method);
}
// Method Definition Index: 117618
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t989833F3B8437253060D8003F814134F2C820AF6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	void* V_1 = NULL;
	bool V_2 = false;
	void* V_3 = NULL;
	Il2CppFullySharedGenericStruct* V_4 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31813));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 31814));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31815));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:371>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31816));
		uint32_t L_0 = SizeOf_T_t989833F3B8437253060D8003F814134F2C820AF6;
		V_0 = (int32_t)L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:374>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31817));
		uint8_t* L_1 = __this->___Ptr;
		int32_t L_2 = __this->___Offset;
		V_1 = (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:375>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31818));
		void* L_3 = V_1;
		uint64_t L_4 = (il2cpp_codegen_conv<uint64_t,void*,intptr_t,false,false>(L_3,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31819));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31819));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31820));
		bool L_6;
		L_6 = CollectionHelper_IsAligned_m4761669B9084B892256349C0FF27DBF494DA9AE9(L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31820));
		V_2 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31821));
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:376>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31822));
		void* L_8 = V_1;
		Il2CppFullySharedGenericStruct* L_9 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31823));
		((  void (*) (void*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31823));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31824));
		goto IL_0045;
	}

IL_0030:
	{
		Il2CppFullySharedGenericStruct* L_10 = ___0_value;
		V_4 = L_10;
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:378>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31825));
		Il2CppFullySharedGenericStruct* L_11 = V_4;
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_11,NULL));
		V_3 = (void*)L_12;
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:378>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31826));
		void* L_13 = V_3;
		void* L_14 = V_1;
		int32_t L_15 = V_0;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31827));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_13, L_14, L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31827));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31828));
		uintptr_t L_17 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_4 = (Il2CppFullySharedGenericStruct*)L_17;
	}

IL_0045:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:380>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31829));
		int32_t L_18 = __this->___Offset;
		int32_t L_19 = V_0;
		__this->___Offset = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:381>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31830));
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6>(__this);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59(_thisAdjusted, ___0_value, method);
}
// Method Definition Index: 117621
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t3582FAB8EED36663C15B18083F3C38CC8CB2089F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	void* V_3 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value), (&___1_allocator));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31858));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 31859));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31860));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:431>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31861));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31862));
		int32_t L_0;
		L_0 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31862));
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:432>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31863));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_value;
		int32_t L_2 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31864));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4;
		L_4 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, L_3, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31864));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_1 = L_4;
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:433>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31865));
		int32_t L_5 = V_0;
		uint32_t L_6 = SizeOf_T_t3582FAB8EED36663C15B18083F3C38CC8CB2089F;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, (int32_t)L_6));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:434>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31866));
		int32_t L_7 = V_1;
		V_2 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31867));
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31868));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:436>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31869));
		int32_t L_9 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31870));
		void* L_10;
		L_10 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31870));
		V_3 = L_10;
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:437>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31871));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_11 = ___0_value;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_12 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_11);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31872));
		void* L_13;
		L_13 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_12, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31872));
		void* L_14 = V_3;
		int32_t L_15 = V_1;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31873));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_13, L_14, L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31873));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31874));
	}

IL_0045:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:439>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31875));
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_AdjustorThunk (RuntimeObject* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6>(__this);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372(_thisAdjusted, ___0_value, ___1_allocator, method);
}
// Method Definition Index: 117622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_length, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t6E0E95C00360B98AD1C3846ED50206DFDE012AFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	ProfilerMethodSentry _profilerMethodSentry(method);
	void* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_length));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31876));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 31877));
	uintptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31878));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:454>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31879));
		int32_t* L_0 = ___0_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31880));
		int32_t L_1;
		L_1 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31880));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_0, (int32_t)L_1);
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:455>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31881));
		int32_t* L_2 = ___0_length;
		int32_t L_3 = il2cpp_codegen_ldind<int32_t, int32_t>(L_2);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		int32_t* L_4 = ___0_length;
		int32_t L_5 = il2cpp_codegen_ldind<int32_t, int32_t>(L_4);
		uint32_t L_6 = SizeOf_T_t6E0E95C00360B98AD1C3846ED50206DFDE012AFF;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31882));
		void* L_7;
		L_7 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, ((int32_t)il2cpp_codegen_multiply(L_5, (int32_t)L_6)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31882));
		G_B3_0 = ((uintptr_t)(intptr_t)(L_7));
		goto IL_0020;
	}

IL_001e:
	{
		uintptr_t L_8 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		G_B3_0 = L_8;
	}

IL_0020:
	{
		V_0 = (void*)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeAppendBuffer.cs:456>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31883));
		void* L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C  void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_AdjustorThunk (RuntimeObject* __this, int32_t* ___0_length, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6>(__this);
	void* _returnValue;
	_returnValue = Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC(_thisAdjusted, ___0_length, method);
	return _returnValue;
}
// Method Definition Index: 118337
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU2A_t7A03686A8034AF92EF1EA2D09B280EF590D1174D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t78876001400B6CD8FBC8DB6052800D0B07D5996E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	bool V_2 = false;
	Il2CppFullySharedGenericStruct* V_3 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40456));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 40457));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40458));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeStream.cs:723>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40459));
		uint32_t L_0 = SizeOf_T_t78876001400B6CD8FBC8DB6052800D0B07D5996E;
		V_0 = (int32_t)L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeStream.cs:725>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40460));
		uint8_t* L_1 = __this->___m_CurrentPtr;
		V_1 = L_1;
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeStream.cs:726>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40461));
		uint8_t* L_2 = V_1;
		int32_t L_3 = V_0;
		uint8_t* L_4 = __this->___m_CurrentBlockEnd;
		V_2 = (bool)((!(((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_3))) <= ((uintptr_t)L_4)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40462));
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40463));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeStream.cs:728>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40464));
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_6 = __this->___m_CurrentBlock;
		NullCheck(L_6);
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_7 = L_6->___Next;
		NullCheck(L_7);
		U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116* L_8 = (U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116*)(&L_7->___Data);
		uint8_t* L_9 = (uint8_t*)(&L_8->___FixedElementField);
		uintptr_t L_10 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_9,NULL));
		V_1 = (uint8_t*)L_10;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40465));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeStream.cs:731>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40466));
		uint8_t* L_11 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40467));
		Il2CppFullySharedGenericStruct* L_12;
		L_12 = ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40467));
		V_3 = L_12;
		goto IL_0040;
	}

IL_0040:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeStream.cs:732>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40468));
		Il2CppFullySharedGenericStruct* L_13 = V_3;
		return L_13;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458>(__this);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 118336
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tB637578F0BD33C09FC40FC64F02C0A2D558139E3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40448));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 40449));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40450));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeStream.cs:711>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40451));
		uint32_t L_0 = SizeOf_T_tB637578F0BD33C09FC40FC64F02C0A2D558139E3;
		V_0 = (int32_t)L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeStream.cs:712>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40452));
		int32_t L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40453));
		uint8_t* L_2;
		L_2 = Reader_ReadUnsafePtr_m6CDEF727114990BC4C2DF321BE752F229104A888(__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40453));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40454));
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40454));
		V_1 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeStream.cs:713>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40455));
		Il2CppFullySharedGenericStruct* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458>(__this);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 118326
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t116435D0785AA26BF8114803668B5077681E8C02 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40345));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 40346));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40347));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeStream.cs:516>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40348));
		uint32_t L_0 = SizeOf_T_t116435D0785AA26BF8114803668B5077681E8C02;
		V_0 = (int32_t)L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeStream.cs:517>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40349));
		int32_t L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40350));
		uint8_t* L_2;
		L_2 = Writer_Allocate_m85F9D4FF8746C0A59DC23A9003398A6D9D42526D(__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40350));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40351));
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40351));
		V_1 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeStream.cs:518>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40352));
		Il2CppFullySharedGenericStruct* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F>(__this);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 118325
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
	ProfilerMethodSentry _profilerMethodSentry(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___0_value : &___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40338));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 40339));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40340));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeStream.cs:502>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40341));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40342));
		Il2CppFullySharedGenericStruct* L_0;
		L_0 = ((  Il2CppFullySharedGenericStruct* (*) (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40342));
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeStream.cs:503>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40343));
		Il2CppFullySharedGenericStruct* L_1 = V_0;
		il2cpp_codegen_memcpy(L_2, ___0_value, SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_1, L_2, SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericStruct*)L_1, (void*)L_2);
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/UnsafeStream.cs:504>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40344));
		return;
	}
}
IL2CPP_EXTERN_C  void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F>(__this);
	Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917(_thisAdjusted, ___0_value, method);
}
// Method Definition Index: 22813
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomStyleAccess_TryGetValue_TisIl2CppSharedGenericObject_mBFCCEDB95D337576F30F691659A70D2627840C9F_gshared (CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* __this, CustomStyleProperty_1_tB73A4836B6E305C3DB7FE82821F7E521F6048231 ___0_property, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_property), (&___1_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 84422));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 84423));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/VisualElementStyleAccess.cs:428>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 84424));
		CustomPropertyListRef_t132B9890006F76BAE81BFAF35C9944D2364E1DC7* L_0 = (CustomPropertyListRef_t132B9890006F76BAE81BFAF35C9944D2364E1DC7*)(&__this->___m_CustomProperties);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 84425));
		String_t* L_1;
		L_1 = CustomStyleProperty_1_get_name_m50215025D84B5D090C2C03D30BDB064B9874EEED_inline((&___0_property), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 84425));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 84426));
		bool L_2;
		L_2 = CustomPropertyListRef_TryGetValue_m9C93FD01B7EC14D4F7C6E880A8F8FB75B9ADAAD5(L_0, L_1, (&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 84426));
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/VisualElementStyleAccess.cs:430>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 84427));
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_3 = V_0;
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_4 = L_3.___sheet;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_5 = V_0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_6 = L_5.___handle;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 84428));
		NullCheck(L_4);
		bool L_7;
		L_7 = StyleSheet_TryReadAssetReference_m2E9C311E4692494508CC6BB3DDEA3A1255DF1A22(L_4, L_6, (&V_1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 84428));
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/VisualElementStyleAccess.cs:432>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 84429));
		Il2CppSharedGenericObject** L_8 = ___1_value;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_9 = V_1;
		*(Il2CppSharedGenericObject**)L_8 = ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_8, (void*)((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 4))));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/VisualElementStyleAccess.cs:433>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 84430));
		Il2CppSharedGenericObject** L_10 = ___1_value;
		Il2CppSharedGenericObject* L_11 = (*(Il2CppSharedGenericObject**)L_10);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 84431));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 84431));
		return L_12;
	}

IL_004e:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/VisualElementStyleAccess.cs:437>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 84432));
		Il2CppSharedGenericObject** L_13 = ___1_value;
		il2cpp_codegen_initobj(L_13, sizeof(Il2CppSharedGenericObject*));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/VisualElementStyleAccess.cs:438>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 84433));
		return (bool)0;
	}
}
// Method Definition Index: 138702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m916056C6D56ED56A8C621B65387940440621885B_gshared (double* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int64_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	double* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dptr), (&___1_base_addr), (&___2_indexPtr), (&___3_scale), (&___4_n), (&___5_mask));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20331));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 20332));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20333));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2355>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20334));
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2357>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20335));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20336));
		goto IL_006a;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20337));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2359>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20338));
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, 4)))));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		V_2 = L_4;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2360>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20339));
		int64_t L_5 = V_2;
		int32_t L_6 = ___3_scale;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_6,NULL));
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_5, L_7));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2361>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20340));
		void* L_8 = ___1_base_addr;
		int64_t L_9 = V_3;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_9,NULL));
		V_4 = (double*)((void*)il2cpp_codegen_add((intptr_t)L_8, L_10));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2362>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20341));
		int64_t* L_11 = ___5_mask;
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((((intptr_t)L_11) == ((intptr_t)L_12)))
		{
			goto IL_0045;
		}
	}
	{
		int64_t* L_13 = ___5_mask;
		int32_t L_14 = V_1;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_14,NULL));
		uint32_t L_16 = sizeof(int64_t);
		int64_t L_17 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20342));
		int32_t L_18;
		L_18 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, (int32_t)L_16)))), L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20342));
		G_B4_0 = ((((int32_t)L_18) < ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20343));
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_0065;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20344));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2364>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20345));
		double* L_20 = ___0_dptr;
		int32_t L_21 = V_1;
		intptr_t L_22 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_21,NULL));
		uint32_t L_23 = sizeof(double);
		double* L_24 = V_4;
		double L_25 = (*(double*)L_24);
		*(double*)((double*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(L_22, (int32_t)L_23)))) = L_25;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20346));
	}

IL_0065:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20347));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2357>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20348));
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_006a:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2357>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20349));
		int32_t L_27 = V_1;
		int32_t L_28 = ___4_n;
		V_6 = (bool)((((int32_t)L_27) < ((int32_t)L_28))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20350));
		bool L_29 = V_6;
		if (L_29)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2367>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20351));
		return;
	}
}
// Method Definition Index: 138701
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9A1DADAD9E0F3273D16A73D963070B45A72D049C_gshared (double* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int64_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	double* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dptr), (&___1_base_addr), (&___2_indexPtr), (&___3_scale), (&___4_n), (&___5_mask));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20310));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 20311));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20312));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2339>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20313));
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2341>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20314));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20315));
		goto IL_0069;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20316));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2343>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20317));
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		int64_t L_3 = il2cpp_codegen_ldind<int64_t, int64_t>(((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, 8)))));
		V_2 = L_3;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2344>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20318));
		int64_t L_4 = V_2;
		int32_t L_5 = ___3_scale;
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_4, L_6));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2345>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20319));
		void* L_7 = ___1_base_addr;
		int64_t L_8 = V_3;
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_8,NULL));
		V_4 = (double*)((void*)il2cpp_codegen_add((intptr_t)L_7, L_9));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2346>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20320));
		int64_t* L_10 = ___5_mask;
		uintptr_t L_11 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((((intptr_t)L_10) == ((intptr_t)L_11)))
		{
			goto IL_0044;
		}
	}
	{
		int64_t* L_12 = ___5_mask;
		int32_t L_13 = V_1;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		uint32_t L_15 = sizeof(int64_t);
		int64_t L_16 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20321));
		int32_t L_17;
		L_17 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, (int32_t)L_15)))), L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20321));
		G_B4_0 = ((((int32_t)L_17) < ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 1;
	}

IL_0045:
	{
		V_5 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20322));
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0064;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20323));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2348>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20324));
		double* L_19 = ___0_dptr;
		int32_t L_20 = V_1;
		intptr_t L_21 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_20,NULL));
		uint32_t L_22 = sizeof(double);
		double* L_23 = V_4;
		double L_24 = (*(double*)L_23);
		*(double*)((double*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(L_21, (int32_t)L_22)))) = L_24;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20325));
	}

IL_0064:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20326));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2341>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20327));
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0069:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2341>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20328));
		int32_t L_26 = V_1;
		int32_t L_27 = ___4_n;
		V_6 = (bool)((((int32_t)L_26) < ((int32_t)L_27))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20329));
		bool L_28 = V_6;
		if (L_28)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2351>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20330));
		return;
	}
}
// Method Definition Index: 138702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m94F8FFCEA63E0174FFF11E533C79D165E357A272_gshared (int32_t* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int32_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dptr), (&___1_base_addr), (&___2_indexPtr), (&___3_scale), (&___4_n), (&___5_mask));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20331));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 20332));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20333));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2355>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20334));
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2357>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20335));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20336));
		goto IL_006a;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20337));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2359>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20338));
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, 4)))));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		V_2 = L_4;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2360>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20339));
		int64_t L_5 = V_2;
		int32_t L_6 = ___3_scale;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_6,NULL));
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_5, L_7));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2361>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20340));
		void* L_8 = ___1_base_addr;
		int64_t L_9 = V_3;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_9,NULL));
		V_4 = (int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_8, L_10));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2362>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20341));
		int32_t* L_11 = ___5_mask;
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((((intptr_t)L_11) == ((intptr_t)L_12)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t* L_13 = ___5_mask;
		int32_t L_14 = V_1;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_14,NULL));
		uint32_t L_16 = sizeof(int32_t);
		int32_t L_17 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20342));
		int32_t L_18;
		L_18 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, (int32_t)L_16)))), L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20342));
		G_B4_0 = ((((int32_t)L_18) < ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20343));
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_0065;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20344));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2364>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20345));
		int32_t* L_20 = ___0_dptr;
		int32_t L_21 = V_1;
		intptr_t L_22 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_21,NULL));
		uint32_t L_23 = sizeof(int32_t);
		int32_t* L_24 = V_4;
		int32_t L_25 = (*(int32_t*)L_24);
		*(int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(L_22, (int32_t)L_23)))) = L_25;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20346));
	}

IL_0065:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20347));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2357>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20348));
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_006a:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2357>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20349));
		int32_t L_27 = V_1;
		int32_t L_28 = ___4_n;
		V_6 = (bool)((((int32_t)L_27) < ((int32_t)L_28))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20350));
		bool L_29 = V_6;
		if (L_29)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2367>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20351));
		return;
	}
}
// Method Definition Index: 138701
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m75E4DC1575D64C468E29623C2A27062E59A006BB_gshared (int32_t* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int32_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dptr), (&___1_base_addr), (&___2_indexPtr), (&___3_scale), (&___4_n), (&___5_mask));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20310));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 20311));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20312));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2339>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20313));
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2341>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20314));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20315));
		goto IL_0069;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20316));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2343>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20317));
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		int64_t L_3 = il2cpp_codegen_ldind<int64_t, int64_t>(((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, 8)))));
		V_2 = L_3;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2344>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20318));
		int64_t L_4 = V_2;
		int32_t L_5 = ___3_scale;
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_4, L_6));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2345>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20319));
		void* L_7 = ___1_base_addr;
		int64_t L_8 = V_3;
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_8,NULL));
		V_4 = (int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_7, L_9));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2346>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20320));
		int32_t* L_10 = ___5_mask;
		uintptr_t L_11 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((((intptr_t)L_10) == ((intptr_t)L_11)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t* L_12 = ___5_mask;
		int32_t L_13 = V_1;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		uint32_t L_15 = sizeof(int32_t);
		int32_t L_16 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20321));
		int32_t L_17;
		L_17 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, (int32_t)L_15)))), L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20321));
		G_B4_0 = ((((int32_t)L_17) < ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 1;
	}

IL_0045:
	{
		V_5 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20322));
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0064;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20323));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2348>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20324));
		int32_t* L_19 = ___0_dptr;
		int32_t L_20 = V_1;
		intptr_t L_21 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_20,NULL));
		uint32_t L_22 = sizeof(int32_t);
		int32_t* L_23 = V_4;
		int32_t L_24 = (*(int32_t*)L_23);
		*(int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(L_21, (int32_t)L_22)))) = L_24;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20325));
	}

IL_0064:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20326));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2341>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20327));
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0069:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2341>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20328));
		int32_t L_26 = V_1;
		int32_t L_27 = ___4_n;
		V_6 = (bool)((((int32_t)L_26) < ((int32_t)L_27))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20329));
		bool L_28 = V_6;
		if (L_28)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2351>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20330));
		return;
	}
}
// Method Definition Index: 138702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8F3DA1C7D0D9C656F6FB3CCC2747A02B6BDF9E8E_gshared (int64_t* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int64_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dptr), (&___1_base_addr), (&___2_indexPtr), (&___3_scale), (&___4_n), (&___5_mask));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20331));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 20332));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20333));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2355>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20334));
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2357>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20335));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20336));
		goto IL_006a;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20337));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2359>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20338));
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, 4)))));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		V_2 = L_4;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2360>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20339));
		int64_t L_5 = V_2;
		int32_t L_6 = ___3_scale;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_6,NULL));
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_5, L_7));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2361>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20340));
		void* L_8 = ___1_base_addr;
		int64_t L_9 = V_3;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_9,NULL));
		V_4 = (int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_8, L_10));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2362>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20341));
		int64_t* L_11 = ___5_mask;
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((((intptr_t)L_11) == ((intptr_t)L_12)))
		{
			goto IL_0045;
		}
	}
	{
		int64_t* L_13 = ___5_mask;
		int32_t L_14 = V_1;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_14,NULL));
		uint32_t L_16 = sizeof(int64_t);
		int64_t L_17 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20342));
		int32_t L_18;
		L_18 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, (int32_t)L_16)))), L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20342));
		G_B4_0 = ((((int32_t)L_18) < ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20343));
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_0065;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20344));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2364>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20345));
		int64_t* L_20 = ___0_dptr;
		int32_t L_21 = V_1;
		intptr_t L_22 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_21,NULL));
		uint32_t L_23 = sizeof(int64_t);
		int64_t* L_24 = V_4;
		int64_t L_25 = (*(int64_t*)L_24);
		*(int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(L_22, (int32_t)L_23)))) = L_25;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20346));
	}

IL_0065:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20347));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2357>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20348));
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_006a:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2357>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20349));
		int32_t L_27 = V_1;
		int32_t L_28 = ___4_n;
		V_6 = (bool)((((int32_t)L_27) < ((int32_t)L_28))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20350));
		bool L_29 = V_6;
		if (L_29)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2367>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20351));
		return;
	}
}
// Method Definition Index: 138701
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m16B5D468730F5B7AFE121394A46B16F4E3F663CB_gshared (int64_t* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int64_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dptr), (&___1_base_addr), (&___2_indexPtr), (&___3_scale), (&___4_n), (&___5_mask));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20310));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 20311));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20312));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2339>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20313));
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2341>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20314));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20315));
		goto IL_0069;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20316));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2343>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20317));
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		int64_t L_3 = il2cpp_codegen_ldind<int64_t, int64_t>(((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, 8)))));
		V_2 = L_3;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2344>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20318));
		int64_t L_4 = V_2;
		int32_t L_5 = ___3_scale;
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_4, L_6));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2345>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20319));
		void* L_7 = ___1_base_addr;
		int64_t L_8 = V_3;
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_8,NULL));
		V_4 = (int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_7, L_9));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2346>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20320));
		int64_t* L_10 = ___5_mask;
		uintptr_t L_11 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((((intptr_t)L_10) == ((intptr_t)L_11)))
		{
			goto IL_0044;
		}
	}
	{
		int64_t* L_12 = ___5_mask;
		int32_t L_13 = V_1;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		uint32_t L_15 = sizeof(int64_t);
		int64_t L_16 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20321));
		int32_t L_17;
		L_17 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, (int32_t)L_15)))), L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20321));
		G_B4_0 = ((((int32_t)L_17) < ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 1;
	}

IL_0045:
	{
		V_5 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20322));
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0064;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20323));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2348>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20324));
		int64_t* L_19 = ___0_dptr;
		int32_t L_20 = V_1;
		intptr_t L_21 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_20,NULL));
		uint32_t L_22 = sizeof(int64_t);
		int64_t* L_23 = V_4;
		int64_t L_24 = (*(int64_t*)L_23);
		*(int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(L_21, (int32_t)L_22)))) = L_24;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20325));
	}

IL_0064:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20326));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2341>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20327));
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0069:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2341>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20328));
		int32_t L_26 = V_1;
		int32_t L_27 = ___4_n;
		V_6 = (bool)((((int32_t)L_26) < ((int32_t)L_27))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20329));
		bool L_28 = V_6;
		if (L_28)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2351>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20330));
		return;
	}
}
// Method Definition Index: 138702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBD6B0D9436820A5A075E4DEDAC5F272776C647AD_gshared (float* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int32_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	float* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dptr), (&___1_base_addr), (&___2_indexPtr), (&___3_scale), (&___4_n), (&___5_mask));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20331));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 20332));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20333));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2355>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20334));
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2357>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20335));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20336));
		goto IL_006a;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20337));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2359>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20338));
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, 4)))));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		V_2 = L_4;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2360>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20339));
		int64_t L_5 = V_2;
		int32_t L_6 = ___3_scale;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_6,NULL));
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_5, L_7));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2361>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20340));
		void* L_8 = ___1_base_addr;
		int64_t L_9 = V_3;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_9,NULL));
		V_4 = (float*)((void*)il2cpp_codegen_add((intptr_t)L_8, L_10));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2362>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20341));
		int32_t* L_11 = ___5_mask;
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((((intptr_t)L_11) == ((intptr_t)L_12)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t* L_13 = ___5_mask;
		int32_t L_14 = V_1;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_14,NULL));
		uint32_t L_16 = sizeof(int32_t);
		int32_t L_17 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20342));
		int32_t L_18;
		L_18 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, (int32_t)L_16)))), L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20342));
		G_B4_0 = ((((int32_t)L_18) < ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20343));
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_0065;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20344));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2364>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20345));
		float* L_20 = ___0_dptr;
		int32_t L_21 = V_1;
		intptr_t L_22 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_21,NULL));
		uint32_t L_23 = sizeof(float);
		float* L_24 = V_4;
		float L_25 = (*(float*)L_24);
		*(float*)((float*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(L_22, (int32_t)L_23)))) = L_25;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20346));
	}

IL_0065:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20347));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2357>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20348));
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_006a:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2357>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20349));
		int32_t L_27 = V_1;
		int32_t L_28 = ___4_n;
		V_6 = (bool)((((int32_t)L_27) < ((int32_t)L_28))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20350));
		bool L_29 = V_6;
		if (L_29)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2367>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20351));
		return;
	}
}
// Method Definition Index: 138701
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m089FE6B150D3770B7C1109D4010EFBE72C0E985B_gshared (float* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int32_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	float* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dptr), (&___1_base_addr), (&___2_indexPtr), (&___3_scale), (&___4_n), (&___5_mask));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20310));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 20311));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20312));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2339>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20313));
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2341>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20314));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20315));
		goto IL_0069;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20316));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2343>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20317));
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		int64_t L_3 = il2cpp_codegen_ldind<int64_t, int64_t>(((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, 8)))));
		V_2 = L_3;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2344>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20318));
		int64_t L_4 = V_2;
		int32_t L_5 = ___3_scale;
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_4, L_6));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2345>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20319));
		void* L_7 = ___1_base_addr;
		int64_t L_8 = V_3;
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_8,NULL));
		V_4 = (float*)((void*)il2cpp_codegen_add((intptr_t)L_7, L_9));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2346>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20320));
		int32_t* L_10 = ___5_mask;
		uintptr_t L_11 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((((intptr_t)L_10) == ((intptr_t)L_11)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t* L_12 = ___5_mask;
		int32_t L_13 = V_1;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		uint32_t L_15 = sizeof(int32_t);
		int32_t L_16 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20321));
		int32_t L_17;
		L_17 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, (int32_t)L_15)))), L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20321));
		G_B4_0 = ((((int32_t)L_17) < ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 1;
	}

IL_0045:
	{
		V_5 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20322));
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0064;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20323));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2348>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20324));
		float* L_19 = ___0_dptr;
		int32_t L_20 = V_1;
		intptr_t L_21 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_20,NULL));
		uint32_t L_22 = sizeof(float);
		float* L_23 = V_4;
		float L_24 = (*(float*)L_23);
		*(float*)((float*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(L_21, (int32_t)L_22)))) = L_24;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20325));
	}

IL_0064:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20326));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2341>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20327));
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0069:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2341>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20328));
		int32_t L_26 = V_1;
		int32_t L_27 = ___4_n;
		V_6 = (bool)((((int32_t)L_26) < ((int32_t)L_27))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20329));
		bool L_28 = V_6;
		if (L_28)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2351>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20330));
		return;
	}
}
// Method Definition Index: 138702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m78BBC4DBE234DA027814A059C7A569C168B14265_gshared (Il2CppFullySharedGenericStruct* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, Il2CppFullySharedGenericStruct* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_18 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_28 = alloca(SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	ProfilerMethodSentry _profilerMethodSentry(method);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	memset(V_0, 0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	Il2CppFullySharedGenericStruct* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dptr), (&___1_base_addr), (&___2_indexPtr), (&___3_scale), (&___4_n), (&___5_mask));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0, (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20331));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 20332));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20333));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2355>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20334));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2357>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20335));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20336));
		goto IL_006a;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20337));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2359>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20338));
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, 4)))));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		V_2 = L_4;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2360>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20339));
		int64_t L_5 = V_2;
		int32_t L_6 = ___3_scale;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_6,NULL));
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_5, L_7));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2361>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20340));
		void* L_8 = ___1_base_addr;
		int64_t L_9 = V_3;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_9,NULL));
		V_4 = (Il2CppFullySharedGenericStruct*)((void*)il2cpp_codegen_add((intptr_t)L_8, L_10));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2362>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20341));
		Il2CppFullySharedGenericStruct* L_11 = ___5_mask;
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((((intptr_t)L_11) == ((intptr_t)L_12)))
		{
			goto IL_0045;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_13 = ___5_mask;
		int32_t L_14 = V_1;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_14,NULL));
		uint32_t L_16 = SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594;
		il2cpp_codegen_memcpy(L_17, V_0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20342));
		Il2CppConstrainedCallData L_19;
		Il2CppMethodPointer L_20 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, (int32_t)L_16)))), &L_19, L_18);
		int32_t L_21 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(L_20, L_19.method,L_19.thisPtr, L_17);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20342));
		G_B4_0 = ((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20343));
		bool L_22 = V_5;
		if (!L_22)
		{
			goto IL_0065;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20344));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2364>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20345));
		Il2CppFullySharedGenericStruct* L_23 = ___0_dptr;
		int32_t L_24 = V_1;
		intptr_t L_25 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_24,NULL));
		uint32_t L_26 = SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314;
		Il2CppFullySharedGenericStruct* L_27 = V_4;
		il2cpp_codegen_memcpy(L_28, L_27, SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(L_25, (int32_t)L_26)))), L_28, SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(L_25, (int32_t)L_26)))), (void*)L_28);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20346));
	}

IL_0065:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20347));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2357>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20348));
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_006a:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2357>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20349));
		int32_t L_30 = V_1;
		int32_t L_31 = ___4_n;
		V_6 = (bool)((((int32_t)L_30) < ((int32_t)L_31))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20350));
		bool L_32 = V_6;
		if (L_32)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2367>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20351));
		return;
	}
}
// Method Definition Index: 138701
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m93179BB5AA8A484650210DDAA1EB8D4319DE5686_gshared (Il2CppFullySharedGenericStruct* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, Il2CppFullySharedGenericStruct* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_27 = alloca(SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	ProfilerMethodSentry _profilerMethodSentry(method);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	memset(V_0, 0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	Il2CppFullySharedGenericStruct* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dptr), (&___1_base_addr), (&___2_indexPtr), (&___3_scale), (&___4_n), (&___5_mask));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0, (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20310));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 20311));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20312));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2339>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20313));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2341>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20314));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20315));
		goto IL_0069;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20316));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2343>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20317));
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		int64_t L_3 = il2cpp_codegen_ldind<int64_t, int64_t>(((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, 8)))));
		V_2 = L_3;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2344>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20318));
		int64_t L_4 = V_2;
		int32_t L_5 = ___3_scale;
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_4, L_6));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2345>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20319));
		void* L_7 = ___1_base_addr;
		int64_t L_8 = V_3;
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_8,NULL));
		V_4 = (Il2CppFullySharedGenericStruct*)((void*)il2cpp_codegen_add((intptr_t)L_7, L_9));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2346>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20320));
		Il2CppFullySharedGenericStruct* L_10 = ___5_mask;
		uintptr_t L_11 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((((intptr_t)L_10) == ((intptr_t)L_11)))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_12 = ___5_mask;
		int32_t L_13 = V_1;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		uint32_t L_15 = SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747;
		il2cpp_codegen_memcpy(L_16, V_0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20321));
		Il2CppConstrainedCallData L_18;
		Il2CppMethodPointer L_19 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, (int32_t)L_15)))), &L_18, L_17);
		int32_t L_20 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(L_19, L_18.method,L_18.thisPtr, L_16);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20321));
		G_B4_0 = ((((int32_t)L_20) < ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 1;
	}

IL_0045:
	{
		V_5 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20322));
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0064;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20323));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2348>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20324));
		Il2CppFullySharedGenericStruct* L_22 = ___0_dptr;
		int32_t L_23 = V_1;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		uint32_t L_25 = SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8;
		Il2CppFullySharedGenericStruct* L_26 = V_4;
		il2cpp_codegen_memcpy(L_27, L_26, SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, (int32_t)L_25)))), L_27, SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, (int32_t)L_25)))), (void*)L_27);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20325));
	}

IL_0064:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20326));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2341>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20327));
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0069:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2341>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20328));
		int32_t L_29 = V_1;
		int32_t L_30 = ___4_n;
		V_6 = (bool)((((int32_t)L_29) < ((int32_t)L_30))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20329));
		bool L_31 = V_6;
		if (L_31)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Avx2.cs:2351>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20330));
		return;
	}
}
// Method Definition Index: 139176
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared (uint8_t* ___0_a, int32_t ___1_alen, uint8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	bool V_8 = false;
	uint8_t V_9 = 0x0;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	uint8_t V_43 = 0x0;
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_alen), (&___2_b), (&___3_blen), (&___4_len), (&___5_imm8), (&___6_allOnes));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_6), (&V_7), (&V_9), (&V_10), (&V_36));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25440));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25441));
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25442));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:223>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25443));
		V_0 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:224>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25444));
		V_1 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:225>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25445));
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:228>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25446));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25447));
		goto IL_01ea;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25448));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:230>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25449));
		uint8_t* L_0 = ___0_a;
		int32_t L_1 = V_3;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint8_t);
		uint8_t L_4 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, (int32_t)L_3)))));
		V_7 = L_4;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:232>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25450));
		int32_t L_5 = V_3;
		int32_t L_6 = ___1_alen;
		V_8 = (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25451));
		bool L_7 = V_8;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:233>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25452));
		V_0 = (bool)1;
	}

IL_0033:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:235>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25453));
		V_1 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:236>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25454));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25455));
		goto IL_01d6;
	}

IL_003d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25456));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:238>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25457));
		uint8_t* L_8 = ___2_b;
		int32_t L_9 = V_4;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		uint32_t L_11 = sizeof(uint8_t);
		uint8_t L_12 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, (int32_t)L_11)))));
		V_9 = L_12;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:239>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25458));
		int32_t L_13 = V_4;
		int32_t L_14 = ___3_blen;
		V_11 = (bool)((((int32_t)L_13) == ((int32_t)L_14))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25459));
		bool L_15 = V_11;
		if (!L_15)
		{
			goto IL_005e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:240>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25460));
		V_1 = (bool)1;
	}

IL_005e:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:245>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25461));
		int32_t L_16 = ___5_imm8;
		V_13 = ((int32_t)(((int32_t)(L_16>>2))&3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25462));
		int32_t L_17 = V_13;
		V_12 = L_17;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25463));
		int32_t L_18 = V_12;
		switch (L_18)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:248>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25464));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25465));
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_19;
		L_19 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25465));
		uint8_t L_20 = V_7;
		uint8_t L_21 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25466));
		NullCheck(L_19);
		bool L_22;
		L_22 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_19, L_20, L_21);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25466));
		V_10 = L_22;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:249>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25467));
		bool L_23 = V_0;
		bool L_24 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_23) == ((int32_t)0))? 1 : 0)&(int32_t)L_24));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25468));
		bool L_25 = V_14;
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:250>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25469));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25470));
		goto IL_00c4;
	}

IL_00a3:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:251>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25471));
		bool L_26 = V_0;
		if (!L_26)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_27 = V_1;
		G_B13_0 = ((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25472));
		bool L_28 = V_15;
		if (!L_28)
		{
			goto IL_00b8;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:252>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25473));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25474));
		goto IL_00c4;
	}

IL_00b8:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:253>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25475));
		bool L_29 = V_0;
		bool L_30 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_29&(int32_t)L_30));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25476));
		bool L_31 = V_16;
		if (!L_31)
		{
			goto IL_00c4;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:254>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25477));
		V_10 = (bool)0;
	}

IL_00c4:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25478));
		goto IL_01c2;
	}

IL_00c9:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:258>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25479));
		int32_t L_32 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_32&1))) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25480));
		bool L_33 = V_17;
		if (!L_33)
		{
			goto IL_00ed;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:259>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25481));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25482));
		Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* L_34;
		L_34 = Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB(il2cpp_rgctx_method(method->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25482));
		uint8_t L_35 = V_9;
		uint8_t L_36 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25483));
		NullCheck(L_34);
		int32_t L_37;
		L_37 = VirtualFuncInvoker2< int32_t, uint8_t, uint8_t >::Invoke(6, L_34, L_35, L_36);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25483));
		V_10 = (bool)((((int32_t)((((int32_t)L_37) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25484));
		goto IL_0103;
	}

IL_00ed:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:261>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25485));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25486));
		Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* L_38;
		L_38 = Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB(il2cpp_rgctx_method(method->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25486));
		uint8_t L_39 = V_9;
		uint8_t L_40 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25487));
		NullCheck(L_38);
		int32_t L_41;
		L_41 = VirtualFuncInvoker2< int32_t, uint8_t, uint8_t >::Invoke(6, L_38, L_39, L_40);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25487));
		V_10 = (bool)((((int32_t)((((int32_t)L_41) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:263>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25488));
		bool L_42 = V_0;
		bool L_43 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_42) == ((int32_t)0))? 1 : 0)&(int32_t)L_43));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25489));
		bool L_44 = V_18;
		if (!L_44)
		{
			goto IL_0114;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:264>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25490));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25491));
		goto IL_0135;
	}

IL_0114:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:265>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25492));
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_011d;
		}
	}
	{
		bool L_46 = V_1;
		G_B26_0 = ((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25493));
		bool L_47 = V_19;
		if (!L_47)
		{
			goto IL_0129;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:266>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25494));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25495));
		goto IL_0135;
	}

IL_0129:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:267>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25496));
		bool L_48 = V_0;
		bool L_49 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_48&(int32_t)L_49));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25497));
		bool L_50 = V_20;
		if (!L_50)
		{
			goto IL_0135;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:268>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25498));
		V_10 = (bool)0;
	}

IL_0135:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:269>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25499));
		goto IL_01c2;
	}

IL_013a:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:271>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25500));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25501));
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_51;
		L_51 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25501));
		uint8_t L_52 = V_7;
		uint8_t L_53 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25502));
		NullCheck(L_51);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_51, L_52, L_53);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25502));
		V_10 = L_54;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:272>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25503));
		bool L_55 = V_0;
		bool L_56 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_55) == ((int32_t)0))? 1 : 0)&(int32_t)L_56));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25504));
		bool L_57 = V_21;
		if (!L_57)
		{
			goto IL_015b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:273>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25505));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25506));
		goto IL_017c;
	}

IL_015b:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:274>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25507));
		bool L_58 = V_0;
		if (!L_58)
		{
			goto IL_0164;
		}
	}
	{
		bool L_59 = V_1;
		G_B36_0 = ((((int32_t)L_59) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25508));
		bool L_60 = V_22;
		if (!L_60)
		{
			goto IL_0170;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:275>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25509));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25510));
		goto IL_017c;
	}

IL_0170:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:276>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25511));
		bool L_61 = V_0;
		bool L_62 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_61&(int32_t)L_62));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25512));
		bool L_63 = V_23;
		if (!L_63)
		{
			goto IL_017c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:277>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25513));
		V_10 = (bool)1;
	}

IL_017c:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:278>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25514));
		goto IL_01c2;
	}

IL_017e:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:280>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25515));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25516));
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_64;
		L_64 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25516));
		uint8_t L_65 = V_7;
		uint8_t L_66 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25517));
		NullCheck(L_64);
		bool L_67;
		L_67 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_64, L_65, L_66);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25517));
		V_10 = L_67;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:281>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25518));
		bool L_68 = V_0;
		bool L_69 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_68) == ((int32_t)0))? 1 : 0)&(int32_t)L_69));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25519));
		bool L_70 = V_24;
		if (!L_70)
		{
			goto IL_019f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:282>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25520));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25521));
		goto IL_01c0;
	}

IL_019f:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:283>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25522));
		bool L_71 = V_0;
		if (!L_71)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_72 = V_1;
		G_B46_0 = ((((int32_t)L_72) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25523));
		bool L_73 = V_25;
		if (!L_73)
		{
			goto IL_01b4;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:284>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25524));
		V_10 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25525));
		goto IL_01c0;
	}

IL_01b4:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:285>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25526));
		bool L_74 = V_0;
		bool L_75 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_74&(int32_t)L_75));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25527));
		bool L_76 = V_26;
		if (!L_76)
		{
			goto IL_01c0;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:286>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25528));
		V_10 = (bool)1;
	}

IL_01c0:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:287>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25529));
		goto IL_01c2;
	}

IL_01c2:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:290>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25530));
		int32_t L_77 = V_3;
		int32_t L_78 = V_4;
		bool L_79 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25531));
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_77, L_78, L_79, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25531));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25532));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:236>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25533));
		int32_t L_80 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_01d6:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:236>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25534));
		int32_t L_81 = V_4;
		int32_t L_82 = ___4_len;
		V_27 = (bool)((((int32_t)L_81) < ((int32_t)L_82))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25535));
		bool L_83 = V_27;
		if (L_83)
		{
			goto IL_003d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25536));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:228>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25537));
		int32_t L_84 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_01ea:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:228>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25538));
		int32_t L_85 = V_3;
		int32_t L_86 = ___4_len;
		V_28 = (bool)((((int32_t)L_85) < ((int32_t)L_86))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25539));
		bool L_87 = V_28;
		if (L_87)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:294>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25540));
		V_6 = 0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:297>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25541));
		int32_t L_88 = ___5_imm8;
		V_30 = ((int32_t)(((int32_t)(L_88>>2))&3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25542));
		int32_t L_89 = V_30;
		V_29 = L_89;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25543));
		int32_t L_90 = V_29;
		switch (L_90)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:300>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25544));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25545));
		goto IL_0260;
	}

IL_0227:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25546));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:302>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25547));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25548));
		goto IL_024f;
	}

IL_022d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25549));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:304>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25550));
		int32_t L_91 = V_6;
		int32_t L_92 = V_4;
		int32_t L_93 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25551));
		bool L_94;
		L_94 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_92, L_93, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25551));
		if (L_94)
		{
			G_B61_0 = L_91;
			goto IL_023f;
		}
		G_B60_0 = L_91;
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_95 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_95&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25552));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:302>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25553));
		int32_t L_96 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_024f:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:302>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25554));
		int32_t L_97 = V_4;
		int32_t L_98 = ___4_len;
		V_31 = (bool)((((int32_t)L_97) < ((int32_t)L_98))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25555));
		bool L_99 = V_31;
		if (L_99)
		{
			goto IL_022d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25556));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:300>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25557));
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0260:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:300>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25558));
		int32_t L_101 = V_3;
		int32_t L_102 = ___4_len;
		V_32 = (bool)((((int32_t)L_101) < ((int32_t)L_102))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25559));
		bool L_103 = V_32;
		if (L_103)
		{
			goto IL_0227;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:312>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25560));
		goto IL_035a;
	}

IL_0270:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:314>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25561));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25562));
		goto IL_02bb;
	}

IL_0274:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25563));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:316>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25564));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25565));
		goto IL_02aa;
	}

IL_027a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25566));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:318>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25567));
		int32_t L_104 = V_6;
		int32_t L_105 = V_4;
		int32_t L_106 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25568));
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25568));
		if (!L_107)
		{
			G_B71_0 = L_104;
			goto IL_0297;
		}
		G_B70_0 = L_104;
	}
	{
		int32_t L_108 = V_4;
		int32_t L_109 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25569));
		bool L_110;
		L_110 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_108, 1)), L_109, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25569));
		if (L_110)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
		G_B71_0 = G_B70_0;
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_111 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_111&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25570));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:316>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25571));
		int32_t L_112 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_112, 2));
	}

IL_02aa:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:316>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25572));
		int32_t L_113 = V_4;
		int32_t L_114 = ___4_len;
		V_33 = (bool)((((int32_t)L_113) < ((int32_t)L_114))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25573));
		bool L_115 = V_33;
		if (L_115)
		{
			goto IL_027a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25574));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:314>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25575));
		int32_t L_116 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_116, 1));
	}

IL_02bb:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:314>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25576));
		int32_t L_117 = V_3;
		int32_t L_118 = ___4_len;
		V_34 = (bool)((((int32_t)L_117) < ((int32_t)L_118))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25577));
		bool L_119 = V_34;
		if (L_119)
		{
			goto IL_0274;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:321>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25578));
		goto IL_035a;
	}

IL_02cb:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:323>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25579));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25580));
		goto IL_02ee;
	}

IL_02cf:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25581));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:325>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25582));
		int32_t L_120 = V_6;
		int32_t L_121 = V_3;
		int32_t L_122 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25583));
		bool L_123;
		L_123 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_121, L_122, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25583));
		if (L_123)
		{
			G_B81_0 = L_120;
			goto IL_02e0;
		}
		G_B80_0 = L_120;
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_124 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_124&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25584));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:323>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25585));
		int32_t L_125 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_125, 1));
	}

IL_02ee:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:323>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25586));
		int32_t L_126 = V_3;
		int32_t L_127 = ___4_len;
		V_35 = (bool)((((int32_t)L_126) < ((int32_t)L_127))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25587));
		bool L_128 = V_35;
		if (L_128)
		{
			goto IL_02cf;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:327>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25588));
		goto IL_035a;
	}

IL_02fb:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:329>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25589));
		int32_t L_129 = ___6_allOnes;
		V_6 = L_129;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:330>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25590));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25591));
		goto IL_034d;
	}

IL_0303:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25592));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:332>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25593));
		int32_t L_130 = V_3;
		V_36 = L_130;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:333>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25594));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25595));
		goto IL_033a;
	}

IL_030c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25596));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:335>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25597));
		int32_t L_131 = V_4;
		int32_t L_132 = V_36;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25598));
		bool L_133;
		L_133 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_131, L_132, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25598));
		V_37 = (bool)((((int32_t)L_133) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25599));
		bool L_134 = V_37;
		if (!L_134)
		{
			goto IL_032d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:336>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25600));
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_6 = ((int32_t)(L_135&((~((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
	}

IL_032d:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:337>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25601));
		int32_t L_137 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_137, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25602));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:333>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25603));
		int32_t L_138 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_138, 1));
	}

IL_033a:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:333>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25604));
		int32_t L_139 = V_4;
		int32_t L_140 = ___4_len;
		int32_t L_141 = V_3;
		V_38 = (bool)((((int32_t)L_139) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_140, L_141))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25605));
		bool L_142 = V_38;
		if (L_142)
		{
			goto IL_030c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25606));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:330>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25607));
		int32_t L_143 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_034d:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:330>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25608));
		int32_t L_144 = V_3;
		int32_t L_145 = ___4_len;
		V_39 = (bool)((((int32_t)L_144) < ((int32_t)L_145))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25609));
		bool L_146 = V_39;
		if (L_146)
		{
			goto IL_0303;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:340>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25610));
		goto IL_035a;
	}

IL_035a:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:343>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25611));
		V_5 = 0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:346>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25612));
		V_1 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:347>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25613));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25614));
		goto IL_0401;
	}

IL_0366:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25615));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:349>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25616));
		int32_t L_147 = ___5_imm8;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25617));
		bool L_148 = V_40;
		if (!L_148)
		{
			goto IL_03ee;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25618));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:351>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25619));
		int32_t L_149 = ___5_imm8;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_149&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25620));
		bool L_150 = V_41;
		if (!L_150)
		{
			goto IL_03dc;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25621));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:353>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25622));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25623));
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_151;
		L_151 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25623));
		uint8_t* L_152 = ___2_b;
		int32_t L_153 = V_3;
		intptr_t L_154 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_153,NULL));
		uint32_t L_155 = sizeof(uint8_t);
		uint8_t L_156 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_152, ((intptr_t)il2cpp_codegen_multiply(L_154, (int32_t)L_155)))));
		il2cpp_codegen_initobj((&V_43), sizeof(uint8_t));
		uint8_t L_157 = V_43;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25624));
		NullCheck(L_151);
		bool L_158;
		L_158 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_151, L_156, L_157);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25624));
		V_42 = L_158;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25625));
		bool L_159 = V_42;
		if (!L_159)
		{
			goto IL_03b3;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25626));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:355>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25627));
		V_1 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25628));
	}

IL_03b3:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:358>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25629));
		bool L_160 = V_1;
		V_44 = L_160;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25630));
		bool L_161 = V_44;
		if (!L_161)
		{
			goto IL_03ca;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:359>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25631));
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(L_163&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25632));
		goto IL_03d9;
	}

IL_03ca:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:361>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25633));
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03d9:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25634));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25635));
		goto IL_03eb;
	}

IL_03dc:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:364>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25636));
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(((~L_169))&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03eb:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25637));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25638));
		goto IL_03fc;
	}

IL_03ee:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:367>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25639));
		int32_t L_171 = V_5;
		int32_t L_172 = V_6;
		int32_t L_173 = V_3;
		V_5 = ((int32_t)(L_171|((int32_t)(L_172&((int32_t)(1<<((int32_t)(L_173&((int32_t)31)))))))));
	}

IL_03fc:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25640));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:347>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25641));
		int32_t L_174 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_174, 1));
	}

IL_0401:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:347>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25642));
		int32_t L_175 = V_3;
		int32_t L_176 = ___4_len;
		V_45 = (bool)((((int32_t)L_175) < ((int32_t)L_176))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25643));
		bool L_177 = V_45;
		if (L_177)
		{
			goto IL_0366;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:370>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25644));
		int32_t L_178 = V_5;
		V_46 = L_178;
		goto IL_0415;
	}

IL_0415:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:374>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25645));
		int32_t L_179 = V_46;
		return L_179;
	}
}
// Method Definition Index: 139176
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared (int16_t* ___0_a, int32_t ___1_alen, int16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int16_t V_7 = 0;
	bool V_8 = false;
	int16_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	int16_t V_43 = 0;
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_alen), (&___2_b), (&___3_blen), (&___4_len), (&___5_imm8), (&___6_allOnes));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_6), (&V_7), (&V_9), (&V_10), (&V_36));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25440));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25441));
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25442));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:223>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25443));
		V_0 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:224>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25444));
		V_1 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:225>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25445));
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:228>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25446));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25447));
		goto IL_01ea;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25448));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:230>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25449));
		int16_t* L_0 = ___0_a;
		int32_t L_1 = V_3;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int16_t);
		int16_t L_4 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, (int32_t)L_3)))));
		V_7 = L_4;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:232>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25450));
		int32_t L_5 = V_3;
		int32_t L_6 = ___1_alen;
		V_8 = (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25451));
		bool L_7 = V_8;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:233>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25452));
		V_0 = (bool)1;
	}

IL_0033:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:235>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25453));
		V_1 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:236>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25454));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25455));
		goto IL_01d6;
	}

IL_003d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25456));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:238>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25457));
		int16_t* L_8 = ___2_b;
		int32_t L_9 = V_4;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		uint32_t L_11 = sizeof(int16_t);
		int16_t L_12 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, (int32_t)L_11)))));
		V_9 = L_12;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:239>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25458));
		int32_t L_13 = V_4;
		int32_t L_14 = ___3_blen;
		V_11 = (bool)((((int32_t)L_13) == ((int32_t)L_14))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25459));
		bool L_15 = V_11;
		if (!L_15)
		{
			goto IL_005e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:240>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25460));
		V_1 = (bool)1;
	}

IL_005e:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:245>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25461));
		int32_t L_16 = ___5_imm8;
		V_13 = ((int32_t)(((int32_t)(L_16>>2))&3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25462));
		int32_t L_17 = V_13;
		V_12 = L_17;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25463));
		int32_t L_18 = V_12;
		switch (L_18)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:248>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25464));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25465));
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_19;
		L_19 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25465));
		int16_t L_20 = V_7;
		int16_t L_21 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25466));
		NullCheck(L_19);
		bool L_22;
		L_22 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_19, L_20, L_21);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25466));
		V_10 = L_22;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:249>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25467));
		bool L_23 = V_0;
		bool L_24 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_23) == ((int32_t)0))? 1 : 0)&(int32_t)L_24));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25468));
		bool L_25 = V_14;
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:250>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25469));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25470));
		goto IL_00c4;
	}

IL_00a3:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:251>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25471));
		bool L_26 = V_0;
		if (!L_26)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_27 = V_1;
		G_B13_0 = ((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25472));
		bool L_28 = V_15;
		if (!L_28)
		{
			goto IL_00b8;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:252>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25473));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25474));
		goto IL_00c4;
	}

IL_00b8:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:253>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25475));
		bool L_29 = V_0;
		bool L_30 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_29&(int32_t)L_30));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25476));
		bool L_31 = V_16;
		if (!L_31)
		{
			goto IL_00c4;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:254>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25477));
		V_10 = (bool)0;
	}

IL_00c4:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25478));
		goto IL_01c2;
	}

IL_00c9:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:258>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25479));
		int32_t L_32 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_32&1))) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25480));
		bool L_33 = V_17;
		if (!L_33)
		{
			goto IL_00ed;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:259>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25481));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25482));
		Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* L_34;
		L_34 = Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407(il2cpp_rgctx_method(method->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25482));
		int16_t L_35 = V_9;
		int16_t L_36 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25483));
		NullCheck(L_34);
		int32_t L_37;
		L_37 = VirtualFuncInvoker2< int32_t, int16_t, int16_t >::Invoke(6, L_34, L_35, L_36);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25483));
		V_10 = (bool)((((int32_t)((((int32_t)L_37) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25484));
		goto IL_0103;
	}

IL_00ed:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:261>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25485));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25486));
		Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* L_38;
		L_38 = Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407(il2cpp_rgctx_method(method->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25486));
		int16_t L_39 = V_9;
		int16_t L_40 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25487));
		NullCheck(L_38);
		int32_t L_41;
		L_41 = VirtualFuncInvoker2< int32_t, int16_t, int16_t >::Invoke(6, L_38, L_39, L_40);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25487));
		V_10 = (bool)((((int32_t)((((int32_t)L_41) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:263>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25488));
		bool L_42 = V_0;
		bool L_43 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_42) == ((int32_t)0))? 1 : 0)&(int32_t)L_43));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25489));
		bool L_44 = V_18;
		if (!L_44)
		{
			goto IL_0114;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:264>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25490));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25491));
		goto IL_0135;
	}

IL_0114:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:265>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25492));
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_011d;
		}
	}
	{
		bool L_46 = V_1;
		G_B26_0 = ((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25493));
		bool L_47 = V_19;
		if (!L_47)
		{
			goto IL_0129;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:266>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25494));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25495));
		goto IL_0135;
	}

IL_0129:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:267>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25496));
		bool L_48 = V_0;
		bool L_49 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_48&(int32_t)L_49));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25497));
		bool L_50 = V_20;
		if (!L_50)
		{
			goto IL_0135;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:268>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25498));
		V_10 = (bool)0;
	}

IL_0135:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:269>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25499));
		goto IL_01c2;
	}

IL_013a:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:271>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25500));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25501));
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_51;
		L_51 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25501));
		int16_t L_52 = V_7;
		int16_t L_53 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25502));
		NullCheck(L_51);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_51, L_52, L_53);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25502));
		V_10 = L_54;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:272>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25503));
		bool L_55 = V_0;
		bool L_56 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_55) == ((int32_t)0))? 1 : 0)&(int32_t)L_56));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25504));
		bool L_57 = V_21;
		if (!L_57)
		{
			goto IL_015b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:273>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25505));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25506));
		goto IL_017c;
	}

IL_015b:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:274>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25507));
		bool L_58 = V_0;
		if (!L_58)
		{
			goto IL_0164;
		}
	}
	{
		bool L_59 = V_1;
		G_B36_0 = ((((int32_t)L_59) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25508));
		bool L_60 = V_22;
		if (!L_60)
		{
			goto IL_0170;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:275>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25509));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25510));
		goto IL_017c;
	}

IL_0170:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:276>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25511));
		bool L_61 = V_0;
		bool L_62 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_61&(int32_t)L_62));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25512));
		bool L_63 = V_23;
		if (!L_63)
		{
			goto IL_017c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:277>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25513));
		V_10 = (bool)1;
	}

IL_017c:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:278>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25514));
		goto IL_01c2;
	}

IL_017e:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:280>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25515));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25516));
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_64;
		L_64 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25516));
		int16_t L_65 = V_7;
		int16_t L_66 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25517));
		NullCheck(L_64);
		bool L_67;
		L_67 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_64, L_65, L_66);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25517));
		V_10 = L_67;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:281>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25518));
		bool L_68 = V_0;
		bool L_69 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_68) == ((int32_t)0))? 1 : 0)&(int32_t)L_69));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25519));
		bool L_70 = V_24;
		if (!L_70)
		{
			goto IL_019f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:282>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25520));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25521));
		goto IL_01c0;
	}

IL_019f:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:283>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25522));
		bool L_71 = V_0;
		if (!L_71)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_72 = V_1;
		G_B46_0 = ((((int32_t)L_72) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25523));
		bool L_73 = V_25;
		if (!L_73)
		{
			goto IL_01b4;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:284>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25524));
		V_10 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25525));
		goto IL_01c0;
	}

IL_01b4:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:285>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25526));
		bool L_74 = V_0;
		bool L_75 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_74&(int32_t)L_75));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25527));
		bool L_76 = V_26;
		if (!L_76)
		{
			goto IL_01c0;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:286>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25528));
		V_10 = (bool)1;
	}

IL_01c0:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:287>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25529));
		goto IL_01c2;
	}

IL_01c2:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:290>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25530));
		int32_t L_77 = V_3;
		int32_t L_78 = V_4;
		bool L_79 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25531));
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_77, L_78, L_79, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25531));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25532));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:236>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25533));
		int32_t L_80 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_01d6:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:236>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25534));
		int32_t L_81 = V_4;
		int32_t L_82 = ___4_len;
		V_27 = (bool)((((int32_t)L_81) < ((int32_t)L_82))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25535));
		bool L_83 = V_27;
		if (L_83)
		{
			goto IL_003d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25536));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:228>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25537));
		int32_t L_84 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_01ea:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:228>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25538));
		int32_t L_85 = V_3;
		int32_t L_86 = ___4_len;
		V_28 = (bool)((((int32_t)L_85) < ((int32_t)L_86))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25539));
		bool L_87 = V_28;
		if (L_87)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:294>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25540));
		V_6 = 0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:297>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25541));
		int32_t L_88 = ___5_imm8;
		V_30 = ((int32_t)(((int32_t)(L_88>>2))&3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25542));
		int32_t L_89 = V_30;
		V_29 = L_89;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25543));
		int32_t L_90 = V_29;
		switch (L_90)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:300>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25544));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25545));
		goto IL_0260;
	}

IL_0227:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25546));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:302>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25547));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25548));
		goto IL_024f;
	}

IL_022d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25549));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:304>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25550));
		int32_t L_91 = V_6;
		int32_t L_92 = V_4;
		int32_t L_93 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25551));
		bool L_94;
		L_94 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_92, L_93, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25551));
		if (L_94)
		{
			G_B61_0 = L_91;
			goto IL_023f;
		}
		G_B60_0 = L_91;
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_95 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_95&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25552));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:302>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25553));
		int32_t L_96 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_024f:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:302>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25554));
		int32_t L_97 = V_4;
		int32_t L_98 = ___4_len;
		V_31 = (bool)((((int32_t)L_97) < ((int32_t)L_98))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25555));
		bool L_99 = V_31;
		if (L_99)
		{
			goto IL_022d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25556));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:300>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25557));
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0260:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:300>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25558));
		int32_t L_101 = V_3;
		int32_t L_102 = ___4_len;
		V_32 = (bool)((((int32_t)L_101) < ((int32_t)L_102))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25559));
		bool L_103 = V_32;
		if (L_103)
		{
			goto IL_0227;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:312>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25560));
		goto IL_035a;
	}

IL_0270:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:314>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25561));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25562));
		goto IL_02bb;
	}

IL_0274:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25563));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:316>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25564));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25565));
		goto IL_02aa;
	}

IL_027a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25566));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:318>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25567));
		int32_t L_104 = V_6;
		int32_t L_105 = V_4;
		int32_t L_106 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25568));
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25568));
		if (!L_107)
		{
			G_B71_0 = L_104;
			goto IL_0297;
		}
		G_B70_0 = L_104;
	}
	{
		int32_t L_108 = V_4;
		int32_t L_109 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25569));
		bool L_110;
		L_110 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_108, 1)), L_109, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25569));
		if (L_110)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
		G_B71_0 = G_B70_0;
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_111 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_111&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25570));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:316>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25571));
		int32_t L_112 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_112, 2));
	}

IL_02aa:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:316>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25572));
		int32_t L_113 = V_4;
		int32_t L_114 = ___4_len;
		V_33 = (bool)((((int32_t)L_113) < ((int32_t)L_114))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25573));
		bool L_115 = V_33;
		if (L_115)
		{
			goto IL_027a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25574));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:314>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25575));
		int32_t L_116 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_116, 1));
	}

IL_02bb:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:314>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25576));
		int32_t L_117 = V_3;
		int32_t L_118 = ___4_len;
		V_34 = (bool)((((int32_t)L_117) < ((int32_t)L_118))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25577));
		bool L_119 = V_34;
		if (L_119)
		{
			goto IL_0274;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:321>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25578));
		goto IL_035a;
	}

IL_02cb:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:323>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25579));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25580));
		goto IL_02ee;
	}

IL_02cf:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25581));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:325>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25582));
		int32_t L_120 = V_6;
		int32_t L_121 = V_3;
		int32_t L_122 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25583));
		bool L_123;
		L_123 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_121, L_122, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25583));
		if (L_123)
		{
			G_B81_0 = L_120;
			goto IL_02e0;
		}
		G_B80_0 = L_120;
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_124 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_124&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25584));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:323>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25585));
		int32_t L_125 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_125, 1));
	}

IL_02ee:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:323>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25586));
		int32_t L_126 = V_3;
		int32_t L_127 = ___4_len;
		V_35 = (bool)((((int32_t)L_126) < ((int32_t)L_127))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25587));
		bool L_128 = V_35;
		if (L_128)
		{
			goto IL_02cf;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:327>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25588));
		goto IL_035a;
	}

IL_02fb:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:329>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25589));
		int32_t L_129 = ___6_allOnes;
		V_6 = L_129;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:330>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25590));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25591));
		goto IL_034d;
	}

IL_0303:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25592));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:332>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25593));
		int32_t L_130 = V_3;
		V_36 = L_130;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:333>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25594));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25595));
		goto IL_033a;
	}

IL_030c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25596));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:335>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25597));
		int32_t L_131 = V_4;
		int32_t L_132 = V_36;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25598));
		bool L_133;
		L_133 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_131, L_132, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25598));
		V_37 = (bool)((((int32_t)L_133) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25599));
		bool L_134 = V_37;
		if (!L_134)
		{
			goto IL_032d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:336>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25600));
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_6 = ((int32_t)(L_135&((~((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
	}

IL_032d:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:337>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25601));
		int32_t L_137 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_137, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25602));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:333>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25603));
		int32_t L_138 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_138, 1));
	}

IL_033a:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:333>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25604));
		int32_t L_139 = V_4;
		int32_t L_140 = ___4_len;
		int32_t L_141 = V_3;
		V_38 = (bool)((((int32_t)L_139) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_140, L_141))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25605));
		bool L_142 = V_38;
		if (L_142)
		{
			goto IL_030c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25606));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:330>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25607));
		int32_t L_143 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_034d:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:330>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25608));
		int32_t L_144 = V_3;
		int32_t L_145 = ___4_len;
		V_39 = (bool)((((int32_t)L_144) < ((int32_t)L_145))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25609));
		bool L_146 = V_39;
		if (L_146)
		{
			goto IL_0303;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:340>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25610));
		goto IL_035a;
	}

IL_035a:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:343>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25611));
		V_5 = 0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:346>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25612));
		V_1 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:347>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25613));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25614));
		goto IL_0401;
	}

IL_0366:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25615));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:349>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25616));
		int32_t L_147 = ___5_imm8;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25617));
		bool L_148 = V_40;
		if (!L_148)
		{
			goto IL_03ee;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25618));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:351>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25619));
		int32_t L_149 = ___5_imm8;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_149&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25620));
		bool L_150 = V_41;
		if (!L_150)
		{
			goto IL_03dc;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25621));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:353>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25622));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25623));
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_151;
		L_151 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25623));
		int16_t* L_152 = ___2_b;
		int32_t L_153 = V_3;
		intptr_t L_154 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_153,NULL));
		uint32_t L_155 = sizeof(int16_t);
		int16_t L_156 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_152, ((intptr_t)il2cpp_codegen_multiply(L_154, (int32_t)L_155)))));
		il2cpp_codegen_initobj((&V_43), sizeof(int16_t));
		int16_t L_157 = V_43;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25624));
		NullCheck(L_151);
		bool L_158;
		L_158 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_151, L_156, L_157);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25624));
		V_42 = L_158;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25625));
		bool L_159 = V_42;
		if (!L_159)
		{
			goto IL_03b3;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25626));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:355>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25627));
		V_1 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25628));
	}

IL_03b3:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:358>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25629));
		bool L_160 = V_1;
		V_44 = L_160;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25630));
		bool L_161 = V_44;
		if (!L_161)
		{
			goto IL_03ca;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:359>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25631));
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(L_163&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25632));
		goto IL_03d9;
	}

IL_03ca:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:361>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25633));
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03d9:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25634));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25635));
		goto IL_03eb;
	}

IL_03dc:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:364>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25636));
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(((~L_169))&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03eb:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25637));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25638));
		goto IL_03fc;
	}

IL_03ee:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:367>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25639));
		int32_t L_171 = V_5;
		int32_t L_172 = V_6;
		int32_t L_173 = V_3;
		V_5 = ((int32_t)(L_171|((int32_t)(L_172&((int32_t)(1<<((int32_t)(L_173&((int32_t)31)))))))));
	}

IL_03fc:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25640));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:347>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25641));
		int32_t L_174 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_174, 1));
	}

IL_0401:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:347>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25642));
		int32_t L_175 = V_3;
		int32_t L_176 = ___4_len;
		V_45 = (bool)((((int32_t)L_175) < ((int32_t)L_176))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25643));
		bool L_177 = V_45;
		if (L_177)
		{
			goto IL_0366;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:370>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25644));
		int32_t L_178 = V_5;
		V_46 = L_178;
		goto IL_0415;
	}

IL_0415:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:374>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25645));
		int32_t L_179 = V_46;
		return L_179;
	}
}
// Method Definition Index: 139176
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared (int8_t* ___0_a, int32_t ___1_alen, int8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int8_t V_7 = 0x0;
	bool V_8 = false;
	int8_t V_9 = 0x0;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	int8_t V_43 = 0x0;
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_alen), (&___2_b), (&___3_blen), (&___4_len), (&___5_imm8), (&___6_allOnes));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_6), (&V_7), (&V_9), (&V_10), (&V_36));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25440));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25441));
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25442));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:223>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25443));
		V_0 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:224>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25444));
		V_1 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:225>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25445));
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:228>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25446));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25447));
		goto IL_01ea;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25448));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:230>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25449));
		int8_t* L_0 = ___0_a;
		int32_t L_1 = V_3;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int8_t);
		int8_t L_4 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, (int32_t)L_3)))));
		V_7 = L_4;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:232>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25450));
		int32_t L_5 = V_3;
		int32_t L_6 = ___1_alen;
		V_8 = (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25451));
		bool L_7 = V_8;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:233>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25452));
		V_0 = (bool)1;
	}

IL_0033:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:235>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25453));
		V_1 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:236>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25454));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25455));
		goto IL_01d6;
	}

IL_003d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25456));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:238>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25457));
		int8_t* L_8 = ___2_b;
		int32_t L_9 = V_4;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		uint32_t L_11 = sizeof(int8_t);
		int8_t L_12 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, (int32_t)L_11)))));
		V_9 = L_12;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:239>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25458));
		int32_t L_13 = V_4;
		int32_t L_14 = ___3_blen;
		V_11 = (bool)((((int32_t)L_13) == ((int32_t)L_14))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25459));
		bool L_15 = V_11;
		if (!L_15)
		{
			goto IL_005e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:240>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25460));
		V_1 = (bool)1;
	}

IL_005e:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:245>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25461));
		int32_t L_16 = ___5_imm8;
		V_13 = ((int32_t)(((int32_t)(L_16>>2))&3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25462));
		int32_t L_17 = V_13;
		V_12 = L_17;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25463));
		int32_t L_18 = V_12;
		switch (L_18)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:248>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25464));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25465));
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_19;
		L_19 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25465));
		int8_t L_20 = V_7;
		int8_t L_21 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25466));
		NullCheck(L_19);
		bool L_22;
		L_22 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_19, L_20, L_21);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25466));
		V_10 = L_22;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:249>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25467));
		bool L_23 = V_0;
		bool L_24 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_23) == ((int32_t)0))? 1 : 0)&(int32_t)L_24));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25468));
		bool L_25 = V_14;
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:250>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25469));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25470));
		goto IL_00c4;
	}

IL_00a3:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:251>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25471));
		bool L_26 = V_0;
		if (!L_26)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_27 = V_1;
		G_B13_0 = ((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25472));
		bool L_28 = V_15;
		if (!L_28)
		{
			goto IL_00b8;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:252>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25473));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25474));
		goto IL_00c4;
	}

IL_00b8:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:253>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25475));
		bool L_29 = V_0;
		bool L_30 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_29&(int32_t)L_30));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25476));
		bool L_31 = V_16;
		if (!L_31)
		{
			goto IL_00c4;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:254>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25477));
		V_10 = (bool)0;
	}

IL_00c4:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25478));
		goto IL_01c2;
	}

IL_00c9:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:258>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25479));
		int32_t L_32 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_32&1))) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25480));
		bool L_33 = V_17;
		if (!L_33)
		{
			goto IL_00ed;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:259>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25481));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25482));
		Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* L_34;
		L_34 = Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F(il2cpp_rgctx_method(method->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25482));
		int8_t L_35 = V_9;
		int8_t L_36 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25483));
		NullCheck(L_34);
		int32_t L_37;
		L_37 = VirtualFuncInvoker2< int32_t, int8_t, int8_t >::Invoke(6, L_34, L_35, L_36);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25483));
		V_10 = (bool)((((int32_t)((((int32_t)L_37) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25484));
		goto IL_0103;
	}

IL_00ed:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:261>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25485));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25486));
		Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* L_38;
		L_38 = Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F(il2cpp_rgctx_method(method->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25486));
		int8_t L_39 = V_9;
		int8_t L_40 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25487));
		NullCheck(L_38);
		int32_t L_41;
		L_41 = VirtualFuncInvoker2< int32_t, int8_t, int8_t >::Invoke(6, L_38, L_39, L_40);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25487));
		V_10 = (bool)((((int32_t)((((int32_t)L_41) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:263>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25488));
		bool L_42 = V_0;
		bool L_43 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_42) == ((int32_t)0))? 1 : 0)&(int32_t)L_43));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25489));
		bool L_44 = V_18;
		if (!L_44)
		{
			goto IL_0114;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:264>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25490));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25491));
		goto IL_0135;
	}

IL_0114:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:265>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25492));
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_011d;
		}
	}
	{
		bool L_46 = V_1;
		G_B26_0 = ((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25493));
		bool L_47 = V_19;
		if (!L_47)
		{
			goto IL_0129;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:266>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25494));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25495));
		goto IL_0135;
	}

IL_0129:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:267>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25496));
		bool L_48 = V_0;
		bool L_49 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_48&(int32_t)L_49));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25497));
		bool L_50 = V_20;
		if (!L_50)
		{
			goto IL_0135;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:268>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25498));
		V_10 = (bool)0;
	}

IL_0135:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:269>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25499));
		goto IL_01c2;
	}

IL_013a:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:271>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25500));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25501));
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_51;
		L_51 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25501));
		int8_t L_52 = V_7;
		int8_t L_53 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25502));
		NullCheck(L_51);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_51, L_52, L_53);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25502));
		V_10 = L_54;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:272>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25503));
		bool L_55 = V_0;
		bool L_56 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_55) == ((int32_t)0))? 1 : 0)&(int32_t)L_56));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25504));
		bool L_57 = V_21;
		if (!L_57)
		{
			goto IL_015b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:273>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25505));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25506));
		goto IL_017c;
	}

IL_015b:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:274>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25507));
		bool L_58 = V_0;
		if (!L_58)
		{
			goto IL_0164;
		}
	}
	{
		bool L_59 = V_1;
		G_B36_0 = ((((int32_t)L_59) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25508));
		bool L_60 = V_22;
		if (!L_60)
		{
			goto IL_0170;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:275>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25509));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25510));
		goto IL_017c;
	}

IL_0170:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:276>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25511));
		bool L_61 = V_0;
		bool L_62 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_61&(int32_t)L_62));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25512));
		bool L_63 = V_23;
		if (!L_63)
		{
			goto IL_017c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:277>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25513));
		V_10 = (bool)1;
	}

IL_017c:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:278>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25514));
		goto IL_01c2;
	}

IL_017e:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:280>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25515));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25516));
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_64;
		L_64 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25516));
		int8_t L_65 = V_7;
		int8_t L_66 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25517));
		NullCheck(L_64);
		bool L_67;
		L_67 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_64, L_65, L_66);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25517));
		V_10 = L_67;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:281>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25518));
		bool L_68 = V_0;
		bool L_69 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_68) == ((int32_t)0))? 1 : 0)&(int32_t)L_69));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25519));
		bool L_70 = V_24;
		if (!L_70)
		{
			goto IL_019f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:282>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25520));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25521));
		goto IL_01c0;
	}

IL_019f:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:283>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25522));
		bool L_71 = V_0;
		if (!L_71)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_72 = V_1;
		G_B46_0 = ((((int32_t)L_72) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25523));
		bool L_73 = V_25;
		if (!L_73)
		{
			goto IL_01b4;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:284>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25524));
		V_10 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25525));
		goto IL_01c0;
	}

IL_01b4:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:285>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25526));
		bool L_74 = V_0;
		bool L_75 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_74&(int32_t)L_75));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25527));
		bool L_76 = V_26;
		if (!L_76)
		{
			goto IL_01c0;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:286>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25528));
		V_10 = (bool)1;
	}

IL_01c0:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:287>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25529));
		goto IL_01c2;
	}

IL_01c2:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:290>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25530));
		int32_t L_77 = V_3;
		int32_t L_78 = V_4;
		bool L_79 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25531));
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_77, L_78, L_79, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25531));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25532));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:236>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25533));
		int32_t L_80 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_01d6:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:236>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25534));
		int32_t L_81 = V_4;
		int32_t L_82 = ___4_len;
		V_27 = (bool)((((int32_t)L_81) < ((int32_t)L_82))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25535));
		bool L_83 = V_27;
		if (L_83)
		{
			goto IL_003d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25536));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:228>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25537));
		int32_t L_84 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_01ea:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:228>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25538));
		int32_t L_85 = V_3;
		int32_t L_86 = ___4_len;
		V_28 = (bool)((((int32_t)L_85) < ((int32_t)L_86))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25539));
		bool L_87 = V_28;
		if (L_87)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:294>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25540));
		V_6 = 0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:297>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25541));
		int32_t L_88 = ___5_imm8;
		V_30 = ((int32_t)(((int32_t)(L_88>>2))&3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25542));
		int32_t L_89 = V_30;
		V_29 = L_89;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25543));
		int32_t L_90 = V_29;
		switch (L_90)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:300>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25544));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25545));
		goto IL_0260;
	}

IL_0227:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25546));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:302>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25547));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25548));
		goto IL_024f;
	}

IL_022d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25549));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:304>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25550));
		int32_t L_91 = V_6;
		int32_t L_92 = V_4;
		int32_t L_93 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25551));
		bool L_94;
		L_94 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_92, L_93, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25551));
		if (L_94)
		{
			G_B61_0 = L_91;
			goto IL_023f;
		}
		G_B60_0 = L_91;
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_95 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_95&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25552));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:302>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25553));
		int32_t L_96 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_024f:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:302>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25554));
		int32_t L_97 = V_4;
		int32_t L_98 = ___4_len;
		V_31 = (bool)((((int32_t)L_97) < ((int32_t)L_98))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25555));
		bool L_99 = V_31;
		if (L_99)
		{
			goto IL_022d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25556));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:300>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25557));
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0260:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:300>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25558));
		int32_t L_101 = V_3;
		int32_t L_102 = ___4_len;
		V_32 = (bool)((((int32_t)L_101) < ((int32_t)L_102))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25559));
		bool L_103 = V_32;
		if (L_103)
		{
			goto IL_0227;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:312>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25560));
		goto IL_035a;
	}

IL_0270:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:314>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25561));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25562));
		goto IL_02bb;
	}

IL_0274:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25563));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:316>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25564));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25565));
		goto IL_02aa;
	}

IL_027a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25566));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:318>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25567));
		int32_t L_104 = V_6;
		int32_t L_105 = V_4;
		int32_t L_106 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25568));
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25568));
		if (!L_107)
		{
			G_B71_0 = L_104;
			goto IL_0297;
		}
		G_B70_0 = L_104;
	}
	{
		int32_t L_108 = V_4;
		int32_t L_109 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25569));
		bool L_110;
		L_110 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_108, 1)), L_109, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25569));
		if (L_110)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
		G_B71_0 = G_B70_0;
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_111 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_111&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25570));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:316>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25571));
		int32_t L_112 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_112, 2));
	}

IL_02aa:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:316>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25572));
		int32_t L_113 = V_4;
		int32_t L_114 = ___4_len;
		V_33 = (bool)((((int32_t)L_113) < ((int32_t)L_114))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25573));
		bool L_115 = V_33;
		if (L_115)
		{
			goto IL_027a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25574));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:314>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25575));
		int32_t L_116 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_116, 1));
	}

IL_02bb:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:314>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25576));
		int32_t L_117 = V_3;
		int32_t L_118 = ___4_len;
		V_34 = (bool)((((int32_t)L_117) < ((int32_t)L_118))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25577));
		bool L_119 = V_34;
		if (L_119)
		{
			goto IL_0274;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:321>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25578));
		goto IL_035a;
	}

IL_02cb:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:323>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25579));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25580));
		goto IL_02ee;
	}

IL_02cf:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25581));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:325>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25582));
		int32_t L_120 = V_6;
		int32_t L_121 = V_3;
		int32_t L_122 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25583));
		bool L_123;
		L_123 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_121, L_122, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25583));
		if (L_123)
		{
			G_B81_0 = L_120;
			goto IL_02e0;
		}
		G_B80_0 = L_120;
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_124 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_124&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25584));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:323>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25585));
		int32_t L_125 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_125, 1));
	}

IL_02ee:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:323>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25586));
		int32_t L_126 = V_3;
		int32_t L_127 = ___4_len;
		V_35 = (bool)((((int32_t)L_126) < ((int32_t)L_127))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25587));
		bool L_128 = V_35;
		if (L_128)
		{
			goto IL_02cf;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:327>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25588));
		goto IL_035a;
	}

IL_02fb:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:329>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25589));
		int32_t L_129 = ___6_allOnes;
		V_6 = L_129;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:330>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25590));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25591));
		goto IL_034d;
	}

IL_0303:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25592));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:332>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25593));
		int32_t L_130 = V_3;
		V_36 = L_130;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:333>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25594));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25595));
		goto IL_033a;
	}

IL_030c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25596));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:335>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25597));
		int32_t L_131 = V_4;
		int32_t L_132 = V_36;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25598));
		bool L_133;
		L_133 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_131, L_132, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25598));
		V_37 = (bool)((((int32_t)L_133) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25599));
		bool L_134 = V_37;
		if (!L_134)
		{
			goto IL_032d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:336>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25600));
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_6 = ((int32_t)(L_135&((~((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
	}

IL_032d:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:337>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25601));
		int32_t L_137 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_137, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25602));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:333>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25603));
		int32_t L_138 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_138, 1));
	}

IL_033a:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:333>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25604));
		int32_t L_139 = V_4;
		int32_t L_140 = ___4_len;
		int32_t L_141 = V_3;
		V_38 = (bool)((((int32_t)L_139) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_140, L_141))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25605));
		bool L_142 = V_38;
		if (L_142)
		{
			goto IL_030c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25606));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:330>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25607));
		int32_t L_143 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_034d:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:330>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25608));
		int32_t L_144 = V_3;
		int32_t L_145 = ___4_len;
		V_39 = (bool)((((int32_t)L_144) < ((int32_t)L_145))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25609));
		bool L_146 = V_39;
		if (L_146)
		{
			goto IL_0303;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:340>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25610));
		goto IL_035a;
	}

IL_035a:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:343>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25611));
		V_5 = 0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:346>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25612));
		V_1 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:347>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25613));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25614));
		goto IL_0401;
	}

IL_0366:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25615));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:349>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25616));
		int32_t L_147 = ___5_imm8;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25617));
		bool L_148 = V_40;
		if (!L_148)
		{
			goto IL_03ee;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25618));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:351>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25619));
		int32_t L_149 = ___5_imm8;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_149&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25620));
		bool L_150 = V_41;
		if (!L_150)
		{
			goto IL_03dc;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25621));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:353>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25622));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25623));
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_151;
		L_151 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25623));
		int8_t* L_152 = ___2_b;
		int32_t L_153 = V_3;
		intptr_t L_154 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_153,NULL));
		uint32_t L_155 = sizeof(int8_t);
		int8_t L_156 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_152, ((intptr_t)il2cpp_codegen_multiply(L_154, (int32_t)L_155)))));
		il2cpp_codegen_initobj((&V_43), sizeof(int8_t));
		int8_t L_157 = V_43;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25624));
		NullCheck(L_151);
		bool L_158;
		L_158 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_151, L_156, L_157);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25624));
		V_42 = L_158;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25625));
		bool L_159 = V_42;
		if (!L_159)
		{
			goto IL_03b3;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25626));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:355>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25627));
		V_1 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25628));
	}

IL_03b3:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:358>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25629));
		bool L_160 = V_1;
		V_44 = L_160;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25630));
		bool L_161 = V_44;
		if (!L_161)
		{
			goto IL_03ca;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:359>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25631));
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(L_163&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25632));
		goto IL_03d9;
	}

IL_03ca:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:361>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25633));
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03d9:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25634));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25635));
		goto IL_03eb;
	}

IL_03dc:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:364>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25636));
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(((~L_169))&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03eb:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25637));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25638));
		goto IL_03fc;
	}

IL_03ee:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:367>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25639));
		int32_t L_171 = V_5;
		int32_t L_172 = V_6;
		int32_t L_173 = V_3;
		V_5 = ((int32_t)(L_171|((int32_t)(L_172&((int32_t)(1<<((int32_t)(L_173&((int32_t)31)))))))));
	}

IL_03fc:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25640));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:347>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25641));
		int32_t L_174 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_174, 1));
	}

IL_0401:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:347>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25642));
		int32_t L_175 = V_3;
		int32_t L_176 = ___4_len;
		V_45 = (bool)((((int32_t)L_175) < ((int32_t)L_176))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25643));
		bool L_177 = V_45;
		if (L_177)
		{
			goto IL_0366;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:370>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25644));
		int32_t L_178 = V_5;
		V_46 = L_178;
		goto IL_0415;
	}

IL_0415:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:374>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25645));
		int32_t L_179 = V_46;
		return L_179;
	}
}
// Method Definition Index: 139176
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared (uint16_t* ___0_a, int32_t ___1_alen, uint16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint16_t V_7 = 0;
	bool V_8 = false;
	uint16_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	uint16_t V_43 = 0;
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_alen), (&___2_b), (&___3_blen), (&___4_len), (&___5_imm8), (&___6_allOnes));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_6), (&V_7), (&V_9), (&V_10), (&V_36));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25440));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25441));
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25442));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:223>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25443));
		V_0 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:224>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25444));
		V_1 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:225>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25445));
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:228>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25446));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25447));
		goto IL_01ea;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25448));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:230>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25449));
		uint16_t* L_0 = ___0_a;
		int32_t L_1 = V_3;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint16_t);
		uint16_t L_4 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, (int32_t)L_3)))));
		V_7 = L_4;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:232>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25450));
		int32_t L_5 = V_3;
		int32_t L_6 = ___1_alen;
		V_8 = (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25451));
		bool L_7 = V_8;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:233>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25452));
		V_0 = (bool)1;
	}

IL_0033:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:235>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25453));
		V_1 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:236>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25454));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25455));
		goto IL_01d6;
	}

IL_003d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25456));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:238>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25457));
		uint16_t* L_8 = ___2_b;
		int32_t L_9 = V_4;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		uint32_t L_11 = sizeof(uint16_t);
		uint16_t L_12 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, (int32_t)L_11)))));
		V_9 = L_12;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:239>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25458));
		int32_t L_13 = V_4;
		int32_t L_14 = ___3_blen;
		V_11 = (bool)((((int32_t)L_13) == ((int32_t)L_14))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25459));
		bool L_15 = V_11;
		if (!L_15)
		{
			goto IL_005e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:240>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25460));
		V_1 = (bool)1;
	}

IL_005e:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:245>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25461));
		int32_t L_16 = ___5_imm8;
		V_13 = ((int32_t)(((int32_t)(L_16>>2))&3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25462));
		int32_t L_17 = V_13;
		V_12 = L_17;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25463));
		int32_t L_18 = V_12;
		switch (L_18)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:248>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25464));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25465));
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_19;
		L_19 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25465));
		uint16_t L_20 = V_7;
		uint16_t L_21 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25466));
		NullCheck(L_19);
		bool L_22;
		L_22 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_19, L_20, L_21);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25466));
		V_10 = L_22;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:249>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25467));
		bool L_23 = V_0;
		bool L_24 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_23) == ((int32_t)0))? 1 : 0)&(int32_t)L_24));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25468));
		bool L_25 = V_14;
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:250>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25469));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25470));
		goto IL_00c4;
	}

IL_00a3:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:251>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25471));
		bool L_26 = V_0;
		if (!L_26)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_27 = V_1;
		G_B13_0 = ((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25472));
		bool L_28 = V_15;
		if (!L_28)
		{
			goto IL_00b8;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:252>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25473));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25474));
		goto IL_00c4;
	}

IL_00b8:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:253>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25475));
		bool L_29 = V_0;
		bool L_30 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_29&(int32_t)L_30));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25476));
		bool L_31 = V_16;
		if (!L_31)
		{
			goto IL_00c4;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:254>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25477));
		V_10 = (bool)0;
	}

IL_00c4:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25478));
		goto IL_01c2;
	}

IL_00c9:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:258>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25479));
		int32_t L_32 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_32&1))) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25480));
		bool L_33 = V_17;
		if (!L_33)
		{
			goto IL_00ed;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:259>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25481));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25482));
		Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* L_34;
		L_34 = Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36(il2cpp_rgctx_method(method->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25482));
		uint16_t L_35 = V_9;
		uint16_t L_36 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25483));
		NullCheck(L_34);
		int32_t L_37;
		L_37 = VirtualFuncInvoker2< int32_t, uint16_t, uint16_t >::Invoke(6, L_34, L_35, L_36);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25483));
		V_10 = (bool)((((int32_t)((((int32_t)L_37) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25484));
		goto IL_0103;
	}

IL_00ed:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:261>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25485));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25486));
		Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* L_38;
		L_38 = Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36(il2cpp_rgctx_method(method->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25486));
		uint16_t L_39 = V_9;
		uint16_t L_40 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25487));
		NullCheck(L_38);
		int32_t L_41;
		L_41 = VirtualFuncInvoker2< int32_t, uint16_t, uint16_t >::Invoke(6, L_38, L_39, L_40);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25487));
		V_10 = (bool)((((int32_t)((((int32_t)L_41) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:263>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25488));
		bool L_42 = V_0;
		bool L_43 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_42) == ((int32_t)0))? 1 : 0)&(int32_t)L_43));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25489));
		bool L_44 = V_18;
		if (!L_44)
		{
			goto IL_0114;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:264>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25490));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25491));
		goto IL_0135;
	}

IL_0114:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:265>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25492));
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_011d;
		}
	}
	{
		bool L_46 = V_1;
		G_B26_0 = ((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25493));
		bool L_47 = V_19;
		if (!L_47)
		{
			goto IL_0129;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:266>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25494));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25495));
		goto IL_0135;
	}

IL_0129:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:267>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25496));
		bool L_48 = V_0;
		bool L_49 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_48&(int32_t)L_49));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25497));
		bool L_50 = V_20;
		if (!L_50)
		{
			goto IL_0135;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:268>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25498));
		V_10 = (bool)0;
	}

IL_0135:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:269>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25499));
		goto IL_01c2;
	}

IL_013a:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:271>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25500));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25501));
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_51;
		L_51 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25501));
		uint16_t L_52 = V_7;
		uint16_t L_53 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25502));
		NullCheck(L_51);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_51, L_52, L_53);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25502));
		V_10 = L_54;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:272>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25503));
		bool L_55 = V_0;
		bool L_56 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_55) == ((int32_t)0))? 1 : 0)&(int32_t)L_56));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25504));
		bool L_57 = V_21;
		if (!L_57)
		{
			goto IL_015b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:273>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25505));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25506));
		goto IL_017c;
	}

IL_015b:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:274>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25507));
		bool L_58 = V_0;
		if (!L_58)
		{
			goto IL_0164;
		}
	}
	{
		bool L_59 = V_1;
		G_B36_0 = ((((int32_t)L_59) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25508));
		bool L_60 = V_22;
		if (!L_60)
		{
			goto IL_0170;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:275>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25509));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25510));
		goto IL_017c;
	}

IL_0170:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:276>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25511));
		bool L_61 = V_0;
		bool L_62 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_61&(int32_t)L_62));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25512));
		bool L_63 = V_23;
		if (!L_63)
		{
			goto IL_017c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:277>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25513));
		V_10 = (bool)1;
	}

IL_017c:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:278>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25514));
		goto IL_01c2;
	}

IL_017e:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:280>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25515));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25516));
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_64;
		L_64 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25516));
		uint16_t L_65 = V_7;
		uint16_t L_66 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25517));
		NullCheck(L_64);
		bool L_67;
		L_67 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_64, L_65, L_66);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25517));
		V_10 = L_67;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:281>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25518));
		bool L_68 = V_0;
		bool L_69 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_68) == ((int32_t)0))? 1 : 0)&(int32_t)L_69));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25519));
		bool L_70 = V_24;
		if (!L_70)
		{
			goto IL_019f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:282>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25520));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25521));
		goto IL_01c0;
	}

IL_019f:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:283>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25522));
		bool L_71 = V_0;
		if (!L_71)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_72 = V_1;
		G_B46_0 = ((((int32_t)L_72) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25523));
		bool L_73 = V_25;
		if (!L_73)
		{
			goto IL_01b4;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:284>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25524));
		V_10 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25525));
		goto IL_01c0;
	}

IL_01b4:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:285>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25526));
		bool L_74 = V_0;
		bool L_75 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_74&(int32_t)L_75));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25527));
		bool L_76 = V_26;
		if (!L_76)
		{
			goto IL_01c0;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:286>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25528));
		V_10 = (bool)1;
	}

IL_01c0:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:287>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25529));
		goto IL_01c2;
	}

IL_01c2:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:290>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25530));
		int32_t L_77 = V_3;
		int32_t L_78 = V_4;
		bool L_79 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25531));
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_77, L_78, L_79, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25531));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25532));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:236>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25533));
		int32_t L_80 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_01d6:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:236>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25534));
		int32_t L_81 = V_4;
		int32_t L_82 = ___4_len;
		V_27 = (bool)((((int32_t)L_81) < ((int32_t)L_82))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25535));
		bool L_83 = V_27;
		if (L_83)
		{
			goto IL_003d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25536));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:228>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25537));
		int32_t L_84 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_01ea:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:228>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25538));
		int32_t L_85 = V_3;
		int32_t L_86 = ___4_len;
		V_28 = (bool)((((int32_t)L_85) < ((int32_t)L_86))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25539));
		bool L_87 = V_28;
		if (L_87)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:294>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25540));
		V_6 = 0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:297>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25541));
		int32_t L_88 = ___5_imm8;
		V_30 = ((int32_t)(((int32_t)(L_88>>2))&3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25542));
		int32_t L_89 = V_30;
		V_29 = L_89;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25543));
		int32_t L_90 = V_29;
		switch (L_90)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:300>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25544));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25545));
		goto IL_0260;
	}

IL_0227:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25546));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:302>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25547));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25548));
		goto IL_024f;
	}

IL_022d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25549));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:304>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25550));
		int32_t L_91 = V_6;
		int32_t L_92 = V_4;
		int32_t L_93 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25551));
		bool L_94;
		L_94 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_92, L_93, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25551));
		if (L_94)
		{
			G_B61_0 = L_91;
			goto IL_023f;
		}
		G_B60_0 = L_91;
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_95 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_95&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25552));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:302>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25553));
		int32_t L_96 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_024f:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:302>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25554));
		int32_t L_97 = V_4;
		int32_t L_98 = ___4_len;
		V_31 = (bool)((((int32_t)L_97) < ((int32_t)L_98))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25555));
		bool L_99 = V_31;
		if (L_99)
		{
			goto IL_022d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25556));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:300>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25557));
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0260:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:300>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25558));
		int32_t L_101 = V_3;
		int32_t L_102 = ___4_len;
		V_32 = (bool)((((int32_t)L_101) < ((int32_t)L_102))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25559));
		bool L_103 = V_32;
		if (L_103)
		{
			goto IL_0227;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:312>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25560));
		goto IL_035a;
	}

IL_0270:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:314>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25561));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25562));
		goto IL_02bb;
	}

IL_0274:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25563));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:316>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25564));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25565));
		goto IL_02aa;
	}

IL_027a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25566));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:318>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25567));
		int32_t L_104 = V_6;
		int32_t L_105 = V_4;
		int32_t L_106 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25568));
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25568));
		if (!L_107)
		{
			G_B71_0 = L_104;
			goto IL_0297;
		}
		G_B70_0 = L_104;
	}
	{
		int32_t L_108 = V_4;
		int32_t L_109 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25569));
		bool L_110;
		L_110 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_108, 1)), L_109, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25569));
		if (L_110)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
		G_B71_0 = G_B70_0;
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_111 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_111&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25570));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:316>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25571));
		int32_t L_112 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_112, 2));
	}

IL_02aa:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:316>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25572));
		int32_t L_113 = V_4;
		int32_t L_114 = ___4_len;
		V_33 = (bool)((((int32_t)L_113) < ((int32_t)L_114))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25573));
		bool L_115 = V_33;
		if (L_115)
		{
			goto IL_027a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25574));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:314>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25575));
		int32_t L_116 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_116, 1));
	}

IL_02bb:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:314>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25576));
		int32_t L_117 = V_3;
		int32_t L_118 = ___4_len;
		V_34 = (bool)((((int32_t)L_117) < ((int32_t)L_118))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25577));
		bool L_119 = V_34;
		if (L_119)
		{
			goto IL_0274;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:321>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25578));
		goto IL_035a;
	}

IL_02cb:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:323>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25579));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25580));
		goto IL_02ee;
	}

IL_02cf:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25581));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:325>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25582));
		int32_t L_120 = V_6;
		int32_t L_121 = V_3;
		int32_t L_122 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25583));
		bool L_123;
		L_123 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_121, L_122, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25583));
		if (L_123)
		{
			G_B81_0 = L_120;
			goto IL_02e0;
		}
		G_B80_0 = L_120;
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_124 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_124&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25584));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:323>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25585));
		int32_t L_125 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_125, 1));
	}

IL_02ee:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:323>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25586));
		int32_t L_126 = V_3;
		int32_t L_127 = ___4_len;
		V_35 = (bool)((((int32_t)L_126) < ((int32_t)L_127))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25587));
		bool L_128 = V_35;
		if (L_128)
		{
			goto IL_02cf;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:327>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25588));
		goto IL_035a;
	}

IL_02fb:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:329>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25589));
		int32_t L_129 = ___6_allOnes;
		V_6 = L_129;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:330>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25590));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25591));
		goto IL_034d;
	}

IL_0303:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25592));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:332>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25593));
		int32_t L_130 = V_3;
		V_36 = L_130;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:333>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25594));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25595));
		goto IL_033a;
	}

IL_030c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25596));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:335>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25597));
		int32_t L_131 = V_4;
		int32_t L_132 = V_36;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25598));
		bool L_133;
		L_133 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_131, L_132, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25598));
		V_37 = (bool)((((int32_t)L_133) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25599));
		bool L_134 = V_37;
		if (!L_134)
		{
			goto IL_032d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:336>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25600));
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_6 = ((int32_t)(L_135&((~((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
	}

IL_032d:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:337>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25601));
		int32_t L_137 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_137, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25602));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:333>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25603));
		int32_t L_138 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_138, 1));
	}

IL_033a:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:333>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25604));
		int32_t L_139 = V_4;
		int32_t L_140 = ___4_len;
		int32_t L_141 = V_3;
		V_38 = (bool)((((int32_t)L_139) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_140, L_141))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25605));
		bool L_142 = V_38;
		if (L_142)
		{
			goto IL_030c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25606));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:330>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25607));
		int32_t L_143 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_034d:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:330>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25608));
		int32_t L_144 = V_3;
		int32_t L_145 = ___4_len;
		V_39 = (bool)((((int32_t)L_144) < ((int32_t)L_145))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25609));
		bool L_146 = V_39;
		if (L_146)
		{
			goto IL_0303;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:340>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25610));
		goto IL_035a;
	}

IL_035a:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:343>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25611));
		V_5 = 0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:346>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25612));
		V_1 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:347>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25613));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25614));
		goto IL_0401;
	}

IL_0366:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25615));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:349>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25616));
		int32_t L_147 = ___5_imm8;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25617));
		bool L_148 = V_40;
		if (!L_148)
		{
			goto IL_03ee;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25618));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:351>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25619));
		int32_t L_149 = ___5_imm8;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_149&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25620));
		bool L_150 = V_41;
		if (!L_150)
		{
			goto IL_03dc;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25621));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:353>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25622));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25623));
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_151;
		L_151 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25623));
		uint16_t* L_152 = ___2_b;
		int32_t L_153 = V_3;
		intptr_t L_154 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_153,NULL));
		uint32_t L_155 = sizeof(uint16_t);
		uint16_t L_156 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_152, ((intptr_t)il2cpp_codegen_multiply(L_154, (int32_t)L_155)))));
		il2cpp_codegen_initobj((&V_43), sizeof(uint16_t));
		uint16_t L_157 = V_43;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25624));
		NullCheck(L_151);
		bool L_158;
		L_158 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_151, L_156, L_157);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25624));
		V_42 = L_158;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25625));
		bool L_159 = V_42;
		if (!L_159)
		{
			goto IL_03b3;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25626));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:355>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25627));
		V_1 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25628));
	}

IL_03b3:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:358>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25629));
		bool L_160 = V_1;
		V_44 = L_160;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25630));
		bool L_161 = V_44;
		if (!L_161)
		{
			goto IL_03ca;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:359>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25631));
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(L_163&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25632));
		goto IL_03d9;
	}

IL_03ca:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:361>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25633));
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03d9:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25634));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25635));
		goto IL_03eb;
	}

IL_03dc:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:364>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25636));
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(((~L_169))&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03eb:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25637));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25638));
		goto IL_03fc;
	}

IL_03ee:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:367>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25639));
		int32_t L_171 = V_5;
		int32_t L_172 = V_6;
		int32_t L_173 = V_3;
		V_5 = ((int32_t)(L_171|((int32_t)(L_172&((int32_t)(1<<((int32_t)(L_173&((int32_t)31)))))))));
	}

IL_03fc:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25640));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:347>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25641));
		int32_t L_174 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_174, 1));
	}

IL_0401:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:347>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25642));
		int32_t L_175 = V_3;
		int32_t L_176 = ___4_len;
		V_45 = (bool)((((int32_t)L_175) < ((int32_t)L_176))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25643));
		bool L_177 = V_45;
		if (L_177)
		{
			goto IL_0366;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:370>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25644));
		int32_t L_178 = V_5;
		V_46 = L_178;
		goto IL_0415;
	}

IL_0415:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:374>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25645));
		int32_t L_179 = V_46;
		return L_179;
	}
}
// Method Definition Index: 139176
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	const Il2CppFullySharedGenericStruct L_12 = L_4;
	const Il2CppFullySharedGenericStruct L_20 = L_4;
	const Il2CppFullySharedGenericStruct L_35 = L_4;
	const Il2CppFullySharedGenericStruct L_39 = L_4;
	const Il2CppFullySharedGenericStruct L_52 = L_4;
	const Il2CppFullySharedGenericStruct L_65 = L_4;
	const Il2CppFullySharedGenericStruct L_156 = L_4;
	const Il2CppFullySharedGenericStruct L_21 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	const Il2CppFullySharedGenericStruct L_36 = L_21;
	const Il2CppFullySharedGenericStruct L_40 = L_21;
	const Il2CppFullySharedGenericStruct L_53 = L_21;
	const Il2CppFullySharedGenericStruct L_66 = L_21;
	const Il2CppFullySharedGenericStruct L_157 = L_21;
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Il2CppFullySharedGenericStruct V_7 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_7, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_8 = false;
	Il2CppFullySharedGenericStruct V_9 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_9, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	Il2CppFullySharedGenericStruct V_43 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_43, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_alen), (&___2_b), (&___3_blen), (&___4_len), (&___5_imm8), (&___6_allOnes));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_6), V_7, V_9, (&V_10), (&V_36));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25440));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25441));
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25442));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:223>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25443));
		V_0 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:224>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25444));
		V_1 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:225>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25445));
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:228>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25446));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25447));
		goto IL_01ea;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25448));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:230>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25449));
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = V_3;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_4, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, (int32_t)L_3)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(V_7, L_4, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:232>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25450));
		int32_t L_5 = V_3;
		int32_t L_6 = ___1_alen;
		V_8 = (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25451));
		bool L_7 = V_8;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:233>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25452));
		V_0 = (bool)1;
	}

IL_0033:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:235>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25453));
		V_1 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:236>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25454));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25455));
		goto IL_01d6;
	}

IL_003d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25456));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:238>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25457));
		Il2CppFullySharedGenericStruct* L_8 = ___2_b;
		int32_t L_9 = V_4;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		uint32_t L_11 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_12, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, (int32_t)L_11)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(V_9, L_12, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:239>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25458));
		int32_t L_13 = V_4;
		int32_t L_14 = ___3_blen;
		V_11 = (bool)((((int32_t)L_13) == ((int32_t)L_14))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25459));
		bool L_15 = V_11;
		if (!L_15)
		{
			goto IL_005e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:240>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25460));
		V_1 = (bool)1;
	}

IL_005e:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:245>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25461));
		int32_t L_16 = ___5_imm8;
		V_13 = ((int32_t)(((int32_t)(L_16>>2))&3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25462));
		int32_t L_17 = V_13;
		V_12 = L_17;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25463));
		int32_t L_18 = V_12;
		switch (L_18)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:248>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25464));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25465));
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_19;
		L_19 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25465));
		il2cpp_codegen_memcpy(L_20, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_21, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25466));
		NullCheck(L_19);
		bool L_22;
		L_22 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_19, L_20, L_21);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25466));
		V_10 = L_22;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:249>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25467));
		bool L_23 = V_0;
		bool L_24 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_23) == ((int32_t)0))? 1 : 0)&(int32_t)L_24));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25468));
		bool L_25 = V_14;
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:250>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25469));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25470));
		goto IL_00c4;
	}

IL_00a3:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:251>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25471));
		bool L_26 = V_0;
		if (!L_26)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_27 = V_1;
		G_B13_0 = ((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25472));
		bool L_28 = V_15;
		if (!L_28)
		{
			goto IL_00b8;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:252>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25473));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25474));
		goto IL_00c4;
	}

IL_00b8:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:253>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25475));
		bool L_29 = V_0;
		bool L_30 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_29&(int32_t)L_30));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25476));
		bool L_31 = V_16;
		if (!L_31)
		{
			goto IL_00c4;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:254>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25477));
		V_10 = (bool)0;
	}

IL_00c4:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25478));
		goto IL_01c2;
	}

IL_00c9:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:258>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25479));
		int32_t L_32 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_32&1))) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25480));
		bool L_33 = V_17;
		if (!L_33)
		{
			goto IL_00ed;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:259>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25481));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25482));
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_34;
		L_34 = ((  Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(il2cpp_rgctx_method(method->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25482));
		il2cpp_codegen_memcpy(L_35, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_36, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25483));
		NullCheck(L_34);
		int32_t L_37;
		L_37 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6, L_34, L_35, L_36);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25483));
		V_10 = (bool)((((int32_t)((((int32_t)L_37) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25484));
		goto IL_0103;
	}

IL_00ed:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:261>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25485));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25486));
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_38;
		L_38 = ((  Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(il2cpp_rgctx_method(method->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25486));
		il2cpp_codegen_memcpy(L_39, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_40, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25487));
		NullCheck(L_38);
		int32_t L_41;
		L_41 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6, L_38, L_39, L_40);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25487));
		V_10 = (bool)((((int32_t)((((int32_t)L_41) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:263>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25488));
		bool L_42 = V_0;
		bool L_43 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_42) == ((int32_t)0))? 1 : 0)&(int32_t)L_43));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25489));
		bool L_44 = V_18;
		if (!L_44)
		{
			goto IL_0114;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:264>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25490));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25491));
		goto IL_0135;
	}

IL_0114:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:265>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25492));
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_011d;
		}
	}
	{
		bool L_46 = V_1;
		G_B26_0 = ((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25493));
		bool L_47 = V_19;
		if (!L_47)
		{
			goto IL_0129;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:266>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25494));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25495));
		goto IL_0135;
	}

IL_0129:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:267>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25496));
		bool L_48 = V_0;
		bool L_49 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_48&(int32_t)L_49));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25497));
		bool L_50 = V_20;
		if (!L_50)
		{
			goto IL_0135;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:268>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25498));
		V_10 = (bool)0;
	}

IL_0135:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:269>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25499));
		goto IL_01c2;
	}

IL_013a:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:271>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25500));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25501));
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_51;
		L_51 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25501));
		il2cpp_codegen_memcpy(L_52, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_53, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25502));
		NullCheck(L_51);
		bool L_54;
		L_54 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_51, L_52, L_53);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25502));
		V_10 = L_54;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:272>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25503));
		bool L_55 = V_0;
		bool L_56 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_55) == ((int32_t)0))? 1 : 0)&(int32_t)L_56));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25504));
		bool L_57 = V_21;
		if (!L_57)
		{
			goto IL_015b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:273>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25505));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25506));
		goto IL_017c;
	}

IL_015b:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:274>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25507));
		bool L_58 = V_0;
		if (!L_58)
		{
			goto IL_0164;
		}
	}
	{
		bool L_59 = V_1;
		G_B36_0 = ((((int32_t)L_59) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25508));
		bool L_60 = V_22;
		if (!L_60)
		{
			goto IL_0170;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:275>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25509));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25510));
		goto IL_017c;
	}

IL_0170:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:276>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25511));
		bool L_61 = V_0;
		bool L_62 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_61&(int32_t)L_62));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25512));
		bool L_63 = V_23;
		if (!L_63)
		{
			goto IL_017c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:277>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25513));
		V_10 = (bool)1;
	}

IL_017c:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:278>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25514));
		goto IL_01c2;
	}

IL_017e:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:280>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25515));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25516));
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_64;
		L_64 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25516));
		il2cpp_codegen_memcpy(L_65, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_66, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25517));
		NullCheck(L_64);
		bool L_67;
		L_67 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_64, L_65, L_66);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25517));
		V_10 = L_67;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:281>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25518));
		bool L_68 = V_0;
		bool L_69 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_68) == ((int32_t)0))? 1 : 0)&(int32_t)L_69));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25519));
		bool L_70 = V_24;
		if (!L_70)
		{
			goto IL_019f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:282>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25520));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25521));
		goto IL_01c0;
	}

IL_019f:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:283>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25522));
		bool L_71 = V_0;
		if (!L_71)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_72 = V_1;
		G_B46_0 = ((((int32_t)L_72) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25523));
		bool L_73 = V_25;
		if (!L_73)
		{
			goto IL_01b4;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:284>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25524));
		V_10 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25525));
		goto IL_01c0;
	}

IL_01b4:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:285>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25526));
		bool L_74 = V_0;
		bool L_75 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_74&(int32_t)L_75));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25527));
		bool L_76 = V_26;
		if (!L_76)
		{
			goto IL_01c0;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:286>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25528));
		V_10 = (bool)1;
	}

IL_01c0:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:287>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25529));
		goto IL_01c2;
	}

IL_01c2:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:290>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25530));
		int32_t L_77 = V_3;
		int32_t L_78 = V_4;
		bool L_79 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25531));
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_77, L_78, L_79, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25531));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25532));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:236>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25533));
		int32_t L_80 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_01d6:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:236>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25534));
		int32_t L_81 = V_4;
		int32_t L_82 = ___4_len;
		V_27 = (bool)((((int32_t)L_81) < ((int32_t)L_82))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25535));
		bool L_83 = V_27;
		if (L_83)
		{
			goto IL_003d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25536));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:228>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25537));
		int32_t L_84 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_01ea:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:228>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25538));
		int32_t L_85 = V_3;
		int32_t L_86 = ___4_len;
		V_28 = (bool)((((int32_t)L_85) < ((int32_t)L_86))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25539));
		bool L_87 = V_28;
		if (L_87)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:294>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25540));
		V_6 = 0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:297>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25541));
		int32_t L_88 = ___5_imm8;
		V_30 = ((int32_t)(((int32_t)(L_88>>2))&3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25542));
		int32_t L_89 = V_30;
		V_29 = L_89;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25543));
		int32_t L_90 = V_29;
		switch (L_90)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:300>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25544));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25545));
		goto IL_0260;
	}

IL_0227:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25546));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:302>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25547));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25548));
		goto IL_024f;
	}

IL_022d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25549));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:304>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25550));
		int32_t L_91 = V_6;
		int32_t L_92 = V_4;
		int32_t L_93 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25551));
		bool L_94;
		L_94 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_92, L_93, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25551));
		if (L_94)
		{
			G_B61_0 = L_91;
			goto IL_023f;
		}
		G_B60_0 = L_91;
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_95 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_95&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25552));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:302>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25553));
		int32_t L_96 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_024f:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:302>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25554));
		int32_t L_97 = V_4;
		int32_t L_98 = ___4_len;
		V_31 = (bool)((((int32_t)L_97) < ((int32_t)L_98))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25555));
		bool L_99 = V_31;
		if (L_99)
		{
			goto IL_022d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25556));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:300>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25557));
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0260:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:300>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25558));
		int32_t L_101 = V_3;
		int32_t L_102 = ___4_len;
		V_32 = (bool)((((int32_t)L_101) < ((int32_t)L_102))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25559));
		bool L_103 = V_32;
		if (L_103)
		{
			goto IL_0227;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:312>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25560));
		goto IL_035a;
	}

IL_0270:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:314>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25561));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25562));
		goto IL_02bb;
	}

IL_0274:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25563));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:316>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25564));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25565));
		goto IL_02aa;
	}

IL_027a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25566));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:318>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25567));
		int32_t L_104 = V_6;
		int32_t L_105 = V_4;
		int32_t L_106 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25568));
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25568));
		if (!L_107)
		{
			G_B71_0 = L_104;
			goto IL_0297;
		}
		G_B70_0 = L_104;
	}
	{
		int32_t L_108 = V_4;
		int32_t L_109 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25569));
		bool L_110;
		L_110 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_108, 1)), L_109, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25569));
		if (L_110)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
		G_B71_0 = G_B70_0;
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_111 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_111&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25570));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:316>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25571));
		int32_t L_112 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_112, 2));
	}

IL_02aa:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:316>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25572));
		int32_t L_113 = V_4;
		int32_t L_114 = ___4_len;
		V_33 = (bool)((((int32_t)L_113) < ((int32_t)L_114))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25573));
		bool L_115 = V_33;
		if (L_115)
		{
			goto IL_027a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25574));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:314>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25575));
		int32_t L_116 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_116, 1));
	}

IL_02bb:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:314>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25576));
		int32_t L_117 = V_3;
		int32_t L_118 = ___4_len;
		V_34 = (bool)((((int32_t)L_117) < ((int32_t)L_118))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25577));
		bool L_119 = V_34;
		if (L_119)
		{
			goto IL_0274;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:321>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25578));
		goto IL_035a;
	}

IL_02cb:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:323>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25579));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25580));
		goto IL_02ee;
	}

IL_02cf:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25581));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:325>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25582));
		int32_t L_120 = V_6;
		int32_t L_121 = V_3;
		int32_t L_122 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25583));
		bool L_123;
		L_123 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_121, L_122, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25583));
		if (L_123)
		{
			G_B81_0 = L_120;
			goto IL_02e0;
		}
		G_B80_0 = L_120;
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_124 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_124&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25584));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:323>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25585));
		int32_t L_125 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_125, 1));
	}

IL_02ee:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:323>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25586));
		int32_t L_126 = V_3;
		int32_t L_127 = ___4_len;
		V_35 = (bool)((((int32_t)L_126) < ((int32_t)L_127))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25587));
		bool L_128 = V_35;
		if (L_128)
		{
			goto IL_02cf;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:327>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25588));
		goto IL_035a;
	}

IL_02fb:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:329>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25589));
		int32_t L_129 = ___6_allOnes;
		V_6 = L_129;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:330>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25590));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25591));
		goto IL_034d;
	}

IL_0303:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25592));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:332>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25593));
		int32_t L_130 = V_3;
		V_36 = L_130;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:333>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25594));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25595));
		goto IL_033a;
	}

IL_030c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25596));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:335>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25597));
		int32_t L_131 = V_4;
		int32_t L_132 = V_36;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25598));
		bool L_133;
		L_133 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_131, L_132, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25598));
		V_37 = (bool)((((int32_t)L_133) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25599));
		bool L_134 = V_37;
		if (!L_134)
		{
			goto IL_032d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:336>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25600));
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_6 = ((int32_t)(L_135&((~((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
	}

IL_032d:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:337>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25601));
		int32_t L_137 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_137, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25602));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:333>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25603));
		int32_t L_138 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_138, 1));
	}

IL_033a:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:333>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25604));
		int32_t L_139 = V_4;
		int32_t L_140 = ___4_len;
		int32_t L_141 = V_3;
		V_38 = (bool)((((int32_t)L_139) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_140, L_141))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25605));
		bool L_142 = V_38;
		if (L_142)
		{
			goto IL_030c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25606));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:330>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25607));
		int32_t L_143 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_034d:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:330>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25608));
		int32_t L_144 = V_3;
		int32_t L_145 = ___4_len;
		V_39 = (bool)((((int32_t)L_144) < ((int32_t)L_145))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25609));
		bool L_146 = V_39;
		if (L_146)
		{
			goto IL_0303;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:340>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25610));
		goto IL_035a;
	}

IL_035a:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:343>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25611));
		V_5 = 0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:346>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25612));
		V_1 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:347>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25613));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25614));
		goto IL_0401;
	}

IL_0366:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25615));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:349>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25616));
		int32_t L_147 = ___5_imm8;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25617));
		bool L_148 = V_40;
		if (!L_148)
		{
			goto IL_03ee;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25618));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:351>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25619));
		int32_t L_149 = ___5_imm8;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_149&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25620));
		bool L_150 = V_41;
		if (!L_150)
		{
			goto IL_03dc;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25621));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:353>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25622));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25623));
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_151;
		L_151 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25623));
		Il2CppFullySharedGenericStruct* L_152 = ___2_b;
		int32_t L_153 = V_3;
		intptr_t L_154 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_153,NULL));
		uint32_t L_155 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_156, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_152, ((intptr_t)il2cpp_codegen_multiply(L_154, (int32_t)L_155)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_43, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_157, V_43, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25624));
		NullCheck(L_151);
		bool L_158;
		L_158 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_151, L_156, L_157);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25624));
		V_42 = L_158;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25625));
		bool L_159 = V_42;
		if (!L_159)
		{
			goto IL_03b3;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25626));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:355>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25627));
		V_1 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25628));
	}

IL_03b3:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:358>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25629));
		bool L_160 = V_1;
		V_44 = L_160;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25630));
		bool L_161 = V_44;
		if (!L_161)
		{
			goto IL_03ca;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:359>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25631));
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(L_163&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25632));
		goto IL_03d9;
	}

IL_03ca:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:361>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25633));
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03d9:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25634));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25635));
		goto IL_03eb;
	}

IL_03dc:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:364>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25636));
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(((~L_169))&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03eb:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25637));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25638));
		goto IL_03fc;
	}

IL_03ee:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:367>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25639));
		int32_t L_171 = V_5;
		int32_t L_172 = V_6;
		int32_t L_173 = V_3;
		V_5 = ((int32_t)(L_171|((int32_t)(L_172&((int32_t)(1<<((int32_t)(L_173&((int32_t)31)))))))));
	}

IL_03fc:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25640));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:347>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25641));
		int32_t L_174 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_174, 1));
	}

IL_0401:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:347>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25642));
		int32_t L_175 = V_3;
		int32_t L_176 = ___4_len;
		V_45 = (bool)((((int32_t)L_175) < ((int32_t)L_176))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25643));
		bool L_177 = V_45;
		if (L_177)
		{
			goto IL_0366;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:370>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25644));
		int32_t L_178 = V_5;
		V_46 = L_178;
		goto IL_0415;
	}

IL_0415:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:374>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25645));
		int32_t L_179 = V_46;
		return L_179;
	}
}
// Method Definition Index: 139175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared (uint8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	bool V_4 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_max));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25422));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25423));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25424));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:210>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25425));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25426));
		goto IL_0037;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25427));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:212>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25428));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25429));
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_0;
		L_0 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25429));
		uint8_t* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		uint32_t L_4 = sizeof(uint8_t);
		uint8_t L_5 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, (int32_t)L_4)))));
		il2cpp_codegen_initobj((&V_2), sizeof(uint8_t));
		uint8_t L_6 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25430));
		NullCheck(L_0);
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_0, L_5, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25430));
		V_1 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25431));
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0032;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25432));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:214>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25433));
		int32_t L_9 = V_0;
		V_3 = L_9;
		goto IL_0045;
	}

IL_0032:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25434));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:210>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25435));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:210>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25436));
		int32_t L_11 = V_0;
		int32_t L_12 = ___1_max;
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25437));
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_0005;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:217>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25438));
		int32_t L_14 = ___1_max;
		V_3 = L_14;
		goto IL_0045;
	}

IL_0045:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:218>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25439));
		int32_t L_15 = V_3;
		return L_15;
	}
}
// Method Definition Index: 139175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared (int16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	int16_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_max));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25422));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25423));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25424));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:210>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25425));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25426));
		goto IL_0037;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25427));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:212>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25428));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25429));
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_0;
		L_0 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25429));
		int16_t* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		uint32_t L_4 = sizeof(int16_t);
		int16_t L_5 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, (int32_t)L_4)))));
		il2cpp_codegen_initobj((&V_2), sizeof(int16_t));
		int16_t L_6 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25430));
		NullCheck(L_0);
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_0, L_5, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25430));
		V_1 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25431));
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0032;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25432));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:214>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25433));
		int32_t L_9 = V_0;
		V_3 = L_9;
		goto IL_0045;
	}

IL_0032:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25434));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:210>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25435));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:210>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25436));
		int32_t L_11 = V_0;
		int32_t L_12 = ___1_max;
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25437));
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_0005;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:217>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25438));
		int32_t L_14 = ___1_max;
		V_3 = L_14;
		goto IL_0045;
	}

IL_0045:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:218>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25439));
		int32_t L_15 = V_3;
		return L_15;
	}
}
// Method Definition Index: 139175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared (int8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	int8_t V_2 = 0x0;
	int32_t V_3 = 0;
	bool V_4 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_max));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25422));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25423));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25424));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:210>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25425));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25426));
		goto IL_0037;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25427));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:212>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25428));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25429));
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_0;
		L_0 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25429));
		int8_t* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		uint32_t L_4 = sizeof(int8_t);
		int8_t L_5 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, (int32_t)L_4)))));
		il2cpp_codegen_initobj((&V_2), sizeof(int8_t));
		int8_t L_6 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25430));
		NullCheck(L_0);
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_0, L_5, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25430));
		V_1 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25431));
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0032;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25432));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:214>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25433));
		int32_t L_9 = V_0;
		V_3 = L_9;
		goto IL_0045;
	}

IL_0032:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25434));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:210>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25435));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:210>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25436));
		int32_t L_11 = V_0;
		int32_t L_12 = ___1_max;
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25437));
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_0005;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:217>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25438));
		int32_t L_14 = ___1_max;
		V_3 = L_14;
		goto IL_0045;
	}

IL_0045:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:218>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25439));
		int32_t L_15 = V_3;
		return L_15;
	}
}
// Method Definition Index: 139175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared (uint16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	uint16_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_max));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25422));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25423));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25424));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:210>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25425));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25426));
		goto IL_0037;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25427));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:212>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25428));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25429));
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_0;
		L_0 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25429));
		uint16_t* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		uint32_t L_4 = sizeof(uint16_t);
		uint16_t L_5 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, (int32_t)L_4)))));
		il2cpp_codegen_initobj((&V_2), sizeof(uint16_t));
		uint16_t L_6 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25430));
		NullCheck(L_0);
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_0, L_5, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25430));
		V_1 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25431));
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0032;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25432));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:214>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25433));
		int32_t L_9 = V_0;
		V_3 = L_9;
		goto IL_0045;
	}

IL_0032:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25434));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:210>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25435));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:210>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25436));
		int32_t L_11 = V_0;
		int32_t L_12 = ___1_max;
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25437));
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_0005;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:217>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25438));
		int32_t L_14 = ___1_max;
		V_3 = L_14;
		goto IL_0045;
	}

IL_0045:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:218>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25439));
		int32_t L_15 = V_3;
		return L_15;
	}
}
// Method Definition Index: 139175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6_gshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	memset(V_2, 0, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	int32_t V_3 = 0;
	bool V_4 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_max));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25422));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25423));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25424));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:210>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25425));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25426));
		goto IL_0037;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25427));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:212>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25428));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25429));
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_0;
		L_0 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25429));
		Il2CppFullySharedGenericStruct* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		uint32_t L_4 = SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64;
		il2cpp_codegen_memcpy(L_5, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, (int32_t)L_4)))), SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_2, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		il2cpp_codegen_memcpy(L_6, V_2, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25430));
		NullCheck(L_0);
		bool L_7;
		L_7 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_0, L_5, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25430));
		V_1 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25431));
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0032;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25432));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:214>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25433));
		int32_t L_9 = V_0;
		V_3 = L_9;
		goto IL_0045;
	}

IL_0032:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25434));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:210>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25435));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:210>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25436));
		int32_t L_11 = V_0;
		int32_t L_12 = ___1_max;
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25437));
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_0005;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:217>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25438));
		int32_t L_14 = ___1_max;
		V_3 = L_14;
		goto IL_0045;
	}

IL_0045:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:218>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25439));
		int32_t L_15 = V_3;
		return L_15;
	}
}
// Method Definition Index: 139171
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared (int32_t ___0_len, int32_t ___1_imm8, uint8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_len), (&___1_imm8), (&___2_allOnesT), (&___3_intRes2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25341));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25342));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25343));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25344));
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:142>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25345));
		int32_t L_0 = ___1_imm8;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25346));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25347));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:145>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25348));
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0);
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		V_2 = (uint8_t*)L_3;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:146>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25349));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25350));
		goto IL_0061;
	}

IL_0022:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25351));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:148>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25352));
		int32_t L_4 = ___3_intRes2;
		int32_t L_5 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_4&((int32_t)(1<<((int32_t)(L_5&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25353));
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25354));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:150>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25355));
		uint8_t* L_7 = V_2;
		int32_t L_8 = V_3;
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_8,NULL));
		uint32_t L_10 = sizeof(uint8_t);
		uint8_t L_11 = ___2_allOnesT;
		*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_9, (int32_t)L_10)))) = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25356));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25357));
		goto IL_005c;
	}

IL_0049:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25358));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:154>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25359));
		uint8_t* L_12 = V_2;
		int32_t L_13 = V_3;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		uint32_t L_15 = sizeof(uint8_t);
		il2cpp_codegen_initobj(((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, (int32_t)L_15)))), sizeof(uint8_t));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25360));
	}

IL_005c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25361));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:146>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25362));
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0061:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:146>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25363));
		int32_t L_17 = V_3;
		int32_t L_18 = ___0_len;
		V_5 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25364));
		bool L_19 = V_5;
		if (L_19)
		{
			goto IL_0022;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25365));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25366));
		goto IL_0078;
	}

IL_006e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25367));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:161>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25368));
		int32_t L_20 = ___3_intRes2;
		(&V_0)->___SInt0 = L_20;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25369));
	}

IL_0078:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:164>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25370));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_21 = V_0;
		V_6 = L_21;
		goto IL_007d;
	}

IL_007d:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:165>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25371));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_22 = V_6;
		return L_22;
	}
}
// Method Definition Index: 139171
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared (int32_t ___0_len, int32_t ___1_imm8, int16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int16_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_len), (&___1_imm8), (&___2_allOnesT), (&___3_intRes2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25341));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25342));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25343));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25344));
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:142>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25345));
		int32_t L_0 = ___1_imm8;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25346));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25347));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:145>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25348));
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0);
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		V_2 = (int16_t*)L_3;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:146>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25349));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25350));
		goto IL_0061;
	}

IL_0022:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25351));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:148>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25352));
		int32_t L_4 = ___3_intRes2;
		int32_t L_5 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_4&((int32_t)(1<<((int32_t)(L_5&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25353));
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25354));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:150>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25355));
		int16_t* L_7 = V_2;
		int32_t L_8 = V_3;
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_8,NULL));
		uint32_t L_10 = sizeof(int16_t);
		int16_t L_11 = ___2_allOnesT;
		*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_9, (int32_t)L_10)))) = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25356));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25357));
		goto IL_005c;
	}

IL_0049:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25358));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:154>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25359));
		int16_t* L_12 = V_2;
		int32_t L_13 = V_3;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		uint32_t L_15 = sizeof(int16_t);
		il2cpp_codegen_initobj(((int16_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, (int32_t)L_15)))), sizeof(int16_t));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25360));
	}

IL_005c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25361));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:146>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25362));
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0061:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:146>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25363));
		int32_t L_17 = V_3;
		int32_t L_18 = ___0_len;
		V_5 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25364));
		bool L_19 = V_5;
		if (L_19)
		{
			goto IL_0022;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25365));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25366));
		goto IL_0078;
	}

IL_006e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25367));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:161>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25368));
		int32_t L_20 = ___3_intRes2;
		(&V_0)->___SInt0 = L_20;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25369));
	}

IL_0078:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:164>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25370));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_21 = V_0;
		V_6 = L_21;
		goto IL_007d;
	}

IL_007d:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:165>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25371));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_22 = V_6;
		return L_22;
	}
}
// Method Definition Index: 139171
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared (int32_t ___0_len, int32_t ___1_imm8, int8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int8_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_len), (&___1_imm8), (&___2_allOnesT), (&___3_intRes2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25341));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25342));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25343));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25344));
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:142>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25345));
		int32_t L_0 = ___1_imm8;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25346));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25347));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:145>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25348));
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0);
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		V_2 = (int8_t*)L_3;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:146>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25349));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25350));
		goto IL_0061;
	}

IL_0022:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25351));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:148>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25352));
		int32_t L_4 = ___3_intRes2;
		int32_t L_5 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_4&((int32_t)(1<<((int32_t)(L_5&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25353));
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25354));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:150>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25355));
		int8_t* L_7 = V_2;
		int32_t L_8 = V_3;
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_8,NULL));
		uint32_t L_10 = sizeof(int8_t);
		int8_t L_11 = ___2_allOnesT;
		*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_9, (int32_t)L_10)))) = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25356));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25357));
		goto IL_005c;
	}

IL_0049:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25358));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:154>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25359));
		int8_t* L_12 = V_2;
		int32_t L_13 = V_3;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		uint32_t L_15 = sizeof(int8_t);
		il2cpp_codegen_initobj(((int8_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, (int32_t)L_15)))), sizeof(int8_t));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25360));
	}

IL_005c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25361));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:146>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25362));
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0061:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:146>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25363));
		int32_t L_17 = V_3;
		int32_t L_18 = ___0_len;
		V_5 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25364));
		bool L_19 = V_5;
		if (L_19)
		{
			goto IL_0022;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25365));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25366));
		goto IL_0078;
	}

IL_006e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25367));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:161>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25368));
		int32_t L_20 = ___3_intRes2;
		(&V_0)->___SInt0 = L_20;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25369));
	}

IL_0078:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:164>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25370));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_21 = V_0;
		V_6 = L_21;
		goto IL_007d;
	}

IL_007d:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:165>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25371));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_22 = V_6;
		return L_22;
	}
}
// Method Definition Index: 139171
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared (int32_t ___0_len, int32_t ___1_imm8, uint16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	uint16_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_len), (&___1_imm8), (&___2_allOnesT), (&___3_intRes2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25341));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25342));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25343));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25344));
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:142>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25345));
		int32_t L_0 = ___1_imm8;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25346));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25347));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:145>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25348));
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0);
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		V_2 = (uint16_t*)L_3;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:146>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25349));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25350));
		goto IL_0061;
	}

IL_0022:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25351));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:148>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25352));
		int32_t L_4 = ___3_intRes2;
		int32_t L_5 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_4&((int32_t)(1<<((int32_t)(L_5&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25353));
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25354));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:150>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25355));
		uint16_t* L_7 = V_2;
		int32_t L_8 = V_3;
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_8,NULL));
		uint32_t L_10 = sizeof(uint16_t);
		uint16_t L_11 = ___2_allOnesT;
		*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_9, (int32_t)L_10)))) = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25356));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25357));
		goto IL_005c;
	}

IL_0049:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25358));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:154>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25359));
		uint16_t* L_12 = V_2;
		int32_t L_13 = V_3;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		uint32_t L_15 = sizeof(uint16_t);
		il2cpp_codegen_initobj(((uint16_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, (int32_t)L_15)))), sizeof(uint16_t));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25360));
	}

IL_005c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25361));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:146>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25362));
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0061:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:146>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25363));
		int32_t L_17 = V_3;
		int32_t L_18 = ___0_len;
		V_5 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25364));
		bool L_19 = V_5;
		if (L_19)
		{
			goto IL_0022;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25365));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25366));
		goto IL_0078;
	}

IL_006e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25367));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:161>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25368));
		int32_t L_20 = ___3_intRes2;
		(&V_0)->___SInt0 = L_20;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25369));
	}

IL_0078:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:164>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25370));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_21 = V_0;
		V_6 = L_21;
		goto IL_007d;
	}

IL_007d:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:165>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25371));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_22 = V_6;
		return L_22;
	}
}
// Method Definition Index: 139171
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C_gshared (int32_t ___0_len, int32_t ___1_imm8, Il2CppFullySharedGenericStruct ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
	ProfilerMethodSentry _profilerMethodSentry(method);
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Il2CppFullySharedGenericStruct* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_len), (&___1_imm8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___2_allOnesT : &___2_allOnesT), (&___3_intRes2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25341));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25342));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25343));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25344));
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:142>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25345));
		int32_t L_0 = ___1_imm8;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25346));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25347));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:145>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25348));
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0);
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		V_2 = (Il2CppFullySharedGenericStruct*)L_3;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:146>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25349));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25350));
		goto IL_0061;
	}

IL_0022:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25351));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:148>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25352));
		int32_t L_4 = ___3_intRes2;
		int32_t L_5 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_4&((int32_t)(1<<((int32_t)(L_5&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25353));
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25354));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:150>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25355));
		Il2CppFullySharedGenericStruct* L_7 = V_2;
		int32_t L_8 = V_3;
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_8,NULL));
		uint32_t L_10 = SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B;
		il2cpp_codegen_memcpy(L_11, ___2_allOnesT, SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_9, (int32_t)L_10)))), L_11, SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_9, (int32_t)L_10)))), (void*)L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25356));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25357));
		goto IL_005c;
	}

IL_0049:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25358));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:154>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25359));
		Il2CppFullySharedGenericStruct* L_12 = V_2;
		int32_t L_13 = V_3;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		uint32_t L_15 = SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B;
		il2cpp_codegen_initobj(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, (int32_t)L_15)))), SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25360));
	}

IL_005c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25361));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:146>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25362));
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0061:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:146>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25363));
		int32_t L_17 = V_3;
		int32_t L_18 = ___0_len;
		V_5 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25364));
		bool L_19 = V_5;
		if (L_19)
		{
			goto IL_0022;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25365));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25366));
		goto IL_0078;
	}

IL_006e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25367));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:161>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25368));
		int32_t L_20 = ___3_intRes2;
		(&V_0)->___SInt0 = L_20;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25369));
	}

IL_0078:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:164>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25370));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_21 = V_0;
		V_6 = L_21;
		goto IL_007d;
	}

IL_007d:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:165>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25371));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_22 = V_6;
		return L_22;
	}
}
// Method Definition Index: 139173
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4107C2F2DB7508841779CE414BD21B61FA3183F_gshared (uint8_t* ___0_a, int32_t ___1_alen, uint8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, uint8_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_alen), (&___2_b), (&___3_blen), (&___4_len), (&___5_imm8), (&___6_allOnes), (&___7_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25382));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25383));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25384));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:176>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25385));
		uint8_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		uint8_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25386));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25386));
		V_0 = L_7;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:178>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25387));
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25388));
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25388));
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:179>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25389));
		int32_t L_12 = V_1;
		return L_12;
	}
}
// Method Definition Index: 139173
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m797C4B561EC2527267C18CF422EBBD9FCDD306EF_gshared (int16_t* ___0_a, int32_t ___1_alen, int16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, int16_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_alen), (&___2_b), (&___3_blen), (&___4_len), (&___5_imm8), (&___6_allOnes), (&___7_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25382));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25383));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25384));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:176>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25385));
		int16_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		int16_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25386));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25386));
		V_0 = L_7;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:178>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25387));
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25388));
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25388));
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:179>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25389));
		int32_t L_12 = V_1;
		return L_12;
	}
}
// Method Definition Index: 139173
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8934296ABE51C76314606C484F93554C529BD77A_gshared (int8_t* ___0_a, int32_t ___1_alen, int8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, int8_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_alen), (&___2_b), (&___3_blen), (&___4_len), (&___5_imm8), (&___6_allOnes), (&___7_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25382));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25383));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25384));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:176>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25385));
		int8_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		int8_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25386));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25386));
		V_0 = L_7;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:178>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25387));
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25388));
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25388));
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:179>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25389));
		int32_t L_12 = V_1;
		return L_12;
	}
}
// Method Definition Index: 139173
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m6A20624B95FD608D46A450719A26FC173F4C0780_gshared (uint16_t* ___0_a, int32_t ___1_alen, uint16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, uint16_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_alen), (&___2_b), (&___3_blen), (&___4_len), (&___5_imm8), (&___6_allOnes), (&___7_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25382));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25383));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25384));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:176>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25385));
		uint16_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		uint16_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25386));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25386));
		V_0 = L_7;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:178>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25387));
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25388));
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25388));
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:179>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25389));
		int32_t L_12 = V_1;
		return L_12;
	}
}
// Method Definition Index: 139173
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisIl2CppFullySharedGenericStruct_m92A1CC07F00E8D1EFF164A7AAA2CEF3A90BC8071_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, Il2CppFullySharedGenericStruct ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_alen), (&___2_b), (&___3_blen), (&___4_len), (&___5_imm8), (&___6_allOnes), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___7_allOnesT : &___7_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25382));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25383));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25384));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:176>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25385));
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		Il2CppFullySharedGenericStruct* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25386));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25386));
		V_0 = L_7;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:178>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25387));
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25388));
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25388));
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:179>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25389));
		int32_t L_12 = V_1;
		return L_12;
	}
}
// Method Definition Index: 139170
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m179C750FBD381FF2897A9140CF7C2661939C7E71_gshared (uint8_t* ___0_a, int32_t ___1_alen, uint8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, uint8_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_alen), (&___2_b), (&___3_blen), (&___4_len), (&___5_imm8), (&___6_allOnes), (&___7_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25333));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25334));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25335));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:133>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25336));
		uint8_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		uint8_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25337));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25337));
		V_0 = L_7;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:135>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25338));
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		uint8_t L_10 = ___7_allOnesT;
		int32_t L_11 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25339));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25339));
		V_1 = L_12;
		goto IL_0020;
	}

IL_0020:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:136>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25340));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13 = V_1;
		return L_13;
	}
}
// Method Definition Index: 139170
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m9F860C6A223CB8744EB0C859B49E573C300C9F7B_gshared (int16_t* ___0_a, int32_t ___1_alen, int16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, int16_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_alen), (&___2_b), (&___3_blen), (&___4_len), (&___5_imm8), (&___6_allOnes), (&___7_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25333));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25334));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25335));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:133>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25336));
		int16_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		int16_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25337));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25337));
		V_0 = L_7;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:135>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25338));
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int16_t L_10 = ___7_allOnesT;
		int32_t L_11 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25339));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25339));
		V_1 = L_12;
		goto IL_0020;
	}

IL_0020:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:136>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25340));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13 = V_1;
		return L_13;
	}
}
// Method Definition Index: 139170
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEC9DD6EE9C8D66BCFFABD5A19993FDA06444F20C_gshared (int8_t* ___0_a, int32_t ___1_alen, int8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, int8_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_alen), (&___2_b), (&___3_blen), (&___4_len), (&___5_imm8), (&___6_allOnes), (&___7_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25333));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25334));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25335));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:133>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25336));
		int8_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		int8_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25337));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25337));
		V_0 = L_7;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:135>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25338));
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int8_t L_10 = ___7_allOnesT;
		int32_t L_11 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25339));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25339));
		V_1 = L_12;
		goto IL_0020;
	}

IL_0020:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:136>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25340));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13 = V_1;
		return L_13;
	}
}
// Method Definition Index: 139170
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8784D19FC1B4BAC48D00E8623FE1872EFEFD3496_gshared (uint16_t* ___0_a, int32_t ___1_alen, uint16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, uint16_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_alen), (&___2_b), (&___3_blen), (&___4_len), (&___5_imm8), (&___6_allOnes), (&___7_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25333));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25334));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25335));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:133>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25336));
		uint16_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		uint16_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25337));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25337));
		V_0 = L_7;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:135>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25338));
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		uint16_t L_10 = ___7_allOnesT;
		int32_t L_11 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25339));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25339));
		V_1 = L_12;
		goto IL_0020;
	}

IL_0020:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:136>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25340));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13 = V_1;
		return L_13;
	}
}
// Method Definition Index: 139170
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisIl2CppFullySharedGenericStruct_m81548202F0BF107992042F154D34BCB0C7366524_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, Il2CppFullySharedGenericStruct ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_alen), (&___2_b), (&___3_blen), (&___4_len), (&___5_imm8), (&___6_allOnes), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___7_allOnesT : &___7_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25333));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25334));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25335));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:133>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25336));
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		Il2CppFullySharedGenericStruct* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25337));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25337));
		V_0 = L_7;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:135>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25338));
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		il2cpp_codegen_memcpy(L_10, ___7_allOnesT, SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
		int32_t L_11 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25339));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = InvokerFuncInvoker4< v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61, int32_t, int32_t, Il2CppFullySharedGenericStruct, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_8, L_9, L_10, L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25339));
		V_1 = L_12;
		goto IL_0020;
	}

IL_0020:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:136>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25340));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13 = V_1;
		return L_13;
	}
}
// Method Definition Index: 139172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2E6D2FDB31E3BFDFC30BDD2389A5A50C0F3286BB_gshared (uint8_t* ___0_a, uint8_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, uint8_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b), (&___2_len), (&___3_imm8), (&___4_allOnes), (&___5_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25372));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25373));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25374));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:169>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25375));
		uint8_t* L_0 = ___0_a;
		uint8_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25376));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25376));
		uint8_t* L_4 = ___1_b;
		uint8_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25377));
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25377));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25378));
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25378));
		V_0 = L_11;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:171>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25379));
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25380));
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25380));
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:172>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25381));
		int32_t L_16 = V_1;
		return L_16;
	}
}
// Method Definition Index: 139172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m4786E128EACDF39A8B13B696D31429E7C8D6EBF6_gshared (int16_t* ___0_a, int16_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, int16_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b), (&___2_len), (&___3_imm8), (&___4_allOnes), (&___5_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25372));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25373));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25374));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:169>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25375));
		int16_t* L_0 = ___0_a;
		int16_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25376));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25376));
		int16_t* L_4 = ___1_b;
		int16_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25377));
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25377));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25378));
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25378));
		V_0 = L_11;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:171>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25379));
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25380));
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25380));
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:172>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25381));
		int32_t L_16 = V_1;
		return L_16;
	}
}
// Method Definition Index: 139172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m12535D1A7206DB4C56C55B642E9F5F0B072810A3_gshared (int8_t* ___0_a, int8_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, int8_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b), (&___2_len), (&___3_imm8), (&___4_allOnes), (&___5_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25372));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25373));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25374));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:169>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25375));
		int8_t* L_0 = ___0_a;
		int8_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25376));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25376));
		int8_t* L_4 = ___1_b;
		int8_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25377));
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25377));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25378));
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25378));
		V_0 = L_11;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:171>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25379));
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25380));
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25380));
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:172>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25381));
		int32_t L_16 = V_1;
		return L_16;
	}
}
// Method Definition Index: 139172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m875686166B80F44B2A7B5837256932C7A6560E7D_gshared (uint16_t* ___0_a, uint16_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, uint16_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b), (&___2_len), (&___3_imm8), (&___4_allOnes), (&___5_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25372));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25373));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25374));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:169>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25375));
		uint16_t* L_0 = ___0_a;
		uint16_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25376));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25376));
		uint16_t* L_4 = ___1_b;
		uint16_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25377));
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25377));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25378));
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25378));
		V_0 = L_11;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:171>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25379));
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25380));
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25380));
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:172>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25381));
		int32_t L_16 = V_1;
		return L_16;
	}
}
// Method Definition Index: 139172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisIl2CppFullySharedGenericStruct_m0723D40FF7E3DA850D8AF6948CB6C949F855583D_gshared (Il2CppFullySharedGenericStruct* ___0_a, Il2CppFullySharedGenericStruct* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, Il2CppFullySharedGenericStruct ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b), (&___2_len), (&___3_imm8), (&___4_allOnes), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___5_allOnesT : &___5_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25372));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25373));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25374));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:169>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25375));
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		Il2CppFullySharedGenericStruct* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25376));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25376));
		Il2CppFullySharedGenericStruct* L_4 = ___1_b;
		Il2CppFullySharedGenericStruct* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25377));
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25377));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25378));
		int32_t L_11;
		L_11 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25378));
		V_0 = L_11;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:171>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25379));
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25380));
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25380));
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:172>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25381));
		int32_t L_16 = V_1;
		return L_16;
	}
}
// Method Definition Index: 139169
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1E1CCF579BEBAD09719E3B27BCAB1A607CED8C89_gshared (uint8_t* ___0_a, uint8_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, uint8_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b), (&___2_len), (&___3_imm8), (&___4_allOnes), (&___5_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25323));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25324));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25325));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:126>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25326));
		uint8_t* L_0 = ___0_a;
		uint8_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25327));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25327));
		uint8_t* L_4 = ___1_b;
		uint8_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25328));
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25328));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25329));
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25329));
		V_0 = L_11;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:128>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25330));
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		uint8_t L_14 = ___5_allOnesT;
		int32_t L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25331));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25331));
		V_1 = L_16;
		goto IL_0028;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:129>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25332));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_1;
		return L_17;
	}
}
// Method Definition Index: 139169
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m31A82E20D7EB7CDFCDF7EEA3E75BA4F38F8501D4_gshared (int16_t* ___0_a, int16_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, int16_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b), (&___2_len), (&___3_imm8), (&___4_allOnes), (&___5_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25323));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25324));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25325));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:126>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25326));
		int16_t* L_0 = ___0_a;
		int16_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25327));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25327));
		int16_t* L_4 = ___1_b;
		int16_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25328));
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25328));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25329));
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25329));
		V_0 = L_11;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:128>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25330));
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int16_t L_14 = ___5_allOnesT;
		int32_t L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25331));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25331));
		V_1 = L_16;
		goto IL_0028;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:129>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25332));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_1;
		return L_17;
	}
}
// Method Definition Index: 139169
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEA9E446133608807E4CF1C806055621BECFD93CF_gshared (int8_t* ___0_a, int8_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, int8_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b), (&___2_len), (&___3_imm8), (&___4_allOnes), (&___5_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25323));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25324));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25325));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:126>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25326));
		int8_t* L_0 = ___0_a;
		int8_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25327));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25327));
		int8_t* L_4 = ___1_b;
		int8_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25328));
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25328));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25329));
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25329));
		V_0 = L_11;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:128>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25330));
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int8_t L_14 = ___5_allOnesT;
		int32_t L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25331));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25331));
		V_1 = L_16;
		goto IL_0028;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:129>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25332));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_1;
		return L_17;
	}
}
// Method Definition Index: 139169
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m084B5A607615E44BC1926F6FF9CF11754A074B06_gshared (uint16_t* ___0_a, uint16_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, uint16_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b), (&___2_len), (&___3_imm8), (&___4_allOnes), (&___5_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25323));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25324));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25325));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:126>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25326));
		uint16_t* L_0 = ___0_a;
		uint16_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25327));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25327));
		uint16_t* L_4 = ___1_b;
		uint16_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25328));
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25328));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25329));
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25329));
		V_0 = L_11;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:128>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25330));
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		uint16_t L_14 = ___5_allOnesT;
		int32_t L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25331));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25331));
		V_1 = L_16;
		goto IL_0028;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:129>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25332));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_1;
		return L_17;
	}
}
// Method Definition Index: 139169
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisIl2CppFullySharedGenericStruct_m16F77547DC1C2BE0F6959A4B639E1210EF674C66_gshared (Il2CppFullySharedGenericStruct* ___0_a, Il2CppFullySharedGenericStruct* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, Il2CppFullySharedGenericStruct ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b), (&___2_len), (&___3_imm8), (&___4_allOnes), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___5_allOnesT : &___5_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25323));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25324));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25325));
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:126>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25326));
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		Il2CppFullySharedGenericStruct* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25327));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25327));
		Il2CppFullySharedGenericStruct* L_4 = ___1_b;
		Il2CppFullySharedGenericStruct* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25328));
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25328));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25329));
		int32_t L_11;
		L_11 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25329));
		V_0 = L_11;
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:128>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25330));
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		il2cpp_codegen_memcpy(L_14, ___5_allOnesT, SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
		int32_t L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25331));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = InvokerFuncInvoker4< v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61, int32_t, int32_t, Il2CppFullySharedGenericStruct, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_12, L_13, L_14, L_15);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25331));
		V_1 = L_16;
		goto IL_0028;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@6bb9aca3ef38/Runtime/Intrinsics/x86/Sse4_2.cs:129>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25332));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_1;
		return L_17;
	}
}
// Method Definition Index: 117553
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t0FAE9973A0C60B49E231E1F7F01F959BFBB59552 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_input));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31252));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 31253));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31254));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/xxHash3.StreamingState.cs:145>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31255));
		Il2CppFullySharedGenericStruct* L_0 = ___0_input;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31256));
		void* L_1;
		L_1 = ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31256));
		uint32_t L_2 = SizeOf_T_t0FAE9973A0C60B49E231E1F7F01F959BFBB59552;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31257));
		il2cpp_codegen_runtime_class_init_inline(StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_il2cpp_TypeInfo_var);
		StreamingState_Update_mD0C172FBC9AB99BC72DF8CC3665ABB61658AB9E5(__this, L_1, (int32_t)L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31257));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/xxHash3.StreamingState.cs:146>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31258));
		return;
	}
}
IL2CPP_EXTERN_C  void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method)
{
	StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020>(__this);
	StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D(_thisAdjusted, ___0_input, method);
}
// Method Definition Index: 116541
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Allocate_TisIl2CppFullySharedGenericStruct_m040B30CAEA05884CC6EF77610B3FABB3B53AB4AD_gshared (int64_t ___0_count, MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___1_label, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_count), (&___1_label));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20924));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20925));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20926));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:160>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20927));
		uintptr_t L_0 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		int64_t L_2 = ___0_count;
		MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 L_3 = ___1_label;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20928));
		Il2CppFullySharedGenericStruct* L_4;
		L_4 = ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int64_t, int64_t, MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((Il2CppFullySharedGenericStruct*)L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20928));
		V_0 = L_4;
		goto IL_000f;
	}

IL_000f:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:161>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20929));
		Il2CppFullySharedGenericStruct* L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 116540
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Allocate_TisIl2CppFullySharedGenericStruct_m472C3AE183E3C768741B28481DD1F012013B13A6_gshared (int64_t ___0_count, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_count), (&___1_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20918));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20919));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20920));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:153>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20921));
		uintptr_t L_0 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		int64_t L_2 = ___0_count;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20922));
		Il2CppFullySharedGenericStruct* L_4;
		L_4 = ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((Il2CppFullySharedGenericStruct*)L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20922));
		V_0 = L_4;
		goto IL_000f;
	}

IL_000f:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:154>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20923));
		Il2CppFullySharedGenericStruct* L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 116540
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Allocate_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_mCDBD1381CA662F016D4B6003D9BA89FE592EB6D8_gshared (int64_t ___0_count, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_count), (&___1_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20918));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20919));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20920));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:153>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20921));
		uintptr_t L_0 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		int64_t L_2 = ___0_count;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20922));
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_4;
		L_4 = Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3((MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*)L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20922));
		V_0 = L_4;
		goto IL_000f;
	}

IL_000f:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:154>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20923));
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 116543
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Free_TisIl2CppFullySharedGenericStruct_mA04A0C63F38A5DB9CAC0294B7DC90B9D35EACC14_gshared (Il2CppFullySharedGenericStruct* ___0_pointer, int64_t ___1_count, MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___2_label, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_pointer), (&___1_count), (&___2_label));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20939));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20940));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20941));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:177>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20942));
		Il2CppFullySharedGenericStruct* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20943));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:178>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20944));
		goto IL_0017;
	}

IL_000c:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:179>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20945));
		Il2CppFullySharedGenericStruct* L_3 = ___0_pointer;
		int64_t L_4 = ___1_count;
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 L_6 = ___2_label;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20946));
		Il2CppFullySharedGenericStruct* L_7;
		L_7 = ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int64_t, int64_t, MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20946));
	}

IL_0017:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:180>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20947));
		return;
	}
}
// Method Definition Index: 116542
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Free_TisIl2CppFullySharedGenericStruct_m6AA7597FA98F8020ABEFACEA0A1D00A384716627_gshared (Il2CppFullySharedGenericStruct* ___0_pointer, int64_t ___1_count, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_pointer), (&___1_count), (&___2_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20930));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20931));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20932));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:168>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20933));
		Il2CppFullySharedGenericStruct* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20934));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:169>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20935));
		goto IL_0017;
	}

IL_000c:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:170>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20936));
		Il2CppFullySharedGenericStruct* L_3 = ___0_pointer;
		int64_t L_4 = ___1_count;
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___2_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20937));
		Il2CppFullySharedGenericStruct* L_7;
		L_7 = ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20937));
	}

IL_0017:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:171>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20938));
		return;
	}
}
// Method Definition Index: 116538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* Array_Resize_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_mAB4D8147B48337A05C319FEA2C8645B0DF7CC711_gshared (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_oldPointer), (&___1_oldCount), (&___2_newCount), (&___3_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20904));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20905));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20906));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:140>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20907));
		HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m0593078BB9DC842E2FE2C88E802B606CDC972402(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		V_0 = (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4*)L_7;
		goto IL_0019;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20910));
		HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 116538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* Array_Resize_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m3411CCE45309DF743A524C406531532C4FC8CD72_gshared (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_oldPointer), (&___1_oldCount), (&___2_newCount), (&___3_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20904));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20905));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20906));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:140>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20907));
		HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m9D33FAB445EBAAEAB91BED2D158B3290B610D47E(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		V_0 = (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B*)L_7;
		goto IL_0019;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20910));
		HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 116538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* Array_Resize_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m87C047C9A0252B77CBF08B5DDEF1D493A14DD276_gshared (UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_oldPointer), (&___1_oldCount), (&___2_newCount), (&___3_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20904));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20905));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20906));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:140>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20907));
		UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m796E3C1D5F3A55A9EFFD1AA98C09AB788198C7A1(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		V_0 = (UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258*)L_7;
		goto IL_0019;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20910));
		UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 116538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* Array_Resize_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_mFF71C2DBFEFF6594159B5324E0EC19D878450E2E_gshared (UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_oldPointer), (&___1_oldCount), (&___2_newCount), (&___3_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20904));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20905));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20906));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:140>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20907));
		UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_m70E5F2C375F3B4039114929EBDF86DFCBF1EF99C(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		V_0 = (UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD*)L_7;
		goto IL_0019;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20910));
		UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 116538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* Array_Resize_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_mCFE5759D51678924C8C9E90B0A2ABA0AEF5AB6F6_gshared (UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_oldPointer), (&___1_oldCount), (&___2_newCount), (&___3_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20904));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20905));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20906));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:140>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20907));
		UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_m756E0E44BD2515C8949896575600531B61F5B16B(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		V_0 = (UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515*)L_7;
		goto IL_0019;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20910));
		UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 116538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* Array_Resize_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_mCA2193874571CACB1B8D75FBD095B8AD29C6403A_gshared (UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_oldPointer), (&___1_oldCount), (&___2_newCount), (&___3_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20904));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20905));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20906));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:140>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20907));
		UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m219DC3BB1EF8E9E18A66470555A9974E2C7D9EC6(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		V_0 = (UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6*)L_7;
		goto IL_0019;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20910));
		UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 116538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0_gshared (uint8_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	uint8_t* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_oldPointer), (&___1_oldCount), (&___2_newCount), (&___3_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20904));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20905));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20906));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:140>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20907));
		uint8_t* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(uint8_t);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		V_0 = (uint8_t*)L_7;
		goto IL_0019;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20910));
		uint8_t* L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 116538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE512F558B8B16B19497E4DF8445518F289534BE_gshared (int32_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_oldPointer), (&___1_oldCount), (&___2_newCount), (&___3_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20904));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20905));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20906));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:140>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20907));
		int32_t* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(int32_t);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		V_0 = (int32_t*)L_7;
		goto IL_0019;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20910));
		int32_t* L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 116538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Array_Resize_TisIntPtr_t_mE1CA5D0262B2B8D4C9453D51DF34A94A0CF3556F_gshared (intptr_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	intptr_t* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_oldPointer), (&___1_oldCount), (&___2_newCount), (&___3_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20904));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20905));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20906));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:140>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20907));
		intptr_t* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(intptr_t);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisIntPtr_t_mB17C6C168D8CA088879EDD0D5B9923F70F5269B8(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		V_0 = (intptr_t*)L_7;
		goto IL_0019;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20910));
		intptr_t* L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 116538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81_gshared (uint64_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	uint64_t* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_oldPointer), (&___1_oldCount), (&___2_newCount), (&___3_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20904));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20905));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20906));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:140>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20907));
		uint64_t* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(uint64_t);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		V_0 = (uint64_t*)L_7;
		goto IL_0019;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20910));
		uint64_t* L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 116538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* Array_Resize_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m61718F1D9CCF897E5BE50BB484C8D816C988DF6F_gshared (UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_oldPointer), (&___1_oldCount), (&___2_newCount), (&___3_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20904));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20905));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20906));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:140>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20907));
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m56B5B812224539B0C633BABE891ADDE1973580F6(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		V_0 = (UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4*)L_7;
		goto IL_0019;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20910));
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 116538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* Array_Resize_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_m1576AD06CC03F6E9D06FC13A0F280519B1666726_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_oldPointer), (&___1_oldCount), (&___2_newCount), (&___3_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20904));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20905));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20906));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:140>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20907));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mC1EBD5161294EF95B8AC378DDF616869D287DC36(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		V_0 = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_7;
		goto IL_0019;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20910));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 116538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* Array_Resize_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mF6857EF793C9156A611EAA1E63A02352EFE46784_gshared (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_oldPointer), (&___1_oldCount), (&___2_newCount), (&___3_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20904));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20905));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20906));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:140>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20907));
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_m3DF404928C7038CCD5C05BBBA41C4B2FD35A4253(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		V_0 = (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)L_7;
		goto IL_0019;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20910));
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 116538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* Array_Resize_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m1082D56F32F50ECA3CFFDB87DB3512F2CE7544F4_gshared (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_oldPointer), (&___1_oldCount), (&___2_newCount), (&___3_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20904));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20905));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20906));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:140>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20907));
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_mD84C2AFFB4ED036B913CEAD2FBF8A60E9C3A017D(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		V_0 = (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*)L_7;
		goto IL_0019;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20910));
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 116538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* Array_Resize_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m520F16927035702AB0DF9C30EE88686BDC346F21_gshared (UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_oldPointer), (&___1_oldCount), (&___2_newCount), (&___3_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20904));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20905));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20906));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:140>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20907));
		UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m5892DF1B875736B0E3612716E560A4E4AD5F6591(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		V_0 = (UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67*)L_7;
		goto IL_0019;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20910));
		UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 116539
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Resize_TisIl2CppFullySharedGenericStruct_mDAEE7836D30B1E69218DA92D10DEFB59679D311A_gshared (Il2CppFullySharedGenericStruct* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___3_label, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t463F46A118A7AA284DE9A95CCBE473111EF5DF8B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	ProfilerMethodSentry _profilerMethodSentry(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_oldPointer), (&___1_oldCount), (&___2_newCount), (&___3_label));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20911));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20912));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20913));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:146>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20914));
		Il2CppFullySharedGenericStruct* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 L_3 = ___3_label;
		uint32_t L_4 = SizeOf_T_t463F46A118A7AA284DE9A95CCBE473111EF5DF8B;
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20915));
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20915));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20916));
		void* L_7;
		L_7 = Array_Resize_mA60C117B1C01C122EB2D509DD4EADE4FB44C2150((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20916));
		V_0 = (Il2CppFullySharedGenericStruct*)L_7;
		goto IL_0019;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:147>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20917));
		Il2CppFullySharedGenericStruct* L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 116538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD_gshared (Il2CppFullySharedGenericStruct* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t4439E68F64AF98A1F1E70993ACB3E0626E7A7954 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	ProfilerMethodSentry _profilerMethodSentry(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_oldPointer), (&___1_oldCount), (&___2_newCount), (&___3_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20904));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20905));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20906));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:140>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20907));
		Il2CppFullySharedGenericStruct* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = SizeOf_T_t4439E68F64AF98A1F1E70993ACB3E0626E7A7954;
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		V_0 = (Il2CppFullySharedGenericStruct*)L_7;
		goto IL_0019;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20910));
		Il2CppFullySharedGenericStruct* L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 116538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3_gshared (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_oldPointer), (&___1_oldCount), (&___2_newCount), (&___3_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20904));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20905));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20906));
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:140>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20907));
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		V_0 = (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*)L_7;
		goto IL_0019;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@a43cabe808ca/Unity.Collections/Memory.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20910));
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 162171
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Element_TryGetData_TisIl2CppFullySharedGenericStruct_mFDED972E2C230399C1C03BAF409EE324307371E6_gshared (Element_t179C2EB2265F9878720AC84FD76D0A65EFD7F61E* __this, Il2CppFullySharedGenericStruct* ___0_data, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Element_t179C2EB2265F9878720AC84FD76D0A65EFD7F61E_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tA88E8842F5C04E6D9B36F42EB8BF6EBC7CDDBE84 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_tA88E8842F5C04E6D9B36F42EB8BF6EBC7CDDBE84);
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_data));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 1935));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 1936));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Audio/Public/ScriptableProcessors/ScriptBindings/ScriptableProcessor.bindings.cs:392>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 1937));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 1938));
		int64_t L_0;
		L_0 = ((  int64_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 1938));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Audio/Public/ScriptableProcessors/ScriptBindings/ScriptableProcessor.bindings.cs:394>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 1939));
		int64_t L_1 = __this->___TypeHash;
		if ((!(((uint64_t)L_0) == ((uint64_t)L_1))))
		{
			goto IL_0020;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Audio/Public/ScriptableProcessors/ScriptBindings/ScriptableProcessor.bindings.cs:396>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 1940));
		Il2CppFullySharedGenericStruct* L_2 = ___0_data;
		void* L_3 = __this->___m_Data;
		il2cpp_codegen_memcpy(L_4, L_3, SizeOf_T_tA88E8842F5C04E6D9B36F42EB8BF6EBC7CDDBE84);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_2, L_4, SizeOf_T_tA88E8842F5C04E6D9B36F42EB8BF6EBC7CDDBE84);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericStruct*)L_2, (void*)L_4);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Audio/Public/ScriptableProcessors/ScriptBindings/ScriptableProcessor.bindings.cs:397>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 1941));
		return (bool)1;
	}

IL_0020:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Audio/Public/ScriptableProcessors/ScriptBindings/ScriptableProcessor.bindings.cs:400>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 1942));
		Il2CppFullySharedGenericStruct* L_5 = ___0_data;
		il2cpp_codegen_initobj(L_5, SizeOf_T_tA88E8842F5C04E6D9B36F42EB8BF6EBC7CDDBE84);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Audio/Public/ScriptableProcessors/ScriptBindings/ScriptableProcessor.bindings.cs:401>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 1943));
		return (bool)0;
	}
}
// Method Definition Index: 31300
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m28FA73F1F5BC07ACE456EF93F6E6B7BD0938F042_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_from));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3751));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3752));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:94>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3753));
		Il2CppSharedGenericObject** L_0 = ___0_from;
		return (bool*)(L_0);
	}
}
// Method Definition Index: 31300
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m68A03EAC3EF1E3D87716659FE2B94A318E2CC737_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_from));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3751));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3752));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:94>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3753));
		Il2CppSharedGenericObject** L_0 = ___0_from;
		return (uint8_t*)(L_0);
	}
}
// Method Definition Index: 31300
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m81A546574CE59EE2FCC473F6C9A4C54058C951A0_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_from));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3751));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3752));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:94>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3753));
		Il2CppSharedGenericObject** L_0 = ___0_from;
		return (Il2CppChar*)(L_0);
	}
}
// Method Definition Index: 31300
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mEF488EFA39A9905B46391683B7C5485D386C3174_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_from));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3751));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3752));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:94>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3753));
		Il2CppSharedGenericObject** L_0 = ___0_from;
		return (double*)(L_0);
	}
}
// Method Definition Index: 31300
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m538759A01D54657B61C90855D5152866766EBC6C_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_from));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3751));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3752));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:94>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3753));
		Il2CppSharedGenericObject** L_0 = ___0_from;
		return (int16_t*)(L_0);
	}
}
// Method Definition Index: 31300
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1D2EE7A9133800F11380FA5913822DCF99A9778F_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_from));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3751));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3752));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:94>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3753));
		Il2CppSharedGenericObject** L_0 = ___0_from;
		return (int32_t*)(L_0);
	}
}
// Method Definition Index: 31300
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC8E26CF8B62C6C774EC7E13806715DB69E37D16A_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_from));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3751));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3752));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:94>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3753));
		Il2CppSharedGenericObject** L_0 = ___0_from;
		return (int64_t*)(L_0);
	}
}
// Method Definition Index: 31300
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m41488C4DFA5B8D5051F3F8733A9BBCFCBDC2F626_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_from));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3751));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3752));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:94>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3753));
		Il2CppSharedGenericObject** L_0 = ___0_from;
		return (int8_t*)(L_0);
	}
}
// Method Definition Index: 31300
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m898B6F75C97955142F1E0A159F1288EDD93C754F_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_from));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3751));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3752));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:94>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3753));
		Il2CppSharedGenericObject** L_0 = ___0_from;
		return (float*)(L_0);
	}
}
// Method Definition Index: 31300
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject** UnsafeUtility_As_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m7E01BE5B3130A632C43D1F86A8781C30A93D3DCF_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_from));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3751));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3752));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:94>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3753));
		Il2CppSharedGenericObject** L_0 = ___0_from;
		return (Il2CppSharedGenericObject**)(L_0);
	}
}
// Method Definition Index: 31300
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m434C034D74938711222B7470BF18EA08297229DA_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_from));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3751));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3752));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:94>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3753));
		Il2CppSharedGenericObject** L_0 = ___0_from;
		return (uint16_t*)(L_0);
	}
}
// Method Definition Index: 31300
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9CA0DF2BED961B37E81FA80C847F8479ED4CCA34_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_from));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3751));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3752));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:94>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3753));
		Il2CppSharedGenericObject** L_0 = ___0_from;
		return (uint32_t*)(L_0);
	}
}
// Method Definition Index: 31300
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t* UnsafeUtility_As_TisIl2CppSharedGenericObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mBB92BB87798B838422C987018A335ED57D57C8C3_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_from));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3751));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3752));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:94>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3753));
		Il2CppSharedGenericObject** L_0 = ___0_from;
		return (uint64_t*)(L_0);
	}
}
// Method Definition Index: 31294
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source), (&___1_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3733));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3734));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:49>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3735));
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int32_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
// Method Definition Index: 31290
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9A1240B1BCA4029B93CBDCE0196491FEC192E38_gshared_inline (void* ___0_ptr, int32_t* ___1_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_output));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3717));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3718));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:19>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3719));
		void* L_0 = ___0_ptr;
		int32_t* L_1 = ___1_output;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3720));
		UnsafeUtility_InternalCopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D446ED46691A93FCA713FB662C464A32EC57539(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3720));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:20>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3721));
		return;
	}
}
// Method Definition Index: 20928
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CustomStyleProperty_1_get_name_m50215025D84B5D090C2C03D30BDB064B9874EEED_gshared_inline (CustomStyleProperty_1_tB73A4836B6E305C3DB7FE82821F7E521F6048231* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 72237));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 72238));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Style/CustomStyle.cs:16>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 72239));
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 12308
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_0 = ((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 12308
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_0 = ((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 12308
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_0 = ((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 12308
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_0 = ((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_4 = V_0;
		return L_4;
	}
}
