#include "pch-cpp.hpp"





template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Dictionary_2_t29F21243F1646FCAD86C6C5C2DB161713F7C3E53;
struct Dictionary_2_tBDFE58AA02239A2E8AE42B477C6B65E3C9A05D5C;
struct EvaluateModelScore_t71DE5C267622406D6E5D893CBB65AE8829DDB0FF;
struct EvaluateModelScore_t3187BF17905BBD3CBA0FEE0B74AE4DFA61F40FC6;
struct GenerateModel_tFD2092AA49E2EF13B97F8E177ABE8E6CFFFCEE0A;
struct GenerateModel_t6A09AD526D52668F52472513169F29A30DFE979D;
struct IEnumerator_1_t29A8CA7355FCD9DC17EBB7F096703BD8AD63C49F;
struct IEnumerator_1_t30023716BAD8A1096DAEB9214E766D9B4EFEBAC3;
struct IEnumerator_1_tF08BC34B9F6847658C70264BA39BB29268763935;
struct IEnumerator_1_t881C21E06381D7D0EC90D1E682EA04BA25DA5568;
struct IEnumerator_1_tFCF5861BCE7790E8247892E6658C0C4803690160;
struct IEnumerator_1_t737E5D96E5E3657734509E507812DBA5E7EDD547;
struct IEnumerator_1_tE07B98951C528DCEC133D87CFB6966101285E71E;
struct IEnumerator_1_t19ED78A79E477DE27E49E0BB3753CE47AD5ABA2C;
struct IEnumerator_1_tB41B292FAFD525FC5C54D7E469F0BA1A193CA8B1;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_tF74C952F97E24A4AFD21162637D82942513CB35B;
struct IEnumerator_1_t2AE506746DD40D1B5F17C877E00D1A2DC8E3EC13;
struct IEnumerator_1_t937D571676435B219B0539D6BBE29FBEC8825740;
struct IEnumerator_1_t799F7647CE8230B0558DEEB1D972247C04382C50;
struct IEnumerator_1_tB05D1D80C1CAFA1C81487CA4C2733C60B9B5BBB5;
struct IEnumerator_1_tB2D027713BE0E2228C985B94526E1BD3DED2F9F6;
struct IEnumerator_1_t72676C716CC8C5B75D00E9CAF066E46698697A14;
struct IEnumerator_1_t86FDA12A24C3A4FF8AB720E76E016B4B022ADCA5;
struct Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9;
struct Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E;
struct Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75;
struct Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1;
struct Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43;
struct Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850;
struct Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF;
struct Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D;
struct Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF;
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41;
struct Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7;
struct Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68;
struct Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB;
struct Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1;
struct Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F;
struct Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F;
struct Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB;
struct Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D;
struct RandomSampleConsensus_1_t77F5565C1F6960BBFF36A308486B4963AE8F37B4;
struct RandomSampleConsensus_1_t681F929E50E8548403FE2EBDE01CBB5D8BB1294D;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC;
struct LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E;
struct OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69;
struct OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F;
struct OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297;
struct EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8;
struct MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634;
struct CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9;
struct FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF;
struct FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D;
struct MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6;
struct UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4;
struct Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4;
struct __Il2CppFullySharedGenericTypeU5BU2CU5D_tFF243A155E8F21F3F2753D6C8C5DBFD843EEB296;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct Guid_t;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MeshGenerationCallback_t9735BAFB971D361BCB27AB541F8205A7C0FFEF50;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD2D9DC546B80A05000B107C8E09FAA4BED3B2144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_AsRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF01FDF0EACCFED286E93933B693A2BE11A6A8946_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC;
struct LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E;
struct OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69;
struct OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F;
struct OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297;
struct EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8;
struct MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634;
struct CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9;
struct FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF;
struct FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D;
struct MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6;
struct UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4;
struct Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4;
struct __Il2CppFullySharedGenericTypeU5BU2CU5D_tFF243A155E8F21F3F2753D6C8C5DBFD843EEB296;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EmptyArray_1_t0D07744D06CBE1D5EFB0F376FCD9DE664680DB24  : public RuntimeObject
{
};
struct EmptyArray_1_tBACC9B9E153A00D66D4E01F6D63254779A5E10BF  : public RuntimeObject
{
};
struct EmptyArray_1_t03904AAE4322A830A46A5C2B7C43D6A40CFE2B07  : public RuntimeObject
{
};
struct EmptyArray_1_t167C7DEB88774FD3FFFEA44F4C06A272B8B915A1  : public RuntimeObject
{
};
struct EmptyArray_1_tBD6329B52138BD56AB7289C5630507A8936151B7  : public RuntimeObject
{
};
struct EmptyArray_1_t77BFDB090CFC6AE661834F0BD4ED43833F4F079D  : public RuntimeObject
{
};
struct EmptyArray_1_tA1B9390A54D6283BFF40643DC2A697126A16E63B  : public RuntimeObject
{
};
struct EmptyArray_1_tBA25FD8C30972238625883415BB2484EBA2434AF  : public RuntimeObject
{
};
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5  : public RuntimeObject
{
};
struct EmptyArray_1_tB9CE11D20D32521AB83609C42537BFB49B249794  : public RuntimeObject
{
};
struct EmptyArray_1_t77401F488985814E4B89684C1CCE07D59127CD6C  : public RuntimeObject
{
};
struct EmptyArray_1_t4CD1B474032A44080F1CCCAB78C8469C4C5EA9B2  : public RuntimeObject
{
};
struct EmptyArray_1_t7C7E840E7790E897ABDA15ED3B9C6BB1AD74E6AF  : public RuntimeObject
{
};
struct EmptyArray_1_t87B09931F4CAD60AFFE0B867CB21AEB94B61A21D  : public RuntimeObject
{
};
struct EmptyArray_1_tA318588C5DED77377D0A402E2D318FA13329CEF0  : public RuntimeObject
{
};
struct EmptyArray_1_t025B7DCB8E2EBFB42E79BFFFACAAB7AC43B10C38  : public RuntimeObject
{
};
struct EmptyArray_1_t4F92E580A823F3B65AED0BDEDBD334D85364071E  : public RuntimeObject
{
};
struct Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9  : public RuntimeObject
{
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E  : public RuntimeObject
{
	LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75  : public RuntimeObject
{
	OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1  : public RuntimeObject
{
	OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43  : public RuntimeObject
{
	OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850  : public RuntimeObject
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF  : public RuntimeObject
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D  : public RuntimeObject
{
	XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7  : public RuntimeObject
{
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68  : public RuntimeObject
{
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB  : public RuntimeObject
{
	MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1  : public RuntimeObject
{
	CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F  : public RuntimeObject
{
	FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F  : public RuntimeObject
{
	FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB  : public RuntimeObject
{
	MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D  : public RuntimeObject
{
	UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct RandomSampleConsensus_1_t77F5565C1F6960BBFF36A308486B4963AE8F37B4  : public RuntimeObject
{
	Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4* ____modelSet;
	int32_t ____exclusionZone;
	int32_t ____maxDataPoints;
};
struct RandomSampleConsensus_1_t681F929E50E8548403FE2EBDE01CBB5D8BB1294D  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU2CU5D_tFF243A155E8F21F3F2753D6C8C5DBFD843EEB296* ____modelSet;
	int32_t ____exclusionZone;
	int32_t ____maxDataPoints;
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
struct Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891 
{
	Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* ____q;
	int32_t ____version;
	int32_t ____index;
	uint32_t ____currentElement;
};
struct Enumerator_tF867D11BA433587AEF42D1129E057E0194CE8005 
{
	Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* ____q;
	int32_t ____version;
	int32_t ____index;
	uint64_t ____currentElement;
};
struct Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1 
{
	Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* ____q;
	int32_t ____version;
	int32_t ____index;
	Il2CppSharedGenericObject* ____currentElement;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C;
struct Enumerator_t66CCD173CBD8BCAA92159D6D3D274883396BAC63 
{
	Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* ____q;
	int32_t ____version;
	int32_t ____index;
	int32_t ____currentElement;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
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
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F 
{
	uint64_t ___U3CHandleU3Ek__BackingField;
};
struct OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D 
{
	uint64_t ___U3CHandleU3Ek__BackingField;
};
struct OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F 
{
	uint64_t ____handle;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
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
struct XrBool32_t9043F0492F98261850B33DEE6EA18B02D5EFA94E 
{
	uint32_t ____value;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshaled_pinvoke
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshaled_com
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel;
};
struct CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 
{
	MeshGenerationCallback_t9735BAFB971D361BCB27AB541F8205A7C0FFEF50* ___callback;
	RuntimeObject* ___userData;
};
struct CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_marshaled_pinvoke
{
	Il2CppMethodPointer ___callback;
	Il2CppIUnknown* ___userData;
};
struct CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_marshaled_com
{
	Il2CppMethodPointer ___callback;
	Il2CppIUnknown* ___userData;
};
struct Metrics_t865BF0741490865117A79705F58784742D6F02B8 
{
	int32_t ___TotalRoomCount;
	int32_t ___CandidateRoomCount;
	int32_t ___Loaded;
	int32_t ___Failed;
	int32_t ___SkippedUserNotInRoom;
	int32_t ___SkippedAlreadyInstantiated;
};
struct U3CObjectPropertiesU3Ee__FixedBuffer_tF8D091B9A6C8FC4CA43F6B0C4A2D21706AFF2D25 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CObjectPropertiesU3Ee__FixedBuffer_tF8D091B9A6C8FC4CA43F6B0C4A2D21706AFF2D25__padding[4096];
	};
};
struct U3CParamDescriptionU3Ee__FixedBuffer_t0D73149566802CC6B2C4A8BBB635B7AB27E8F38B 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CParamDescriptionU3Ee__FixedBuffer_t0D73149566802CC6B2C4A8BBB635B7AB27E8F38B__padding[1024];
	};
};
struct U3CParamNameU3Ee__FixedBuffer_t9965D637A61F6C5FC91DA72995E074A8AB959D2B 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CParamNameU3Ee__FixedBuffer_t9965D637A61F6C5FC91DA72995E074A8AB959D2B__padding[64];
	};
};
struct Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B 
{
	Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* ____q;
	int32_t ____version;
	int32_t ____index;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ____currentElement;
};
struct Enumerator_tC38C7EEAC5B53077CBA549B2E0EDA97FFD544BF1 
{
	Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* ____q;
	int32_t ____version;
	int32_t ____index;
	OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F ____currentElement;
};
struct Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560 
{
	Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* ____q;
	int32_t ____version;
	int32_t ____index;
	OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F ____currentElement;
};
struct Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 
{
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ____q;
	int32_t ____version;
	int32_t ____index;
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ____currentElement;
};
struct Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 
{
	Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* ____q;
	int32_t ____version;
	int32_t ____index;
	CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 ____currentElement;
};
struct Enumerator_t1693CCB05921830A8C445721C4EF5E22CD16361C 
{
	Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* ____q;
	int32_t ____version;
	int32_t ____index;
	Metrics_t865BF0741490865117A79705F58784742D6F02B8 ____currentElement;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
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
struct OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 
{
	uint64_t ___U3CHandleU3Ek__BackingField;
	Guid_t ___U3CUuidU3Ek__BackingField;
};
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
};
struct SfxId_tAF4D8776D0A503470967D0A0AA182C741DDEE74E 
{
	int32_t ___value__;
};
struct XrAgenticExternalToolParameterTypeMETAX1_t23301BA6647EA09607FE2A7B256585A23AF3BEC4 
{
	int32_t ___value__;
};
struct XrSpaceComponentTypeFB_t9AEBF18767AA81DB1F39A7D13FAE0E46B4E381EB 
{
	int32_t ___value__;
};
struct XrStructureType_t99AEF77046555042E617DA08DA96591B89746BB6 
{
	int32_t ___value__;
};
struct RotationType_tD58F7B6EB01892B0375178D9775F6185D4E2DC0F 
{
	int32_t ___value__;
};
struct TranslationType_t97D4BABD1EDD1C5D0030103150399BD6255EF5CB 
{
	int32_t ___value__;
};
struct SpaceComponentType_tCD4A67FF4EBD7D9997F959066452AFAD5255910E 
{
	int32_t ___value__;
};
struct SpaceDiscoveryFilterType_t50E46DE8466114FD8B0B4A8BE5D1E422E823F3EE 
{
	int32_t ___value__;
};
struct UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 
{
	OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D ____space;
	Guid_t ___U3CUuidU3Ek__BackingField;
};
struct ParallelSortValueType_t6D900B4D4AFD1A3DA76F4506E1C06A442F6388E4 
{
	int32_t ___value__;
};
struct Enumerator_tA37D160544C06A884B929716C584D345827D7F82 
{
	Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* ____q;
	int32_t ____version;
	int32_t ____index;
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ____currentElement;
};
struct Enumerator_t48FFA0B7AB0F72C79D913567E39C4E34EF6D5F72 
{
	Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* ____q;
	int32_t ____version;
	int32_t ____index;
	UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ____currentElement;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
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
struct LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 
{
	int32_t ___U3CIdentifierU3Ek__BackingField;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CPoseU3Ek__BackingField;
	int32_t ___U3CTranslationU3Ek__BackingField;
	int32_t ___U3CRotationU3Ek__BackingField;
	uint64_t ___U3CEventIdU3Ek__BackingField;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 
{
	int32_t ___Type;
	void* ___Next;
	U3CParamNameU3Ee__FixedBuffer_t9965D637A61F6C5FC91DA72995E074A8AB959D2B ___ParamName;
	U3CParamDescriptionU3Ee__FixedBuffer_t0D73149566802CC6B2C4A8BBB635B7AB27E8F38B ___ParamDescription;
	int32_t ___ParamType;
	XrBool32_t9043F0492F98261850B33DEE6EA18B02D5EFA94E ___IsRequired;
	int32_t ___ArrayItemType;
	U3CObjectPropertiesU3Ee__FixedBuffer_tF8D091B9A6C8FC4CA43F6B0C4A2D21706AFF2D25 ___ObjectProperties;
};
struct XrSpaceFilterComponentMETA_tA0967956A52E93E0BFF56FF9AA50622EDEA7142F 
{
	int32_t ___Type;
	void* ___Next;
	int32_t ___ComponentType;
};
struct XrSpaceFilterUuidMETA_t8F5BF755EB45D64B811C28BB4FB119782BD29773 
{
	int32_t ___Type;
	void* ___Next;
	uint32_t ___UuidCount;
	Guid_t* ___Uuids;
};
struct Message_t439BAAD871295B67F7429E4BF40147801DD52B57 
{
	String_t* ___text;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	float ___seconds;
	int32_t ___sfx;
};
struct Message_t439BAAD871295B67F7429E4BF40147801DD52B57_marshaled_pinvoke
{
	char* ___text;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	float ___seconds;
	int32_t ___sfx;
};
struct Message_t439BAAD871295B67F7429E4BF40147801DD52B57_marshaled_com
{
	Il2CppChar* ___text;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	float ___seconds;
	int32_t ___sfx;
};
struct SpaceDiscoveryFilterInfoComponents_tFE3C27C1DF3BCB9C439ABD02BB4F7ED3D95AF421 
{
	int32_t ___Type;
	int32_t ___Component;
};
struct SpaceDiscoveryFilterInfoIds_t34A4026061DCD863BE49C3F98454B0069E802D8A 
{
	int32_t ___Type;
	int32_t ___NumIds;
	Guid_t* ___Ids;
};
struct Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06 
{
	Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* ____q;
	int32_t ____version;
	int32_t ____index;
	LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 ____currentElement;
};
struct Enumerator_t953926894837E4EE2AE3D4FD43D35C3EAD6E7D5E 
{
	Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* ____q;
	int32_t ____version;
	int32_t ____index;
	XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 ____currentElement;
};
struct Enumerator_t5F9D134918C937C57A401D460B77F23B58753A66 
{
	Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* ____q;
	int32_t ____version;
	int32_t ____index;
	Message_t439BAAD871295B67F7429E4BF40147801DD52B57 ____currentElement;
};
struct EvaluateModelScore_t71DE5C267622406D6E5D893CBB65AE8829DDB0FF  : public MulticastDelegate_t
{
};
struct EvaluateModelScore_t3187BF17905BBD3CBA0FEE0B74AE4DFA61F40FC6  : public MulticastDelegate_t
{
};
struct GenerateModel_tFD2092AA49E2EF13B97F8E177ABE8E6CFFFCEE0A  : public MulticastDelegate_t
{
};
struct GenerateModel_t6A09AD526D52668F52472513169F29A30DFE979D  : public MulticastDelegate_t
{
};
struct RadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530 
{
	int32_t ___radix;
	int32_t ___jobsCount;
	int32_t ___signBitRadixIndex;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___array;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___counter;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___indicesSum;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___buckets;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___indices;
};
struct RadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16 
{
	int32_t ___radix;
	int32_t ___jobsCount;
	int32_t ___signBitRadixIndex;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___array;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___counter;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___indicesSum;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___buckets;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___indices;
};
struct RadixSortBatchPrefixSumJob_1_t38091553B87D103286CED2992CA2392E2C1DF80C 
{
	int32_t ___radix;
	int32_t ___jobsCount;
	int32_t ___signBitRadixIndex;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___array;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___counter;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___indicesSum;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___buckets;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___indices;
};
struct RadixSortBucketCountJob_1_tC9AD33E5E839CE12B0A1C15F622220EEC637D787 
{
	int32_t ___radix;
	int32_t ___batchSize;
	int32_t ___valueType;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___array;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___buckets;
};
struct RadixSortBucketCountJob_1_tEAF81C7A5326AA523C221928ACEF94EE5E373D5F 
{
	int32_t ___radix;
	int32_t ___batchSize;
	int32_t ___valueType;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___array;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___buckets;
};
struct RadixSortBucketCountJob_1_t8CE90196DB677E4A0C7AC9264121BF2D87493A93 
{
	int32_t ___radix;
	int32_t ___batchSize;
	int32_t ___valueType;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___array;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___buckets;
};
struct RadixSortBucketSortJob_1_t4FAA58B1A9BB055721412769BB8AA45AF098845B 
{
	int32_t ___radix;
	int32_t ___batchSize;
	int32_t ___valueType;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___array;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___indices;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___arraySorted;
};
struct RadixSortBucketSortJob_1_t68C34425FDC909DF8A4C73E7BD80203D7EE84DA9 
{
	int32_t ___radix;
	int32_t ___batchSize;
	int32_t ___valueType;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___array;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___indices;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___arraySorted;
};
struct RadixSortBucketSortJob_1_tBA53182D91917571DC0AE06FF99EF355D4E2DB5D 
{
	int32_t ___radix;
	int32_t ___batchSize;
	int32_t ___valueType;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___array;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___indices;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___arraySorted;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			XrSpaceFilterUuidMETA_t8F5BF755EB45D64B811C28BB4FB119782BD29773 ___UuidFilter;
		};
		#pragma pack(pop, tp)
		struct
		{
			XrSpaceFilterUuidMETA_t8F5BF755EB45D64B811C28BB4FB119782BD29773 ___UuidFilter_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			XrSpaceFilterComponentMETA_tA0967956A52E93E0BFF56FF9AA50622EDEA7142F ___ComponentFilter;
		};
		#pragma pack(pop, tp)
		struct
		{
			XrSpaceFilterComponentMETA_tA0967956A52E93E0BFF56FF9AA50622EDEA7142F ___ComponentFilter_forAlignmentOnly;
		};
	};
};
struct FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			SpaceDiscoveryFilterInfoComponents_tFE3C27C1DF3BCB9C439ABD02BB4F7ED3D95AF421 ___ComponentFilter;
		};
		#pragma pack(pop, tp)
		struct
		{
			SpaceDiscoveryFilterInfoComponents_tFE3C27C1DF3BCB9C439ABD02BB4F7ED3D95AF421 ___ComponentFilter_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			SpaceDiscoveryFilterInfoIds_t34A4026061DCD863BE49C3F98454B0069E802D8A ___IdFilter;
		};
		#pragma pack(pop, tp)
		struct
		{
			SpaceDiscoveryFilterInfoIds_t34A4026061DCD863BE49C3F98454B0069E802D8A ___IdFilter_forAlignmentOnly;
		};
	};
};
struct Enumerator_t5B8395897EB8C9EC372988A559E1E3B7278A1F85 
{
	Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* ____q;
	int32_t ____version;
	int32_t ____index;
	FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D ____currentElement;
};
struct Enumerator_t2D6982B5591A20B910A6D2ABC90C0317B2BD131F 
{
	Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* ____q;
	int32_t ____version;
	int32_t ____index;
	FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ____currentElement;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EmptyArray_1_t0D07744D06CBE1D5EFB0F376FCD9DE664680DB24_StaticFields
{
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* ___Value;
};
struct EmptyArray_1_tBACC9B9E153A00D66D4E01F6D63254779A5E10BF_StaticFields
{
	LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* ___Value;
};
struct EmptyArray_1_t03904AAE4322A830A46A5C2B7C43D6A40CFE2B07_StaticFields
{
	OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* ___Value;
};
struct EmptyArray_1_t167C7DEB88774FD3FFFEA44F4C06A272B8B915A1_StaticFields
{
	OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* ___Value;
};
struct EmptyArray_1_tBD6329B52138BD56AB7289C5630507A8936151B7_StaticFields
{
	OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* ___Value;
};
struct EmptyArray_1_t77BFDB090CFC6AE661834F0BD4ED43833F4F079D_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___Value;
};
struct EmptyArray_1_tA1B9390A54D6283BFF40643DC2A697126A16E63B_StaticFields
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___Value;
};
struct EmptyArray_1_tBA25FD8C30972238625883415BB2484EBA2434AF_StaticFields
{
	XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* ___Value;
};
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___Value;
};
struct EmptyArray_1_tB9CE11D20D32521AB83609C42537BFB49B249794_StaticFields
{
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___Value;
};
struct EmptyArray_1_t77401F488985814E4B89684C1CCE07D59127CD6C_StaticFields
{
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* ___Value;
};
struct EmptyArray_1_t4CD1B474032A44080F1CCCAB78C8469C4C5EA9B2_StaticFields
{
	MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* ___Value;
};
struct EmptyArray_1_t7C7E840E7790E897ABDA15ED3B9C6BB1AD74E6AF_StaticFields
{
	CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* ___Value;
};
struct EmptyArray_1_t87B09931F4CAD60AFFE0B867CB21AEB94B61A21D_StaticFields
{
	FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* ___Value;
};
struct EmptyArray_1_tA318588C5DED77377D0A402E2D318FA13329CEF0_StaticFields
{
	FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* ___Value;
};
struct EmptyArray_1_t025B7DCB8E2EBFB42E79BFFFACAAB7AC43B10C38_StaticFields
{
	MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* ___Value;
};
struct EmptyArray_1_t4F92E580A823F3B65AED0BDEDBD334D85364071E_StaticFields
{
	UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* ___Value;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F_StaticFields
{
	OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F ___Null;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_StaticFields
{
	Dictionary_2_tBDFE58AA02239A2E8AE42B477C6B65E3C9A05D5C* ____deferredTasks;
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ___Null;
	Dictionary_2_t29F21243F1646FCAD86C6C5C2DB161713F7C3E53* ____typeMap;
};
struct LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_StaticFields
{
	uint64_t ____nextEventId;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC  : public RuntimeArray
{
	ALIGN_FIELD (8) JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 m_Items[1];

	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 value)
	{
		m_Items[index] = value;
	}
};
struct LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E  : public RuntimeArray
{
	ALIGN_FIELD (8) LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 m_Items[1];

	inline LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 value)
	{
		m_Items[index] = value;
	}
};
struct OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 m_Items[1];

	inline OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 value)
	{
		m_Items[index] = value;
	}
};
struct OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F m_Items[1];

	inline OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F value)
	{
		m_Items[index] = value;
	}
};
struct OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F m_Items[1];

	inline OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F value)
	{
		m_Items[index] = value;
	}
};
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
struct XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143  : public RuntimeArray
{
	ALIGN_FIELD (8) XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 m_Items[1];

	inline XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 value)
	{
		m_Items[index] = value;
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8  : public RuntimeArray
{
	ALIGN_FIELD (8) EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 m_Items[1];

	inline EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Event), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Panel), (void*)NULL);
		#endif
	}
	inline EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Event), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Panel), (void*)NULL);
		#endif
	}
};
struct MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634  : public RuntimeArray
{
	ALIGN_FIELD (8) Message_t439BAAD871295B67F7429E4BF40147801DD52B57 m_Items[1];

	inline Message_t439BAAD871295B67F7429E4BF40147801DD52B57 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Message_t439BAAD871295B67F7429E4BF40147801DD52B57* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Message_t439BAAD871295B67F7429E4BF40147801DD52B57 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___text), (void*)NULL);
	}
	inline Message_t439BAAD871295B67F7429E4BF40147801DD52B57 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Message_t439BAAD871295B67F7429E4BF40147801DD52B57* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Message_t439BAAD871295B67F7429E4BF40147801DD52B57 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___text), (void*)NULL);
	}
};
struct CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9  : public RuntimeArray
{
	ALIGN_FIELD (8) CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 m_Items[1];

	inline CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___callback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___userData), (void*)NULL);
		#endif
	}
	inline CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___callback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___userData), (void*)NULL);
		#endif
	}
};
struct FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF  : public RuntimeArray
{
	ALIGN_FIELD (8) FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D m_Items[1];

	inline FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D value)
	{
		m_Items[index] = value;
	}
};
struct FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D  : public RuntimeArray
{
	ALIGN_FIELD (8) FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 m_Items[1];

	inline FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 value)
	{
		m_Items[index] = value;
	}
};
struct MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6  : public RuntimeArray
{
	ALIGN_FIELD (8) Metrics_t865BF0741490865117A79705F58784742D6F02B8 m_Items[1];

	inline Metrics_t865BF0741490865117A79705F58784742D6F02B8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Metrics_t865BF0741490865117A79705F58784742D6F02B8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Metrics_t865BF0741490865117A79705F58784742D6F02B8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Metrics_t865BF0741490865117A79705F58784742D6F02B8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Metrics_t865BF0741490865117A79705F58784742D6F02B8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Metrics_t865BF0741490865117A79705F58784742D6F02B8 value)
	{
		m_Items[index] = value;
	}
};
struct UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4  : public RuntimeArray
{
	ALIGN_FIELD (8) UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 m_Items[1];

	inline UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 value)
	{
		m_Items[index] = value;
	}
};
struct Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t i0, il2cpp_array_size_t i1) const
	{
		il2cpp_array_size_t i0Bound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i0, i0Bound);
		il2cpp_array_size_t i1Bound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i1, i1Bound);

		il2cpp_array_size_t index = i0 * i1Bound + i1;
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t i0, il2cpp_array_size_t i1)
	{
		il2cpp_array_size_t i0Bound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i0, i0Bound);
		il2cpp_array_size_t i1Bound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i1, i1Bound);

		il2cpp_array_size_t index = i0 * i1Bound + i1;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i0, il2cpp_array_size_t i1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		il2cpp_array_size_t i0Bound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i0, i0Bound);
		il2cpp_array_size_t i1Bound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i1, i1Bound);

		il2cpp_array_size_t index = i0 * i1Bound + i1;
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t i0, il2cpp_array_size_t i1) const
	{
		il2cpp_array_size_t i1Bound = bounds[1].length;

		il2cpp_array_size_t index = i0 * i1Bound + i1;
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t i0, il2cpp_array_size_t i1)
	{
		il2cpp_array_size_t i1Bound = bounds[1].length;

		il2cpp_array_size_t index = i0 * i1Bound + i1;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i0, il2cpp_array_size_t i1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		il2cpp_array_size_t i1Bound = bounds[1].length;

		il2cpp_array_size_t index = i0 * i1Bound + i1;
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU2CU5D_tFF243A155E8F21F3F2753D6C8C5DBFD843EEB296  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t i0, il2cpp_array_size_t i1)
	{
		il2cpp_array_size_t i0Bound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i0, i0Bound);
		il2cpp_array_size_t i1Bound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i1, i1Bound);

		il2cpp_array_size_t index = il2cpp_array_calc_byte_offset(this, i0 * i1Bound + i1);
		return m_Items + index;
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t i0, il2cpp_array_size_t i1)
	{
		il2cpp_array_size_t i1Bound = bounds[1].length;

		il2cpp_array_size_t index = il2cpp_array_calc_byte_offset(this, i0 * i1Bound + i1);
		return m_Items + index;
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886_gshared (Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B* __this, Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* Array_Empty_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_mCA9B51A380F3ABF25CCC44152FD54B8494578B2B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mC6C458C8ED5BB20D0566801DB2F6EA8E2E9E6B33_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mCE56293A1A39B3230F6023ED7EBE1CCFC3B2BD13_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m2B0D23AC382BBB3E011BF1921CAA59FD3BDE7832_gshared (Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06* __this, Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m042E2800DCBDFAAC8915235D5D2E059FAD0A25F8_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* Array_Empty_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m14408DB7AEF24B0C78B223278BC1337C81CC853D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5ED88CD40DFE7C555698637DF8EE0373666F7FBE_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m532FB7269508F2253CA2BE442320D77B8BDE2354_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mA75ADD1AABBAFC7DA37E3CB9E112240B4D5C3B3C_gshared (Enumerator_tA37D160544C06A884B929716C584D345827D7F82* __this, Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mE880A9E084E67FA63C8A803328EA675ADF9609D9_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* Array_Empty_TisOVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F_mA15765971F9ED8D147FD0656D435EEFB0FBCAC6E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mBCA58F730095799BEC0722BE17F39B7FAC59BFA6_gshared (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m7CA6232FC225F73036CC2593E49AB9C36F72EF10_gshared (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m08CC4B8E23432C72FF28C4A57462840A1E220A95_gshared (Enumerator_tC38C7EEAC5B53077CBA549B2E0EDA97FFD544BF1* __this, Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m8EEAC868D312D4D3A77400AB1D49617279E4B996_gshared (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* Array_Empty_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_mBB6D93B6177B77D5D0DB6C917C5E06FDB4F5F200_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m1954B6757DC74ADED133CEDCD27051BA8C64C8BD_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m21BE0E1F56306C29473727D3FE261E61904510D0_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m554A60C58B8FA3C07AC9ED65259F2540A22512C9_gshared (Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560* __this, Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mF88B2DB51CD55D2C025C86961FA95D67541AC896_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mCA8E0FFC567DD0017C621A6B75027F8565CFA7E6_gshared (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mE01938A89F813B0CCF58E0D82D23363114A97B85_gshared (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m883CA17DC68406094FEFA9AAD8C40161CA35D1F3_gshared (Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891* __this, Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m87C0DAA7B799FEF651F40F96BDB0A437E1D24CEE_gshared (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Array_Empty_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m696D3DE2D89DD613C8C0EB15BE627EABEF780255_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mC07D7E49B2AD14B4CEC7ADC61CA686188482CBE8_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m0F1A4FB233A383C6DDE36AD9B4CCC7D9C3348E51_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mBD296A73D8ED89428482D302A3826D6E15022540_gshared (Enumerator_tF867D11BA433587AEF42D1129E057E0194CE8005* __this, Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4AAA2D834C784A1C4EFD7E222DD1F9245A0058E6_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* Array_Empty_TisXrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625_mCDF2DCE710E3156A0B1E2F17660ECDCEE2E54E12_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mFCE11830691EE704B6C9AEA0D33B4651A6A7B4FF_gshared (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mBF7E5DB50CF76B5803945583EA2A08F40161B2F8_gshared (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m24E16001E60E71A352B1C632CE53E90FBF1FD665_gshared (Enumerator_t953926894837E4EE2AE3D4FD43D35C3EAD6E7D5E* __this, Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mCD6EA7FD7DE0A2CF28F470B509985AB8A95C535B_gshared (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m1549601D804B1A2FA09822B8FF6018C374086954_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m097052B8552DED4A35D537D3AEB84510090C9E70_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m37472EFA972090AD3A35A3715208772B2F3F6339_gshared (Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1* __this, Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m6EF406DB0A9F8B868374ABDF966B343F281FEE1F_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB_gshared (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___0_q, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* Array_Empty_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mE6CAE32FAFB50C35AA03F64061D6BECCC6387DC4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m1DD22487659AF159BBBF2090DA8F315CEA0E0615_gshared (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m1237534B4617E7BAD2A6F22C61815607D1204A70_gshared (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mEE7F72B11C85D6D696426BC6AD65423854934256_gshared (Enumerator_t66CCD173CBD8BCAA92159D6D3D274883396BAC63* __this, Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mCF87BB78269684B556E69BEDC9F2E4AAB708D3C4_gshared (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E_gshared (Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602* __this, Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* Array_Empty_TisMessage_t439BAAD871295B67F7429E4BF40147801DD52B57_mA22DA965439DF044FE84C3C2767D5AD575EE673C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5477BCACE220FFF290E29D1CF9C90B24AAF1FA24_gshared (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mE505756DF3DA2F63E9F23C6D7189D2D26950AFAF_gshared (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m4BD29223947D55F6AFCCC39112F1BE611A90BCAD_gshared (Enumerator_t5F9D134918C937C57A401D460B77F23B58753A66* __this, Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m8D89D1F84AAABF2F72952AC152030BF99F1F63D1_gshared (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* Array_Empty_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mE74D581FD3F8DF5CFA50A5133DB5A6F7D16B99CD_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m225DAA2133CC2108D2F16C7EF47CA7368AE5E4E7_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mF12756790A3C38E07F95BA2B920AE67A930962A8_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m076E60AA8F25CE906A72B6409796A0A68BEB99CB_gshared (Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710* __this, Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4A8990345304F038BC2D5F79896D4BED8CC2CD82_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* Array_Empty_TisFilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D_mABFB44322689CDCDD2C7904395F4273AB26BF2D9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5891EF38866A270B84A6AF3FF143035B240B81B6_gshared (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m75E36FE4E41C7486949A203D23187EF5CB7E9043_gshared (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m426E619AF4553ED8C13873814B167F0BAA1640B7_gshared (Enumerator_t5B8395897EB8C9EC372988A559E1E3B7278A1F85* __this, Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mDA6DF7C0279172C16A8931C4AF1485086E0FAF52_gshared (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* Array_Empty_TisFilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03_mBDE28068FF66192DC2A98763302EFE1E164D3752_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m54079CE60AF0776B120BA5FD6BEDAEE9F33F83B7_gshared (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m86715A35017EE6BABFD8DEDEF6BBAA78576ED448_gshared (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m62E35BD0ACCF0A69A52E2D0BD3B83E6501601647_gshared (Enumerator_t2D6982B5591A20B910A6D2ABC90C0317B2BD131F* __this, Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m1DCB6540B75B454A5B9D4558DE61235E5D818923_gshared (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* Array_Empty_TisMetrics_t865BF0741490865117A79705F58784742D6F02B8_m396274F1DFAC369F038810A8DF3B16AF20CF1870_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9D06B9463E38BC052080BA46E1A018AA97C51FB5_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mBD112EEDCF9D50EE813327B1A682137EBDB1441D_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mBEA90511FBBA5D59BA40DB6A2CB8E8E750E2CE6D_gshared (Enumerator_t1693CCB05921830A8C445721C4EF5E22CD16361C* __this, Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m1F757A43C24F636EDDEAAE6990F47066A0641E11_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* Array_Empty_TisUnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71_m68042300D637F8905FBC692EB76AD9D6AA328FC1_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m294E03E4DA2287FB6157DA9B798E70C5B23F97C2_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m0937989004EB8AB26BE756B015A9316BF932D87A_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m4585014F21FD533727C1ED76BB3D9A005DD4EB48_gshared (Enumerator_t48FFA0B7AB0F72C79D913567E39C4E34EF6D5F72* __this, Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m8A42A30BC718D934ED90CCF2CC47DBFF4675D44C_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD2D9DC546B80A05000B107C8E09FAA4BED3B2144_gshared_inline (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t* UnsafeUtility_AsRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF01FDF0EACCFED286E93933B693A2BE11A6A8946_gshared_inline (void* ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR int32_t RadixSortBatchPrefixSumJob_1_JobIndexPrefixSum_m84FE82568F9EC0F33E541BAFB8DBD19DEC020514_gshared (RadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_sum, int32_t ___1_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR int32_t RadixSortBatchPrefixSumJob_1_AtomicIncrement_m4176AE255919577013BEEA632E809CBB40F3B62F_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_counter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void RadixSortBatchPrefixSumJob_1_Execute_mA78B963B3F0E2BB984306D5941DB9E622B31192A_gshared (RadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR int32_t RadixSortBatchPrefixSumJob_1_JobIndexPrefixSum_mCCD76D6B3B104F205739A21AE7FD43F594488F1F_gshared (RadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_sum, int32_t ___1_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR int32_t RadixSortBatchPrefixSumJob_1_AtomicIncrement_mE5B6D6C23E3A09431E1528BA8084A165B13D9A98_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_counter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void RadixSortBatchPrefixSumJob_1_Execute_m71DF9A259A4A7F5463EB48D94570811F2FC1D649_gshared (RadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR int32_t RadixSortBatchPrefixSumJob_1_JobIndexPrefixSum_m3F8F577B4377811997803EDFF4C6D9A87EC74B72_gshared (RadixSortBatchPrefixSumJob_1_t38091553B87D103286CED2992CA2392E2C1DF80C* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_sum, int32_t ___1_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void RadixSortBatchPrefixSumJob_1_Execute_m6BB597EA07C1D4D81CE758241465B89316327E25_gshared (RadixSortBatchPrefixSumJob_1_t38091553B87D103286CED2992CA2392E2C1DF80C* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArray_1_Reinterpret_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m06F913AC64211C19A5F35EB50F3F45685095D3D1_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_expectedTypeSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B NativeArray_1_Reinterpret_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF718C58AF6A48CF95C20FFFAAD3B3870884C4619_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_expectedTypeSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void RadixSortBucketCountJob_1_Execute_mE69747B2B60DA38802FCF96889C1CD7DDC1E3726_gshared (RadixSortBucketCountJob_1_tC9AD33E5E839CE12B0A1C15F622220EEC637D787* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArray_1_Reinterpret_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6AA2337D311BABD06E7416B028FD039D11211F9A_gshared (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* __this, int32_t ___0_expectedTypeSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B NativeArray_1_Reinterpret_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m3DFE0C9BE1F74820586102B27F73A072206D136C_gshared (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* __this, int32_t ___0_expectedTypeSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void RadixSortBucketCountJob_1_Execute_m9860F3A459E28F8FF1880B9974294C3E35614701_gshared (RadixSortBucketCountJob_1_tEAF81C7A5326AA523C221928ACEF94EE5E373D5F* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void RadixSortBucketCountJob_1_Execute_m62F3E9EF52E5494D26B073D448AEB45984989328_gshared (RadixSortBucketCountJob_1_t8CE90196DB677E4A0C7AC9264121BF2D87493A93* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void RadixSortBucketSortJob_1_Execute_m824CF9A6053A2A13ACEB6D4E533B964B9D04DB1A_gshared (RadixSortBucketSortJob_1_t4FAA58B1A9BB055721412769BB8AA45AF098845B* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void RadixSortBucketSortJob_1_Execute_m3A6F0C47238FA5FD88CF5EA0E24E26202F539F73_gshared (RadixSortBucketSortJob_1_t68C34425FDC909DF8A4C73E7BD80203D7EE84DA9* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void RadixSortBucketSortJob_1_Execute_mC7C51B2BB781FF47D3F2366C88535DA736ADD5D7_gshared (RadixSortBucketSortJob_1_tBA53182D91917571DC0AE06FF99EF355D4E2DB5D* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RandomSampleConsensus_1_FindOptimalModel_m38F97EC24BC4CDEE592091F9664A139317E38F06_gshared (RandomSampleConsensus_1_t77F5565C1F6960BBFF36A308486B4963AE8F37B4* __this, GenerateModel_tFD2092AA49E2EF13B97F8E177ABE8E6CFFFCEE0A* ___0_modelGenerator, EvaluateModelScore_t71DE5C267622406D6E5D893CBB65AE8829DDB0FF* ___1_modelScorer, int32_t ___2_dataPointsCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GenerateModel_Invoke_mBA3D6D3F7DAC36894DA980C81217E2E4FEA522A9_gshared_inline (GenerateModel_tFD2092AA49E2EF13B97F8E177ABE8E6CFFFCEE0A* __this, int32_t ___0_index1, int32_t ___1_index2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EvaluateModelScore_Invoke_mB940868ABEDDDEE2C3E9048C98BBE0673654C157_gshared_inline (EvaluateModelScore_t71DE5C267622406D6E5D893CBB65AE8829DDB0FF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_model, Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4* ___1_modelSet, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_inline (const RuntimeMethod* method)
{
	return ((  JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* (*) (const RuntimeMethod*))Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
inline void Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886 (Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B* __this, Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B*, Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9*, const RuntimeMethod*))Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* Array_Empty_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_mCA9B51A380F3ABF25CCC44152FD54B8494578B2B_inline (const RuntimeMethod* method)
{
	return ((  LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* (*) (const RuntimeMethod*))Array_Empty_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_mCA9B51A380F3ABF25CCC44152FD54B8494578B2B_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mC6C458C8ED5BB20D0566801DB2F6EA8E2E9E6B33 (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mC6C458C8ED5BB20D0566801DB2F6EA8E2E9E6B33_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mCE56293A1A39B3230F6023ED7EBE1CCFC3B2BD13 (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mCE56293A1A39B3230F6023ED7EBE1CCFC3B2BD13_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m2B0D23AC382BBB3E011BF1921CAA59FD3BDE7832 (Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06* __this, Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06*, Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E*, const RuntimeMethod*))Enumerator__ctor_m2B0D23AC382BBB3E011BF1921CAA59FD3BDE7832_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m042E2800DCBDFAAC8915235D5D2E059FAD0A25F8 (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m042E2800DCBDFAAC8915235D5D2E059FAD0A25F8_gshared)(__this, method);
}
inline OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* Array_Empty_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m14408DB7AEF24B0C78B223278BC1337C81CC853D_inline (const RuntimeMethod* method)
{
	return ((  OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* (*) (const RuntimeMethod*))Array_Empty_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m14408DB7AEF24B0C78B223278BC1337C81CC853D_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m5ED88CD40DFE7C555698637DF8EE0373666F7FBE (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m5ED88CD40DFE7C555698637DF8EE0373666F7FBE_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m532FB7269508F2253CA2BE442320D77B8BDE2354 (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m532FB7269508F2253CA2BE442320D77B8BDE2354_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mA75ADD1AABBAFC7DA37E3CB9E112240B4D5C3B3C (Enumerator_tA37D160544C06A884B929716C584D345827D7F82* __this, Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA37D160544C06A884B929716C584D345827D7F82*, Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75*, const RuntimeMethod*))Enumerator__ctor_mA75ADD1AABBAFC7DA37E3CB9E112240B4D5C3B3C_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mE880A9E084E67FA63C8A803328EA675ADF9609D9 (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mE880A9E084E67FA63C8A803328EA675ADF9609D9_gshared)(__this, method);
}
inline OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* Array_Empty_TisOVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F_mA15765971F9ED8D147FD0656D435EEFB0FBCAC6E_inline (const RuntimeMethod* method)
{
	return ((  OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* (*) (const RuntimeMethod*))Array_Empty_TisOVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F_mA15765971F9ED8D147FD0656D435EEFB0FBCAC6E_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mBCA58F730095799BEC0722BE17F39B7FAC59BFA6 (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mBCA58F730095799BEC0722BE17F39B7FAC59BFA6_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m7CA6232FC225F73036CC2593E49AB9C36F72EF10 (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m7CA6232FC225F73036CC2593E49AB9C36F72EF10_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m08CC4B8E23432C72FF28C4A57462840A1E220A95 (Enumerator_tC38C7EEAC5B53077CBA549B2E0EDA97FFD544BF1* __this, Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC38C7EEAC5B53077CBA549B2E0EDA97FFD544BF1*, Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1*, const RuntimeMethod*))Enumerator__ctor_m08CC4B8E23432C72FF28C4A57462840A1E220A95_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m8EEAC868D312D4D3A77400AB1D49617279E4B996 (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m8EEAC868D312D4D3A77400AB1D49617279E4B996_gshared)(__this, method);
}
inline OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* Array_Empty_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_mBB6D93B6177B77D5D0DB6C917C5E06FDB4F5F200_inline (const RuntimeMethod* method)
{
	return ((  OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* (*) (const RuntimeMethod*))Array_Empty_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_mBB6D93B6177B77D5D0DB6C917C5E06FDB4F5F200_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m1954B6757DC74ADED133CEDCD27051BA8C64C8BD (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m1954B6757DC74ADED133CEDCD27051BA8C64C8BD_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m21BE0E1F56306C29473727D3FE261E61904510D0 (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m21BE0E1F56306C29473727D3FE261E61904510D0_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m554A60C58B8FA3C07AC9ED65259F2540A22512C9 (Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560* __this, Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560*, Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43*, const RuntimeMethod*))Enumerator__ctor_m554A60C58B8FA3C07AC9ED65259F2540A22512C9_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mF88B2DB51CD55D2C025C86961FA95D67541AC896 (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mF88B2DB51CD55D2C025C86961FA95D67541AC896_gshared)(__this, method);
}
inline UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_inline (const RuntimeMethod* method)
{
	return ((  UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* (*) (const RuntimeMethod*))Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mCA8E0FFC567DD0017C621A6B75027F8565CFA7E6 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mCA8E0FFC567DD0017C621A6B75027F8565CFA7E6_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mE01938A89F813B0CCF58E0D82D23363114A97B85 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mE01938A89F813B0CCF58E0D82D23363114A97B85_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m883CA17DC68406094FEFA9AAD8C40161CA35D1F3 (Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891* __this, Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891*, Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850*, const RuntimeMethod*))Enumerator__ctor_m883CA17DC68406094FEFA9AAD8C40161CA35D1F3_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m87C0DAA7B799FEF651F40F96BDB0A437E1D24CEE (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m87C0DAA7B799FEF651F40F96BDB0A437E1D24CEE_gshared)(__this, method);
}
inline UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Array_Empty_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m696D3DE2D89DD613C8C0EB15BE627EABEF780255_inline (const RuntimeMethod* method)
{
	return ((  UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* (*) (const RuntimeMethod*))Array_Empty_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m696D3DE2D89DD613C8C0EB15BE627EABEF780255_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mC07D7E49B2AD14B4CEC7ADC61CA686188482CBE8 (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mC07D7E49B2AD14B4CEC7ADC61CA686188482CBE8_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m0F1A4FB233A383C6DDE36AD9B4CCC7D9C3348E51 (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m0F1A4FB233A383C6DDE36AD9B4CCC7D9C3348E51_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mBD296A73D8ED89428482D302A3826D6E15022540 (Enumerator_tF867D11BA433587AEF42D1129E057E0194CE8005* __this, Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF867D11BA433587AEF42D1129E057E0194CE8005*, Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF*, const RuntimeMethod*))Enumerator__ctor_mBD296A73D8ED89428482D302A3826D6E15022540_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m4AAA2D834C784A1C4EFD7E222DD1F9245A0058E6 (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m4AAA2D834C784A1C4EFD7E222DD1F9245A0058E6_gshared)(__this, method);
}
inline XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* Array_Empty_TisXrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625_mCDF2DCE710E3156A0B1E2F17660ECDCEE2E54E12_inline (const RuntimeMethod* method)
{
	return ((  XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* (*) (const RuntimeMethod*))Array_Empty_TisXrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625_mCDF2DCE710E3156A0B1E2F17660ECDCEE2E54E12_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mFCE11830691EE704B6C9AEA0D33B4651A6A7B4FF (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mFCE11830691EE704B6C9AEA0D33B4651A6A7B4FF_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mBF7E5DB50CF76B5803945583EA2A08F40161B2F8 (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mBF7E5DB50CF76B5803945583EA2A08F40161B2F8_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m24E16001E60E71A352B1C632CE53E90FBF1FD665 (Enumerator_t953926894837E4EE2AE3D4FD43D35C3EAD6E7D5E* __this, Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t953926894837E4EE2AE3D4FD43D35C3EAD6E7D5E*, Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D*, const RuntimeMethod*))Enumerator__ctor_m24E16001E60E71A352B1C632CE53E90FBF1FD665_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mCD6EA7FD7DE0A2CF28F470B509985AB8A95C535B (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mCD6EA7FD7DE0A2CF28F470B509985AB8A95C535B_gshared)(__this, method);
}
inline __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_inline (const RuntimeMethod* method)
{
	return ((  __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline void Queue_1_SetCapacity_m1549601D804B1A2FA09822B8FF6018C374086954 (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m1549601D804B1A2FA09822B8FF6018C374086954_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m097052B8552DED4A35D537D3AEB84510090C9E70 (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m097052B8552DED4A35D537D3AEB84510090C9E70_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m37472EFA972090AD3A35A3715208772B2F3F6339 (Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1* __this, Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1*, Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF*, const RuntimeMethod*))Enumerator__ctor_m37472EFA972090AD3A35A3715208772B2F3F6339_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m6EF406DB0A9F8B868374ABDF966B343F281FEE1F (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m6EF406DB0A9F8B868374ABDF966B343F281FEE1F_gshared)(__this, method);
}
inline void Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB_gshared)(__this, ___0_q, method);
}
inline __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* Array_Empty_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mE6CAE32FAFB50C35AA03F64061D6BECCC6387DC4_inline (const RuntimeMethod* method)
{
	return ((  __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* (*) (const RuntimeMethod*))Array_Empty_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mE6CAE32FAFB50C35AA03F64061D6BECCC6387DC4_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m1DD22487659AF159BBBF2090DA8F315CEA0E0615 (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m1DD22487659AF159BBBF2090DA8F315CEA0E0615_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m1237534B4617E7BAD2A6F22C61815607D1204A70 (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m1237534B4617E7BAD2A6F22C61815607D1204A70_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mEE7F72B11C85D6D696426BC6AD65423854934256 (Enumerator_t66CCD173CBD8BCAA92159D6D3D274883396BAC63* __this, Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t66CCD173CBD8BCAA92159D6D3D274883396BAC63*, Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7*, const RuntimeMethod*))Enumerator__ctor_mEE7F72B11C85D6D696426BC6AD65423854934256_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mCF87BB78269684B556E69BEDC9F2E4AAB708D3C4 (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mCF87BB78269684B556E69BEDC9F2E4AAB708D3C4_gshared)(__this, method);
}
inline EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_inline (const RuntimeMethod* method)
{
	return ((  EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* (*) (const RuntimeMethod*))Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8 (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E (Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602* __this, Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602*, Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68*, const RuntimeMethod*))Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0 (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0_gshared)(__this, method);
}
inline MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* Array_Empty_TisMessage_t439BAAD871295B67F7429E4BF40147801DD52B57_mA22DA965439DF044FE84C3C2767D5AD575EE673C_inline (const RuntimeMethod* method)
{
	return ((  MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* (*) (const RuntimeMethod*))Array_Empty_TisMessage_t439BAAD871295B67F7429E4BF40147801DD52B57_mA22DA965439DF044FE84C3C2767D5AD575EE673C_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m5477BCACE220FFF290E29D1CF9C90B24AAF1FA24 (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m5477BCACE220FFF290E29D1CF9C90B24AAF1FA24_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mE505756DF3DA2F63E9F23C6D7189D2D26950AFAF (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mE505756DF3DA2F63E9F23C6D7189D2D26950AFAF_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m4BD29223947D55F6AFCCC39112F1BE611A90BCAD (Enumerator_t5F9D134918C937C57A401D460B77F23B58753A66* __this, Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5F9D134918C937C57A401D460B77F23B58753A66*, Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB*, const RuntimeMethod*))Enumerator__ctor_m4BD29223947D55F6AFCCC39112F1BE611A90BCAD_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m8D89D1F84AAABF2F72952AC152030BF99F1F63D1 (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m8D89D1F84AAABF2F72952AC152030BF99F1F63D1_gshared)(__this, method);
}
inline CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* Array_Empty_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mE74D581FD3F8DF5CFA50A5133DB5A6F7D16B99CD_inline (const RuntimeMethod* method)
{
	return ((  CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* (*) (const RuntimeMethod*))Array_Empty_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mE74D581FD3F8DF5CFA50A5133DB5A6F7D16B99CD_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m225DAA2133CC2108D2F16C7EF47CA7368AE5E4E7 (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m225DAA2133CC2108D2F16C7EF47CA7368AE5E4E7_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mF12756790A3C38E07F95BA2B920AE67A930962A8 (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mF12756790A3C38E07F95BA2B920AE67A930962A8_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m076E60AA8F25CE906A72B6409796A0A68BEB99CB (Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710* __this, Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710*, Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1*, const RuntimeMethod*))Enumerator__ctor_m076E60AA8F25CE906A72B6409796A0A68BEB99CB_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m4A8990345304F038BC2D5F79896D4BED8CC2CD82 (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m4A8990345304F038BC2D5F79896D4BED8CC2CD82_gshared)(__this, method);
}
inline FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* Array_Empty_TisFilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D_mABFB44322689CDCDD2C7904395F4273AB26BF2D9_inline (const RuntimeMethod* method)
{
	return ((  FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* (*) (const RuntimeMethod*))Array_Empty_TisFilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D_mABFB44322689CDCDD2C7904395F4273AB26BF2D9_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m5891EF38866A270B84A6AF3FF143035B240B81B6 (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m5891EF38866A270B84A6AF3FF143035B240B81B6_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m75E36FE4E41C7486949A203D23187EF5CB7E9043 (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m75E36FE4E41C7486949A203D23187EF5CB7E9043_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m426E619AF4553ED8C13873814B167F0BAA1640B7 (Enumerator_t5B8395897EB8C9EC372988A559E1E3B7278A1F85* __this, Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5B8395897EB8C9EC372988A559E1E3B7278A1F85*, Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F*, const RuntimeMethod*))Enumerator__ctor_m426E619AF4553ED8C13873814B167F0BAA1640B7_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mDA6DF7C0279172C16A8931C4AF1485086E0FAF52 (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mDA6DF7C0279172C16A8931C4AF1485086E0FAF52_gshared)(__this, method);
}
inline FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* Array_Empty_TisFilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03_mBDE28068FF66192DC2A98763302EFE1E164D3752_inline (const RuntimeMethod* method)
{
	return ((  FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* (*) (const RuntimeMethod*))Array_Empty_TisFilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03_mBDE28068FF66192DC2A98763302EFE1E164D3752_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m54079CE60AF0776B120BA5FD6BEDAEE9F33F83B7 (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m54079CE60AF0776B120BA5FD6BEDAEE9F33F83B7_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m86715A35017EE6BABFD8DEDEF6BBAA78576ED448 (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m86715A35017EE6BABFD8DEDEF6BBAA78576ED448_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m62E35BD0ACCF0A69A52E2D0BD3B83E6501601647 (Enumerator_t2D6982B5591A20B910A6D2ABC90C0317B2BD131F* __this, Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2D6982B5591A20B910A6D2ABC90C0317B2BD131F*, Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F*, const RuntimeMethod*))Enumerator__ctor_m62E35BD0ACCF0A69A52E2D0BD3B83E6501601647_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m1DCB6540B75B454A5B9D4558DE61235E5D818923 (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m1DCB6540B75B454A5B9D4558DE61235E5D818923_gshared)(__this, method);
}
inline MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* Array_Empty_TisMetrics_t865BF0741490865117A79705F58784742D6F02B8_m396274F1DFAC369F038810A8DF3B16AF20CF1870_inline (const RuntimeMethod* method)
{
	return ((  MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* (*) (const RuntimeMethod*))Array_Empty_TisMetrics_t865BF0741490865117A79705F58784742D6F02B8_m396274F1DFAC369F038810A8DF3B16AF20CF1870_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m9D06B9463E38BC052080BA46E1A018AA97C51FB5 (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m9D06B9463E38BC052080BA46E1A018AA97C51FB5_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mBD112EEDCF9D50EE813327B1A682137EBDB1441D (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mBD112EEDCF9D50EE813327B1A682137EBDB1441D_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mBEA90511FBBA5D59BA40DB6A2CB8E8E750E2CE6D (Enumerator_t1693CCB05921830A8C445721C4EF5E22CD16361C* __this, Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1693CCB05921830A8C445721C4EF5E22CD16361C*, Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB*, const RuntimeMethod*))Enumerator__ctor_mBEA90511FBBA5D59BA40DB6A2CB8E8E750E2CE6D_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m1F757A43C24F636EDDEAAE6990F47066A0641E11 (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m1F757A43C24F636EDDEAAE6990F47066A0641E11_gshared)(__this, method);
}
inline UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* Array_Empty_TisUnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71_m68042300D637F8905FBC692EB76AD9D6AA328FC1_inline (const RuntimeMethod* method)
{
	return ((  UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* (*) (const RuntimeMethod*))Array_Empty_TisUnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71_m68042300D637F8905FBC692EB76AD9D6AA328FC1_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m294E03E4DA2287FB6157DA9B798E70C5B23F97C2 (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m294E03E4DA2287FB6157DA9B798E70C5B23F97C2_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m0937989004EB8AB26BE756B015A9316BF932D87A (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m0937989004EB8AB26BE756B015A9316BF932D87A_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m4585014F21FD533727C1ED76BB3D9A005DD4EB48 (Enumerator_t48FFA0B7AB0F72C79D913567E39C4E34EF6D5F72* __this, Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t48FFA0B7AB0F72C79D913567E39C4E34EF6D5F72*, Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D*, const RuntimeMethod*))Enumerator__ctor_m4585014F21FD533727C1ED76BB3D9A005DD4EB48_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m8A42A30BC718D934ED90CCF2CC47DBFF4675D44C (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m8A42A30BC718D934ED90CCF2CC47DBFF4675D44C_gshared)(__this, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD2D9DC546B80A05000B107C8E09FAA4BED3B2144_inline (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD2D9DC546B80A05000B107C8E09FAA4BED3B2144_gshared_inline)(___0_nativeArray, method);
}
inline int32_t* UnsafeUtility_AsRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF01FDF0EACCFED286E93933B693A2BE11A6A8946_inline (void* ___0_ptr, const RuntimeMethod* method)
{
	return ((  int32_t* (*) (void*, const RuntimeMethod*))UnsafeUtility_AsRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF01FDF0EACCFED286E93933B693A2BE11A6A8946_gshared_inline)(___0_ptr, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___0_location, const RuntimeMethod* method) ;
inline int32_t RadixSortBatchPrefixSumJob_1_JobIndexPrefixSum_m84FE82568F9EC0F33E541BAFB8DBD19DEC020514 (RadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_sum, int32_t ___1_i, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530* IL2CPP_PARAMETER_RESTRICT, int32_t, int32_t, const RuntimeMethod*))RadixSortBatchPrefixSumJob_1_JobIndexPrefixSum_m84FE82568F9EC0F33E541BAFB8DBD19DEC020514_gshared)(__this, ___0_sum, ___1_i, method);
}
inline int32_t RadixSortBatchPrefixSumJob_1_AtomicIncrement_m4176AE255919577013BEEA632E809CBB40F3B62F (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_counter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C, const RuntimeMethod*))RadixSortBatchPrefixSumJob_1_AtomicIncrement_m4176AE255919577013BEEA632E809CBB40F3B62F_gshared)(___0_counter, method);
}
inline void RadixSortBatchPrefixSumJob_1_Execute_mA78B963B3F0E2BB984306D5941DB9E622B31192A (RadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (RadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530* IL2CPP_PARAMETER_RESTRICT, int32_t, const RuntimeMethod*))RadixSortBatchPrefixSumJob_1_Execute_mA78B963B3F0E2BB984306D5941DB9E622B31192A_gshared)(__this, ___0_index, method);
}
inline int32_t RadixSortBatchPrefixSumJob_1_JobIndexPrefixSum_mCCD76D6B3B104F205739A21AE7FD43F594488F1F (RadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_sum, int32_t ___1_i, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16* IL2CPP_PARAMETER_RESTRICT, int32_t, int32_t, const RuntimeMethod*))RadixSortBatchPrefixSumJob_1_JobIndexPrefixSum_mCCD76D6B3B104F205739A21AE7FD43F594488F1F_gshared)(__this, ___0_sum, ___1_i, method);
}
inline int32_t RadixSortBatchPrefixSumJob_1_AtomicIncrement_mE5B6D6C23E3A09431E1528BA8084A165B13D9A98 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_counter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C, const RuntimeMethod*))RadixSortBatchPrefixSumJob_1_AtomicIncrement_mE5B6D6C23E3A09431E1528BA8084A165B13D9A98_gshared)(___0_counter, method);
}
inline void RadixSortBatchPrefixSumJob_1_Execute_m71DF9A259A4A7F5463EB48D94570811F2FC1D649 (RadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (RadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16* IL2CPP_PARAMETER_RESTRICT, int32_t, const RuntimeMethod*))RadixSortBatchPrefixSumJob_1_Execute_m71DF9A259A4A7F5463EB48D94570811F2FC1D649_gshared)(__this, ___0_index, method);
}
inline int32_t RadixSortBatchPrefixSumJob_1_JobIndexPrefixSum_m3F8F577B4377811997803EDFF4C6D9A87EC74B72 (RadixSortBatchPrefixSumJob_1_t38091553B87D103286CED2992CA2392E2C1DF80C* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_sum, int32_t ___1_i, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RadixSortBatchPrefixSumJob_1_t38091553B87D103286CED2992CA2392E2C1DF80C* IL2CPP_PARAMETER_RESTRICT, int32_t, int32_t, const RuntimeMethod*))RadixSortBatchPrefixSumJob_1_JobIndexPrefixSum_m3F8F577B4377811997803EDFF4C6D9A87EC74B72_gshared)(__this, ___0_sum, ___1_i, method);
}
inline void RadixSortBatchPrefixSumJob_1_Execute_m6BB597EA07C1D4D81CE758241465B89316327E25 (RadixSortBatchPrefixSumJob_1_t38091553B87D103286CED2992CA2392E2C1DF80C* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (RadixSortBatchPrefixSumJob_1_t38091553B87D103286CED2992CA2392E2C1DF80C* IL2CPP_PARAMETER_RESTRICT, int32_t, const RuntimeMethod*))RadixSortBatchPrefixSumJob_1_Execute_m6BB597EA07C1D4D81CE758241465B89316327E25_gshared)(__this, ___0_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
inline NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArray_1_Reinterpret_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m06F913AC64211C19A5F35EB50F3F45685095D3D1 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_expectedTypeSize, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, int32_t, const RuntimeMethod*))NativeArray_1_Reinterpret_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m06F913AC64211C19A5F35EB50F3F45685095D3D1_gshared)(__this, ___0_expectedTypeSize, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParallelSortExtensions_GetBucketIndex_m59A772ACE45802E9CB4E3F3779CE15335FDF1725 (int32_t ___0_value, int32_t ___1_radix, const RuntimeMethod* method) ;
inline NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B NativeArray_1_Reinterpret_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF718C58AF6A48CF95C20FFFAAD3B3870884C4619 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_expectedTypeSize, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, int32_t, const RuntimeMethod*))NativeArray_1_Reinterpret_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF718C58AF6A48CF95C20FFFAAD3B3870884C4619_gshared)(__this, ___0_expectedTypeSize, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParallelSortExtensions_GetBucketIndex_mE4EAA948DCD4F163066FAA8A5B2B1D0F09775E01 (uint64_t ___0_value, int32_t ___1_radix, const RuntimeMethod* method) ;
inline void RadixSortBucketCountJob_1_Execute_mE69747B2B60DA38802FCF96889C1CD7DDC1E3726 (RadixSortBucketCountJob_1_tC9AD33E5E839CE12B0A1C15F622220EEC637D787* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (RadixSortBucketCountJob_1_tC9AD33E5E839CE12B0A1C15F622220EEC637D787* IL2CPP_PARAMETER_RESTRICT, int32_t, const RuntimeMethod*))RadixSortBucketCountJob_1_Execute_mE69747B2B60DA38802FCF96889C1CD7DDC1E3726_gshared)(__this, ___0_index, method);
}
inline NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArray_1_Reinterpret_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6AA2337D311BABD06E7416B028FD039D11211F9A (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* __this, int32_t ___0_expectedTypeSize, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*, int32_t, const RuntimeMethod*))NativeArray_1_Reinterpret_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6AA2337D311BABD06E7416B028FD039D11211F9A_gshared)(__this, ___0_expectedTypeSize, method);
}
inline NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B NativeArray_1_Reinterpret_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m3DFE0C9BE1F74820586102B27F73A072206D136C (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* __this, int32_t ___0_expectedTypeSize, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B (*) (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*, int32_t, const RuntimeMethod*))NativeArray_1_Reinterpret_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m3DFE0C9BE1F74820586102B27F73A072206D136C_gshared)(__this, ___0_expectedTypeSize, method);
}
inline void RadixSortBucketCountJob_1_Execute_m9860F3A459E28F8FF1880B9974294C3E35614701 (RadixSortBucketCountJob_1_tEAF81C7A5326AA523C221928ACEF94EE5E373D5F* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (RadixSortBucketCountJob_1_tEAF81C7A5326AA523C221928ACEF94EE5E373D5F* IL2CPP_PARAMETER_RESTRICT, int32_t, const RuntimeMethod*))RadixSortBucketCountJob_1_Execute_m9860F3A459E28F8FF1880B9974294C3E35614701_gshared)(__this, ___0_index, method);
}
inline void RadixSortBucketCountJob_1_Execute_m62F3E9EF52E5494D26B073D448AEB45984989328 (RadixSortBucketCountJob_1_t8CE90196DB677E4A0C7AC9264121BF2D87493A93* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (RadixSortBucketCountJob_1_t8CE90196DB677E4A0C7AC9264121BF2D87493A93* IL2CPP_PARAMETER_RESTRICT, int32_t, const RuntimeMethod*))RadixSortBucketCountJob_1_Execute_m62F3E9EF52E5494D26B073D448AEB45984989328_gshared)(__this, ___0_index, method);
}
inline void RadixSortBucketSortJob_1_Execute_m824CF9A6053A2A13ACEB6D4E533B964B9D04DB1A (RadixSortBucketSortJob_1_t4FAA58B1A9BB055721412769BB8AA45AF098845B* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (RadixSortBucketSortJob_1_t4FAA58B1A9BB055721412769BB8AA45AF098845B* IL2CPP_PARAMETER_RESTRICT, int32_t, const RuntimeMethod*))RadixSortBucketSortJob_1_Execute_m824CF9A6053A2A13ACEB6D4E533B964B9D04DB1A_gshared)(__this, ___0_index, method);
}
inline void RadixSortBucketSortJob_1_Execute_m3A6F0C47238FA5FD88CF5EA0E24E26202F539F73 (RadixSortBucketSortJob_1_t68C34425FDC909DF8A4C73E7BD80203D7EE84DA9* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (RadixSortBucketSortJob_1_t68C34425FDC909DF8A4C73E7BD80203D7EE84DA9* IL2CPP_PARAMETER_RESTRICT, int32_t, const RuntimeMethod*))RadixSortBucketSortJob_1_Execute_m3A6F0C47238FA5FD88CF5EA0E24E26202F539F73_gshared)(__this, ___0_index, method);
}
inline void RadixSortBucketSortJob_1_Execute_mC7C51B2BB781FF47D3F2366C88535DA736ADD5D7 (RadixSortBucketSortJob_1_tBA53182D91917571DC0AE06FF99EF355D4E2DB5D* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (RadixSortBucketSortJob_1_tBA53182D91917571DC0AE06FF99EF355D4E2DB5D* IL2CPP_PARAMETER_RESTRICT, int32_t, const RuntimeMethod*))RadixSortBucketSortJob_1_Execute_mC7C51B2BB781FF47D3F2366C88535DA736ADD5D7_gshared)(__this, ___0_index, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RandomSampleConsensus_1_FindOptimalModel_m38F97EC24BC4CDEE592091F9664A139317E38F06 (RandomSampleConsensus_1_t77F5565C1F6960BBFF36A308486B4963AE8F37B4* __this, GenerateModel_tFD2092AA49E2EF13B97F8E177ABE8E6CFFFCEE0A* ___0_modelGenerator, EvaluateModelScore_t71DE5C267622406D6E5D893CBB65AE8829DDB0FF* ___1_modelScorer, int32_t ___2_dataPointsCount, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (RandomSampleConsensus_1_t77F5565C1F6960BBFF36A308486B4963AE8F37B4*, GenerateModel_tFD2092AA49E2EF13B97F8E177ABE8E6CFFFCEE0A*, EvaluateModelScore_t71DE5C267622406D6E5D893CBB65AE8829DDB0FF*, int32_t, const RuntimeMethod*))RandomSampleConsensus_1_FindOptimalModel_m38F97EC24BC4CDEE592091F9664A139317E38F06_gshared)(__this, ___0_modelGenerator, ___1_modelScorer, ___2_dataPointsCount, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GenerateModel_Invoke_mBA3D6D3F7DAC36894DA980C81217E2E4FEA522A9_inline (GenerateModel_tFD2092AA49E2EF13B97F8E177ABE8E6CFFFCEE0A* __this, int32_t ___0_index1, int32_t ___1_index2, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (GenerateModel_tFD2092AA49E2EF13B97F8E177ABE8E6CFFFCEE0A*, int32_t, int32_t, const RuntimeMethod*))GenerateModel_Invoke_mBA3D6D3F7DAC36894DA980C81217E2E4FEA522A9_gshared_inline)(__this, ___0_index1, ___1_index2, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
inline float EvaluateModelScore_Invoke_mB940868ABEDDDEE2C3E9048C98BBE0673654C157_inline (EvaluateModelScore_t71DE5C267622406D6E5D893CBB65AE8829DDB0FF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_model, Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4* ___1_modelSet, const RuntimeMethod* method)
{
	return ((  float (*) (EvaluateModelScore_t71DE5C267622406D6E5D893CBB65AE8829DDB0FF*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4*, const RuntimeMethod*))EvaluateModelScore_Invoke_mB940868ABEDDDEE2C3E9048C98BBE0673654C157_gshared_inline)(__this, ___0_model, ___1_modelSet, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m3A126C80D91B2EB3C8E8BE072438D3C3640A5A75_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_0;
		L_0 = Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mA6D219FBF1F11E55D74C0545DBF6AA18C5AF85B3_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_6 = (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)(JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m82A01ECF2E58E85CB036CC8A5003977C294922A9_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m8D1E973396C1AF008B7003FF251DF68BA9EBC6E2_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 11132
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m9B8DBB3F3DCFAE1306C2A604E8C4FCB5E80E4E59_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
// Method Definition Index: 11133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mEEF9060CB1702EEB6695F115562EFB3DAA29992D_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m7ACC3D9CAAB2E747FE32FCB2928ED5886A5B33B1_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B Queue_1_GetEnumerator_m092DE77C76645AFDD839F99DB6DB0C8A9FFD0B05_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
// Method Definition Index: 11136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3BAEC4F450BC7747422D37AA9ADE3D522E3B6AA4_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11137
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mB5643D90AE44533169A70ECBF4FB8D9BABC22A78_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 Queue_1_Dequeue_mAB6FF2BF6F12E3AD12C7524DB9EB640CB5C3750E_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* V_1 = NULL;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mAAA90DFEB34EEA43B2591E9A86C92BC35C203BD6_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* V_1 = NULL;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		return (bool)0;
	}

IL_001f:
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_4 = ___0_result;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
// Method Definition Index: 11140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 Queue_1_Peek_m639CC79FAC9BD961981FAD7C71CBC8FD7F122EDC_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m94AB487054E12FD562B8AA2E2A4D4F718BCF4AB6_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		return (bool)0;
	}

IL_0011:
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_2 = ___0_result;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)L_2 = L_6;
		return (bool)1;
	}
}
// Method Definition Index: 11142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* Queue_1_ToArray_m37BDB9698F8E57DC78F53E21C3E964A6A0CDA62A_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1;
		L_1 = Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)(JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_12 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_16 = __this->____array;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_17 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* V_0 = NULL;
	Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* G_B6_0 = NULL;
	Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1 = (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)(JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_11 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_15 = __this->____array;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_16 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_5 = ___0_index;
		int32_t L_6 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)L_6);
		return;
	}
}
// Method Definition Index: 11145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m65412F74A4DE5C6DA1535E080CB9CAD2748DC04B_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_0;
		L_0 = Array_Empty_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_mCA9B51A380F3ABF25CCC44152FD54B8494578B2B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m98722C43B633C81AA2CD0A702C5701AF1B8AAD46_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_6 = (LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E*)(LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mA169C0D025767536F39AA8566078224AFC27B0D6_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m67ED59890D29357814FEF2202508A508F6F565DF_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 11132
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mB299B67924A84D46D4F9C75933B51F8C66D8ED25_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
// Method Definition Index: 11133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m5F8E104F63F733938DE6E2EF6264392C1F8AD7FF_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m231519D2D72DE9DE09CFA2C647A8202B6C822C9D_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_mC6C458C8ED5BB20D0566801DB2F6EA8E2E9E6B33(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mCE56293A1A39B3230F6023ED7EBE1CCFC3B2BD13(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06 Queue_1_GetEnumerator_m2F5A9416761312E275123FA5ED5E5DC8B74764BD_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2B0D23AC382BBB3E011BF1921CAA59FD3BDE7832((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
// Method Definition Index: 11136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m5C5C34E168F1114E4D68D9A79BE6F8388519154C_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2B0D23AC382BBB3E011BF1921CAA59FD3BDE7832((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11137
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m89458DE8DBF69059F2FD6098F5D04358316B65E3_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2B0D23AC382BBB3E011BF1921CAA59FD3BDE7832((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 Queue_1_Dequeue_m86FF00059068ADD8879AFAD576D8A676DA0C3DDC_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* V_1 = NULL;
	LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 V_2;
	memset((&V_2), 0, sizeof(V_2));
	LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m042E2800DCBDFAAC8915235D5D2E059FAD0A25F8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mCE56293A1A39B3230F6023ED7EBE1CCFC3B2BD13(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mC3EDD3767420C0CE4B59388DE2BE5E7F56BC9C9D_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* V_1 = NULL;
	LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642));
		return (bool)0;
	}

IL_001f:
	{
		LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642* L_4 = ___0_result;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mCE56293A1A39B3230F6023ED7EBE1CCFC3B2BD13(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
// Method Definition Index: 11140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 Queue_1_Peek_m378FF8A44A937ADF61A0EF090C8CCBB7EBC483E1_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m042E2800DCBDFAAC8915235D5D2E059FAD0A25F8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_mF5642C0251A8B9F2EBBA17939C41ADE515AC73C2_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642));
		return (bool)0;
	}

IL_0011:
	{
		LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642* L_2 = ___0_result;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642*)L_2 = L_6;
		return (bool)1;
	}
}
// Method Definition Index: 11142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* Queue_1_ToArray_m20AF66CD55943562DE1A3DCFB00860F56D19496C_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_1;
		L_1 = Array_Empty_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_mCA9B51A380F3ABF25CCC44152FD54B8494578B2B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_3 = (LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E*)(LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_12 = V_0;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_16 = __this->____array;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_17 = V_0;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mC6C458C8ED5BB20D0566801DB2F6EA8E2E9E6B33_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* V_0 = NULL;
	Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* G_B6_0 = NULL;
	Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_1 = (LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E*)(LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_11 = V_0;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_15 = __this->____array;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_16 = V_0;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mCE56293A1A39B3230F6023ED7EBE1CCFC3B2BD13_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_5 = ___0_index;
		int32_t L_6 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)L_6);
		return;
	}
}
// Method Definition Index: 11145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m042E2800DCBDFAAC8915235D5D2E059FAD0A25F8_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m2F2F10F939D04078D011752BA3FEFB86D658D793_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_0;
		L_0 = Array_Empty_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m14408DB7AEF24B0C78B223278BC1337C81CC853D_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mF3CF3FAEB079855302E475A49CEEE333E21C3DAD_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_6 = (OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69*)(OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m30D59F53639B7FF3678657C63D0B12F7148C673B_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m443A495069FE49E8AA3800BD47DEF5F2663EB2B0_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 11132
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m0597182AB0372D1CF6D2AFB93605048F60355D0E_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
// Method Definition Index: 11133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m46ED975B5C3765B87B0CEB2C891E462FDBFA91C5_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mA53241B877A400D032C4488776CF7C264FA2C458_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m5ED88CD40DFE7C555698637DF8EE0373666F7FBE(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m532FB7269508F2253CA2BE442320D77B8BDE2354(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA37D160544C06A884B929716C584D345827D7F82 Queue_1_GetEnumerator_m3EED06CB1D51AF328036F21B798A4EEFFF6D4D70_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tA37D160544C06A884B929716C584D345827D7F82 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA75ADD1AABBAFC7DA37E3CB9E112240B4D5C3B3C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
// Method Definition Index: 11136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m0FB520F274B17CF126395A59B4D778E350351AE2_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tA37D160544C06A884B929716C584D345827D7F82 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA75ADD1AABBAFC7DA37E3CB9E112240B4D5C3B3C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tA37D160544C06A884B929716C584D345827D7F82 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11137
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m301DB6D58060A3ECE16C07F5F914780A0D275060_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tA37D160544C06A884B929716C584D345827D7F82 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA75ADD1AABBAFC7DA37E3CB9E112240B4D5C3B3C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tA37D160544C06A884B929716C584D345827D7F82 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 Queue_1_Dequeue_m0B6C3646FE49D7A6FA9CAE5EC1E0659D2142965D_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* V_1 = NULL;
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 V_2;
	memset((&V_2), 0, sizeof(V_2));
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mE880A9E084E67FA63C8A803328EA675ADF9609D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m532FB7269508F2253CA2BE442320D77B8BDE2354(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m68CF086198F24C9CCEDE876250DADE90D566A70A_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* V_1 = NULL;
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061));
		return (bool)0;
	}

IL_001f:
	{
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061* L_4 = ___0_result;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m532FB7269508F2253CA2BE442320D77B8BDE2354(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
// Method Definition Index: 11140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 Queue_1_Peek_mFE28DF19F37FC57A1506768905A255556BD5D05F_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mE880A9E084E67FA63C8A803328EA675ADF9609D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_mA9FA75919B32E19B564E49349303A9486C663CDC_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061));
		return (bool)0;
	}

IL_0011:
	{
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061* L_2 = ___0_result;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061*)L_2 = L_6;
		return (bool)1;
	}
}
// Method Definition Index: 11142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* Queue_1_ToArray_m3192A80A808ED4CB42DFA1EE350571632F8C6C17_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_1;
		L_1 = Array_Empty_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m14408DB7AEF24B0C78B223278BC1337C81CC853D_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_3 = (OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69*)(OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_12 = V_0;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_16 = __this->____array;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_17 = V_0;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5ED88CD40DFE7C555698637DF8EE0373666F7FBE_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* V_0 = NULL;
	Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* G_B6_0 = NULL;
	Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_1 = (OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69*)(OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_11 = V_0;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_15 = __this->____array;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_16 = V_0;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m532FB7269508F2253CA2BE442320D77B8BDE2354_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_5 = ___0_index;
		int32_t L_6 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)L_6);
		return;
	}
}
// Method Definition Index: 11145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mE880A9E084E67FA63C8A803328EA675ADF9609D9_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m621E1942EFC22222ECEE24FBBD5E5E96CE4CE7C5_gshared (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_0;
		L_0 = Array_Empty_TisOVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F_mA15765971F9ED8D147FD0656D435EEFB0FBCAC6E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mEBC6D862E7777D8BEB2FA47FC0A2D41CC1E8E5A3_gshared (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_6 = (OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F*)(OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m0248F4269055866B1027A04E526E211EA1CD2D73_gshared (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m6792B281A308F49F759371818D54AB72463F8AD9_gshared (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 11132
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m8321A244C156224110895E18C9E64BAD1B7ECEEC_gshared (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
// Method Definition Index: 11133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m383091B8DD4CB1AF68757CD7C764B5F1FD78E801_gshared (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mAB8720211900E0C4ACB3DD10D073738BAF287E20_gshared (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_mBCA58F730095799BEC0722BE17F39B7FAC59BFA6(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m7CA6232FC225F73036CC2593E49AB9C36F72EF10(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC38C7EEAC5B53077CBA549B2E0EDA97FFD544BF1 Queue_1_GetEnumerator_m230220C69B73BC777609631B7018125BB2004367_gshared (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tC38C7EEAC5B53077CBA549B2E0EDA97FFD544BF1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m08CC4B8E23432C72FF28C4A57462840A1E220A95((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
// Method Definition Index: 11136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mE90326725D366E594FB6686F5506C2E8E1783A54_gshared (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tC38C7EEAC5B53077CBA549B2E0EDA97FFD544BF1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m08CC4B8E23432C72FF28C4A57462840A1E220A95((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tC38C7EEAC5B53077CBA549B2E0EDA97FFD544BF1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11137
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mA35B1AA6BF117D11D89FEE12D76BFDFF0B8753D2_gshared (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tC38C7EEAC5B53077CBA549B2E0EDA97FFD544BF1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m08CC4B8E23432C72FF28C4A57462840A1E220A95((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tC38C7EEAC5B53077CBA549B2E0EDA97FFD544BF1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F Queue_1_Dequeue_mE12FC803BAE32E0BF6832053CB33A11DBBF24093_gshared (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* V_1 = NULL;
	OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F V_2;
	memset((&V_2), 0, sizeof(V_2));
	OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m8EEAC868D312D4D3A77400AB1D49617279E4B996(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m7CA6232FC225F73036CC2593E49AB9C36F72EF10(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m5CF61F68D3CD9FD0C9ABFDBB259DF3497AEE2BBC_gshared (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* V_1 = NULL;
	OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F));
		return (bool)0;
	}

IL_001f:
	{
		OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F* L_4 = ___0_result;
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m7CA6232FC225F73036CC2593E49AB9C36F72EF10(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
// Method Definition Index: 11140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F Queue_1_Peek_mB604B79AF823D7C03DA3F27CA8C807048C5EFA6F_gshared (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m8EEAC868D312D4D3A77400AB1D49617279E4B996(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_mEE43093A81E0CE8AE5D1A5805E457788FE829AE7_gshared (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F));
		return (bool)0;
	}

IL_0011:
	{
		OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F* L_2 = ___0_result;
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F*)L_2 = L_6;
		return (bool)1;
	}
}
// Method Definition Index: 11142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* Queue_1_ToArray_mC8718F1539297C4FAF31C2A4889882BBB36D8649_gshared (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_1;
		L_1 = Array_Empty_TisOVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F_mA15765971F9ED8D147FD0656D435EEFB0FBCAC6E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_3 = (OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F*)(OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_12 = V_0;
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_16 = __this->____array;
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_17 = V_0;
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mBCA58F730095799BEC0722BE17F39B7FAC59BFA6_gshared (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* V_0 = NULL;
	Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* G_B6_0 = NULL;
	Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_1 = (OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F*)(OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_11 = V_0;
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_15 = __this->____array;
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_16 = V_0;
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m7CA6232FC225F73036CC2593E49AB9C36F72EF10_gshared (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_5 = ___0_index;
		int32_t L_6 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)L_6);
		return;
	}
}
// Method Definition Index: 11145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m8EEAC868D312D4D3A77400AB1D49617279E4B996_gshared (Queue_1_tCE546725C9027579510ED60014D868A69B9D3EC1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m3B1A01E37AF78AC402E6D909C972C725310C37B1_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_0;
		L_0 = Array_Empty_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_mBB6D93B6177B77D5D0DB6C917C5E06FDB4F5F200_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m604B474F22E225066E4B20D4978D379073B31832_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_6 = (OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87*)(OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m93EFA300D31BDFE65CA5692E859D9918F45CE51D_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mE9E3E861EB9A7CB5198D2207752A588E4B0E929C_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 11132
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m1262DAC5C511E921516C7944D4ACE10A1CABD3E3_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
// Method Definition Index: 11133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m41933D3BB808C26663FD89F827B9169DE26CBD1F_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m7E14B3B59FE321E1E42FE89D0BC66635A948F123_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m1954B6757DC74ADED133CEDCD27051BA8C64C8BD(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m21BE0E1F56306C29473727D3FE261E61904510D0(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560 Queue_1_GetEnumerator_m609EBA9693AAB1495DC3C2FB14089D93EC15474B_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m554A60C58B8FA3C07AC9ED65259F2540A22512C9((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
// Method Definition Index: 11136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2EAD05BF1EB86B70F4F35A5C8D34E176F2E5AE64_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m554A60C58B8FA3C07AC9ED65259F2540A22512C9((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11137
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mFA64E96618CD1B89900CDBB1FB3A1AB8EF8738A0_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m554A60C58B8FA3C07AC9ED65259F2540A22512C9((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F Queue_1_Dequeue_m3A29168D768746E5F6477A30C49A9100AC12EC75_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* V_1 = NULL;
	OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F V_2;
	memset((&V_2), 0, sizeof(V_2));
	OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mF88B2DB51CD55D2C025C86961FA95D67541AC896(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m21BE0E1F56306C29473727D3FE261E61904510D0(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mADA497159C20CF932E0033CAFC56D09E3283CCBC_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* V_1 = NULL;
	OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F));
		return (bool)0;
	}

IL_001f:
	{
		OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F* L_4 = ___0_result;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m21BE0E1F56306C29473727D3FE261E61904510D0(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
// Method Definition Index: 11140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F Queue_1_Peek_m98DEC1D002C6536D1251F4090205A68BF5DD6A19_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mF88B2DB51CD55D2C025C86961FA95D67541AC896(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m346B359E5F810E30B37C046F3CC1C8F2DC10EC20_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F));
		return (bool)0;
	}

IL_0011:
	{
		OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F* L_2 = ___0_result;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F*)L_2 = L_6;
		return (bool)1;
	}
}
// Method Definition Index: 11142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* Queue_1_ToArray_mAC64FD3C52A9EBF8E392EB8AE9D57AF0B03B47FD_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_1;
		L_1 = Array_Empty_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_mBB6D93B6177B77D5D0DB6C917C5E06FDB4F5F200_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_3 = (OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87*)(OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_12 = V_0;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_16 = __this->____array;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_17 = V_0;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m1954B6757DC74ADED133CEDCD27051BA8C64C8BD_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* V_0 = NULL;
	Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* G_B6_0 = NULL;
	Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_1 = (OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87*)(OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_11 = V_0;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_15 = __this->____array;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_16 = V_0;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m21BE0E1F56306C29473727D3FE261E61904510D0_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_5 = ___0_index;
		int32_t L_6 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)L_6);
		return;
	}
}
// Method Definition Index: 11145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mF88B2DB51CD55D2C025C86961FA95D67541AC896_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m55FB0BDDDBD29B76BE8E6E743B21DD26D6E4F4E4_gshared (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m8FDD9C089831C7940194DA60CA2E1969FEFF9DB4_gshared (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m90C602710FC9783B1D6DA988A2D291E592FBE2E6_gshared (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m40784873FC736A5D8352DC2E76FC2DDC390070F6_gshared (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 11132
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m782A85157C5B67F4C19D851FF84FF5BCEB69978B_gshared (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
// Method Definition Index: 11133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m1D3DF3EFD4164BD00A592079F5C2EC3A396DE35A_gshared (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m51CF9D36A7BD34DFA8CF476CCF7B22E8A4E626C3_gshared (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_mCA8E0FFC567DD0017C621A6B75027F8565CFA7E6(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		uint32_t L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint32_t)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mE01938A89F813B0CCF58E0D82D23363114A97B85(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891 Queue_1_GetEnumerator_m8B7B7C3BD711ABD06C5D30756D552489D173A7A7_gshared (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m883CA17DC68406094FEFA9AAD8C40161CA35D1F3((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
// Method Definition Index: 11136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m5685E7A12DE80A72117F12A7887758E9C0B68788_gshared (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m883CA17DC68406094FEFA9AAD8C40161CA35D1F3((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11137
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m0FE44563F84F3DC68BA9D00F81D9F78E76F5C559_gshared (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m883CA17DC68406094FEFA9AAD8C40161CA35D1F3((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Queue_1_Dequeue_m8A2F84DC9CFD109881590CBFA0EC18DF2136C556_gshared (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t G_B4_0 = 0;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m87C0DAA7B799FEF651F40F96BDB0A437E1D24CEE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mE01938A89F813B0CCF58E0D82D23363114A97B85(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m2074E2DF251C9324BB6EF1A3CD2D3F993E803D51_gshared (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, uint32_t* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		uint32_t* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(uint32_t));
		return (bool)0;
	}

IL_001f:
	{
		uint32_t* L_4 = ___0_result;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(uint32_t*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mE01938A89F813B0CCF58E0D82D23363114A97B85(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
// Method Definition Index: 11140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Queue_1_Peek_m6F1B03E72E4E3D23CC965CE849A9D09ABFF616D8_gshared (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m87C0DAA7B799FEF651F40F96BDB0A437E1D24CEE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m021FEAB780F0532926C8B609B8679AFFB6953229_gshared (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, uint32_t* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		uint32_t* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(uint32_t));
		return (bool)0;
	}

IL_0011:
	{
		uint32_t* L_2 = ___0_result;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(uint32_t*)L_2 = L_6;
		return (bool)1;
	}
}
// Method Definition Index: 11142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Queue_1_ToArray_m559AF0C0E111A34796930C61F395F697D51E04A0_gshared (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = __this->____array;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mCA8E0FFC567DD0017C621A6B75027F8565CFA7E6_gshared (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* G_B6_0 = NULL;
	Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = __this->____array;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mE01938A89F813B0CCF58E0D82D23363114A97B85_gshared (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_5 = ___0_index;
		int32_t L_6 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)L_6);
		return;
	}
}
// Method Definition Index: 11145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m87C0DAA7B799FEF651F40F96BDB0A437E1D24CEE_gshared (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mA15F3464308E1DD267ED3B9BB7D8849D2CA73F74_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0;
		L_0 = Array_Empty_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m696D3DE2D89DD613C8C0EB15BE627EABEF780255_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m9375CA372DEF97592A8B6DEF03FDEA6CB25E0C38_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mF408F7F539EA2D8DF7E25FF32A7DB433FFB9F67A_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m1DFF318A7B03A9CF52C8046BEB25CDC277E54153_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 11132
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mAED4BAEA3F8BC1EB27877E81C7F9B1F92F51219F_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
// Method Definition Index: 11133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mB967E36BE8529D823F1C31C15326F58669BF3FA5_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m1730DB68850554D215EBC943E35FEF5A7BF18CF1_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, uint64_t ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_mC07D7E49B2AD14B4CEC7ADC61CA686188482CBE8(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		uint64_t L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint64_t)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m0F1A4FB233A383C6DDE36AD9B4CCC7D9C3348E51(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF867D11BA433587AEF42D1129E057E0194CE8005 Queue_1_GetEnumerator_m08ABAC2FB94E3A5F4F66436AC6F3845425CAB58B_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tF867D11BA433587AEF42D1129E057E0194CE8005 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mBD296A73D8ED89428482D302A3826D6E15022540((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
// Method Definition Index: 11136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m727275AD47C6548337267FF17AD871D4D2FFE741_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tF867D11BA433587AEF42D1129E057E0194CE8005 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mBD296A73D8ED89428482D302A3826D6E15022540((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tF867D11BA433587AEF42D1129E057E0194CE8005 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11137
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m16D32E015A9438AD0533FD8D32ABCC6586893408_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tF867D11BA433587AEF42D1129E057E0194CE8005 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mBD296A73D8ED89428482D302A3826D6E15022540((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tF867D11BA433587AEF42D1129E057E0194CE8005 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Queue_1_Dequeue_m61058CB40F8E38F73E03279A288A436B288946DB_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	uint64_t V_2 = 0;
	uint64_t G_B4_0 = 0;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4AAA2D834C784A1C4EFD7E222DD1F9245A0058E6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint64_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m0F1A4FB233A383C6DDE36AD9B4CCC7D9C3348E51(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m8A17AC767D96A970CE64B9B0D9E0E1CD4FBBC91C_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, uint64_t* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	uint64_t V_2 = 0;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		uint64_t* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(uint64_t));
		return (bool)0;
	}

IL_001f:
	{
		uint64_t* L_4 = ___0_result;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint64_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(uint64_t*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m0F1A4FB233A383C6DDE36AD9B4CCC7D9C3348E51(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
// Method Definition Index: 11140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Queue_1_Peek_m32550E36F127732E7DA1F6CCCE0D5F092E3F2A38_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4AAA2D834C784A1C4EFD7E222DD1F9245A0058E6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint64_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m9A2859ACA05907843F0256845CFD97C39C7D7A10_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, uint64_t* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		uint64_t* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(uint64_t));
		return (bool)0;
	}

IL_0011:
	{
		uint64_t* L_2 = ___0_result;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint64_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(uint64_t*)L_2 = L_6;
		return (bool)1;
	}
}
// Method Definition Index: 11142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Queue_1_ToArray_mAA54FE99BBBBF185B90109AA4F1B9605156ED160_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1;
		L_1 = Array_Empty_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m696D3DE2D89DD613C8C0EB15BE627EABEF780255_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = __this->____array;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mC07D7E49B2AD14B4CEC7ADC61CA686188482CBE8_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* G_B6_0 = NULL;
	Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_15 = __this->____array;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m0F1A4FB233A383C6DDE36AD9B4CCC7D9C3348E51_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_5 = ___0_index;
		int32_t L_6 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)L_6);
		return;
	}
}
// Method Definition Index: 11145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4AAA2D834C784A1C4EFD7E222DD1F9245A0058E6_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m1C167CA495B3EC59A8BB0FF7F88424E11D625496_gshared (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_0;
		L_0 = Array_Empty_TisXrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625_mCDF2DCE710E3156A0B1E2F17660ECDCEE2E54E12_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m2500B84B59C5EE649EF97F2293F287A038D3701D_gshared (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_6 = (XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143*)(XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mDBF5BD406987AE0243D245B81B02B3CFCE52D949_gshared (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mC5912CA97E719F6EAB22CF93B529E8B0E52F9FAF_gshared (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 11132
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mD505F00AE70FBE596C6C4093CF93B4960CEE39FA_gshared (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
// Method Definition Index: 11133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m95BADB12700DACEE105FA40BED988EA9468F11CD_gshared (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mF250694CC60638F33066FAE4D1F96A24E276BD8E_gshared (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_mFCE11830691EE704B6C9AEA0D33B4651A6A7B4FF(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mBF7E5DB50CF76B5803945583EA2A08F40161B2F8(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t953926894837E4EE2AE3D4FD43D35C3EAD6E7D5E Queue_1_GetEnumerator_mED5408DE1850E176E03FDDC3C42953B03FFD2BBE_gshared (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t953926894837E4EE2AE3D4FD43D35C3EAD6E7D5E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m24E16001E60E71A352B1C632CE53E90FBF1FD665((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
// Method Definition Index: 11136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m522CF4DC560ABA0913AE9714D0CEE894FD4C611C_gshared (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t953926894837E4EE2AE3D4FD43D35C3EAD6E7D5E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m24E16001E60E71A352B1C632CE53E90FBF1FD665((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t953926894837E4EE2AE3D4FD43D35C3EAD6E7D5E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11137
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m7EB46E7CBB27238D395EA8572D3A36DCB9BD85F1_gshared (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t953926894837E4EE2AE3D4FD43D35C3EAD6E7D5E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m24E16001E60E71A352B1C632CE53E90FBF1FD665((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t953926894837E4EE2AE3D4FD43D35C3EAD6E7D5E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 Queue_1_Dequeue_m0F18892F5F6E2039B0F1BC69BDD6E7D4625FCD94_gshared (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* V_1 = NULL;
	XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 V_2;
	memset((&V_2), 0, sizeof(V_2));
	XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mCD6EA7FD7DE0A2CF28F470B509985AB8A95C535B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mBF7E5DB50CF76B5803945583EA2A08F40161B2F8(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mD09E8FDEA918EC09A505369232D21069DB15695E_gshared (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* V_1 = NULL;
	XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625));
		return (bool)0;
	}

IL_001f:
	{
		XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625* L_4 = ___0_result;
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mBF7E5DB50CF76B5803945583EA2A08F40161B2F8(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
// Method Definition Index: 11140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 Queue_1_Peek_m139800B7380C009B1739449648671A3C4CC3B549_gshared (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mCD6EA7FD7DE0A2CF28F470B509985AB8A95C535B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m672417525EAAA3565CB8A89CF63B678362F060CA_gshared (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625));
		return (bool)0;
	}

IL_0011:
	{
		XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625* L_2 = ___0_result;
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625*)L_2 = L_6;
		return (bool)1;
	}
}
// Method Definition Index: 11142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* Queue_1_ToArray_m1A921074FF5923F5F5FCA7DF742E37297F699D74_gshared (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_1;
		L_1 = Array_Empty_TisXrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625_mCDF2DCE710E3156A0B1E2F17660ECDCEE2E54E12_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_3 = (XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143*)(XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_12 = V_0;
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_16 = __this->____array;
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_17 = V_0;
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mFCE11830691EE704B6C9AEA0D33B4651A6A7B4FF_gshared (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* V_0 = NULL;
	Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* G_B6_0 = NULL;
	Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_1 = (XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143*)(XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_11 = V_0;
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_15 = __this->____array;
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_16 = V_0;
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mBF7E5DB50CF76B5803945583EA2A08F40161B2F8_gshared (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_5 = ___0_index;
		int32_t L_6 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)L_6);
		return;
	}
}
// Method Definition Index: 11145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mCD6EA7FD7DE0A2CF28F470B509985AB8A95C535B_gshared (Queue_1_t6E9DDBBC5805052E86CD65727AB1459B2A18238D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m1437114CDC49136515E8EDDF0D770364E0F3EA67_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0;
		L_0 = Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m11C42D9546F5F11DF318235A97C3478958DE9555_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m02DF2B39305B32F97D425178F5054CE9830BFB10_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mCB6B8823EEEFFEC9C3ED12506CEE130A6DB7AEE9_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 11132
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m7399BCFE5F893D371CC3CDF389727B01EE0421D7_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11 = __this->____array;
		int32_t L_12 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return;
	}
}
// Method Definition Index: 11133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m3DBDE5E03C6C52F1CBB9E4D93E590A8CC6D6EAB2_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m16F75E528EE6527E8B9E76AE7D7E455D5476C606_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m1549601D804B1A2FA09822B8FF6018C374086954(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		Il2CppSharedGenericObject* L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Il2CppSharedGenericObject*)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m097052B8552DED4A35D537D3AEB84510090C9E70(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1 Queue_1_GetEnumerator_m931CF5C152723DE6DD0786DF3D5606A59C1BB1BF_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m37472EFA972090AD3A35A3715208772B2F3F6339((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
// Method Definition Index: 11136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2EC91485BA815E5429D3028BF5E4FCB425A30A54_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m37472EFA972090AD3A35A3715208772B2F3F6339((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11137
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mFE2846F2C99D73CD09293F03A64D9A14150610D4_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m37472EFA972090AD3A35A3715208772B2F3F6339((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Queue_1_Dequeue_m1ECED0A4B619428F2561AA3D053E73A097A10193_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_1 = NULL;
	Il2CppSharedGenericObject* V_2 = NULL;
	Il2CppSharedGenericObject* G_B4_0 = NULL;
	Il2CppSharedGenericObject* G_B3_0 = NULL;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m6EF406DB0A9F8B868374ABDF966B343F281FEE1F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Il2CppSharedGenericObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Il2CppSharedGenericObject*)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m097052B8552DED4A35D537D3AEB84510090C9E70(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m319CD24AE527B5C46266E649B3A5EF07DEC30618_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, Il2CppSharedGenericObject** ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_1 = NULL;
	Il2CppSharedGenericObject* V_2 = NULL;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		Il2CppSharedGenericObject** L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}

IL_001f:
	{
		Il2CppSharedGenericObject** L_4 = ___0_result;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Il2CppSharedGenericObject* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(Il2CppSharedGenericObject**)L_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_4, (void*)L_8);
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_9 = V_1;
		int32_t L_10 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_11 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (Il2CppSharedGenericObject*)L_11);
	}

IL_0043:
	{
		int32_t* L_12 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m097052B8552DED4A35D537D3AEB84510090C9E70(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_13 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return (bool)1;
	}
}
// Method Definition Index: 11140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Queue_1_Peek_m5B2A289CDE4717E92A0BD9DAC12B70F42E833B93_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m6EF406DB0A9F8B868374ABDF966B343F281FEE1F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Il2CppSharedGenericObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_mF81C93E369F7FA8068EDAEDC682B48646FBE72D7_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, Il2CppSharedGenericObject** ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Il2CppSharedGenericObject** L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}

IL_0011:
	{
		Il2CppSharedGenericObject** L_2 = ___0_result;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Il2CppSharedGenericObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(Il2CppSharedGenericObject**)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_2, (void*)L_6);
		return (bool)1;
	}
}
// Method Definition Index: 11142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Queue_1_ToArray_m371E1FC76DD63BE6BA88DC598EA21757CE693440_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1;
		L_1 = Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_16 = __this->____array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_17 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m1549601D804B1A2FA09822B8FF6018C374086954_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* G_B6_0 = NULL;
	Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_15 = __this->____array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_16 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m097052B8552DED4A35D537D3AEB84510090C9E70_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_5 = ___0_index;
		int32_t L_6 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)L_6);
		return;
	}
}
// Method Definition Index: 11145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m6EF406DB0A9F8B868374ABDF966B343F281FEE1F_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m657BFA58DFD6AB5B1B4B69AA6E963CD569637EAD_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0;
		L_0 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m2A01859D57AB64CDCAECDF68089FD2236759976C_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m8E5ACA13B4BA41CC3230927ACEB3CF68820A8A05_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 11132
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mF3F6BB3C909C58BB9407AA3FFA131CC73E1287AA_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_1)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_2 = __this->____head;
		int32_t L_3 = __this->____tail;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0036;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____array;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, L_5, L_6, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->____array;
		int32_t L_8 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____array;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		int32_t L_11 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_10, L_11)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____array;
		int32_t L_13 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_12, 0, L_13, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
// Method Definition Index: 11133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m8ACB04592D3C4936139A90C1CE9B708BA3F7D47F_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m9159DC6A9BC5528A3444329C408F4101004CF652_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_item : &___0_item), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		NullCheck(L_15);
		il2cpp_codegen_memcpy((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)), L_17, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), (void**)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)), (void*)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_GetEnumerator_m6C532F76552CCD7154B74816F66DA3CE367BD90D_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C L_0 = alloca(SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
	//<source_info:<no-source>:1>
	{
		memset(L_0, 0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB((Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		return;
	}
}
// Method Definition Index: 11136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m926D620709AEF33612E061F359920FA5A7F33D2F_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C L_0 = alloca(SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
	//<source_info:<no-source>:1>
	{
		memset(L_0, 0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB((Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), L_0);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 11137
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mD615C747AA1C683E461CA820560E002427466EB8_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C L_0 = alloca(SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
	//<source_info:<no-source>:1>
	{
		memset(L_0, 0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB((Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), L_0);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 11138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Dequeue_m80C152387A53656EC4AEF450BCBA9087DC51EEE3_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	const Il2CppFullySharedGenericAny L_10 = L_6;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	memset(V_2, 0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	Il2CppFullySharedGenericAny G_B4_0 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	memset(G_B4_0, 0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	memset(G_B3_0, 0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		bool L_7;
		L_7 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_7)
		{
			il2cpp_codegen_memcpy(G_B4_0, L_6, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
			goto IL_003a;
		}
		il2cpp_codegen_memcpy(G_B3_0, L_6, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = V_1;
		int32_t L_9 = V_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		il2cpp_codegen_memcpy(L_10, V_2, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		NullCheck(L_8);
		il2cpp_codegen_memcpy((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), L_10, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), (void**)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), (void*)L_10);
		il2cpp_codegen_memcpy(G_B4_0, G_B3_0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	}

IL_003a:
	{
		int32_t* L_11 = (int32_t*)(&__this->____head);
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_12 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, G_B4_0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		return;
	}
}
// Method Definition Index: 11139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mF090CA69829E519F9EDC2C3D4E9B271DF8D74125_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny* ___0_result, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	const Il2CppFullySharedGenericAny L_12 = L_8;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	memset(V_2, 0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		return (bool)0;
	}

IL_001f:
	{
		Il2CppFullySharedGenericAny* L_4 = ___0_result;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_4, L_8, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_4, (void*)L_8);
		bool L_9;
		L_9 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = V_1;
		int32_t L_11 = V_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		il2cpp_codegen_memcpy(L_12, V_2, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
	}

IL_0043:
	{
		int32_t* L_13 = (int32_t*)(&__this->____head);
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_14 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		int32_t L_15 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_15, 1));
		return (bool)1;
	}
}
// Method Definition Index: 11140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Peek_mC16DCF76985FF167BAB542F92D9AA03C1E210D8C_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		return;
	}
}
// Method Definition Index: 11141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_mA759DB49FBC988FD410603976DE2E9C0C693E500_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny* ___0_result, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		return (bool)0;
	}

IL_0011:
	{
		Il2CppFullySharedGenericAny* L_2 = ___0_result;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_2, L_6, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_2, (void*)L_6);
		return (bool)1;
	}
}
// Method Definition Index: 11142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Queue_1_ToArray_m6E3371A83B60239A394CB7E49FFB3380C75C5E52_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = __this->____array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5368BB1720798CB76A62CDC47D91036C4B07BBEB_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* G_B6_0 = NULL;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = __this->____array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_5 = ___0_index;
		int32_t L_6 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)L_6);
		return;
	}
}
// Method Definition Index: 11145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4A409F6A724BB2356563FCEA1FD83322718EE8C9_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mC7F9F2D87D2ED57A426F4EC586D6CB01F3EB4A8B_gshared (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_0;
		L_0 = Array_Empty_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mE6CAE32FAFB50C35AA03F64061D6BECCC6387DC4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m003C2D14829654C48623F5093982B957F2C90F8B_gshared (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_6 = (__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*)(__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m19D67A0033827458FE8B93A6A857656BC3F6409C_gshared (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mB00437CD1E24B2EEBA601FF240BF81FB30822ACF_gshared (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 11132
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mDE56946A6557203CDA6494C6DB843DF860D92E7E_gshared (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
// Method Definition Index: 11133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mF67FCE8A9D25924EB1864BABC2EDA210D64D3836_gshared (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m15867D6D1A5B2F3BDB630C45B4871807FD744854_gshared (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m1DD22487659AF159BBBF2090DA8F315CEA0E0615(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		int32_t L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m1237534B4617E7BAD2A6F22C61815607D1204A70(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t66CCD173CBD8BCAA92159D6D3D274883396BAC63 Queue_1_GetEnumerator_m0CB27A64BD0AFD7AB75E20C25CCA42F89E33E502_gshared (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t66CCD173CBD8BCAA92159D6D3D274883396BAC63 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEE7F72B11C85D6D696426BC6AD65423854934256((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
// Method Definition Index: 11136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mF929409801875770E3CDF8320DABB643FC19BF6E_gshared (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t66CCD173CBD8BCAA92159D6D3D274883396BAC63 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEE7F72B11C85D6D696426BC6AD65423854934256((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t66CCD173CBD8BCAA92159D6D3D274883396BAC63 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11137
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mA629D19F3527321E3CFF0A2ECFAE3E5FCD288203_gshared (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t66CCD173CBD8BCAA92159D6D3D274883396BAC63 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEE7F72B11C85D6D696426BC6AD65423854934256((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t66CCD173CBD8BCAA92159D6D3D274883396BAC63 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Dequeue_m5C585F15F266D41E7CE6F7E85ABF78158290483A_gshared (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mCF87BB78269684B556E69BEDC9F2E4AAB708D3C4(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m1237534B4617E7BAD2A6F22C61815607D1204A70(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mFAF41013AA6A18DADF5DD447A4168CB1B925DE50_gshared (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, int32_t* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		int32_t* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(int32_t));
		return (bool)0;
	}

IL_001f:
	{
		int32_t* L_4 = ___0_result;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(int32_t*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m1237534B4617E7BAD2A6F22C61815607D1204A70(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
// Method Definition Index: 11140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Peek_m78AE9E7368BE5670A7EF78C54C27F5B1C4BD1CF9_gshared (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mCF87BB78269684B556E69BEDC9F2E4AAB708D3C4(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m5A0776BE95CBB6B6DDAFAED8D13820F00036B192_gshared (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, int32_t* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(int32_t));
		return (bool)0;
	}

IL_0011:
	{
		int32_t* L_2 = ___0_result;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(int32_t*)L_2 = L_6;
		return (bool)1;
	}
}
// Method Definition Index: 11142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* Queue_1_ToArray_m7F945A7B20A5FC525A691800977D6B3F6ED153D6_gshared (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_1;
		L_1 = Array_Empty_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mE6CAE32FAFB50C35AA03F64061D6BECCC6387DC4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_3 = (__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*)(__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_12 = V_0;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_16 = __this->____array;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_17 = V_0;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m1DD22487659AF159BBBF2090DA8F315CEA0E0615_gshared (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* V_0 = NULL;
	Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* G_B6_0 = NULL;
	Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_1 = (__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*)(__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_11 = V_0;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_15 = __this->____array;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_16 = V_0;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m1237534B4617E7BAD2A6F22C61815607D1204A70_gshared (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_5 = ___0_index;
		int32_t L_6 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)L_6);
		return;
	}
}
// Method Definition Index: 11145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mCF87BB78269684B556E69BEDC9F2E4AAB708D3C4_gshared (Queue_1_t0796BD42E4EF4401C2391BFD32AC890FA7293CC7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m5793B48CD425E5D7A93313DF986956BBAA8B65C7_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_0;
		L_0 = Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m98E586DB678570DC3A40CF92702290F1519727DC_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_6 = (EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)(EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m08F50B5D83CD07085F9B86C829170F37FE7EF037_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mC4119DAB01098BD9FAC558B758E91E4FD2283F21_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 11132
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mA1E2EE278988F339DC3EC2FA17F909904DE3C974_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_11 = __this->____array;
		int32_t L_12 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return;
	}
}
// Method Definition Index: 11133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mD31AA840A14A0863D14662B3432C6F244F3ED007_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mBF44A4060F486104A2FC16D28D0BDBD08BC83491_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 Queue_1_GetEnumerator_m6811DC2FBA9AB8EEA103F351BF62C1CC4510F9C2_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
// Method Definition Index: 11136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m72D68C500677FCC7AD2E98F73EE2F4C101BFFBB3_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11137
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mF93C321C59477A3AD51B3070041130177696ED5F_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 Queue_1_Dequeue_m90F123DA1976DFBC4D8B331B07B1EB833A2E4509_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* V_1 = NULL;
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2));
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mCDFB396BA530EF7830B97D035C1C4FE84410C2FF_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* V_1 = NULL;
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2));
		return (bool)0;
	}

IL_001f:
	{
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* L_4 = ___0_result;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2*)L_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2*)L_4)->___m_Event), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2*)L_4)->___m_Panel), (void*)NULL);
		#endif
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_9 = V_1;
		int32_t L_10 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2));
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_11 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2)L_11);
	}

IL_0043:
	{
		int32_t* L_12 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_13 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return (bool)1;
	}
}
// Method Definition Index: 11140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 Queue_1_Peek_m1C5E26653158385CA6B819CCC6C0B2E54FE805F5_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m438D67BB89E5C9DE5D0B0F6D7C954F77F7C4D694_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2));
		return (bool)0;
	}

IL_0011:
	{
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* L_2 = ___0_result;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2*)L_2)->___m_Event), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2*)L_2)->___m_Panel), (void*)NULL);
		#endif
		return (bool)1;
	}
}
// Method Definition Index: 11142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* Queue_1_ToArray_m09076A35A3E2BDFFFB21BCF0AA9E6AAE78901DE9_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1;
		L_1 = Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = (EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)(EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_12 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_16 = __this->____array;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_17 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* V_0 = NULL;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* G_B6_0 = NULL;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1 = (EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)(EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_11 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_15 = __this->____array;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_16 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_5 = ___0_index;
		int32_t L_6 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)L_6);
		return;
	}
}
// Method Definition Index: 11145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m629F7A92C3BD69EA79C9C9F30B6B6E1F6D6AEF32_gshared (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_0;
		L_0 = Array_Empty_TisMessage_t439BAAD871295B67F7429E4BF40147801DD52B57_mA22DA965439DF044FE84C3C2767D5AD575EE673C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m24A76E33278C90A2769D7C4B964D5493F7B1F7F9_gshared (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_6 = (MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634*)(MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mCC943ED7428ADCBAA60F4662F70B708EE9CD41D8_gshared (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m81A726DA2F3D7612DC8DB9C17C6556BB0B0C0224_gshared (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 11132
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m82FA216F9F23956D346E51C83BC99E1A8EA6A5A9_gshared (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_11 = __this->____array;
		int32_t L_12 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return;
	}
}
// Method Definition Index: 11133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mBA80A676124D6E15FF26E65887268119CF1858B5_gshared (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m85E995EC33F151111111D65632C49A2E651A6570_gshared (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, Message_t439BAAD871295B67F7429E4BF40147801DD52B57 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m5477BCACE220FFF290E29D1CF9C90B24AAF1FA24(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		Message_t439BAAD871295B67F7429E4BF40147801DD52B57 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Message_t439BAAD871295B67F7429E4BF40147801DD52B57)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mE505756DF3DA2F63E9F23C6D7189D2D26950AFAF(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t5F9D134918C937C57A401D460B77F23B58753A66 Queue_1_GetEnumerator_mE92A23CDC062D2940BEDE8915E2FBF177B8A6ECE_gshared (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t5F9D134918C937C57A401D460B77F23B58753A66 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4BD29223947D55F6AFCCC39112F1BE611A90BCAD((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
// Method Definition Index: 11136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28D74A8904AA78B96CAA9908E242328B5BB34B7B_gshared (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t5F9D134918C937C57A401D460B77F23B58753A66 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4BD29223947D55F6AFCCC39112F1BE611A90BCAD((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t5F9D134918C937C57A401D460B77F23B58753A66 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11137
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mA7DF8645015583BD040D2F1DC3322779EE52747D_gshared (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t5F9D134918C937C57A401D460B77F23B58753A66 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4BD29223947D55F6AFCCC39112F1BE611A90BCAD((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t5F9D134918C937C57A401D460B77F23B58753A66 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t439BAAD871295B67F7429E4BF40147801DD52B57 Queue_1_Dequeue_m21BC7A398D4EF542BA523009C3FE5309ECF09947_gshared (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* V_1 = NULL;
	Message_t439BAAD871295B67F7429E4BF40147801DD52B57 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Message_t439BAAD871295B67F7429E4BF40147801DD52B57 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Message_t439BAAD871295B67F7429E4BF40147801DD52B57 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m8D89D1F84AAABF2F72952AC152030BF99F1F63D1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Message_t439BAAD871295B67F7429E4BF40147801DD52B57 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Message_t439BAAD871295B67F7429E4BF40147801DD52B57));
		Message_t439BAAD871295B67F7429E4BF40147801DD52B57 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Message_t439BAAD871295B67F7429E4BF40147801DD52B57)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mE505756DF3DA2F63E9F23C6D7189D2D26950AFAF(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m2821F28B24E54384985C0691EF05835B19C86E29_gshared (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, Message_t439BAAD871295B67F7429E4BF40147801DD52B57* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* V_1 = NULL;
	Message_t439BAAD871295B67F7429E4BF40147801DD52B57 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		Message_t439BAAD871295B67F7429E4BF40147801DD52B57* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(Message_t439BAAD871295B67F7429E4BF40147801DD52B57));
		return (bool)0;
	}

IL_001f:
	{
		Message_t439BAAD871295B67F7429E4BF40147801DD52B57* L_4 = ___0_result;
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Message_t439BAAD871295B67F7429E4BF40147801DD52B57 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(Message_t439BAAD871295B67F7429E4BF40147801DD52B57*)L_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((Message_t439BAAD871295B67F7429E4BF40147801DD52B57*)L_4)->___text), (void*)NULL);
	}
	{
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_9 = V_1;
		int32_t L_10 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Message_t439BAAD871295B67F7429E4BF40147801DD52B57));
		Message_t439BAAD871295B67F7429E4BF40147801DD52B57 L_11 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (Message_t439BAAD871295B67F7429E4BF40147801DD52B57)L_11);
	}

IL_0043:
	{
		int32_t* L_12 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mE505756DF3DA2F63E9F23C6D7189D2D26950AFAF(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_13 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return (bool)1;
	}
}
// Method Definition Index: 11140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t439BAAD871295B67F7429E4BF40147801DD52B57 Queue_1_Peek_m351C66848D75EF156280A5F0FF0A3B815E58297E_gshared (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m8D89D1F84AAABF2F72952AC152030BF99F1F63D1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Message_t439BAAD871295B67F7429E4BF40147801DD52B57 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m60FE201C4818D4A27C219AD8B371A6C6AE87E6B0_gshared (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, Message_t439BAAD871295B67F7429E4BF40147801DD52B57* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Message_t439BAAD871295B67F7429E4BF40147801DD52B57* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(Message_t439BAAD871295B67F7429E4BF40147801DD52B57));
		return (bool)0;
	}

IL_0011:
	{
		Message_t439BAAD871295B67F7429E4BF40147801DD52B57* L_2 = ___0_result;
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Message_t439BAAD871295B67F7429E4BF40147801DD52B57 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(Message_t439BAAD871295B67F7429E4BF40147801DD52B57*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Message_t439BAAD871295B67F7429E4BF40147801DD52B57*)L_2)->___text), (void*)NULL);
		return (bool)1;
	}
}
// Method Definition Index: 11142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* Queue_1_ToArray_m83B381C5CFA423E41813F02A6F7E6001A2CADA7D_gshared (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_1;
		L_1 = Array_Empty_TisMessage_t439BAAD871295B67F7429E4BF40147801DD52B57_mA22DA965439DF044FE84C3C2767D5AD575EE673C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_3 = (MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634*)(MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_12 = V_0;
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_16 = __this->____array;
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_17 = V_0;
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5477BCACE220FFF290E29D1CF9C90B24AAF1FA24_gshared (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* V_0 = NULL;
	Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* G_B6_0 = NULL;
	Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_1 = (MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634*)(MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_11 = V_0;
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_15 = __this->____array;
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_16 = V_0;
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mE505756DF3DA2F63E9F23C6D7189D2D26950AFAF_gshared (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_5 = ___0_index;
		int32_t L_6 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)L_6);
		return;
	}
}
// Method Definition Index: 11145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m8D89D1F84AAABF2F72952AC152030BF99F1F63D1_gshared (Queue_1_tF63C182741E5857CD6EE616201DC3EB9945391DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m305184BC0CC0E383E8001B97DA4AEEA7D0CE1B2C_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_0;
		L_0 = Array_Empty_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mE74D581FD3F8DF5CFA50A5133DB5A6F7D16B99CD_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mBB24ED246DAAA77C2092ED6A2D2C77DC7BE23B5B_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_6 = (CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)(CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m0C22CA69FAA76A44B8107DCD23A3DD3327E63C3C_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mB520097DA7393AA0006340BA528707A82362AC87_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 11132
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m6DB16A4E0D88DC23DD547CFFA96F8E3C5CEBADD4_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_11 = __this->____array;
		int32_t L_12 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return;
	}
}
// Method Definition Index: 11133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mF3012F58E434209795ED06755BE79FAB1E66A38C_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m4415CE3E59110C01F3959FF645AEB9D0A12D5A82_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m225DAA2133CC2108D2F16C7EF47CA7368AE5E4E7(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mF12756790A3C38E07F95BA2B920AE67A930962A8(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 Queue_1_GetEnumerator_m38AA4049D7E2398FD0D7490310D72C80155D9C88_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m076E60AA8F25CE906A72B6409796A0A68BEB99CB((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
// Method Definition Index: 11136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m81EB5E36D293C068CC238E2CAB700B4E8810DA26_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m076E60AA8F25CE906A72B6409796A0A68BEB99CB((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11137
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m0A5DEDAEF2B64E21F4E9E0B8EBE60C7889972167_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m076E60AA8F25CE906A72B6409796A0A68BEB99CB((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 Queue_1_Dequeue_m464B10B3191E4D7B20542EB8FA1A47DEF1027D84_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* V_1 = NULL;
	CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4A8990345304F038BC2D5F79896D4BED8CC2CD82(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08));
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mF12756790A3C38E07F95BA2B920AE67A930962A8(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m9D810CF8962C7A0A22AE14281C9C69340B3C0A64_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* V_1 = NULL;
	CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08));
		return (bool)0;
	}

IL_001f:
	{
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08* L_4 = ___0_result;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08*)L_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08*)L_4)->___callback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08*)L_4)->___userData), (void*)NULL);
		#endif
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_9 = V_1;
		int32_t L_10 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08));
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_11 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08)L_11);
	}

IL_0043:
	{
		int32_t* L_12 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mF12756790A3C38E07F95BA2B920AE67A930962A8(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_13 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return (bool)1;
	}
}
// Method Definition Index: 11140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 Queue_1_Peek_m2DE035C032FAA2FA38A1716B4BFA0D3D362ABA4A_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4A8990345304F038BC2D5F79896D4BED8CC2CD82(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m357476993A9FFA086425C89D3DF7AA0EF94EFE37_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08));
		return (bool)0;
	}

IL_0011:
	{
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08* L_2 = ___0_result;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08*)L_2)->___callback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08*)L_2)->___userData), (void*)NULL);
		#endif
		return (bool)1;
	}
}
// Method Definition Index: 11142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* Queue_1_ToArray_mB908DFB1E373CF2C238A1C581E6E614B483E862F_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_1;
		L_1 = Array_Empty_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mE74D581FD3F8DF5CFA50A5133DB5A6F7D16B99CD_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_3 = (CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)(CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_12 = V_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_16 = __this->____array;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_17 = V_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m225DAA2133CC2108D2F16C7EF47CA7368AE5E4E7_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* V_0 = NULL;
	Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* G_B6_0 = NULL;
	Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_1 = (CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)(CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_11 = V_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_15 = __this->____array;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_16 = V_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mF12756790A3C38E07F95BA2B920AE67A930962A8_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_5 = ___0_index;
		int32_t L_6 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)L_6);
		return;
	}
}
// Method Definition Index: 11145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4A8990345304F038BC2D5F79896D4BED8CC2CD82_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m508AEBC8C3284CEF41ABEDB7003BEB7884CB89A0_gshared (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_0;
		L_0 = Array_Empty_TisFilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D_mABFB44322689CDCDD2C7904395F4273AB26BF2D9_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m61C5830FA03B6E31D4B7F9A4127B41701DAF1B5E_gshared (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_6 = (FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF*)(FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m06F0CF89EA9391C6772A843CB891FC7F2EC51CA4_gshared (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m63197E14CDA5B0A30084F23E8CE139E9F1C49DA6_gshared (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 11132
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m31FDF780AE7CD313F3E63DD402340A026E330A57_gshared (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
// Method Definition Index: 11133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mD95D69187E8B989598B913D130D1E255001A0936_gshared (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mB049C6A9E2FA0B63F394EF71CA24BA8D0D7F50AD_gshared (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m5891EF38866A270B84A6AF3FF143035B240B81B6(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m75E36FE4E41C7486949A203D23187EF5CB7E9043(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t5B8395897EB8C9EC372988A559E1E3B7278A1F85 Queue_1_GetEnumerator_m252C9C70844792DAC16A7C7CC4D804280C904CB0_gshared (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t5B8395897EB8C9EC372988A559E1E3B7278A1F85 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m426E619AF4553ED8C13873814B167F0BAA1640B7((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
// Method Definition Index: 11136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3E16B8FAC27C2ACF1955243A74A99BB7EDC24620_gshared (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t5B8395897EB8C9EC372988A559E1E3B7278A1F85 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m426E619AF4553ED8C13873814B167F0BAA1640B7((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t5B8395897EB8C9EC372988A559E1E3B7278A1F85 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11137
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mC03564F6B4A9154112FF83BFC6C1D0D5535A1725_gshared (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t5B8395897EB8C9EC372988A559E1E3B7278A1F85 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m426E619AF4553ED8C13873814B167F0BAA1640B7((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t5B8395897EB8C9EC372988A559E1E3B7278A1F85 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D Queue_1_Dequeue_m2DB046AD3165D602247B948057E73B8C5E73C8FA_gshared (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* V_1 = NULL;
	FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D V_2;
	memset((&V_2), 0, sizeof(V_2));
	FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mDA6DF7C0279172C16A8931C4AF1485086E0FAF52(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m75E36FE4E41C7486949A203D23187EF5CB7E9043(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m30757A55D097982BE781C4BB2AEC7A378C2383FC_gshared (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* V_1 = NULL;
	FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D));
		return (bool)0;
	}

IL_001f:
	{
		FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D* L_4 = ___0_result;
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m75E36FE4E41C7486949A203D23187EF5CB7E9043(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
// Method Definition Index: 11140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D Queue_1_Peek_mED093E729DD3B1BB441288F6513B86DC34FEB768_gshared (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mDA6DF7C0279172C16A8931C4AF1485086E0FAF52(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m6FF27AF0CE43A493F3FD45191A81D54EEB6EEAB1_gshared (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D));
		return (bool)0;
	}

IL_0011:
	{
		FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D* L_2 = ___0_result;
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D*)L_2 = L_6;
		return (bool)1;
	}
}
// Method Definition Index: 11142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* Queue_1_ToArray_m4A35F4AAB3996787242A1F11E2F451B417CA856C_gshared (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_1;
		L_1 = Array_Empty_TisFilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D_mABFB44322689CDCDD2C7904395F4273AB26BF2D9_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_3 = (FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF*)(FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_12 = V_0;
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_16 = __this->____array;
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_17 = V_0;
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5891EF38866A270B84A6AF3FF143035B240B81B6_gshared (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* V_0 = NULL;
	Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* G_B6_0 = NULL;
	Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_1 = (FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF*)(FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_11 = V_0;
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_15 = __this->____array;
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_16 = V_0;
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m75E36FE4E41C7486949A203D23187EF5CB7E9043_gshared (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_5 = ___0_index;
		int32_t L_6 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)L_6);
		return;
	}
}
// Method Definition Index: 11145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mDA6DF7C0279172C16A8931C4AF1485086E0FAF52_gshared (Queue_1_t6AB108954A049ABADCB808BB564BE5FA65E7058F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mFEF7A8319CF830195A3AE9EE8914DD4DE254D19A_gshared (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_0;
		L_0 = Array_Empty_TisFilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03_mBDE28068FF66192DC2A98763302EFE1E164D3752_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m2F636591063FEC2314D1CDCA26EC1244D74A4D85_gshared (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_6 = (FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D*)(FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m2FA8ED6D358E01D99B7D6222CF4C0C36B8747937_gshared (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mD8AD44FD4511995920E6E694D40E8D252EAB6F4F_gshared (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 11132
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m102114F63AC3CBA15A9D5CC2E80850E74943A982_gshared (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
// Method Definition Index: 11133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mE6CBD7776E47F7F78BE756725EB1C56253F75C1D_gshared (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mACE2A1A83385B561C8122C483B8E8692BF0136C7_gshared (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m54079CE60AF0776B120BA5FD6BEDAEE9F33F83B7(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m86715A35017EE6BABFD8DEDEF6BBAA78576ED448(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2D6982B5591A20B910A6D2ABC90C0317B2BD131F Queue_1_GetEnumerator_mB5D671B3D93E079BDD4B4FF13E96ECD62AE11911_gshared (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t2D6982B5591A20B910A6D2ABC90C0317B2BD131F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m62E35BD0ACCF0A69A52E2D0BD3B83E6501601647((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
// Method Definition Index: 11136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mA96B36D1C93AE6719363E2AD25095886DA6F5B14_gshared (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t2D6982B5591A20B910A6D2ABC90C0317B2BD131F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m62E35BD0ACCF0A69A52E2D0BD3B83E6501601647((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t2D6982B5591A20B910A6D2ABC90C0317B2BD131F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11137
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mF0637F94B5E0139D8BD595A19987C36E18F0FEE9_gshared (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t2D6982B5591A20B910A6D2ABC90C0317B2BD131F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m62E35BD0ACCF0A69A52E2D0BD3B83E6501601647((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t2D6982B5591A20B910A6D2ABC90C0317B2BD131F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 Queue_1_Dequeue_m61A34529CBBA4C0CED0E12FC9D4830C426C34F03_gshared (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* V_1 = NULL;
	FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m1DCB6540B75B454A5B9D4558DE61235E5D818923(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m86715A35017EE6BABFD8DEDEF6BBAA78576ED448(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mFBF0B05FB2F74D3E4CA84FEE8F84CE3BA3B91E12_gshared (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* V_1 = NULL;
	FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03));
		return (bool)0;
	}

IL_001f:
	{
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_4 = ___0_result;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m86715A35017EE6BABFD8DEDEF6BBAA78576ED448(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
// Method Definition Index: 11140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 Queue_1_Peek_m381B94A0CD256A2C08C0B5D9695E6D31FEC75B4C_gshared (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m1DCB6540B75B454A5B9D4558DE61235E5D818923(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m7EFD1DC3CC70F9FA170B1F4FA5A4B98CDC5EFAF7_gshared (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03));
		return (bool)0;
	}

IL_0011:
	{
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_2 = ___0_result;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03*)L_2 = L_6;
		return (bool)1;
	}
}
// Method Definition Index: 11142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* Queue_1_ToArray_mD8F1478ADE25272FAD574B9F0AFF489221529834_gshared (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_1;
		L_1 = Array_Empty_TisFilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03_mBDE28068FF66192DC2A98763302EFE1E164D3752_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_3 = (FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D*)(FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_12 = V_0;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_16 = __this->____array;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_17 = V_0;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m54079CE60AF0776B120BA5FD6BEDAEE9F33F83B7_gshared (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* V_0 = NULL;
	Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* G_B6_0 = NULL;
	Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_1 = (FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D*)(FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_11 = V_0;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_15 = __this->____array;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_16 = V_0;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m86715A35017EE6BABFD8DEDEF6BBAA78576ED448_gshared (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_5 = ___0_index;
		int32_t L_6 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)L_6);
		return;
	}
}
// Method Definition Index: 11145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m1DCB6540B75B454A5B9D4558DE61235E5D818923_gshared (Queue_1_tB4A87391C8531FBF743156FBDFC71A622547F67F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mA4CD013A3824D1C3DAEE128A225677702940DE4A_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_0;
		L_0 = Array_Empty_TisMetrics_t865BF0741490865117A79705F58784742D6F02B8_m396274F1DFAC369F038810A8DF3B16AF20CF1870_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mFA27C9E8167D623B97FDAE1315336CB3CF90681D_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_6 = (MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6*)(MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m06EFBE93C3626E3C47EDCECD2BB2E30FC7BDBF32_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m82A225EF5020B299562B30AA1F63F1C39F35480C_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 11132
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m66EC02E7DA88098B0048DC127F6524B23FC706A1_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
// Method Definition Index: 11133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mD7DB1516BBF5561EE1FA0CF2E2BFA76439A565A6_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m78917B1C4599482982DBF04FFB7D27B267CA20B9_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m9D06B9463E38BC052080BA46E1A018AA97C51FB5(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Metrics_t865BF0741490865117A79705F58784742D6F02B8)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mBD112EEDCF9D50EE813327B1A682137EBDB1441D(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1693CCB05921830A8C445721C4EF5E22CD16361C Queue_1_GetEnumerator_mADE313876F8DFB2CD8A5AF874F331A68EA29EBA2_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t1693CCB05921830A8C445721C4EF5E22CD16361C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mBEA90511FBBA5D59BA40DB6A2CB8E8E750E2CE6D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
// Method Definition Index: 11136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23B2FBCE7EA30FF3122BB3F281D4A444AFBBC4FC_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t1693CCB05921830A8C445721C4EF5E22CD16361C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mBEA90511FBBA5D59BA40DB6A2CB8E8E750E2CE6D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t1693CCB05921830A8C445721C4EF5E22CD16361C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11137
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m57BA4DDE8DADEFF4B9209584F931FB0658414590_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t1693CCB05921830A8C445721C4EF5E22CD16361C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mBEA90511FBBA5D59BA40DB6A2CB8E8E750E2CE6D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t1693CCB05921830A8C445721C4EF5E22CD16361C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Metrics_t865BF0741490865117A79705F58784742D6F02B8 Queue_1_Dequeue_m7B87F8885BF1C80BE135901415778DC39D9DDD2D_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* V_1 = NULL;
	Metrics_t865BF0741490865117A79705F58784742D6F02B8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Metrics_t865BF0741490865117A79705F58784742D6F02B8 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m1F757A43C24F636EDDEAAE6990F47066A0641E11(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mBD112EEDCF9D50EE813327B1A682137EBDB1441D(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m29AA163116C14908EFB6BD874DBBFFDFCB35AA0A_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* V_1 = NULL;
	Metrics_t865BF0741490865117A79705F58784742D6F02B8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		Metrics_t865BF0741490865117A79705F58784742D6F02B8* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(Metrics_t865BF0741490865117A79705F58784742D6F02B8));
		return (bool)0;
	}

IL_001f:
	{
		Metrics_t865BF0741490865117A79705F58784742D6F02B8* L_4 = ___0_result;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(Metrics_t865BF0741490865117A79705F58784742D6F02B8*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mBD112EEDCF9D50EE813327B1A682137EBDB1441D(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
// Method Definition Index: 11140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Metrics_t865BF0741490865117A79705F58784742D6F02B8 Queue_1_Peek_m5F27A5FFB5DE652228CCAF183C2CDAFA28F2BAF5_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m1F757A43C24F636EDDEAAE6990F47066A0641E11(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m6EC7A8E6FA4C9F9F2157668FD6DAAE76DC36D0E5_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Metrics_t865BF0741490865117A79705F58784742D6F02B8* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(Metrics_t865BF0741490865117A79705F58784742D6F02B8));
		return (bool)0;
	}

IL_0011:
	{
		Metrics_t865BF0741490865117A79705F58784742D6F02B8* L_2 = ___0_result;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(Metrics_t865BF0741490865117A79705F58784742D6F02B8*)L_2 = L_6;
		return (bool)1;
	}
}
// Method Definition Index: 11142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* Queue_1_ToArray_m23E66F0D55919A7431DAB6CD2A734CF6A15DFAC4_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_1;
		L_1 = Array_Empty_TisMetrics_t865BF0741490865117A79705F58784742D6F02B8_m396274F1DFAC369F038810A8DF3B16AF20CF1870_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_3 = (MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6*)(MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_12 = V_0;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_16 = __this->____array;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_17 = V_0;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9D06B9463E38BC052080BA46E1A018AA97C51FB5_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* V_0 = NULL;
	Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* G_B6_0 = NULL;
	Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_1 = (MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6*)(MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_11 = V_0;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_15 = __this->____array;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_16 = V_0;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mBD112EEDCF9D50EE813327B1A682137EBDB1441D_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_5 = ___0_index;
		int32_t L_6 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)L_6);
		return;
	}
}
// Method Definition Index: 11145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m1F757A43C24F636EDDEAAE6990F47066A0641E11_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m2D4256A7BC32DBC6728EA2B14CFFBFD2C53A5B81_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_0;
		L_0 = Array_Empty_TisUnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71_m68042300D637F8905FBC692EB76AD9D6AA328FC1_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m33116247A314D0442F50B766CF50C6A5FDEEA0BB_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_6 = (UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4*)(UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m608B99E53CF724EF9E92EE03079A6F11894C3CCD_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m57ADB13AB6E4E1C80E2CCC5ED2E3A5273F44EFB4_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 11132
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m78877C3E0216C4018FD5F22A0E07E94B8306C870_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
// Method Definition Index: 11133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mFE76E1D4916DECEAEF6DC86D61A6EC635F60C399_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m542BF8C3EB868D61C73A96DA240A9B5A335A8CAC_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m294E03E4DA2287FB6157DA9B798E70C5B23F97C2(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m0937989004EB8AB26BE756B015A9316BF932D87A(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t48FFA0B7AB0F72C79D913567E39C4E34EF6D5F72 Queue_1_GetEnumerator_m9C26DE1A1FA80199AC52AE6179C3FE00AC17657F_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t48FFA0B7AB0F72C79D913567E39C4E34EF6D5F72 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4585014F21FD533727C1ED76BB3D9A005DD4EB48((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
// Method Definition Index: 11136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mA68CF47A74F907D206AFE2F9145B670F46EF1EEA_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t48FFA0B7AB0F72C79D913567E39C4E34EF6D5F72 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4585014F21FD533727C1ED76BB3D9A005DD4EB48((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t48FFA0B7AB0F72C79D913567E39C4E34EF6D5F72 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11137
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m69202A584D317CB2FF1CD6C4121D0C0BE5D91B6C_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t48FFA0B7AB0F72C79D913567E39C4E34EF6D5F72 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4585014F21FD533727C1ED76BB3D9A005DD4EB48((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t48FFA0B7AB0F72C79D913567E39C4E34EF6D5F72 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 Queue_1_Dequeue_m20754BCCEC4154CF598981A7C875E3287A06390A_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* V_1 = NULL;
	UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m8A42A30BC718D934ED90CCF2CC47DBFF4675D44C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m0937989004EB8AB26BE756B015A9316BF932D87A(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mDD31193218AF23BEA70CD7357E72482D562ACA39_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* V_1 = NULL;
	UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71));
		return (bool)0;
	}

IL_001f:
	{
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71* L_4 = ___0_result;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m0937989004EB8AB26BE756B015A9316BF932D87A(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
// Method Definition Index: 11140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 Queue_1_Peek_m5E7A380F3AFDB97C88FB7FBE2F9CF5BADDB303BE_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m8A42A30BC718D934ED90CCF2CC47DBFF4675D44C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_mFBE44D23A0AACFF48F2350A37106A14DE0A4A5CD_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71));
		return (bool)0;
	}

IL_0011:
	{
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71* L_2 = ___0_result;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71*)L_2 = L_6;
		return (bool)1;
	}
}
// Method Definition Index: 11142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* Queue_1_ToArray_m4747446C14C756BF60364F6EF3B0048F48282ACE_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_1;
		L_1 = Array_Empty_TisUnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71_m68042300D637F8905FBC692EB76AD9D6AA328FC1_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_3 = (UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4*)(UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_12 = V_0;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_16 = __this->____array;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_17 = V_0;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m294E03E4DA2287FB6157DA9B798E70C5B23F97C2_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* V_0 = NULL;
	Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* G_B6_0 = NULL;
	Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_1 = (UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4*)(UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_11 = V_0;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_15 = __this->____array;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_16 = V_0;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m0937989004EB8AB26BE756B015A9316BF932D87A_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_5 = ___0_index;
		int32_t L_6 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)L_6);
		return;
	}
}
// Method Definition Index: 11145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m8A42A30BC718D934ED90CCF2CC47DBFF4675D44C_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 74437
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR int32_t RadixSortBatchPrefixSumJob_1_AtomicIncrement_m4176AE255919577013BEEA632E809CBB40F3B62F_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_counter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD2D9DC546B80A05000B107C8E09FAA4BED3B2144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_AsRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF01FDF0EACCFED286E93933B693A2BE11A6A8946_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_0 = ___0_counter;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD2D9DC546B80A05000B107C8E09FAA4BED3B2144_inline(L_0, NativeArrayUnsafeUtility_GetUnsafePtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD2D9DC546B80A05000B107C8E09FAA4BED3B2144_RuntimeMethod_var);
		int32_t* L_2;
		L_2 = UnsafeUtility_AsRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF01FDF0EACCFED286E93933B693A2BE11A6A8946_inline(L_1, UnsafeUtility_AsRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF01FDF0EACCFED286E93933B693A2BE11A6A8946_RuntimeMethod_var);
		int32_t L_3;
		L_3 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 74438
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR int32_t RadixSortBatchPrefixSumJob_1_JobIndexPrefixSum_m84FE82568F9EC0F33E541BAFB8DBD19DEC020514_gshared (RadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_sum, int32_t ___1_i, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_003c;
	}

IL_0004:
	{
		int32_t L_0 = ___1_i;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)256)))));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_2 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indices);
		int32_t L_3 = V_1;
		int32_t L_4 = ___0_sum;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_2)->___m_Buffer, L_3, (L_4));
		int32_t L_5 = ___0_sum;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_6 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___buckets);
		int32_t L_7 = V_1;
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_6)->___m_Buffer, L_7);
		___0_sum = ((int32_t)il2cpp_codegen_add(L_5, L_8));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_9 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___buckets);
		int32_t L_10 = V_1;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_9)->___m_Buffer, L_10, (0));
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003c:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->___jobsCount;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_14 = ___0_sum;
		return L_14;
	}
}
IL2CPP_EXTERN_C  int32_t RadixSortBatchPrefixSumJob_1_JobIndexPrefixSum_m84FE82568F9EC0F33E541BAFB8DBD19DEC020514_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_sum, int32_t ___1_i, const RuntimeMethod* method)
{
	RadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530>(__this);
	int32_t _returnValue;
	_returnValue = RadixSortBatchPrefixSumJob_1_JobIndexPrefixSum_m84FE82568F9EC0F33E541BAFB8DBD19DEC020514(_thisAdjusted, ___0_sum, ___1_i, method);
	return _returnValue;
}
// Method Definition Index: 74439
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void RadixSortBatchPrefixSumJob_1_Execute_mA78B963B3F0E2BB984306D5941DB9E622B31192A_gshared (RadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = ((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)16)));
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)16)));
		V_1 = 0;
		V_2 = L_1;
		goto IL_001b;
	}

IL_000e:
	{
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4;
		L_4 = RadixSortBatchPrefixSumJob_1_JobIndexPrefixSum_m84FE82568F9EC0F33E541BAFB8DBD19DEC020514(__this, L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_1 = L_4;
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001b:
	{
		int32_t L_6 = V_2;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_8 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indicesSum);
		int32_t L_9 = ___0_index;
		int32_t L_10 = V_1;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_8)->___m_Buffer, L_9, (L_10));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_11 = __this->___counter;
		int32_t L_12;
		L_12 = RadixSortBatchPrefixSumJob_1_AtomicIncrement_m4176AE255919577013BEEA632E809CBB40F3B62F(L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_00f5;
		}
	}
	{
		V_3 = 0;
		int32_t L_13 = __this->___radix;
		int32_t L_14 = __this->___signBitRadixIndex;
		if ((((int32_t)L_13) == ((int32_t)L_14)))
		{
			goto IL_0083;
		}
	}
	{
		V_4 = 0;
		goto IL_007b;
	}

IL_0053:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_15 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indicesSum);
		int32_t L_16 = V_4;
		int32_t L_17;
		L_17 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_15)->___m_Buffer, L_16);
		V_5 = L_17;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_18 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indicesSum);
		int32_t L_19 = V_4;
		int32_t L_20 = V_3;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_18)->___m_Buffer, L_19, (L_20));
		int32_t L_21 = V_3;
		int32_t L_22 = V_5;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, L_22));
		int32_t L_23 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_4;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)16))))
		{
			goto IL_0053;
		}
	}
	{
		goto IL_00e8;
	}

IL_0083:
	{
		V_6 = 8;
		goto IL_00b0;
	}

IL_0088:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_25 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indicesSum);
		int32_t L_26 = V_6;
		int32_t L_27;
		L_27 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_25)->___m_Buffer, L_26);
		V_7 = L_27;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_28 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indicesSum);
		int32_t L_29 = V_6;
		int32_t L_30 = V_3;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_28)->___m_Buffer, L_29, (L_30));
		int32_t L_31 = V_3;
		int32_t L_32 = V_7;
		V_3 = ((int32_t)il2cpp_codegen_add(L_31, L_32));
		int32_t L_33 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b0:
	{
		int32_t L_34 = V_6;
		if ((((int32_t)L_34) < ((int32_t)((int32_t)16))))
		{
			goto IL_0088;
		}
	}
	{
		V_8 = 0;
		goto IL_00e3;
	}

IL_00bb:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_35 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indicesSum);
		int32_t L_36 = V_8;
		int32_t L_37;
		L_37 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_35)->___m_Buffer, L_36);
		V_9 = L_37;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_38 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indicesSum);
		int32_t L_39 = V_8;
		int32_t L_40 = V_3;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_38)->___m_Buffer, L_39, (L_40));
		int32_t L_41 = V_3;
		int32_t L_42 = V_9;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, L_42));
		int32_t L_43 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00e3:
	{
		int32_t L_44 = V_8;
		if ((((int32_t)L_44) < ((int32_t)8)))
		{
			goto IL_00bb;
		}
	}

IL_00e8:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_45 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___counter);
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_45)->___m_Buffer, 0, (0));
	}

IL_00f5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void RadixSortBatchPrefixSumJob_1_Execute_mA78B963B3F0E2BB984306D5941DB9E622B31192A_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method)
{
	RadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530>(__this);
	RadixSortBatchPrefixSumJob_1_Execute_mA78B963B3F0E2BB984306D5941DB9E622B31192A(_thisAdjusted, ___0_index, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 74437
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR int32_t RadixSortBatchPrefixSumJob_1_AtomicIncrement_mE5B6D6C23E3A09431E1528BA8084A165B13D9A98_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_counter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD2D9DC546B80A05000B107C8E09FAA4BED3B2144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_AsRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF01FDF0EACCFED286E93933B693A2BE11A6A8946_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_0 = ___0_counter;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD2D9DC546B80A05000B107C8E09FAA4BED3B2144_inline(L_0, NativeArrayUnsafeUtility_GetUnsafePtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD2D9DC546B80A05000B107C8E09FAA4BED3B2144_RuntimeMethod_var);
		int32_t* L_2;
		L_2 = UnsafeUtility_AsRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF01FDF0EACCFED286E93933B693A2BE11A6A8946_inline(L_1, UnsafeUtility_AsRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF01FDF0EACCFED286E93933B693A2BE11A6A8946_RuntimeMethod_var);
		int32_t L_3;
		L_3 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 74438
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR int32_t RadixSortBatchPrefixSumJob_1_JobIndexPrefixSum_mCCD76D6B3B104F205739A21AE7FD43F594488F1F_gshared (RadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_sum, int32_t ___1_i, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_003c;
	}

IL_0004:
	{
		int32_t L_0 = ___1_i;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)256)))));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_2 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indices);
		int32_t L_3 = V_1;
		int32_t L_4 = ___0_sum;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_2)->___m_Buffer, L_3, (L_4));
		int32_t L_5 = ___0_sum;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_6 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___buckets);
		int32_t L_7 = V_1;
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_6)->___m_Buffer, L_7);
		___0_sum = ((int32_t)il2cpp_codegen_add(L_5, L_8));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_9 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___buckets);
		int32_t L_10 = V_1;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_9)->___m_Buffer, L_10, (0));
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003c:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->___jobsCount;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_14 = ___0_sum;
		return L_14;
	}
}
IL2CPP_EXTERN_C  int32_t RadixSortBatchPrefixSumJob_1_JobIndexPrefixSum_mCCD76D6B3B104F205739A21AE7FD43F594488F1F_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_sum, int32_t ___1_i, const RuntimeMethod* method)
{
	RadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16>(__this);
	int32_t _returnValue;
	_returnValue = RadixSortBatchPrefixSumJob_1_JobIndexPrefixSum_mCCD76D6B3B104F205739A21AE7FD43F594488F1F(_thisAdjusted, ___0_sum, ___1_i, method);
	return _returnValue;
}
// Method Definition Index: 74439
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void RadixSortBatchPrefixSumJob_1_Execute_m71DF9A259A4A7F5463EB48D94570811F2FC1D649_gshared (RadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = ((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)16)));
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)16)));
		V_1 = 0;
		V_2 = L_1;
		goto IL_001b;
	}

IL_000e:
	{
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4;
		L_4 = RadixSortBatchPrefixSumJob_1_JobIndexPrefixSum_mCCD76D6B3B104F205739A21AE7FD43F594488F1F(__this, L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_1 = L_4;
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001b:
	{
		int32_t L_6 = V_2;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_8 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indicesSum);
		int32_t L_9 = ___0_index;
		int32_t L_10 = V_1;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_8)->___m_Buffer, L_9, (L_10));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_11 = __this->___counter;
		int32_t L_12;
		L_12 = RadixSortBatchPrefixSumJob_1_AtomicIncrement_mE5B6D6C23E3A09431E1528BA8084A165B13D9A98(L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_00f5;
		}
	}
	{
		V_3 = 0;
		int32_t L_13 = __this->___radix;
		int32_t L_14 = __this->___signBitRadixIndex;
		if ((((int32_t)L_13) == ((int32_t)L_14)))
		{
			goto IL_0083;
		}
	}
	{
		V_4 = 0;
		goto IL_007b;
	}

IL_0053:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_15 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indicesSum);
		int32_t L_16 = V_4;
		int32_t L_17;
		L_17 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_15)->___m_Buffer, L_16);
		V_5 = L_17;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_18 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indicesSum);
		int32_t L_19 = V_4;
		int32_t L_20 = V_3;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_18)->___m_Buffer, L_19, (L_20));
		int32_t L_21 = V_3;
		int32_t L_22 = V_5;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, L_22));
		int32_t L_23 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_4;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)16))))
		{
			goto IL_0053;
		}
	}
	{
		goto IL_00e8;
	}

IL_0083:
	{
		V_6 = 8;
		goto IL_00b0;
	}

IL_0088:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_25 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indicesSum);
		int32_t L_26 = V_6;
		int32_t L_27;
		L_27 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_25)->___m_Buffer, L_26);
		V_7 = L_27;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_28 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indicesSum);
		int32_t L_29 = V_6;
		int32_t L_30 = V_3;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_28)->___m_Buffer, L_29, (L_30));
		int32_t L_31 = V_3;
		int32_t L_32 = V_7;
		V_3 = ((int32_t)il2cpp_codegen_add(L_31, L_32));
		int32_t L_33 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b0:
	{
		int32_t L_34 = V_6;
		if ((((int32_t)L_34) < ((int32_t)((int32_t)16))))
		{
			goto IL_0088;
		}
	}
	{
		V_8 = 0;
		goto IL_00e3;
	}

IL_00bb:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_35 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indicesSum);
		int32_t L_36 = V_8;
		int32_t L_37;
		L_37 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_35)->___m_Buffer, L_36);
		V_9 = L_37;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_38 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indicesSum);
		int32_t L_39 = V_8;
		int32_t L_40 = V_3;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_38)->___m_Buffer, L_39, (L_40));
		int32_t L_41 = V_3;
		int32_t L_42 = V_9;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, L_42));
		int32_t L_43 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00e3:
	{
		int32_t L_44 = V_8;
		if ((((int32_t)L_44) < ((int32_t)8)))
		{
			goto IL_00bb;
		}
	}

IL_00e8:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_45 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___counter);
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_45)->___m_Buffer, 0, (0));
	}

IL_00f5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void RadixSortBatchPrefixSumJob_1_Execute_m71DF9A259A4A7F5463EB48D94570811F2FC1D649_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method)
{
	RadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16>(__this);
	RadixSortBatchPrefixSumJob_1_Execute_m71DF9A259A4A7F5463EB48D94570811F2FC1D649(_thisAdjusted, ___0_index, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 74437
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR int32_t RadixSortBatchPrefixSumJob_1_AtomicIncrement_m8EC5C7D3F99DC23EACE0C397BDF89AF029A717B0_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_counter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD2D9DC546B80A05000B107C8E09FAA4BED3B2144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_AsRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF01FDF0EACCFED286E93933B693A2BE11A6A8946_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_0 = ___0_counter;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD2D9DC546B80A05000B107C8E09FAA4BED3B2144_inline(L_0, NativeArrayUnsafeUtility_GetUnsafePtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD2D9DC546B80A05000B107C8E09FAA4BED3B2144_RuntimeMethod_var);
		int32_t* L_2;
		L_2 = UnsafeUtility_AsRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF01FDF0EACCFED286E93933B693A2BE11A6A8946_inline(L_1, UnsafeUtility_AsRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF01FDF0EACCFED286E93933B693A2BE11A6A8946_RuntimeMethod_var);
		int32_t L_3;
		L_3 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 74438
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR int32_t RadixSortBatchPrefixSumJob_1_JobIndexPrefixSum_m3F8F577B4377811997803EDFF4C6D9A87EC74B72_gshared (RadixSortBatchPrefixSumJob_1_t38091553B87D103286CED2992CA2392E2C1DF80C* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_sum, int32_t ___1_i, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_003c;
	}

IL_0004:
	{
		int32_t L_0 = ___1_i;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)256)))));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_2 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indices);
		int32_t L_3 = V_1;
		int32_t L_4 = ___0_sum;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_2)->___m_Buffer, L_3, (L_4));
		int32_t L_5 = ___0_sum;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_6 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___buckets);
		int32_t L_7 = V_1;
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_6)->___m_Buffer, L_7);
		___0_sum = ((int32_t)il2cpp_codegen_add(L_5, L_8));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_9 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___buckets);
		int32_t L_10 = V_1;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_9)->___m_Buffer, L_10, (0));
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003c:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->___jobsCount;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_14 = ___0_sum;
		return L_14;
	}
}
IL2CPP_EXTERN_C  int32_t RadixSortBatchPrefixSumJob_1_JobIndexPrefixSum_m3F8F577B4377811997803EDFF4C6D9A87EC74B72_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_sum, int32_t ___1_i, const RuntimeMethod* method)
{
	RadixSortBatchPrefixSumJob_1_t38091553B87D103286CED2992CA2392E2C1DF80C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RadixSortBatchPrefixSumJob_1_t38091553B87D103286CED2992CA2392E2C1DF80C>(__this);
	int32_t _returnValue;
	_returnValue = RadixSortBatchPrefixSumJob_1_JobIndexPrefixSum_m3F8F577B4377811997803EDFF4C6D9A87EC74B72(_thisAdjusted, ___0_sum, ___1_i, method);
	return _returnValue;
}
// Method Definition Index: 74439
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void RadixSortBatchPrefixSumJob_1_Execute_m6BB597EA07C1D4D81CE758241465B89316327E25_gshared (RadixSortBatchPrefixSumJob_1_t38091553B87D103286CED2992CA2392E2C1DF80C* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = ((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)16)));
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)16)));
		V_1 = 0;
		V_2 = L_1;
		goto IL_001b;
	}

IL_000e:
	{
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4;
		L_4 = ((  int32_t (*) (RadixSortBatchPrefixSumJob_1_t38091553B87D103286CED2992CA2392E2C1DF80C* IL2CPP_PARAMETER_RESTRICT, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(__this, L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_1 = L_4;
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001b:
	{
		int32_t L_6 = V_2;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_8 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indicesSum);
		int32_t L_9 = ___0_index;
		int32_t L_10 = V_1;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_8)->___m_Buffer, L_9, (L_10));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_11 = __this->___counter;
		int32_t L_12;
		L_12 = ((  int32_t (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_00f5;
		}
	}
	{
		V_3 = 0;
		int32_t L_13 = __this->___radix;
		int32_t L_14 = __this->___signBitRadixIndex;
		if ((((int32_t)L_13) == ((int32_t)L_14)))
		{
			goto IL_0083;
		}
	}
	{
		V_4 = 0;
		goto IL_007b;
	}

IL_0053:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_15 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indicesSum);
		int32_t L_16 = V_4;
		int32_t L_17;
		L_17 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_15)->___m_Buffer, L_16);
		V_5 = L_17;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_18 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indicesSum);
		int32_t L_19 = V_4;
		int32_t L_20 = V_3;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_18)->___m_Buffer, L_19, (L_20));
		int32_t L_21 = V_3;
		int32_t L_22 = V_5;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, L_22));
		int32_t L_23 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_4;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)16))))
		{
			goto IL_0053;
		}
	}
	{
		goto IL_00e8;
	}

IL_0083:
	{
		V_6 = 8;
		goto IL_00b0;
	}

IL_0088:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_25 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indicesSum);
		int32_t L_26 = V_6;
		int32_t L_27;
		L_27 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_25)->___m_Buffer, L_26);
		V_7 = L_27;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_28 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indicesSum);
		int32_t L_29 = V_6;
		int32_t L_30 = V_3;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_28)->___m_Buffer, L_29, (L_30));
		int32_t L_31 = V_3;
		int32_t L_32 = V_7;
		V_3 = ((int32_t)il2cpp_codegen_add(L_31, L_32));
		int32_t L_33 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b0:
	{
		int32_t L_34 = V_6;
		if ((((int32_t)L_34) < ((int32_t)((int32_t)16))))
		{
			goto IL_0088;
		}
	}
	{
		V_8 = 0;
		goto IL_00e3;
	}

IL_00bb:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_35 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indicesSum);
		int32_t L_36 = V_8;
		int32_t L_37;
		L_37 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_35)->___m_Buffer, L_36);
		V_9 = L_37;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_38 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indicesSum);
		int32_t L_39 = V_8;
		int32_t L_40 = V_3;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_38)->___m_Buffer, L_39, (L_40));
		int32_t L_41 = V_3;
		int32_t L_42 = V_9;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, L_42));
		int32_t L_43 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00e3:
	{
		int32_t L_44 = V_8;
		if ((((int32_t)L_44) < ((int32_t)8)))
		{
			goto IL_00bb;
		}
	}

IL_00e8:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_45 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___counter);
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_45)->___m_Buffer, 0, (0));
	}

IL_00f5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void RadixSortBatchPrefixSumJob_1_Execute_m6BB597EA07C1D4D81CE758241465B89316327E25_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method)
{
	RadixSortBatchPrefixSumJob_1_t38091553B87D103286CED2992CA2392E2C1DF80C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RadixSortBatchPrefixSumJob_1_t38091553B87D103286CED2992CA2392E2C1DF80C>(__this);
	RadixSortBatchPrefixSumJob_1_Execute_m6BB597EA07C1D4D81CE758241465B89316327E25(_thisAdjusted, ___0_index, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 74436
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void RadixSortBucketCountJob_1_Execute_mE69747B2B60DA38802FCF96889C1CD7DDC1E3726_gshared (RadixSortBucketCountJob_1_tC9AD33E5E839CE12B0A1C15F622220EEC637D787* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* V_6 = NULL;
	int32_t V_7 = 0;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___batchSize;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, L_1));
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___batchSize;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_4 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___array);
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_4)->___m_Length);
		int32_t L_6;
		L_6 = math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline(((int32_t)il2cpp_codegen_add(L_2, L_3)), L_5, NULL);
		V_1 = L_6;
		int32_t L_7 = ___0_index;
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)256)));
		int32_t L_8 = __this->___valueType;
		if (L_8)
		{
			goto IL_0088;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_9 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___array);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_10;
		L_10 = NativeArray_1_Reinterpret_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m06F913AC64211C19A5F35EB50F3F45685095D3D1(L_9, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_3 = L_10;
		int32_t L_11 = V_0;
		V_4 = L_11;
		goto IL_0082;
	}

IL_0044:
	{
		int32_t L_12 = V_4;
		int32_t L_13;
		L_13 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_3))->___m_Buffer, L_12);
		int32_t L_14 = __this->___radix;
		int32_t L_15;
		L_15 = ParallelSortExtensions_GetBucketIndex_m59A772ACE45802E9CB4E3F3779CE15335FDF1725(L_13, L_14, NULL);
		V_5 = L_15;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_16 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___buckets);
		V_6 = L_16;
		int32_t L_17 = V_2;
		int32_t L_18 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_19 = V_6;
		int32_t L_20 = V_7;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_21 = V_6;
		int32_t L_22 = V_7;
		int32_t L_23;
		L_23 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_21)->___m_Buffer, L_22);
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_19)->___m_Buffer, L_20, (((int32_t)il2cpp_codegen_add(L_23, 1))));
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0082:
	{
		int32_t L_25 = V_4;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0044;
		}
	}
	{
		return;
	}

IL_0088:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_27 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___array);
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_28;
		L_28 = NativeArray_1_Reinterpret_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF718C58AF6A48CF95C20FFFAAD3B3870884C4619(L_27, 8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_8 = L_28;
		int32_t L_29 = V_0;
		V_9 = L_29;
		goto IL_00d9;
	}

IL_009b:
	{
		int32_t L_30 = V_9;
		uint64_t L_31;
		L_31 = IL2CPP_NATIVEARRAY_GET_ITEM(uint64_t, ((&V_8))->___m_Buffer, L_30);
		int32_t L_32 = __this->___radix;
		int32_t L_33;
		L_33 = ParallelSortExtensions_GetBucketIndex_mE4EAA948DCD4F163066FAA8A5B2B1D0F09775E01(L_31, L_32, NULL);
		V_10 = L_33;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_34 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___buckets);
		V_6 = L_34;
		int32_t L_35 = V_2;
		int32_t L_36 = V_10;
		V_7 = ((int32_t)il2cpp_codegen_add(L_35, L_36));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_37 = V_6;
		int32_t L_38 = V_7;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_39 = V_6;
		int32_t L_40 = V_7;
		int32_t L_41;
		L_41 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_39)->___m_Buffer, L_40);
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_37)->___m_Buffer, L_38, (((int32_t)il2cpp_codegen_add(L_41, 1))));
		int32_t L_42 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00d9:
	{
		int32_t L_43 = V_9;
		int32_t L_44 = V_1;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_009b;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void RadixSortBucketCountJob_1_Execute_mE69747B2B60DA38802FCF96889C1CD7DDC1E3726_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method)
{
	RadixSortBucketCountJob_1_tC9AD33E5E839CE12B0A1C15F622220EEC637D787* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RadixSortBucketCountJob_1_tC9AD33E5E839CE12B0A1C15F622220EEC637D787>(__this);
	RadixSortBucketCountJob_1_Execute_mE69747B2B60DA38802FCF96889C1CD7DDC1E3726(_thisAdjusted, ___0_index, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 74436
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void RadixSortBucketCountJob_1_Execute_m9860F3A459E28F8FF1880B9974294C3E35614701_gshared (RadixSortBucketCountJob_1_tEAF81C7A5326AA523C221928ACEF94EE5E373D5F* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* V_6 = NULL;
	int32_t V_7 = 0;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___batchSize;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, L_1));
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___batchSize;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_4 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&__this->___array);
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_4)->___m_Length);
		int32_t L_6;
		L_6 = math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline(((int32_t)il2cpp_codegen_add(L_2, L_3)), L_5, NULL);
		V_1 = L_6;
		int32_t L_7 = ___0_index;
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)256)));
		int32_t L_8 = __this->___valueType;
		if (L_8)
		{
			goto IL_0088;
		}
	}
	{
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_9 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&__this->___array);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_10;
		L_10 = NativeArray_1_Reinterpret_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6AA2337D311BABD06E7416B028FD039D11211F9A(L_9, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_3 = L_10;
		int32_t L_11 = V_0;
		V_4 = L_11;
		goto IL_0082;
	}

IL_0044:
	{
		int32_t L_12 = V_4;
		int32_t L_13;
		L_13 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_3))->___m_Buffer, L_12);
		int32_t L_14 = __this->___radix;
		int32_t L_15;
		L_15 = ParallelSortExtensions_GetBucketIndex_m59A772ACE45802E9CB4E3F3779CE15335FDF1725(L_13, L_14, NULL);
		V_5 = L_15;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_16 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___buckets);
		V_6 = L_16;
		int32_t L_17 = V_2;
		int32_t L_18 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_19 = V_6;
		int32_t L_20 = V_7;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_21 = V_6;
		int32_t L_22 = V_7;
		int32_t L_23;
		L_23 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_21)->___m_Buffer, L_22);
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_19)->___m_Buffer, L_20, (((int32_t)il2cpp_codegen_add(L_23, 1))));
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0082:
	{
		int32_t L_25 = V_4;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0044;
		}
	}
	{
		return;
	}

IL_0088:
	{
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_27 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&__this->___array);
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_28;
		L_28 = NativeArray_1_Reinterpret_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m3DFE0C9BE1F74820586102B27F73A072206D136C(L_27, 8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_8 = L_28;
		int32_t L_29 = V_0;
		V_9 = L_29;
		goto IL_00d9;
	}

IL_009b:
	{
		int32_t L_30 = V_9;
		uint64_t L_31;
		L_31 = IL2CPP_NATIVEARRAY_GET_ITEM(uint64_t, ((&V_8))->___m_Buffer, L_30);
		int32_t L_32 = __this->___radix;
		int32_t L_33;
		L_33 = ParallelSortExtensions_GetBucketIndex_mE4EAA948DCD4F163066FAA8A5B2B1D0F09775E01(L_31, L_32, NULL);
		V_10 = L_33;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_34 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___buckets);
		V_6 = L_34;
		int32_t L_35 = V_2;
		int32_t L_36 = V_10;
		V_7 = ((int32_t)il2cpp_codegen_add(L_35, L_36));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_37 = V_6;
		int32_t L_38 = V_7;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_39 = V_6;
		int32_t L_40 = V_7;
		int32_t L_41;
		L_41 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_39)->___m_Buffer, L_40);
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_37)->___m_Buffer, L_38, (((int32_t)il2cpp_codegen_add(L_41, 1))));
		int32_t L_42 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00d9:
	{
		int32_t L_43 = V_9;
		int32_t L_44 = V_1;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_009b;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void RadixSortBucketCountJob_1_Execute_m9860F3A459E28F8FF1880B9974294C3E35614701_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method)
{
	RadixSortBucketCountJob_1_tEAF81C7A5326AA523C221928ACEF94EE5E373D5F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RadixSortBucketCountJob_1_tEAF81C7A5326AA523C221928ACEF94EE5E373D5F>(__this);
	RadixSortBucketCountJob_1_Execute_m9860F3A459E28F8FF1880B9974294C3E35614701(_thisAdjusted, ___0_index, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 74436
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void RadixSortBucketCountJob_1_Execute_m62F3E9EF52E5494D26B073D448AEB45984989328_gshared (RadixSortBucketCountJob_1_t8CE90196DB677E4A0C7AC9264121BF2D87493A93* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* V_6 = NULL;
	int32_t V_7 = 0;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___batchSize;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, L_1));
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___batchSize;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_4 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___array);
		int32_t L_5;
		L_5 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		int32_t L_6;
		L_6 = math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline(((int32_t)il2cpp_codegen_add(L_2, L_3)), L_5, NULL);
		V_1 = L_6;
		int32_t L_7 = ___0_index;
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)256)));
		int32_t L_8 = __this->___valueType;
		if (L_8)
		{
			goto IL_0088;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_9 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___array);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_10;
		L_10 = ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(L_9, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_3 = L_10;
		int32_t L_11 = V_0;
		V_4 = L_11;
		goto IL_0082;
	}

IL_0044:
	{
		int32_t L_12 = V_4;
		int32_t L_13;
		L_13 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_3))->___m_Buffer, L_12);
		int32_t L_14 = __this->___radix;
		int32_t L_15;
		L_15 = ParallelSortExtensions_GetBucketIndex_m59A772ACE45802E9CB4E3F3779CE15335FDF1725(L_13, L_14, NULL);
		V_5 = L_15;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_16 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___buckets);
		V_6 = L_16;
		int32_t L_17 = V_2;
		int32_t L_18 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_19 = V_6;
		int32_t L_20 = V_7;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_21 = V_6;
		int32_t L_22 = V_7;
		int32_t L_23;
		L_23 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_21)->___m_Buffer, L_22);
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_19)->___m_Buffer, L_20, (((int32_t)il2cpp_codegen_add(L_23, 1))));
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0082:
	{
		int32_t L_25 = V_4;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0044;
		}
	}
	{
		return;
	}

IL_0088:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_27 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___array);
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_28;
		L_28 = ((  NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(L_27, 8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_8 = L_28;
		int32_t L_29 = V_0;
		V_9 = L_29;
		goto IL_00d9;
	}

IL_009b:
	{
		int32_t L_30 = V_9;
		uint64_t L_31;
		L_31 = IL2CPP_NATIVEARRAY_GET_ITEM(uint64_t, ((&V_8))->___m_Buffer, L_30);
		int32_t L_32 = __this->___radix;
		int32_t L_33;
		L_33 = ParallelSortExtensions_GetBucketIndex_mE4EAA948DCD4F163066FAA8A5B2B1D0F09775E01(L_31, L_32, NULL);
		V_10 = L_33;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_34 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___buckets);
		V_6 = L_34;
		int32_t L_35 = V_2;
		int32_t L_36 = V_10;
		V_7 = ((int32_t)il2cpp_codegen_add(L_35, L_36));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_37 = V_6;
		int32_t L_38 = V_7;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_39 = V_6;
		int32_t L_40 = V_7;
		int32_t L_41;
		L_41 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_39)->___m_Buffer, L_40);
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_37)->___m_Buffer, L_38, (((int32_t)il2cpp_codegen_add(L_41, 1))));
		int32_t L_42 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00d9:
	{
		int32_t L_43 = V_9;
		int32_t L_44 = V_1;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_009b;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void RadixSortBucketCountJob_1_Execute_m62F3E9EF52E5494D26B073D448AEB45984989328_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method)
{
	RadixSortBucketCountJob_1_t8CE90196DB677E4A0C7AC9264121BF2D87493A93* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RadixSortBucketCountJob_1_t8CE90196DB677E4A0C7AC9264121BF2D87493A93>(__this);
	RadixSortBucketCountJob_1_Execute_m62F3E9EF52E5494D26B073D448AEB45984989328(_thisAdjusted, ___0_index, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 74441
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void RadixSortBucketSortJob_1_Execute_m824CF9A6053A2A13ACEB6D4E533B964B9D04DB1A_gshared (RadixSortBucketSortJob_1_t4FAA58B1A9BB055721412769BB8AA45AF098845B* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B V_11;
	memset((&V_11), 0, sizeof(V_11));
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	uint64_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___batchSize;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, L_1));
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___batchSize;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_4 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___array);
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_4)->___m_Length);
		int32_t L_6;
		L_6 = math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline(((int32_t)il2cpp_codegen_add(L_2, L_3)), L_5, NULL);
		V_1 = L_6;
		int32_t L_7 = ___0_index;
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)256)));
		int32_t L_8 = __this->___valueType;
		if (L_8)
		{
			goto IL_00a8;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_9 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___array);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_10;
		L_10 = NativeArray_1_Reinterpret_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m06F913AC64211C19A5F35EB50F3F45685095D3D1(L_9, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_3 = L_10;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_11 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___arraySorted);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_12;
		L_12 = NativeArray_1_Reinterpret_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m06F913AC64211C19A5F35EB50F3F45685095D3D1(L_11, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_4 = L_12;
		int32_t L_13 = V_0;
		V_5 = L_13;
		goto IL_00a2;
	}

IL_0052:
	{
		int32_t L_14 = V_5;
		int32_t L_15;
		L_15 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_3))->___m_Buffer, L_14);
		V_6 = L_15;
		int32_t L_16 = V_6;
		int32_t L_17 = __this->___radix;
		int32_t L_18;
		L_18 = ParallelSortExtensions_GetBucketIndex_m59A772ACE45802E9CB4E3F3779CE15335FDF1725(L_16, L_17, NULL);
		V_7 = L_18;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_19 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indices);
		int32_t L_20 = V_2;
		int32_t L_21 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_22 = L_19;
		int32_t L_23 = V_9;
		int32_t L_24;
		L_24 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_22)->___m_Buffer, L_23);
		V_10 = L_24;
		int32_t L_25 = V_9;
		int32_t L_26 = V_10;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_22)->___m_Buffer, L_25, (((int32_t)il2cpp_codegen_add(L_26, 1))));
		int32_t L_27 = V_10;
		V_8 = L_27;
		int32_t L_28 = V_8;
		int32_t L_29 = V_6;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_4))->___m_Buffer, L_28, (L_29));
		int32_t L_30 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00a2:
	{
		int32_t L_31 = V_5;
		int32_t L_32 = V_1;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0052;
		}
	}
	{
		return;
	}

IL_00a8:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_33 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___array);
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_34;
		L_34 = NativeArray_1_Reinterpret_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF718C58AF6A48CF95C20FFFAAD3B3870884C4619(L_33, 8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_11 = L_34;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_35 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___arraySorted);
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_36;
		L_36 = NativeArray_1_Reinterpret_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF718C58AF6A48CF95C20FFFAAD3B3870884C4619(L_35, 8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_12 = L_36;
		int32_t L_37 = V_0;
		V_13 = L_37;
		goto IL_0119;
	}

IL_00c9:
	{
		int32_t L_38 = V_13;
		uint64_t L_39;
		L_39 = IL2CPP_NATIVEARRAY_GET_ITEM(uint64_t, ((&V_11))->___m_Buffer, L_38);
		V_14 = L_39;
		uint64_t L_40 = V_14;
		int32_t L_41 = __this->___radix;
		int32_t L_42;
		L_42 = ParallelSortExtensions_GetBucketIndex_mE4EAA948DCD4F163066FAA8A5B2B1D0F09775E01(L_40, L_41, NULL);
		V_15 = L_42;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_43 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indices);
		int32_t L_44 = V_2;
		int32_t L_45 = V_15;
		V_10 = ((int32_t)il2cpp_codegen_add(L_44, L_45));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_46 = L_43;
		int32_t L_47 = V_10;
		int32_t L_48;
		L_48 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_46)->___m_Buffer, L_47);
		V_9 = L_48;
		int32_t L_49 = V_10;
		int32_t L_50 = V_9;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_46)->___m_Buffer, L_49, (((int32_t)il2cpp_codegen_add(L_50, 1))));
		int32_t L_51 = V_9;
		V_16 = L_51;
		int32_t L_52 = V_16;
		uint64_t L_53 = V_14;
		IL2CPP_NATIVEARRAY_SET_ITEM(uint64_t, ((&V_12))->___m_Buffer, L_52, (L_53));
		int32_t L_54 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0119:
	{
		int32_t L_55 = V_13;
		int32_t L_56 = V_1;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_00c9;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void RadixSortBucketSortJob_1_Execute_m824CF9A6053A2A13ACEB6D4E533B964B9D04DB1A_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method)
{
	RadixSortBucketSortJob_1_t4FAA58B1A9BB055721412769BB8AA45AF098845B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RadixSortBucketSortJob_1_t4FAA58B1A9BB055721412769BB8AA45AF098845B>(__this);
	RadixSortBucketSortJob_1_Execute_m824CF9A6053A2A13ACEB6D4E533B964B9D04DB1A(_thisAdjusted, ___0_index, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 74441
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void RadixSortBucketSortJob_1_Execute_m3A6F0C47238FA5FD88CF5EA0E24E26202F539F73_gshared (RadixSortBucketSortJob_1_t68C34425FDC909DF8A4C73E7BD80203D7EE84DA9* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B V_11;
	memset((&V_11), 0, sizeof(V_11));
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	uint64_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___batchSize;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, L_1));
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___batchSize;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_4 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&__this->___array);
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_4)->___m_Length);
		int32_t L_6;
		L_6 = math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline(((int32_t)il2cpp_codegen_add(L_2, L_3)), L_5, NULL);
		V_1 = L_6;
		int32_t L_7 = ___0_index;
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)256)));
		int32_t L_8 = __this->___valueType;
		if (L_8)
		{
			goto IL_00a8;
		}
	}
	{
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_9 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&__this->___array);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_10;
		L_10 = NativeArray_1_Reinterpret_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6AA2337D311BABD06E7416B028FD039D11211F9A(L_9, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_3 = L_10;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_11 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&__this->___arraySorted);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_12;
		L_12 = NativeArray_1_Reinterpret_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6AA2337D311BABD06E7416B028FD039D11211F9A(L_11, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_4 = L_12;
		int32_t L_13 = V_0;
		V_5 = L_13;
		goto IL_00a2;
	}

IL_0052:
	{
		int32_t L_14 = V_5;
		int32_t L_15;
		L_15 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_3))->___m_Buffer, L_14);
		V_6 = L_15;
		int32_t L_16 = V_6;
		int32_t L_17 = __this->___radix;
		int32_t L_18;
		L_18 = ParallelSortExtensions_GetBucketIndex_m59A772ACE45802E9CB4E3F3779CE15335FDF1725(L_16, L_17, NULL);
		V_7 = L_18;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_19 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indices);
		int32_t L_20 = V_2;
		int32_t L_21 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_22 = L_19;
		int32_t L_23 = V_9;
		int32_t L_24;
		L_24 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_22)->___m_Buffer, L_23);
		V_10 = L_24;
		int32_t L_25 = V_9;
		int32_t L_26 = V_10;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_22)->___m_Buffer, L_25, (((int32_t)il2cpp_codegen_add(L_26, 1))));
		int32_t L_27 = V_10;
		V_8 = L_27;
		int32_t L_28 = V_8;
		int32_t L_29 = V_6;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_4))->___m_Buffer, L_28, (L_29));
		int32_t L_30 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00a2:
	{
		int32_t L_31 = V_5;
		int32_t L_32 = V_1;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0052;
		}
	}
	{
		return;
	}

IL_00a8:
	{
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_33 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&__this->___array);
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_34;
		L_34 = NativeArray_1_Reinterpret_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m3DFE0C9BE1F74820586102B27F73A072206D136C(L_33, 8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_11 = L_34;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_35 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&__this->___arraySorted);
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_36;
		L_36 = NativeArray_1_Reinterpret_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m3DFE0C9BE1F74820586102B27F73A072206D136C(L_35, 8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_12 = L_36;
		int32_t L_37 = V_0;
		V_13 = L_37;
		goto IL_0119;
	}

IL_00c9:
	{
		int32_t L_38 = V_13;
		uint64_t L_39;
		L_39 = IL2CPP_NATIVEARRAY_GET_ITEM(uint64_t, ((&V_11))->___m_Buffer, L_38);
		V_14 = L_39;
		uint64_t L_40 = V_14;
		int32_t L_41 = __this->___radix;
		int32_t L_42;
		L_42 = ParallelSortExtensions_GetBucketIndex_mE4EAA948DCD4F163066FAA8A5B2B1D0F09775E01(L_40, L_41, NULL);
		V_15 = L_42;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_43 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indices);
		int32_t L_44 = V_2;
		int32_t L_45 = V_15;
		V_10 = ((int32_t)il2cpp_codegen_add(L_44, L_45));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_46 = L_43;
		int32_t L_47 = V_10;
		int32_t L_48;
		L_48 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_46)->___m_Buffer, L_47);
		V_9 = L_48;
		int32_t L_49 = V_10;
		int32_t L_50 = V_9;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_46)->___m_Buffer, L_49, (((int32_t)il2cpp_codegen_add(L_50, 1))));
		int32_t L_51 = V_9;
		V_16 = L_51;
		int32_t L_52 = V_16;
		uint64_t L_53 = V_14;
		IL2CPP_NATIVEARRAY_SET_ITEM(uint64_t, ((&V_12))->___m_Buffer, L_52, (L_53));
		int32_t L_54 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0119:
	{
		int32_t L_55 = V_13;
		int32_t L_56 = V_1;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_00c9;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void RadixSortBucketSortJob_1_Execute_m3A6F0C47238FA5FD88CF5EA0E24E26202F539F73_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method)
{
	RadixSortBucketSortJob_1_t68C34425FDC909DF8A4C73E7BD80203D7EE84DA9* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RadixSortBucketSortJob_1_t68C34425FDC909DF8A4C73E7BD80203D7EE84DA9>(__this);
	RadixSortBucketSortJob_1_Execute_m3A6F0C47238FA5FD88CF5EA0E24E26202F539F73(_thisAdjusted, ___0_index, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 74441
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void RadixSortBucketSortJob_1_Execute_mC7C51B2BB781FF47D3F2366C88535DA736ADD5D7_gshared (RadixSortBucketSortJob_1_tBA53182D91917571DC0AE06FF99EF355D4E2DB5D* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B V_11;
	memset((&V_11), 0, sizeof(V_11));
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	uint64_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___batchSize;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, L_1));
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___batchSize;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_4 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___array);
		int32_t L_5;
		L_5 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		int32_t L_6;
		L_6 = math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline(((int32_t)il2cpp_codegen_add(L_2, L_3)), L_5, NULL);
		V_1 = L_6;
		int32_t L_7 = ___0_index;
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)256)));
		int32_t L_8 = __this->___valueType;
		if (L_8)
		{
			goto IL_00a8;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_9 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___array);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_10;
		L_10 = ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(L_9, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_3 = L_10;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_11 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___arraySorted);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_12;
		L_12 = ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(L_11, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_4 = L_12;
		int32_t L_13 = V_0;
		V_5 = L_13;
		goto IL_00a2;
	}

IL_0052:
	{
		int32_t L_14 = V_5;
		int32_t L_15;
		L_15 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_3))->___m_Buffer, L_14);
		V_6 = L_15;
		int32_t L_16 = V_6;
		int32_t L_17 = __this->___radix;
		int32_t L_18;
		L_18 = ParallelSortExtensions_GetBucketIndex_m59A772ACE45802E9CB4E3F3779CE15335FDF1725(L_16, L_17, NULL);
		V_7 = L_18;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_19 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indices);
		int32_t L_20 = V_2;
		int32_t L_21 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_22 = L_19;
		int32_t L_23 = V_9;
		int32_t L_24;
		L_24 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_22)->___m_Buffer, L_23);
		V_10 = L_24;
		int32_t L_25 = V_9;
		int32_t L_26 = V_10;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_22)->___m_Buffer, L_25, (((int32_t)il2cpp_codegen_add(L_26, 1))));
		int32_t L_27 = V_10;
		V_8 = L_27;
		int32_t L_28 = V_8;
		int32_t L_29 = V_6;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_4))->___m_Buffer, L_28, (L_29));
		int32_t L_30 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00a2:
	{
		int32_t L_31 = V_5;
		int32_t L_32 = V_1;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0052;
		}
	}
	{
		return;
	}

IL_00a8:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_33 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___array);
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_34;
		L_34 = ((  NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(L_33, 8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_11 = L_34;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_35 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___arraySorted);
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_36;
		L_36 = ((  NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(L_35, 8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_12 = L_36;
		int32_t L_37 = V_0;
		V_13 = L_37;
		goto IL_0119;
	}

IL_00c9:
	{
		int32_t L_38 = V_13;
		uint64_t L_39;
		L_39 = IL2CPP_NATIVEARRAY_GET_ITEM(uint64_t, ((&V_11))->___m_Buffer, L_38);
		V_14 = L_39;
		uint64_t L_40 = V_14;
		int32_t L_41 = __this->___radix;
		int32_t L_42;
		L_42 = ParallelSortExtensions_GetBucketIndex_mE4EAA948DCD4F163066FAA8A5B2B1D0F09775E01(L_40, L_41, NULL);
		V_15 = L_42;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_43 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___indices);
		int32_t L_44 = V_2;
		int32_t L_45 = V_15;
		V_10 = ((int32_t)il2cpp_codegen_add(L_44, L_45));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_46 = L_43;
		int32_t L_47 = V_10;
		int32_t L_48;
		L_48 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_46)->___m_Buffer, L_47);
		V_9 = L_48;
		int32_t L_49 = V_10;
		int32_t L_50 = V_9;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_46)->___m_Buffer, L_49, (((int32_t)il2cpp_codegen_add(L_50, 1))));
		int32_t L_51 = V_9;
		V_16 = L_51;
		int32_t L_52 = V_16;
		uint64_t L_53 = V_14;
		IL2CPP_NATIVEARRAY_SET_ITEM(uint64_t, ((&V_12))->___m_Buffer, L_52, (L_53));
		int32_t L_54 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0119:
	{
		int32_t L_55 = V_13;
		int32_t L_56 = V_1;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_00c9;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void RadixSortBucketSortJob_1_Execute_mC7C51B2BB781FF47D3F2366C88535DA736ADD5D7_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method)
{
	RadixSortBucketSortJob_1_tBA53182D91917571DC0AE06FF99EF355D4E2DB5D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RadixSortBucketSortJob_1_tBA53182D91917571DC0AE06FF99EF355D4E2DB5D>(__this);
	RadixSortBucketSortJob_1_Execute_mC7C51B2BB781FF47D3F2366C88535DA736ADD5D7(_thisAdjusted, ___0_index, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 43946
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomSampleConsensus_1__ctor_m643E6093F6F6DFFF2D375D128995DE215273824E_gshared (RandomSampleConsensus_1_t77F5565C1F6960BBFF36A308486B4963AE8F37B4* __this, int32_t ___0_maxDataPoints, int32_t ___1_exclusionZone, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_maxDataPoints;
		__this->____maxDataPoints = L_0;
		int32_t L_1 = ___1_exclusionZone;
		__this->____exclusionZone = L_1;
		int32_t L_2 = ___0_maxDataPoints;
		int32_t L_3 = ___0_maxDataPoints;
		il2cpp_array_size_t L_5[] = { (il2cpp_array_size_t)L_2, (il2cpp_array_size_t)L_3 };
		Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4* L_4 = (Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4*)GenArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_5);
		__this->____modelSet = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____modelSet), (void*)L_4);
		return;
	}
}
// Method Definition Index: 43947
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RandomSampleConsensus_1_FindOptimalModel_m0CA97F10F10F0F27FEF3196ABC785C572132E3EA_gshared (RandomSampleConsensus_1_t77F5565C1F6960BBFF36A308486B4963AE8F37B4* __this, GenerateModel_tFD2092AA49E2EF13B97F8E177ABE8E6CFFFCEE0A* ___0_modelGenerator, EvaluateModelScore_t71DE5C267622406D6E5D893CBB65AE8829DDB0FF* ___1_modelScorer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		GenerateModel_tFD2092AA49E2EF13B97F8E177ABE8E6CFFFCEE0A* L_0 = ___0_modelGenerator;
		EvaluateModelScore_t71DE5C267622406D6E5D893CBB65AE8829DDB0FF* L_1 = ___1_modelScorer;
		int32_t L_2 = __this->____maxDataPoints;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = RandomSampleConsensus_1_FindOptimalModel_m38F97EC24BC4CDEE592091F9664A139317E38F06(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return L_3;
	}
}
// Method Definition Index: 43948
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RandomSampleConsensus_1_FindOptimalModel_m38F97EC24BC4CDEE592091F9664A139317E38F06_gshared (RandomSampleConsensus_1_t77F5565C1F6960BBFF36A308486B4963AE8F37B4* __this, GenerateModel_tFD2092AA49E2EF13B97F8E177ABE8E6CFFFCEE0A* ___0_modelGenerator, EvaluateModelScore_t71DE5C267622406D6E5D893CBB65AE8829DDB0FF* ___1_modelScorer, int32_t ___2_dataPointsCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	{
		V_2 = 0;
		goto IL_003d;
	}

IL_0004:
	{
		int32_t L_0 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_000a:
	{
		Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4* L_1 = __this->____modelSet;
		int32_t L_2 = V_2;
		int32_t L_3 = V_3;
		GenerateModel_tFD2092AA49E2EF13B97F8E177ABE8E6CFFFCEE0A* L_4 = ___0_modelGenerator;
		int32_t L_5 = V_2;
		int32_t L_6 = __this->____exclusionZone;
		int32_t L_7 = ___2_dataPointsCount;
		int32_t L_8 = V_3;
		int32_t L_9 = __this->____exclusionZone;
		int32_t L_10 = ___2_dataPointsCount;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = GenerateModel_Invoke_mBA3D6D3F7DAC36894DA980C81217E2E4FEA522A9_inline(L_4, ((int32_t)(((int32_t)il2cpp_codegen_add(L_5, L_6))%L_7)), ((int32_t)(((int32_t)il2cpp_codegen_add(L_8, L_9))%L_10)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		(L_1)->SetAt(L_2, L_3, L_11);
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0035:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = ___2_dataPointsCount;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003d:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = ___2_dataPointsCount;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		V_1 = (std::numeric_limits<float>::infinity());
		V_4 = 0;
		goto IL_009d;
	}

IL_0054:
	{
		int32_t L_18 = ___2_dataPointsCount;
		int32_t L_19;
		L_19 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)il2cpp_codegen_subtract(L_18, 1)), NULL);
		V_5 = L_19;
		int32_t L_20 = V_5;
		int32_t L_21 = ___2_dataPointsCount;
		int32_t L_22;
		L_22 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)il2cpp_codegen_add(L_20, 1)), L_21, NULL);
		V_6 = L_22;
		Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4* L_23 = __this->____modelSet;
		int32_t L_24 = V_5;
		int32_t L_25 = V_6;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = (L_23)->GetAt(L_24, L_25);
		V_7 = L_26;
		EvaluateModelScore_t71DE5C267622406D6E5D893CBB65AE8829DDB0FF* L_27 = ___1_modelScorer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_7;
		Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4* L_29 = __this->____modelSet;
		NullCheck(L_27);
		float L_30;
		L_30 = EvaluateModelScore_Invoke_mB940868ABEDDDEE2C3E9048C98BBE0673654C157_inline(L_27, L_28, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_8 = L_30;
		float L_31 = V_8;
		float L_32 = V_1;
		if ((!(((float)L_31) < ((float)L_32))))
		{
			goto IL_0097;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_7;
		V_0 = L_33;
		float L_34 = V_8;
		V_1 = L_34;
	}

IL_0097:
	{
		int32_t L_35 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_009d:
	{
		int32_t L_36 = V_4;
		int32_t L_37 = ___2_dataPointsCount;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0054;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_0;
		return L_38;
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
// Method Definition Index: 43946
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomSampleConsensus_1__ctor_m706B1427C708CB75181B10A04A4C04F562401A05_gshared (RandomSampleConsensus_1_t681F929E50E8548403FE2EBDE01CBB5D8BB1294D* __this, int32_t ___0_maxDataPoints, int32_t ___1_exclusionZone, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_maxDataPoints;
		__this->____maxDataPoints = L_0;
		int32_t L_1 = ___1_exclusionZone;
		__this->____exclusionZone = L_1;
		int32_t L_2 = ___0_maxDataPoints;
		int32_t L_3 = ___0_maxDataPoints;
		il2cpp_array_size_t L_5[] = { (il2cpp_array_size_t)L_2, (il2cpp_array_size_t)L_3 };
		__Il2CppFullySharedGenericTypeU5BU2CU5D_tFF243A155E8F21F3F2753D6C8C5DBFD843EEB296* L_4 = (__Il2CppFullySharedGenericTypeU5BU2CU5D_tFF243A155E8F21F3F2753D6C8C5DBFD843EEB296*)GenArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_5);
		__this->____modelSet = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____modelSet), (void*)L_4);
		return;
	}
}
// Method Definition Index: 43947
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomSampleConsensus_1_FindOptimalModel_m9FC08251A93991C055FCAB22B91D11E08D3363FB_gshared (RandomSampleConsensus_1_t681F929E50E8548403FE2EBDE01CBB5D8BB1294D* __this, GenerateModel_t6A09AD526D52668F52472513169F29A30DFE979D* ___0_modelGenerator, EvaluateModelScore_t3187BF17905BBD3CBA0FEE0B74AE4DFA61F40FC6* ___1_modelScorer, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TModel_t6D172D399CEF1F2E39D5353AB801B5DD9EA7CB3F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TModel_t6D172D399CEF1F2E39D5353AB801B5DD9EA7CB3F);
	//<source_info:<no-source>:1>
	{
		GenerateModel_t6A09AD526D52668F52472513169F29A30DFE979D* L_0 = ___0_modelGenerator;
		EvaluateModelScore_t3187BF17905BBD3CBA0FEE0B74AE4DFA61F40FC6* L_1 = ___1_modelScorer;
		int32_t L_2 = __this->____maxDataPoints;
		InvokerActionInvoker4< GenerateModel_t6A09AD526D52668F52472513169F29A30DFE979D*, EvaluateModelScore_t3187BF17905BBD3CBA0FEE0B74AE4DFA61F40FC6*, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), __this, L_0, L_1, L_2, (Il2CppFullySharedGenericAny*)L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_TModel_t6D172D399CEF1F2E39D5353AB801B5DD9EA7CB3F);
		return;
	}
}
// Method Definition Index: 43948
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomSampleConsensus_1_FindOptimalModel_m646E556861F943AC2429B8EDA1DEDB37EEC37086_gshared (RandomSampleConsensus_1_t681F929E50E8548403FE2EBDE01CBB5D8BB1294D* __this, GenerateModel_t6A09AD526D52668F52472513169F29A30DFE979D* ___0_modelGenerator, EvaluateModelScore_t3187BF17905BBD3CBA0FEE0B74AE4DFA61F40FC6* ___1_modelScorer, int32_t ___2_dataPointsCount, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TModel_t6D172D399CEF1F2E39D5353AB801B5DD9EA7CB3F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TModel_t6D172D399CEF1F2E39D5353AB801B5DD9EA7CB3F);
	const Il2CppFullySharedGenericAny L_26 = L_11;
	const Il2CppFullySharedGenericAny L_33 = L_11;
	const Il2CppFullySharedGenericAny L_38 = L_11;
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_TModel_t6D172D399CEF1F2E39D5353AB801B5DD9EA7CB3F);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TModel_t6D172D399CEF1F2E39D5353AB801B5DD9EA7CB3F);
	memset(V_0, 0, SizeOf_TModel_t6D172D399CEF1F2E39D5353AB801B5DD9EA7CB3F);
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_TModel_t6D172D399CEF1F2E39D5353AB801B5DD9EA7CB3F);
	memset(V_7, 0, SizeOf_TModel_t6D172D399CEF1F2E39D5353AB801B5DD9EA7CB3F);
	float V_8 = 0.0f;
	{
		V_2 = 0;
		goto IL_003d;
	}

IL_0004:
	{
		int32_t L_0 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_000a:
	{
		__Il2CppFullySharedGenericTypeU5BU2CU5D_tFF243A155E8F21F3F2753D6C8C5DBFD843EEB296* L_1 = __this->____modelSet;
		int32_t L_2 = V_2;
		int32_t L_3 = V_3;
		GenerateModel_t6A09AD526D52668F52472513169F29A30DFE979D* L_4 = ___0_modelGenerator;
		int32_t L_5 = V_2;
		int32_t L_6 = __this->____exclusionZone;
		int32_t L_7 = ___2_dataPointsCount;
		int32_t L_8 = V_3;
		int32_t L_9 = __this->____exclusionZone;
		int32_t L_10 = ___2_dataPointsCount;
		NullCheck(L_4);
		InvokerActionInvoker3< int32_t, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_4, ((int32_t)(((int32_t)il2cpp_codegen_add(L_5, L_6))%L_7)), ((int32_t)(((int32_t)il2cpp_codegen_add(L_8, L_9))%L_10)), (Il2CppFullySharedGenericAny*)L_11);
		NullCheck(L_1);
		il2cpp_codegen_memcpy_with_write_barrier((L_1)->GetAddressAt(L_2, L_3), L_11, SizeOf_TModel_t6D172D399CEF1F2E39D5353AB801B5DD9EA7CB3F, il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0035:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = ___2_dataPointsCount;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003d:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = ___2_dataPointsCount;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TModel_t6D172D399CEF1F2E39D5353AB801B5DD9EA7CB3F);
		V_1 = (std::numeric_limits<float>::infinity());
		V_4 = 0;
		goto IL_009d;
	}

IL_0054:
	{
		int32_t L_18 = ___2_dataPointsCount;
		int32_t L_19;
		L_19 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)il2cpp_codegen_subtract(L_18, 1)), NULL);
		V_5 = L_19;
		int32_t L_20 = V_5;
		int32_t L_21 = ___2_dataPointsCount;
		int32_t L_22;
		L_22 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)il2cpp_codegen_add(L_20, 1)), L_21, NULL);
		V_6 = L_22;
		__Il2CppFullySharedGenericTypeU5BU2CU5D_tFF243A155E8F21F3F2753D6C8C5DBFD843EEB296* L_23 = __this->____modelSet;
		int32_t L_24 = V_5;
		int32_t L_25 = V_6;
		NullCheck(L_23);
		il2cpp_codegen_memcpy(L_26, (L_23)->GetAddressAt(L_24, L_25), SizeOf_TModel_t6D172D399CEF1F2E39D5353AB801B5DD9EA7CB3F);
		il2cpp_codegen_memcpy(V_7, L_26, SizeOf_TModel_t6D172D399CEF1F2E39D5353AB801B5DD9EA7CB3F);
		EvaluateModelScore_t3187BF17905BBD3CBA0FEE0B74AE4DFA61F40FC6* L_27 = ___1_modelScorer;
		il2cpp_codegen_memcpy(L_28, V_7, SizeOf_TModel_t6D172D399CEF1F2E39D5353AB801B5DD9EA7CB3F);
		__Il2CppFullySharedGenericTypeU5BU2CU5D_tFF243A155E8F21F3F2753D6C8C5DBFD843EEB296* L_29 = __this->____modelSet;
		NullCheck(L_27);
		float L_30;
		L_30 = InvokerFuncInvoker2< float, Il2CppFullySharedGenericAny, __Il2CppFullySharedGenericTypeU5BU2CU5D_tFF243A155E8F21F3F2753D6C8C5DBFD843EEB296* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_28: *(void**)L_28), L_29);
		V_8 = L_30;
		float L_31 = V_8;
		float L_32 = V_1;
		if ((!(((float)L_31) < ((float)L_32))))
		{
			goto IL_0097;
		}
	}
	{
		il2cpp_codegen_memcpy(L_33, V_7, SizeOf_TModel_t6D172D399CEF1F2E39D5353AB801B5DD9EA7CB3F);
		il2cpp_codegen_memcpy(V_0, L_33, SizeOf_TModel_t6D172D399CEF1F2E39D5353AB801B5DD9EA7CB3F);
		float L_34 = V_8;
		V_1 = L_34;
	}

IL_0097:
	{
		int32_t L_35 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_009d:
	{
		int32_t L_36 = V_4;
		int32_t L_37 = ___2_dataPointsCount;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0054;
		}
	}
	{
		il2cpp_codegen_memcpy(L_38, V_0, SizeOf_TModel_t6D172D399CEF1F2E39D5353AB801B5DD9EA7CB3F);
		il2cpp_codegen_memcpy(il2cppRetVal, L_38, SizeOf_TModel_t6D172D399CEF1F2E39D5353AB801B5DD9EA7CB3F);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 88394
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_y;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_x;
		return L_3;
	}
}
// Method Definition Index: 3246
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_0 = ((EmptyArray_1_t0D07744D06CBE1D5EFB0F376FCD9DE664680DB24_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 3246
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* Array_Empty_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_mCA9B51A380F3ABF25CCC44152FD54B8494578B2B_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_0 = ((EmptyArray_1_tBACC9B9E153A00D66D4E01F6D63254779A5E10BF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 3246
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* Array_Empty_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m14408DB7AEF24B0C78B223278BC1337C81CC853D_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_0 = ((EmptyArray_1_t03904AAE4322A830A46A5C2B7C43D6A40CFE2B07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 3246
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* Array_Empty_TisOVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F_mA15765971F9ED8D147FD0656D435EEFB0FBCAC6E_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		OVRLocatableU5BU5D_tE3A401ABC7340B3ADAB4D984CB80F2E4A869E90F* L_0 = ((EmptyArray_1_t167C7DEB88774FD3FFFEA44F4C06A272B8B915A1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 3246
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* Array_Empty_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_mBB6D93B6177B77D5D0DB6C917C5E06FDB4F5F200_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_0 = ((EmptyArray_1_tBD6329B52138BD56AB7289C5630507A8936151B7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 3246
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((EmptyArray_1_t77BFDB090CFC6AE661834F0BD4ED43833F4F079D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 3246
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Array_Empty_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m696D3DE2D89DD613C8C0EB15BE627EABEF780255_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((EmptyArray_1_tA1B9390A54D6283BFF40643DC2A697126A16E63B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 3246
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* Array_Empty_TisXrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625_mCDF2DCE710E3156A0B1E2F17660ECDCEE2E54E12_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_0 = ((EmptyArray_1_tBA25FD8C30972238625883415BB2484EBA2434AF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 3246
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ((EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 3246
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* Array_Empty_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mE6CAE32FAFB50C35AA03F64061D6BECCC6387DC4_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_0 = ((EmptyArray_1_tB9CE11D20D32521AB83609C42537BFB49B249794_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 3246
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_0 = ((EmptyArray_1_t77401F488985814E4B89684C1CCE07D59127CD6C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 3246
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* Array_Empty_TisMessage_t439BAAD871295B67F7429E4BF40147801DD52B57_mA22DA965439DF044FE84C3C2767D5AD575EE673C_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		MessageU5BU5D_t7E253D91CC969C44F06EA3AF77481E7A1F32F634* L_0 = ((EmptyArray_1_t4CD1B474032A44080F1CCCAB78C8469C4C5EA9B2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 3246
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* Array_Empty_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mE74D581FD3F8DF5CFA50A5133DB5A6F7D16B99CD_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_0 = ((EmptyArray_1_t7C7E840E7790E897ABDA15ED3B9C6BB1AD74E6AF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 3246
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* Array_Empty_TisFilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D_mABFB44322689CDCDD2C7904395F4273AB26BF2D9_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		FilterUnionU5BU5D_t00339C009E7C3F278962DB28FC676ED977CC15BF* L_0 = ((EmptyArray_1_t87B09931F4CAD60AFFE0B867CB21AEB94B61A21D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 3246
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* Array_Empty_TisFilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03_mBDE28068FF66192DC2A98763302EFE1E164D3752_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_0 = ((EmptyArray_1_tA318588C5DED77377D0A402E2D318FA13329CEF0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 3246
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* Array_Empty_TisMetrics_t865BF0741490865117A79705F58784742D6F02B8_m396274F1DFAC369F038810A8DF3B16AF20CF1870_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_0 = ((EmptyArray_1_t025B7DCB8E2EBFB42E79BFFFACAAB7AC43B10C38_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 3246
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* Array_Empty_TisUnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71_m68042300D637F8905FBC692EB76AD9D6AA328FC1_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_0 = ((EmptyArray_1_t4F92E580A823F3B65AED0BDEDBD334D85364071E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 48301
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD2D9DC546B80A05000B107C8E09FAA4BED3B2144_gshared_inline (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_nativeArray, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
// Method Definition Index: 48353
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t* UnsafeUtility_AsRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF01FDF0EACCFED286E93933B693A2BE11A6A8946_gshared_inline (void* ___0_ptr, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_ptr;
		return (int32_t*)(L_0);
	}
}
// Method Definition Index: 43950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GenerateModel_Invoke_mBA3D6D3F7DAC36894DA980C81217E2E4FEA522A9_gshared_inline (GenerateModel_tFD2092AA49E2EF13B97F8E177ABE8E6CFFFCEE0A* __this, int32_t ___0_index1, int32_t ___1_index2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_index1, ___1_index2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 43954
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EvaluateModelScore_Invoke_mB940868ABEDDDEE2C3E9048C98BBE0673654C157_gshared_inline (EvaluateModelScore_t71DE5C267622406D6E5D893CBB65AE8829DDB0FF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_model, Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4* ___1_modelSet, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef float (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_model, ___1_modelSet, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
