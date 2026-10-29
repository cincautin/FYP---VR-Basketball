#include "pch-cpp.hpp"





template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

struct Action_1_t69E611F01CC2051A51509BEA84FA829EA4D7C643;
struct Action_1_tB137F0A79CAAF9953E6A15AB8139E511ACF2041D;
struct Action_1_t0D3FDEB853658AAA91C8797C0476DDF845D5BBFF;
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct ArraySortHelper_1_t29D513914E96AEF32E502B99C6F0EEF37999E378;
struct ArraySortHelper_1_tFF5DC7397168A75911DBA80813694A06456F38D5;
struct ArraySortHelper_1_tA6CB6CF7DB992875A689164DA4EDAFB7F3F1505F;
struct ArraySortHelper_2_t2ADBEC137D76AF37A250A1FBB9051B71AB1F10A7;
struct ArraySortHelper_2_tE4E677AAEE3AEDD26440F8404627379269E5E692;
struct ArraySortHelper_2_t426C164FEAE6FB793F95132D9B3B9D7C00526F6F;
struct ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3;
struct AsyncInstantiateOperation_1_t4ADCB11AF0D1CE8F6CBB592A95ED176851CE3C4F;
struct AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB;
struct AsyncLocal_1_t84A5EBAACAF2A906D91794D4121189156DAE7639;
struct AsyncLocal_1_tC1B081876A75186A0139ACF15A78BBAA2AEB9482;
struct AsyncLocal_1_t6FE3AE7F9BEDEDFAF5962FF8DBC977B4D007C150;
struct Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80;
struct Comparer_1_t156CA54426F60B4132C76BFACD5FDBD3043D437E;
struct Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024;
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct Comparer_1_t046D3212892FFACD58B023FFC2E7B761286BD6B0;
struct Comparer_1_tBEF5D5DBCCD138F02D83FA6000B72EB74D74DD20;
struct Comparer_1_t0DF99FC079A32C7177827C3CD2D6BD476B79D392;
struct Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129;
struct Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E;
struct Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct IComparer_1_t4483F9B9F43C7B0F8D4FEEAE12FAFDD3F9CF81FD;
struct IComparer_1_t7E870201BF4F9A2658830A9FA35ED97BC476A8B4;
struct IComparer_1_t3B0F39D062C0830CA6D3DD5C771FEF9D2E6F5DEF;
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
struct IComparer_1_tE4831799EB02F3A4EA63C5C4D45E38557144EF5C;
struct IComparer_1_t60213AA7F3148B044D041751AD181C674C37547E;
struct IComparer_1_t227176077B927B9523B6524322EDAF527325D514;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct TaskFactory_1_tA691E2BC5961896B5A97C2F15650D3151CE60A00;
struct TaskFactory_1_tD1312B07567D037375AE1BC9E412FA736BE9A26C;
struct TaskFactory_1_t9BADAC0CF805EB57D601FE0FDE41344D8C34C9AD;
struct TaskFactory_1_t1FC6F041AB46A11726B4503E01C3D2C937910EC2;
struct TaskFactory_1_t440BCA273D8F7D2BE5CAA88135480E6CF22A9715;
struct TaskFactory_1_tAE919A7BAE255B9F6EF5F440E30D3AF6A9C9322E;
struct TaskFactory_1_tBDD9E403F37AB99920AC4B70C7BD7DB772111426;
struct TaskFactory_1_tA7344C51E9614CE506F6C6932EEC691776008D8E;
struct TaskFactory_1_tC55B2865C881633A3CE05821411BAC6496587B16;
struct TaskFactory_1_t4181657D5A4477ABB1351E03D8206D2E69706C59;
struct TaskFactory_1_tABB15DC046C0C6D8A287F9ECE57EBC9710BB4306;
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
struct TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3;
struct Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0;
struct Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B;
struct Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964;
struct Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239;
struct Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41;
struct Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7;
struct Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F;
struct Task_1_t740E037592A96E7E8D824D7CF3E3790037F2091F;
struct Task_1_t266DA8B27DFB8A47C28B74C0EE7BE00F98FFB78E;
struct Task_1_t4D235A5D59D16FB8C4C21E62079A2BA599CC7675;
struct Task_1_tC06D8ADA71E3D48C0058EBA3F862F3B15D55DA9F;
struct Task_1_t5EC0156FF62B3DE5E55397DD191DC124F922325D;
struct Task_1_t74562F42D0F261A7C152860BE04C5FE86E22EBE0;
struct Task_1_t6FE95C824EF764E0E054CC5C35CD48E56EE731E1;
struct Task_1_tE764C3523DD541F8904F125D2C42495D195C363D;
struct Task_1_t6B948EB7364F83BDE1B3F1870384B96B4146D714;
struct Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7;
struct Task_1_t44BCD4A06A9459564E599F77D864DCEA036DBB7B;
struct Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C;
struct Task_1_t035A10B20E9951D572890459DB38E9E939D3F8CC;
struct Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4;
struct Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1;
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B;
struct EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA;
struct PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40;
struct Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F;
struct Entry_t475ED76E31923970E7F7A6522E570E7577C487B9;
struct Exception_t;
struct IAsyncLocal_tA0D8A68D8F9BD48F7C04AD061D087A5C3D3263F6;
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662;
struct RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Bool_tDCB915EFC1E982C5CEAE05C4AB9305574F7302CC;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral6EDB6C049ED9617FA335A262A29BF30B15221AEA;
IL2CPP_EXTERN_C String_t* _stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C;
IL2CPP_EXTERN_C String_t* _stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62;
IL2CPP_EXTERN_C const RuntimeMethod* IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AsyncInstantiateOperation_1_t46FFC1BE4DA14660ED92F8E371B53AFB78BAFD93_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;

struct Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B;
struct EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA;
struct PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ArraySortHelper_1_t29D513914E96AEF32E502B99C6F0EEF37999E378  : public RuntimeObject
{
};
struct ArraySortHelper_1_tFF5DC7397168A75911DBA80813694A06456F38D5  : public RuntimeObject
{
};
struct ArraySortHelper_1_tA6CB6CF7DB992875A689164DA4EDAFB7F3F1505F  : public RuntimeObject
{
};
struct ArraySortHelper_2_t2ADBEC137D76AF37A250A1FBB9051B71AB1F10A7  : public RuntimeObject
{
};
struct ArraySortHelper_2_tE4E677AAEE3AEDD26440F8404627379269E5E692  : public RuntimeObject
{
};
struct ArraySortHelper_2_t426C164FEAE6FB793F95132D9B3B9D7C00526F6F  : public RuntimeObject
{
};
struct ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3  : public RuntimeObject
{
};
struct AsyncLocal_1_t84A5EBAACAF2A906D91794D4121189156DAE7639  : public RuntimeObject
{
	Action_1_t69E611F01CC2051A51509BEA84FA829EA4D7C643* ___m_valueChangedHandler;
};
struct AsyncLocal_1_tC1B081876A75186A0139ACF15A78BBAA2AEB9482  : public RuntimeObject
{
	Action_1_tB137F0A79CAAF9953E6A15AB8139E511ACF2041D* ___m_valueChangedHandler;
};
struct AsyncLocal_1_t6FE3AE7F9BEDEDFAF5962FF8DBC977B4D007C150  : public RuntimeObject
{
	Action_1_t0D3FDEB853658AAA91C8797C0476DDF845D5BBFF* ___m_valueChangedHandler;
};
struct Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80  : public RuntimeObject
{
};
struct Comparer_1_t156CA54426F60B4132C76BFACD5FDBD3043D437E  : public RuntimeObject
{
};
struct Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024  : public RuntimeObject
{
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB  : public RuntimeObject
{
};
struct Comparer_1_t046D3212892FFACD58B023FFC2E7B761286BD6B0  : public RuntimeObject
{
};
struct Comparer_1_tBEF5D5DBCCD138F02D83FA6000B72EB74D74DD20  : public RuntimeObject
{
};
struct Comparer_1_t0DF99FC079A32C7177827C3CD2D6BD476B79D392  : public RuntimeObject
{
};
struct AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09  : public RuntimeObject
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
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
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
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};
struct AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30 
{
	int32_t ___U3CPreviousValueU3Ek__BackingField;
	int32_t ___U3CCurrentValueU3Ek__BackingField;
	bool ___U3CThreadContextChangedU3Ek__BackingField;
};
struct AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95 
{
	Il2CppSharedGenericObject* ___U3CPreviousValueU3Ek__BackingField;
	Il2CppSharedGenericObject* ___U3CCurrentValueU3Ek__BackingField;
	bool ___U3CThreadContextChangedU3Ek__BackingField;
};
typedef Il2CppFullySharedGenericStruct AsyncLocalValueChangedArgs_1_t7A62C5604064A762FE6998F0A39E23222FFE8429;
struct Awaiter_t8B3BFA67A1E74F17A973E27246D6BD904CA41D32 
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ____awaitable;
	AsyncInstantiateOperation_1_t4ADCB11AF0D1CE8F6CBB592A95ED176851CE3C4F* ____op;
};
struct Awaiter_t59A92513E07691C90A027430E5BF4BC7A9A592D8 
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ____awaitable;
	AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB* ____op;
};
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	bool ___hasValue;
	bool ___value;
};
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	bool ___hasValue;
	double ___value;
};
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
};
struct OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 
{
	bool ____initialized;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 
{
	bool ____initialized;
	uint64_t ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D 
{
	bool ____initialized;
	Il2CppSharedGenericObject* ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	bool ___m_result;
};
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	int32_t ___m_result;
};
struct ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F 
{
	bool ___Item1;
	Il2CppSharedGenericObject* ___Item2;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	RuntimeObject* ___m_stateMachine;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine;
	Il2CppMethodPointer ___m_defaultContextAction;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine;
	Il2CppMethodPointer ___m_defaultContextAction;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___flags;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_OffsetPadding[4];
			int32_t ___hi;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_OffsetPadding[8];
			int32_t ___lo;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_OffsetPadding[12];
			int32_t ___mid;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_OffsetPadding[8];
			uint64_t ___ulomidLE;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_forAlignmentOnly;
		};
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
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
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
struct PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 
{
	String_t* ___message;
	bool ___isCompatible;
};
struct PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3_marshaled_pinvoke
{
	char* ___message;
	int32_t ___isCompatible;
};
struct PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3_marshaled_com
{
	Il2CppChar* ___message;
	int32_t ___isCompatible;
};
struct AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* ___m_task;
};
struct AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* ___m_task;
};
struct AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* ___m_task;
};
struct AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t2F9E450C2C2823F6E23E0595E10B0C80E767A5EB 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t740E037592A96E7E8D824D7CF3E3790037F2091F* ___m_task;
};
struct AsyncTaskMethodBuilder_1_tB0224DB6B113CD7E4D53975D93EA5DFCD25B8632 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t266DA8B27DFB8A47C28B74C0EE7BE00F98FFB78E* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t414401B6580EEE02EA0A9B2F6FC48524ED3DC79C 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t4D235A5D59D16FB8C4C21E62079A2BA599CC7675* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t8CD20560501908B12A1FCFB823DBE951295584A7 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_tC06D8ADA71E3D48C0058EBA3F862F3B15D55DA9F* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t64EF31B91C3E5BEE61B9489E95AAF85F18195D0B 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t5EC0156FF62B3DE5E55397DD191DC124F922325D* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t8F5A29035CACF8C81BED1C703A4238CF66CFBBB4 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t74562F42D0F261A7C152860BE04C5FE86E22EBE0* ___m_task;
};
struct AsyncTaskMethodBuilder_1_tFC841874EB132B154E65160A8EA59CB503A013C7 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t6FE95C824EF764E0E054CC5C35CD48E56EE731E1* ___m_task;
};
struct AsyncTaskMethodBuilder_1_tC9CFE327FF202DF24BDF178367E998349FEBF98D 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_tE764C3523DD541F8904F125D2C42495D195C363D* ___m_task;
};
struct AsyncTaskMethodBuilder_1_tD710285C76FC8E8DACF86649F9D39E60BF4BC9E1 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t6B948EB7364F83BDE1B3F1870384B96B4146D714* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* ___m_task;
};
struct AsyncTaskMethodBuilder_1_tE4495D3CAD2B180F873326423A5F22C98BC78725 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t44BCD4A06A9459564E599F77D864DCEA036DBB7B* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t3B64F8F77E4D00222C41E6D45949E215BE00CFB2 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t035A10B20E9951D572890459DB38E9E939D3F8CC* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* ___m_task;
};
struct Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC 
{
	bool ___hasValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value;
};
struct Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB 
{
	bool ___hasValue;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value;
};
struct OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 
{
	bool ____initialized;
	Guid_t ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___m_result;
};
struct Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___m_result;
};
struct Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___m_result;
};
struct Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___m_result;
};
struct Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___m_result;
};
struct Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___m_result;
};
struct Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___m_result;
};
struct AsyncCausalityStatus_tC473F5BDD9EA7F23D03B554577173AC2FA15822C 
{
	int32_t ___value__;
};
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	intptr_t ___m_Ptr;
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback;
};
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
	Il2CppMethodPointer ___m_completeCallback;
};
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr;
	Il2CppMethodPointer ___m_completeCallback;
};
struct CausalityTraceLevel_t672BEB68BD9D2ED72A9EE022D37D68A28FA9939A 
{
	int32_t ___value__;
};
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime;
	int16_t ____offsetMinutes;
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
struct Bool_tDCB915EFC1E982C5CEAE05C4AB9305574F7302CC 
{
	int32_t ___value__;
};
struct VariantType_t01A161D87BC37DF7EFD343CBB9D8EE954759BC6C 
{
	int32_t ___value__;
};
struct VisualsProcessingType_t19983E0076886C15ED2761057B9992989A710ECC 
{
	int32_t ___value__;
};
struct Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B 
{
	bool ___hasValue;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value;
};
struct Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___m_result;
};
struct Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___m_result;
};
struct Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___m_result;
};
struct AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___m_Result;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___m_CancellationToken;
};
struct AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke* ___m_Result;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke ___m_CancellationToken;
};
struct AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com** ___m_Result;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com ___m_CancellationToken;
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
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Variant_t1C24D2F331888502CEE4F0CF1646348E0261E25B 
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
			char ___Count_OffsetPadding[4];
			int32_t ___Count;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Count_OffsetPadding_forAlignmentOnly[4];
			int32_t ___Count_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___StringValue_OffsetPadding[8];
			uint8_t* ___StringValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___StringValue_OffsetPadding_forAlignmentOnly[8];
			uint8_t* ___StringValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___LongValue_OffsetPadding[8];
			int64_t ___LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___LongValue_OffsetPadding_forAlignmentOnly[8];
			int64_t ___LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___DoubleValue_OffsetPadding[8];
			double ___DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___DoubleValue_OffsetPadding_forAlignmentOnly[8];
			double ___DoubleValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___BoolValue_OffsetPadding[8];
			int32_t ___BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___BoolValue_OffsetPadding_forAlignmentOnly[8];
			int32_t ___BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___StringValues_OffsetPadding[8];
			uint8_t** ___StringValues;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___StringValues_OffsetPadding_forAlignmentOnly[8];
			uint8_t** ___StringValues_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___LongValues_OffsetPadding[8];
			int64_t* ___LongValues;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___LongValues_OffsetPadding_forAlignmentOnly[8];
			int64_t* ___LongValues_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___DoubleValues_OffsetPadding[8];
			double* ___DoubleValues;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___DoubleValues_OffsetPadding_forAlignmentOnly[8];
			double* ___DoubleValues_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___BoolValues_OffsetPadding[8];
			int32_t* ___BoolValues;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___BoolValues_OffsetPadding_forAlignmentOnly[8];
			int32_t* ___BoolValues_forAlignmentOnly;
		};
	};
};
struct EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 
{
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___renderData;
	int32_t ___type;
	Entry_t475ED76E31923970E7F7A6522E570E7577C487B9* ___rootEntry;
};
struct EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289_marshaled_pinvoke
{
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___renderData;
	int32_t ___type;
	Entry_t475ED76E31923970E7F7A6522E570E7577C487B9* ___rootEntry;
};
struct EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289_marshaled_com
{
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___renderData;
	int32_t ___type;
	Entry_t475ED76E31923970E7F7A6522E570E7577C487B9* ___rootEntry;
};
struct Action_1_t69E611F01CC2051A51509BEA84FA829EA4D7C643  : public MulticastDelegate_t
{
};
struct Action_1_tB137F0A79CAAF9953E6A15AB8139E511ACF2041D  : public MulticastDelegate_t
{
};
struct Action_1_t0D3FDEB853658AAA91C8797C0476DDF845D5BBFF  : public MulticastDelegate_t
{
};
struct AsyncInstantiateOperation_1_t4ADCB11AF0D1CE8F6CBB592A95ED176851CE3C4F  : public AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40
{
};
struct AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB  : public AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40
{
};
struct Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129  : public MulticastDelegate_t
{
};
struct Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333  : public MulticastDelegate_t
{
};
struct Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___m_result;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken;
};
struct ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C 
{
	intptr_t ___Key;
	Variant_t1C24D2F331888502CEE4F0CF1646348E0261E25B ___Value;
};
struct Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E  : public MulticastDelegate_t
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArraySortHelper_1_t29D513914E96AEF32E502B99C6F0EEF37999E378_StaticFields
{
	ArraySortHelper_1_t29D513914E96AEF32E502B99C6F0EEF37999E378* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_tFF5DC7397168A75911DBA80813694A06456F38D5_StaticFields
{
	ArraySortHelper_1_tFF5DC7397168A75911DBA80813694A06456F38D5* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_tA6CB6CF7DB992875A689164DA4EDAFB7F3F1505F_StaticFields
{
	ArraySortHelper_1_tA6CB6CF7DB992875A689164DA4EDAFB7F3F1505F* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_2_t2ADBEC137D76AF37A250A1FBB9051B71AB1F10A7_StaticFields
{
	ArraySortHelper_2_t2ADBEC137D76AF37A250A1FBB9051B71AB1F10A7* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_2_tE4E677AAEE3AEDD26440F8404627379269E5E692_StaticFields
{
	ArraySortHelper_2_tE4E677AAEE3AEDD26440F8404627379269E5E692* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_2_t426C164FEAE6FB793F95132D9B3B9D7C00526F6F_StaticFields
{
	ArraySortHelper_2_t426C164FEAE6FB793F95132D9B3B9D7C00526F6F* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3_StaticFields
{
	ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* ___s_defaultArraySortHelper;
};
struct Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80_StaticFields
{
	Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* ___defaultComparer;
};
struct Comparer_1_t156CA54426F60B4132C76BFACD5FDBD3043D437E_StaticFields
{
	Comparer_1_t156CA54426F60B4132C76BFACD5FDBD3043D437E* ___defaultComparer;
};
struct Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024_StaticFields
{
	Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* ___defaultComparer;
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB_StaticFields
{
	Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* ___defaultComparer;
};
struct Comparer_1_t046D3212892FFACD58B023FFC2E7B761286BD6B0_StaticFields
{
	Comparer_1_t046D3212892FFACD58B023FFC2E7B761286BD6B0* ___defaultComparer;
};
struct Comparer_1_tBEF5D5DBCCD138F02D83FA6000B72EB74D74DD20_StaticFields
{
	Comparer_1_tBEF5D5DBCCD138F02D83FA6000B72EB74D74DD20* ___defaultComparer;
};
struct Comparer_1_t0DF99FC079A32C7177827C3CD2D6BD476B79D392_StaticFields
{
	Comparer_1_t0DF99FC079A32C7177827C3CD2D6BD476B79D392* ___defaultComparer;
};
struct AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields
{
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___TrueTask;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___FalseTask;
	Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8* ___Int32Tasks;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	int32_t ___s_taskIdCounter;
	RuntimeObject* ___s_taskCompletionSentinel;
	bool ___s_asyncDebuggingEnabled;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback;
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties;
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField;
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate;
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback;
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate;
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks;
	RuntimeObject* ___s_activeTasksLock;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask;
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard;
};
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory;
};
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D_StaticFields
{
	TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3* ___s_defaultFactory;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
};
struct AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3_StaticFields
{
	Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E_StaticFields
{
	Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6_StaticFields
{
	Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36_StaticFields
{
	Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7_StaticFields
{
	Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7_StaticFields
{
	Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797_StaticFields
{
	Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t2F9E450C2C2823F6E23E0595E10B0C80E767A5EB_StaticFields
{
	Task_1_t740E037592A96E7E8D824D7CF3E3790037F2091F* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_tB0224DB6B113CD7E4D53975D93EA5DFCD25B8632_StaticFields
{
	Task_1_t266DA8B27DFB8A47C28B74C0EE7BE00F98FFB78E* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t414401B6580EEE02EA0A9B2F6FC48524ED3DC79C_StaticFields
{
	Task_1_t4D235A5D59D16FB8C4C21E62079A2BA599CC7675* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t8CD20560501908B12A1FCFB823DBE951295584A7_StaticFields
{
	Task_1_tC06D8ADA71E3D48C0058EBA3F862F3B15D55DA9F* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t64EF31B91C3E5BEE61B9489E95AAF85F18195D0B_StaticFields
{
	Task_1_t5EC0156FF62B3DE5E55397DD191DC124F922325D* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t8F5A29035CACF8C81BED1C703A4238CF66CFBBB4_StaticFields
{
	Task_1_t74562F42D0F261A7C152860BE04C5FE86E22EBE0* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_tFC841874EB132B154E65160A8EA59CB503A013C7_StaticFields
{
	Task_1_t6FE95C824EF764E0E054CC5C35CD48E56EE731E1* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_tC9CFE327FF202DF24BDF178367E998349FEBF98D_StaticFields
{
	Task_1_tE764C3523DD541F8904F125D2C42495D195C363D* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_tD710285C76FC8E8DACF86649F9D39E60BF4BC9E1_StaticFields
{
	Task_1_t6B948EB7364F83BDE1B3F1870384B96B4146D714* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A_StaticFields
{
	Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_tE4495D3CAD2B180F873326423A5F22C98BC78725_StaticFields
{
	Task_1_t44BCD4A06A9459564E599F77D864DCEA036DBB7B* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B_StaticFields
{
	Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t3B64F8F77E4D00222C41E6D45949E215BE00CFB2_StaticFields
{
	Task_1_t035A10B20E9951D572890459DB38E9E939D3F8CC* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5_StaticFields
{
	Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F_StaticFields
{
	Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* ___s_defaultResultTask;
};
struct Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0_StaticFields
{
	TaskFactory_1_tA691E2BC5961896B5A97C2F15650D3151CE60A00* ___s_defaultFactory;
};
struct Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41_StaticFields
{
	TaskFactory_1_t440BCA273D8F7D2BE5CAA88135480E6CF22A9715* ___s_defaultFactory;
};
struct Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7_StaticFields
{
	TaskFactory_1_tAE919A7BAE255B9F6EF5F440E30D3AF6A9C9322E* ___s_defaultFactory;
};
struct Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F_StaticFields
{
	TaskFactory_1_tBDD9E403F37AB99920AC4B70C7BD7DB772111426* ___s_defaultFactory;
};
struct Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C_StaticFields
{
	TaskFactory_1_tC55B2865C881633A3CE05821411BAC6496587B16* ___s_defaultFactory;
};
struct Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4_StaticFields
{
	TaskFactory_1_t4181657D5A4477ABB1351E03D8206D2E69706C59* ___s_defaultFactory;
};
struct Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1_StaticFields
{
	TaskFactory_1_tABB15DC046C0C6D8A287F9ECE57EBC9710BB4306* ___s_defaultFactory;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B_StaticFields
{
	TaskFactory_1_tD1312B07567D037375AE1BC9E412FA736BE9A26C* ___s_defaultFactory;
};
struct Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239_StaticFields
{
	TaskFactory_1_t1FC6F041AB46A11726B4503E01C3D2C937910EC2* ___s_defaultFactory;
};
struct Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7_StaticFields
{
	TaskFactory_1_tA7344C51E9614CE506F6C6932EEC691776008D8E* ___s_defaultFactory;
};
struct AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40_StaticFields
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_GlobalCancellation;
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
struct Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964_StaticFields
{
	TaskFactory_1_t9BADAC0CF805EB57D601FE0FDE41344D8C34C9AD* ___s_defaultFactory;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B  : public RuntimeArray
{
	ALIGN_FIELD (8) EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 m_Items[1];

	inline EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___renderData), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___rootEntry), (void*)NULL);
		#endif
	}
	inline EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___renderData), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___rootEntry), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C m_Items[1];

	inline Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C value)
	{
		m_Items[index] = value;
	}
};
struct PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317  : public RuntimeArray
{
	ALIGN_FIELD (8) PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 m_Items[1];

	inline PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___message), (void*)NULL);
	}
	inline PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___message), (void*)NULL);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
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
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8  : public RuntimeArray
{
	ALIGN_FIELD (8) Task_1_t4C228DE57804012969575431CFF12D57C875552D* m_Items[1];

	inline Task_1_t4C228DE57804012969575431CFF12D57C875552D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Task_1_t4C228DE57804012969575431CFF12D57C875552D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Task_1_t4C228DE57804012969575431CFF12D57C875552D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Task_1_t4C228DE57804012969575431CFF12D57C875552D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Task_1_t4C228DE57804012969575431CFF12D57C875552D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Task_1_t4C228DE57804012969575431CFF12D57C875552D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t046D3212892FFACD58B023FFC2E7B761286BD6B0* Comparer_1_get_Default_m66D6D538764F212C8057ADF0ECFECEB94220CBC0_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mF1256A1EE11001F73B1C511B4F994E4240BC93F8_gshared (Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_IntrospectiveSort_mC350EB6B830FCE8071F6E6E0CE4AF0AE8EDFDA45_gshared (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_keys, int32_t ___1_left, int32_t ___2_length, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_InternalBinarySearch_mA397D30A8A65D136FB5773BAC0ECCF9D7686106C_gshared (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_array, int32_t ___1_index, int32_t ___2_length, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m68AD1C3D3189530752991F04C1ACBEA52B47F8B6_gshared_inline (Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* __this, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___0_x, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_IntroSort_m939196810219AE088FE864039D8F2D87E7EA7C0B_gshared (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depthLimit, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_SwapIfGreater_mF58B0FCBB8E2EF1524D335F9C1028D607AA8AEDF_gshared (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_keys, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* ___1_comparer, int32_t ___2_a, int32_t ___3_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_InsertionSort_m11E8F0D25CF30F3495F81D42D01B86D598EDA818_gshared (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Heapsort_m70A6C366B44EDB0915D7DF4B9C61796C48EA8285_gshared (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_PickPivotAndPartition_m1DC04655BD855ADE68AC85C27B9D79F98FF94FA3_gshared (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Swap_mA01B2FB08115BB00F10F9AC1FEBE292FB680EC65_gshared (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_a, int32_t ___1_i, int32_t ___2_j, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_DownHeap_m868207A1048F8EE1A1A2A98A052516F2065145BF_gshared (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_keys, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1__ctor_mA9DDD938E21377AEC026E6B4DB153AF5F9A3AB8E_gshared (ArraySortHelper_1_t29D513914E96AEF32E502B99C6F0EEF37999E378* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tBEF5D5DBCCD138F02D83FA6000B72EB74D74DD20* Comparer_1_get_Default_m6977A1FE5EA104A1E2C7D49B33FA845B200D6AA5_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_m63E2985624473006D3CFC65522CCDC2A032026ED_gshared (Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_IntrospectiveSort_m1D55006AC462D75C2CE261FD91C93BF54EF3C71E_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, int32_t ___1_left, int32_t ___2_length, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_InternalBinarySearch_m7092E5D511A4386F62438C9FCA26F39D0A636179_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_array, int32_t ___1_index, int32_t ___2_length, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m3D0BD99863A18604C8E21A32D41D56217B26A9A4_gshared_inline (Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_x, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_IntroSort_m0BD5189B2CB234383AE43301D50A0C6247542F76_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depthLimit, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_SwapIfGreater_mCE5B161EB27F9EE49B85D2D69DC8F81B04FFEBE1_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___1_comparer, int32_t ___2_a, int32_t ___3_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_InsertionSort_m13814DFA2EBB58EE7D931298557C30AFF312B2FC_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Heapsort_m65FDFF63518040E9448380617CEC8D5CCBA7FAC4_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_PickPivotAndPartition_mFB9F7BC3732F70A35DC439A3A8E67A4AAC8F537A_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Swap_m2A59821D7B56FB86D678D06D8F1E81CC8E7948F5_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_a, int32_t ___1_i, int32_t ___2_j, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_DownHeap_m5416FCE905F210069CCDB16E9D8AB282806BF652_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1__ctor_mAA50051D3DEA95619F2F46DD0C756D048648DD2E_gshared (ArraySortHelper_1_tFF5DC7397168A75911DBA80813694A06456F38D5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t0DF99FC079A32C7177827C3CD2D6BD476B79D392* Comparer_1_get_Default_m75317E2206D3EA2B6B86263B0969BBF80896A2BE_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_m79589F26FA4F6C202E8E78B5340AAFADA082CAA4_gshared (Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_IntrospectiveSort_mDA3D72A0F426A4F36FF37ED42DF0A1F1BBF1A01E_gshared (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_keys, int32_t ___1_left, int32_t ___2_length, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_InternalBinarySearch_m9A6A543CEF63BE36590807A16365D0851B469BE1_gshared (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_array, int32_t ___1_index, int32_t ___2_length, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_mEA9A6C71B80C9370449DC9B10920F7B713E858F9_gshared_inline (Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* __this, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___0_x, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_IntroSort_mAF3E9C95C91FDFF3DD451A576BA3292F84CF4A1E_gshared (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depthLimit, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_SwapIfGreater_m6630EA6B7A437D8BA6C0B6F8B4DDCFB79D57B830_gshared (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_keys, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* ___1_comparer, int32_t ___2_a, int32_t ___3_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_InsertionSort_mD52F61852A2990F4AFF738940B40893ABC84B875_gshared (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Heapsort_m9A0E52D87FE89BD5100834D93A7B9EEBFF287129_gshared (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_PickPivotAndPartition_mDA85D4C36534CE7BE0D4C2537762FADC77E4A285_gshared (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Swap_m896BC6EED1BC0BC81DB9ECED89231155C9654AC1_gshared (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_a, int32_t ___1_i, int32_t ___2_j, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_DownHeap_mE4140279D77FB4B11DC2C2259AF128FBBFC3466B_gshared (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_keys, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1__ctor_mF3E1EA555692305BF2DE0C2188279568245A8830_gshared (ArraySortHelper_1_tA6CB6CF7DB992875A689164DA4EDAFB7F3F1505F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_IntrospectiveSort_m0A17977AEF029F60FB79FD801B413366FA66EF42_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_left, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_IntroSort_mD6DB9589646AEC8A233A82DF1FDE372B736B5AB5_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, int32_t ___4_depthLimit, RuntimeObject* ___5_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_SwapIfGreaterWithItems_m3F7DF0379AE9AB631A6FAC0583B0B2D24BF81975_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, RuntimeObject* ___2_comparer, int32_t ___3_a, int32_t ___4_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_InsertionSort_m20C87943C2EA83ECCBD96E7C50EB13AC67146AA5_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_Heapsort_mE480928E488842ABB5EA3CB974C5CDAC779BAE14_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_2_PickPivotAndPartition_m166BF2FF901E7457DE291FF94704FFAE7FD6FC9B_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_Swap_m8E06889F0CFDDB36D72CA149718D1DA69B492FE4_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_i, int32_t ___3_j, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_DownHeap_mCE50BB8E3B0675EE9D0D575D0EBC9BCC5A8D2801_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_i, int32_t ___3_n, int32_t ___4_lo, RuntimeObject* ___5_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2__ctor_m1119B44E916721D12206A0232285DA5BB4151627_gshared (ArraySortHelper_2_t2ADBEC137D76AF37A250A1FBB9051B71AB1F10A7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t156CA54426F60B4132C76BFACD5FDBD3043D437E* Comparer_1_get_Default_mDCEA11B875EEB23AECDA2D76B230E1AD7B6962E4_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_IntrospectiveSort_mDEACBEDABBAD8B687A0D61672A14A5915E915D31_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, int32_t ___2_left, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_IntroSort_mA54625173A6A1DCD2BC0AF59627AEEFB55AF98A8_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, int32_t ___2_lo, int32_t ___3_hi, int32_t ___4_depthLimit, RuntimeObject* ___5_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_SwapIfGreaterWithItems_m41D1C03140B109A8A192A0053FCF4C446A552D47_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, RuntimeObject* ___2_comparer, int32_t ___3_a, int32_t ___4_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_InsertionSort_mCB672D5F75C3401C489DC521F8B3791A6581F156_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_Heapsort_m3EB6CCB850DE6C86E34B8752EDCFB39F003AB1A4_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_2_PickPivotAndPartition_m9B8D4A15D693048F0AFBE6AA8EB9ACD34FA3703E_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_Swap_m8D8C959E216E4B7A159F3ACEAB9612EA0985D8E4_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, int32_t ___2_i, int32_t ___3_j, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_DownHeap_m2905BDE0F660F0C1CF7ADAEF869DCC8E251FAA6C_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, int32_t ___2_i, int32_t ___3_n, int32_t ___4_lo, RuntimeObject* ___5_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2__ctor_mE2C046899BED288FEAF20A1041FA9C2619C74C3D_gshared (ArraySortHelper_2_tE4E677AAEE3AEDD26440F8404627379269E5E692* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* Comparer_1_get_Default_m9D7E1E21FFEE2C32B345D0E5C835BA713DA80B2C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_IntrospectiveSort_m9E7EB330972747BD8E7B6E9970D6E487ABABB500_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_left, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_IntroSort_mD1680D7BF4A65DD4C5ED7C94432784882436F785_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, int32_t ___4_depthLimit, RuntimeObject* ___5_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_SwapIfGreaterWithItems_m6CFAE71AC004D1CB6B900AC819480AF4FBEDD42B_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, RuntimeObject* ___2_comparer, int32_t ___3_a, int32_t ___4_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_InsertionSort_mEBBF5396F4DAC8F56276C67482061E0A925B4508_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_Heapsort_m7CC28E5E1744A030B1A1BFAF54CB5A604C669C67_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_2_PickPivotAndPartition_mB86F8CF4E83122E6A13CACB968BD0F3046401851_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_Swap_m85472190C8B8145BF45B6C918DDBFC6B7A5ACE31_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_i, int32_t ___3_j, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_DownHeap_m695FE5B74D11DDAF60F4F4FCA8A6A0084C6086A4_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_i, int32_t ___3_n, int32_t ___4_lo, RuntimeObject* ___5_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2__ctor_m0B784F3FFEF6A37687B6D8EDDCA36E855766A00E_gshared (ArraySortHelper_2_t426C164FEAE6FB793F95132D9B3B9D7C00526F6F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaiter__ctor_m0D4459378C0748F8FBF9CEB11D6BACFB010E6478_gshared (Awaiter_t8B3BFA67A1E74F17A973E27246D6BD904CA41D32* __this, AsyncInstantiateOperation_1_t4ADCB11AF0D1CE8F6CBB592A95ED176851CE3C4F* ___0_op, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaiter__ctor_mAF98E84E028D9DF706E1DA7721D64E73719C85EF_gshared (Awaiter_t59A92513E07691C90A027430E5BF4BC7A9A592D8* __this, AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB* ___0_op, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocalValueChangedArgs_1__ctor_mE42A8DCCEF1217FD021FBD189C2BEDAD7FAE52F0_gshared (AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30* __this, int32_t ___0_previousValue, int32_t ___1_currentValue, bool ___2_contextChanged, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocalValueChangedArgs_1__ctor_mCD46AE17C8F65750A0FCD16854B467184DBB7517_gshared (AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95* __this, Il2CppSharedGenericObject* ___0_previousValue, Il2CppSharedGenericObject* ___1_currentValue, bool ___2_contextChanged, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocalValueChangedArgs_1__ctor_m8FC80AC8E561902AB0B4888598E9F43818996132_gshared (AsyncLocalValueChangedArgs_1_t7A62C5604064A762FE6998F0A39E23222FFE8429* __this, Il2CppFullySharedGenericAny ___0_previousValue, Il2CppFullySharedGenericAny ___1_currentValue, bool ___2_contextChanged, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBCE58B67D7100D1DFF3F431F7DF460E9C688745B_gshared_inline (Action_1_t69E611F01CC2051A51509BEA84FA829EA4D7C643* __this, AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m15B09A14760255FA046745C030377D21CE4BE793_gshared_inline (Action_1_tB137F0A79CAAF9953E6A15AB8139E511ACF2041D* __this, AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mC468FEBA35E9688F98709D52A7539B2C1C4C8C15_gshared (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m6FD25DABCE184917175389E391C873409261DDB0_gshared (Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* AsyncTaskMethodBuilder_1_get_Task_m7240951B6E9A5DB275CDFCA78339FFEE26BA8802_gshared (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* AsyncTaskMethodBuilder_1_GetTaskForResult_m77E79732C249B6B4254DF543FA0A2FAE26803011_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m0E1289A1CCF695E50715221524D7B407E43BE28C_gshared (Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0582B44433D671C064F3AE9A809A3EA5FE256781_gshared (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m42172F6932E531FBEEFE4AED72241320EF927434_gshared (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* __this, Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* ___0_completedTask, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m65D6A428A99A2074CE9E23A65EFE474879ADC095_gshared (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mF447742220AD60B921E950DB392B44F553021674_gshared (Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* AsyncTaskCache_CreateCacheableTask_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_m96AB4AB175E7A53B8211E82B7CC642AD7E340637_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m63FF5F72B43D370B1069C9079A541A6E8AC2CE1B_gshared (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mD3FC7E2EF363236809F13343A64FC880CA6C74FA_gshared (Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* AsyncTaskMethodBuilder_1_get_Task_mC10888726AB1CF669A543F39EC82C1B8B296C524_gshared (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* AsyncTaskMethodBuilder_1_GetTaskForResult_m6B3189831D5E29F5299A08939FE67EE7D6A55CF6_gshared (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m45CC6CDCCB981248C56909C9D64A2995260A2621_gshared (Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m4A9FF4B718DBEE05F481602FC54B269D0A99F2FD_gshared (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m6746E4B742BF588934A5B6DEC219B8620E218FC7_gshared (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* __this, Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* ___0_completedTask, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m20A87382A7B6D6EFFFCABB906FA5E385D976715E_gshared (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m8D3E36AB4BDE6C83EAEBA04A2495EDF3D5F17E7E_gshared (Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* AsyncTaskCache_CreateCacheableTask_TisNullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_m5C538BE589257259BE446E11D4BF68C8B5C2B2E9_gshared (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mE0D6C0F35D575B78671BF90F206948F638430F50_gshared (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mC8EFB6F199A7B074BA039A2B4CEB2DAA776F959D_gshared (Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* AsyncTaskMethodBuilder_1_get_Task_mFF107A582F8CB464DC795B93946486F5CB72C967_gshared (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* AsyncTaskMethodBuilder_1_GetTaskForResult_m56752E94BB4DD52A5AEAC4F698DFEEDF9275A857_gshared (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m7BBE50D093A6F0F6CD80D0AEF961E9B1F489EB15_gshared (Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* __this, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m354CAA69E85D02ECDA58F4E3ED331615B9B286D9_gshared (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* __this, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0A2FD7A765CABE5B08E6F7C5B44B0D346063B6FE_gshared (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* __this, Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* ___0_completedTask, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mEA9A1250CD59EB926FE49E9557A3680DF0FE336D_gshared (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mAC82BD4DDEA1A5100605394F9936B0F565FCC507_gshared (Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* __this, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* AsyncTaskCache_CreateCacheableTask_TisNullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_m5C1E3DE59946A59843B982943FCCD902F176696E_gshared (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m41A9EFE80569D0ED18656151ACD1E3563B288BBA_gshared (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m2A24686E3CD6ADE147BFEB3CD25DDEB30D830AE5_gshared (Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* AsyncTaskMethodBuilder_1_get_Task_m1BFEC2D85643659CCFCB0055986B849F09DB6DE2_gshared (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* AsyncTaskMethodBuilder_1_GetTaskForResult_m7C0AB57139BF368AC6D19E94BA17FAF38EE26F37_gshared (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_mECC96B0C1F0FF06B9F41396F42346083FBF52CA7_gshared (Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m8FD5A31BDA892931A44F70190116C626F5FE76CF_gshared (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mE337A2D1B8EBE2EA7BEC9B0C7771E9C57BE37356_gshared (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* __this, Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* ___0_completedTask, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mB6B23BD3B309A05B4215C83F5C5AB68AEBDD470D_gshared (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m4BFE73FA4ECA4AE630CE7CBD188EAC1FE9722429_gshared (Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* AsyncTaskCache_CreateCacheableTask_TisNullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_m4C2678F8646CE15535AA9FF141054C5D350E6E84_gshared (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mBECC7576674C907A0494A52697C163704277A86D_gshared (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m345E75D3154D6F145F3BC063812295BC72297854_gshared (Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* AsyncTaskMethodBuilder_1_get_Task_m7164E00326DC7BC82FE12A781478471DD7A1CE69_gshared (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* AsyncTaskMethodBuilder_1_GetTaskForResult_m20835BD24CC7D28A02C3240F74B31E4DB2D2EE6B_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m63A166803A98E96536A3D21D7E9E8F8FFF5761D0_gshared (Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m8B35722630A089A6AE51C45F0B6A16B21AE914A0_gshared (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m431A98AD6F85C66715CA4EC9A884D3486625CAC3_gshared (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* __this, Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* ___0_completedTask, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mB2E9A1B7DBB59C420CDB96A04A128F745DE63AB4_gshared (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mC20EE5CCB1CCB1C6150DA69D0756E83E1547BE6A_gshared (Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* AsyncTaskCache_CreateCacheableTask_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_mD2FD1BA37CD7BC9F997D797EF6CBD0208F55D7E2_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m202DAC650B3B8EFE6A02ED46F243B399A3308879_gshared (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m9AD5FE1A0F48B1C1AD8614F87739B31DD3DE3568_gshared (Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* AsyncTaskMethodBuilder_1_get_Task_mB36BC37F05CC1BD3EDB9EC66B9BBEA7DE33F3D03_gshared (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* AsyncTaskMethodBuilder_1_GetTaskForResult_m81DB6DAED4F1821904FA836D73BB5CE8FBE778EE_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m48D840CA62136D390874D338ED6E57849E33490B_gshared (Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m7814370659E8E3550E3A679C1F2F516592198487_gshared (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m628CA4F28FE2878774E97C22597DDFC877801B1D_gshared (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* __this, Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* ___0_completedTask, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m76968B53E22BA2AD3C6102934BDC2C9013F74A95_gshared (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m0A2664C4950556338199629BD2C98586D70A0813_gshared (Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* AsyncTaskCache_CreateCacheableTask_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m443D01DF96CD3252CAFF048A991441D94DE3B66B_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m8F0334A0C9907253ABE4E56C7A7418B623694DCD_gshared (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mB69E08DDFCF368BC5ACC43CC245DF9583AB4E038_gshared (Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* AsyncTaskMethodBuilder_1_get_Task_m48238D6774C93E57C332776A6554A23FDB5F96DA_gshared (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* AsyncTaskMethodBuilder_1_GetTaskForResult_m67F6A4AD611FF3FB5A9FF21B8F6AF483DAC09C6C_gshared (OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_mB50D5AA503E72529C566F4EE0137B963F3FE5673_gshared (Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m359B80F1DDD3F620C7468C447D5348089529F181_gshared (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mABA76C3ED04D3C65BAA79DDCE103FAB05EC40C33_gshared (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* __this, Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* ___0_completedTask, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m0FA6E3BCDEFBE9E3ED255A939D64874D3F875C1F_gshared (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* JitHelpers_UnsafeCast_TisIl2CppSharedGenericObject_m5D9454AE1AF0205501A6EFB33F3D7A80B0DC08F2_gshared (RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m4D4BD509ECDCE011E9B576253B3A653E552612B9_gshared (Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* AsyncTaskCache_CreateCacheableTask_TisOVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9_m3753A58FAA7436486AA441B6A740C0FB1F81DADA_gshared (OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mC2B0A2D78E1927E162A724135D91C957FFCC5651_gshared (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m9AF80B7E21D4365B610C21031E29FCB83CD32D27_gshared (Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* AsyncTaskMethodBuilder_1_get_Task_m49E13587633B83D706E7F85D3122B6583813C2D9_gshared (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* AsyncTaskMethodBuilder_1_GetTaskForResult_mE32CD0E7E25478FB00E104356F76E6629CA92A38_gshared (OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m0CB92709B2014A703FB57915E6ECB17C24789664_gshared (Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* __this, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mD18342A940803A50A2B8530196601B5A54707F8D_gshared (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* __this, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mCCDB51B3AF567DC9F791B29E74A11E1B7CE99D99_gshared (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* __this, Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* ___0_completedTask, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m8553CC1B427969FE40F44B34DB84F9C76785B4B6_gshared (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m541BFC0D49AFB557E47F03FEE5C368C138FA8128_gshared (Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* __this, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387_mA8F3E545AE2A2D8B0D14213741CF6F3FCAC71F0F_gshared (OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m01C859B5FB9F1692FBC1C3CAC2CE1B821FECE3FF_gshared (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m75C1D611CBE6A149C79A322EA8F1CF2E65865149_gshared (Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* AsyncTaskMethodBuilder_1_get_Task_m92E592769E741DEDCDD787CC7ADBD08C06A32314_gshared (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* AsyncTaskMethodBuilder_1_GetTaskForResult_m067DB75F372431CFB5C8A8F9427357714414B5BF_gshared (OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m9203F629B87AA23B46F58CBDDBAD8CD60184C8B9_gshared (Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* __this, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mA36BEF799A8E58526F3FC16F10E1FA407B903FE4_gshared (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* __this, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m508B0A955AAB580845391FC5F547916629D25057_gshared (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* __this, Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* ___0_completedTask, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m7B12174F42A526861DF8EF8CB8F21EB99A529266_gshared (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m19D57D02F2C0DEE7393502186931AB78CEF41EEE_gshared (Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* __this, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8_mC640EA46869E11911ABB7A864919549B88CFF94C_gshared (OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m2C1E7220C803A3E07795628C521525E8398E9EB5_gshared (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m2D1462857395F1C85B4A7E79CDD63B5BB391A0FC_gshared (Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* AsyncTaskMethodBuilder_1_get_Task_m39CA24472D2EEFF162623CFA59CE7431A2715B56_gshared (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* AsyncTaskMethodBuilder_1_GetTaskForResult_mF084BE519715FD8045AB1BC65E80A349906F2073_gshared (OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m2B77B5733D9DF23D82119B8392391F2E530C1435_gshared (Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* __this, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mBE3A4804C5B8834205E6DB359356A74C4CE559D7_gshared (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* __this, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mAE09C9555C653EBF9DD13CFBFBAEAAA356E2AD0D_gshared (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* __this, Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* ___0_completedTask, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m366B07CBB616AF29432B456A6D01739F0872D48C_gshared (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m2A47910E1599CEE2DB645BACAB80F9248911C45F_gshared (Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* __this, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D_m49ACC1E311C97A79F7CCC1D8DB7BBDB1142D37ED_gshared (OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mA9C9531F33E5C468F3C992F3259CA27903FFE633_gshared (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m773E32A0278D4184509216516F51E633D556249D_gshared (Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* AsyncTaskMethodBuilder_1_get_Task_mE609D90E26A71ADDE2ADBB19849044C7CA4C4D4B_gshared (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* AsyncTaskMethodBuilder_1_GetTaskForResult_m46974E7C50DB99B6F03020A87DB2DEDF4334862A_gshared (ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m35667C7E8DFA2602F26A7302980F2450EDBD28FA_gshared (Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* __this, ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mAE4006FB62DEEE49C59A099D0AF0262DC87FD274_gshared (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* __this, ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m3A9C5949460ED87484B817BE59DFCB8F122C31B2_gshared (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* __this, Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* ___0_completedTask, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m877EAFFD76B7C235F9DCBE854DC10E9D71F691CE_gshared (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m850623421A0EDC334FF9766142F6A0EB81E94F31_gshared (Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* __this, ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* AsyncTaskCache_CreateCacheableTask_TisValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F_m50D5F3901C4DD732985EF18C8178CF77A93AB0F6_gshared (ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method) ;

inline Comparer_1_t046D3212892FFACD58B023FFC2E7B761286BD6B0* Comparer_1_get_Default_m66D6D538764F212C8057ADF0ECFECEB94220CBC0 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t046D3212892FFACD58B023FFC2E7B761286BD6B0* (*) (const RuntimeMethod*))Comparer_1_get_Default_m66D6D538764F212C8057ADF0ECFECEB94220CBC0_gshared)(method);
}
inline void Comparison_1__ctor_mF1256A1EE11001F73B1C511B4F994E4240BC93F8 (Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mF1256A1EE11001F73B1C511B4F994E4240BC93F8_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ArraySortHelper_1_IntrospectiveSort_mC350EB6B830FCE8071F6E6E0CE4AF0AE8EDFDA45 (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_keys, int32_t ___1_left, int32_t ___2_length, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B*, int32_t, int32_t, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129*, const RuntimeMethod*))ArraySortHelper_1_IntrospectiveSort_mC350EB6B830FCE8071F6E6E0CE4AF0AE8EDFDA45_gshared)(___0_keys, ___1_left, ___2_length, ___3_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m119232371BEE9732FE70D22EE93B3818E577EFAF (RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
inline int32_t ArraySortHelper_1_InternalBinarySearch_mA397D30A8A65D136FB5773BAC0ECCF9D7686106C (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_array, int32_t ___1_index, int32_t ___2_length, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B*, int32_t, int32_t, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_InternalBinarySearch_mA397D30A8A65D136FB5773BAC0ECCF9D7686106C_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline int32_t Comparison_1_Invoke_m68AD1C3D3189530752991F04C1ACBEA52B47F8B6_inline (Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* __this, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___0_x, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___1_y, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129*, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289, const RuntimeMethod*))Comparison_1_Invoke_m68AD1C3D3189530752991F04C1ACBEA52B47F8B6_gshared_inline)(__this, ___0_x, ___1_y, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntrospectiveSortUtilities_FloorLog2PlusOne_m33AC60574EC2B80A3B7084361A3736D4CFE91F6D (int32_t ___0_n, const RuntimeMethod* method) ;
inline void ArraySortHelper_1_IntroSort_m939196810219AE088FE864039D8F2D87E7EA7C0B (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depthLimit, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* ___4_comparer, const RuntimeMethod* method)
{
	((  void (*) (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B*, int32_t, int32_t, int32_t, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129*, const RuntimeMethod*))ArraySortHelper_1_IntroSort_m939196810219AE088FE864039D8F2D87E7EA7C0B_gshared)(___0_keys, ___1_lo, ___2_hi, ___3_depthLimit, ___4_comparer, method);
}
inline void ArraySortHelper_1_SwapIfGreater_mF58B0FCBB8E2EF1524D335F9C1028D607AA8AEDF (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_keys, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* ___1_comparer, int32_t ___2_a, int32_t ___3_b, const RuntimeMethod* method)
{
	((  void (*) (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B*, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129*, int32_t, int32_t, const RuntimeMethod*))ArraySortHelper_1_SwapIfGreater_mF58B0FCBB8E2EF1524D335F9C1028D607AA8AEDF_gshared)(___0_keys, ___1_comparer, ___2_a, ___3_b, method);
}
inline void ArraySortHelper_1_InsertionSort_m11E8F0D25CF30F3495F81D42D01B86D598EDA818 (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B*, int32_t, int32_t, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129*, const RuntimeMethod*))ArraySortHelper_1_InsertionSort_m11E8F0D25CF30F3495F81D42D01B86D598EDA818_gshared)(___0_keys, ___1_lo, ___2_hi, ___3_comparer, method);
}
inline void ArraySortHelper_1_Heapsort_m70A6C366B44EDB0915D7DF4B9C61796C48EA8285 (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B*, int32_t, int32_t, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129*, const RuntimeMethod*))ArraySortHelper_1_Heapsort_m70A6C366B44EDB0915D7DF4B9C61796C48EA8285_gshared)(___0_keys, ___1_lo, ___2_hi, ___3_comparer, method);
}
inline int32_t ArraySortHelper_1_PickPivotAndPartition_m1DC04655BD855ADE68AC85C27B9D79F98FF94FA3 (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* ___3_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B*, int32_t, int32_t, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129*, const RuntimeMethod*))ArraySortHelper_1_PickPivotAndPartition_m1DC04655BD855ADE68AC85C27B9D79F98FF94FA3_gshared)(___0_keys, ___1_lo, ___2_hi, ___3_comparer, method);
}
inline void ArraySortHelper_1_Swap_mA01B2FB08115BB00F10F9AC1FEBE292FB680EC65 (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_a, int32_t ___1_i, int32_t ___2_j, const RuntimeMethod* method)
{
	((  void (*) (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B*, int32_t, int32_t, const RuntimeMethod*))ArraySortHelper_1_Swap_mA01B2FB08115BB00F10F9AC1FEBE292FB680EC65_gshared)(___0_a, ___1_i, ___2_j, method);
}
inline void ArraySortHelper_1_DownHeap_m868207A1048F8EE1A1A2A98A052516F2065145BF (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_keys, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* ___4_comparer, const RuntimeMethod* method)
{
	((  void (*) (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B*, int32_t, int32_t, int32_t, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129*, const RuntimeMethod*))ArraySortHelper_1_DownHeap_m868207A1048F8EE1A1A2A98A052516F2065145BF_gshared)(___0_keys, ___1_i, ___2_n, ___3_lo, ___4_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void ArraySortHelper_1__ctor_mA9DDD938E21377AEC026E6B4DB153AF5F9A3AB8E (ArraySortHelper_1_t29D513914E96AEF32E502B99C6F0EEF37999E378* __this, const RuntimeMethod* method)
{
	((  void (*) (ArraySortHelper_1_t29D513914E96AEF32E502B99C6F0EEF37999E378*, const RuntimeMethod*))ArraySortHelper_1__ctor_mA9DDD938E21377AEC026E6B4DB153AF5F9A3AB8E_gshared)(__this, method);
}
inline Comparer_1_tBEF5D5DBCCD138F02D83FA6000B72EB74D74DD20* Comparer_1_get_Default_m6977A1FE5EA104A1E2C7D49B33FA845B200D6AA5 (const RuntimeMethod* method)
{
	return ((  Comparer_1_tBEF5D5DBCCD138F02D83FA6000B72EB74D74DD20* (*) (const RuntimeMethod*))Comparer_1_get_Default_m6977A1FE5EA104A1E2C7D49B33FA845B200D6AA5_gshared)(method);
}
inline void Comparison_1__ctor_m63E2985624473006D3CFC65522CCDC2A032026ED (Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m63E2985624473006D3CFC65522CCDC2A032026ED_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ArraySortHelper_1_IntrospectiveSort_m1D55006AC462D75C2CE261FD91C93BF54EF3C71E (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, int32_t ___1_left, int32_t ___2_length, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*, int32_t, int32_t, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E*, const RuntimeMethod*))ArraySortHelper_1_IntrospectiveSort_m1D55006AC462D75C2CE261FD91C93BF54EF3C71E_gshared)(___0_keys, ___1_left, ___2_length, ___3_comparer, method);
}
inline int32_t ArraySortHelper_1_InternalBinarySearch_m7092E5D511A4386F62438C9FCA26F39D0A636179 (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_array, int32_t ___1_index, int32_t ___2_length, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*, int32_t, int32_t, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_InternalBinarySearch_m7092E5D511A4386F62438C9FCA26F39D0A636179_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline int32_t Comparison_1_Invoke_m3D0BD99863A18604C8E21A32D41D56217B26A9A4_inline (Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_x, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___1_y, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E*, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C, const RuntimeMethod*))Comparison_1_Invoke_m3D0BD99863A18604C8E21A32D41D56217B26A9A4_gshared_inline)(__this, ___0_x, ___1_y, method);
}
inline void ArraySortHelper_1_IntroSort_m0BD5189B2CB234383AE43301D50A0C6247542F76 (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depthLimit, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___4_comparer, const RuntimeMethod* method)
{
	((  void (*) (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*, int32_t, int32_t, int32_t, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E*, const RuntimeMethod*))ArraySortHelper_1_IntroSort_m0BD5189B2CB234383AE43301D50A0C6247542F76_gshared)(___0_keys, ___1_lo, ___2_hi, ___3_depthLimit, ___4_comparer, method);
}
inline void ArraySortHelper_1_SwapIfGreater_mCE5B161EB27F9EE49B85D2D69DC8F81B04FFEBE1 (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___1_comparer, int32_t ___2_a, int32_t ___3_b, const RuntimeMethod* method)
{
	((  void (*) (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E*, int32_t, int32_t, const RuntimeMethod*))ArraySortHelper_1_SwapIfGreater_mCE5B161EB27F9EE49B85D2D69DC8F81B04FFEBE1_gshared)(___0_keys, ___1_comparer, ___2_a, ___3_b, method);
}
inline void ArraySortHelper_1_InsertionSort_m13814DFA2EBB58EE7D931298557C30AFF312B2FC (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*, int32_t, int32_t, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E*, const RuntimeMethod*))ArraySortHelper_1_InsertionSort_m13814DFA2EBB58EE7D931298557C30AFF312B2FC_gshared)(___0_keys, ___1_lo, ___2_hi, ___3_comparer, method);
}
inline void ArraySortHelper_1_Heapsort_m65FDFF63518040E9448380617CEC8D5CCBA7FAC4 (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*, int32_t, int32_t, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E*, const RuntimeMethod*))ArraySortHelper_1_Heapsort_m65FDFF63518040E9448380617CEC8D5CCBA7FAC4_gshared)(___0_keys, ___1_lo, ___2_hi, ___3_comparer, method);
}
inline int32_t ArraySortHelper_1_PickPivotAndPartition_mFB9F7BC3732F70A35DC439A3A8E67A4AAC8F537A (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___3_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*, int32_t, int32_t, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E*, const RuntimeMethod*))ArraySortHelper_1_PickPivotAndPartition_mFB9F7BC3732F70A35DC439A3A8E67A4AAC8F537A_gshared)(___0_keys, ___1_lo, ___2_hi, ___3_comparer, method);
}
inline void ArraySortHelper_1_Swap_m2A59821D7B56FB86D678D06D8F1E81CC8E7948F5 (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_a, int32_t ___1_i, int32_t ___2_j, const RuntimeMethod* method)
{
	((  void (*) (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*, int32_t, int32_t, const RuntimeMethod*))ArraySortHelper_1_Swap_m2A59821D7B56FB86D678D06D8F1E81CC8E7948F5_gshared)(___0_a, ___1_i, ___2_j, method);
}
inline void ArraySortHelper_1_DownHeap_m5416FCE905F210069CCDB16E9D8AB282806BF652 (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___4_comparer, const RuntimeMethod* method)
{
	((  void (*) (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*, int32_t, int32_t, int32_t, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E*, const RuntimeMethod*))ArraySortHelper_1_DownHeap_m5416FCE905F210069CCDB16E9D8AB282806BF652_gshared)(___0_keys, ___1_i, ___2_n, ___3_lo, ___4_comparer, method);
}
inline void ArraySortHelper_1__ctor_mAA50051D3DEA95619F2F46DD0C756D048648DD2E (ArraySortHelper_1_tFF5DC7397168A75911DBA80813694A06456F38D5* __this, const RuntimeMethod* method)
{
	((  void (*) (ArraySortHelper_1_tFF5DC7397168A75911DBA80813694A06456F38D5*, const RuntimeMethod*))ArraySortHelper_1__ctor_mAA50051D3DEA95619F2F46DD0C756D048648DD2E_gshared)(__this, method);
}
inline Comparer_1_t0DF99FC079A32C7177827C3CD2D6BD476B79D392* Comparer_1_get_Default_m75317E2206D3EA2B6B86263B0969BBF80896A2BE (const RuntimeMethod* method)
{
	return ((  Comparer_1_t0DF99FC079A32C7177827C3CD2D6BD476B79D392* (*) (const RuntimeMethod*))Comparer_1_get_Default_m75317E2206D3EA2B6B86263B0969BBF80896A2BE_gshared)(method);
}
inline void Comparison_1__ctor_m79589F26FA4F6C202E8E78B5340AAFADA082CAA4 (Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m79589F26FA4F6C202E8E78B5340AAFADA082CAA4_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ArraySortHelper_1_IntrospectiveSort_mDA3D72A0F426A4F36FF37ED42DF0A1F1BBF1A01E (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_keys, int32_t ___1_left, int32_t ___2_length, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317*, int32_t, int32_t, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333*, const RuntimeMethod*))ArraySortHelper_1_IntrospectiveSort_mDA3D72A0F426A4F36FF37ED42DF0A1F1BBF1A01E_gshared)(___0_keys, ___1_left, ___2_length, ___3_comparer, method);
}
inline int32_t ArraySortHelper_1_InternalBinarySearch_m9A6A543CEF63BE36590807A16365D0851B469BE1 (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_array, int32_t ___1_index, int32_t ___2_length, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317*, int32_t, int32_t, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_InternalBinarySearch_m9A6A543CEF63BE36590807A16365D0851B469BE1_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline int32_t Comparison_1_Invoke_mEA9A6C71B80C9370449DC9B10920F7B713E858F9_inline (Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* __this, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___0_x, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___1_y, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333*, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3, const RuntimeMethod*))Comparison_1_Invoke_mEA9A6C71B80C9370449DC9B10920F7B713E858F9_gshared_inline)(__this, ___0_x, ___1_y, method);
}
inline void ArraySortHelper_1_IntroSort_mAF3E9C95C91FDFF3DD451A576BA3292F84CF4A1E (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depthLimit, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* ___4_comparer, const RuntimeMethod* method)
{
	((  void (*) (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317*, int32_t, int32_t, int32_t, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333*, const RuntimeMethod*))ArraySortHelper_1_IntroSort_mAF3E9C95C91FDFF3DD451A576BA3292F84CF4A1E_gshared)(___0_keys, ___1_lo, ___2_hi, ___3_depthLimit, ___4_comparer, method);
}
inline void ArraySortHelper_1_SwapIfGreater_m6630EA6B7A437D8BA6C0B6F8B4DDCFB79D57B830 (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_keys, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* ___1_comparer, int32_t ___2_a, int32_t ___3_b, const RuntimeMethod* method)
{
	((  void (*) (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317*, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333*, int32_t, int32_t, const RuntimeMethod*))ArraySortHelper_1_SwapIfGreater_m6630EA6B7A437D8BA6C0B6F8B4DDCFB79D57B830_gshared)(___0_keys, ___1_comparer, ___2_a, ___3_b, method);
}
inline void ArraySortHelper_1_InsertionSort_mD52F61852A2990F4AFF738940B40893ABC84B875 (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317*, int32_t, int32_t, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333*, const RuntimeMethod*))ArraySortHelper_1_InsertionSort_mD52F61852A2990F4AFF738940B40893ABC84B875_gshared)(___0_keys, ___1_lo, ___2_hi, ___3_comparer, method);
}
inline void ArraySortHelper_1_Heapsort_m9A0E52D87FE89BD5100834D93A7B9EEBFF287129 (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317*, int32_t, int32_t, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333*, const RuntimeMethod*))ArraySortHelper_1_Heapsort_m9A0E52D87FE89BD5100834D93A7B9EEBFF287129_gshared)(___0_keys, ___1_lo, ___2_hi, ___3_comparer, method);
}
inline int32_t ArraySortHelper_1_PickPivotAndPartition_mDA85D4C36534CE7BE0D4C2537762FADC77E4A285 (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* ___3_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317*, int32_t, int32_t, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333*, const RuntimeMethod*))ArraySortHelper_1_PickPivotAndPartition_mDA85D4C36534CE7BE0D4C2537762FADC77E4A285_gshared)(___0_keys, ___1_lo, ___2_hi, ___3_comparer, method);
}
inline void ArraySortHelper_1_Swap_m896BC6EED1BC0BC81DB9ECED89231155C9654AC1 (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_a, int32_t ___1_i, int32_t ___2_j, const RuntimeMethod* method)
{
	((  void (*) (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317*, int32_t, int32_t, const RuntimeMethod*))ArraySortHelper_1_Swap_m896BC6EED1BC0BC81DB9ECED89231155C9654AC1_gshared)(___0_a, ___1_i, ___2_j, method);
}
inline void ArraySortHelper_1_DownHeap_mE4140279D77FB4B11DC2C2259AF128FBBFC3466B (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_keys, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* ___4_comparer, const RuntimeMethod* method)
{
	((  void (*) (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317*, int32_t, int32_t, int32_t, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333*, const RuntimeMethod*))ArraySortHelper_1_DownHeap_mE4140279D77FB4B11DC2C2259AF128FBBFC3466B_gshared)(___0_keys, ___1_i, ___2_n, ___3_lo, ___4_comparer, method);
}
inline void ArraySortHelper_1__ctor_mF3E1EA555692305BF2DE0C2188279568245A8830 (ArraySortHelper_1_tA6CB6CF7DB992875A689164DA4EDAFB7F3F1505F* __this, const RuntimeMethod* method)
{
	((  void (*) (ArraySortHelper_1_tA6CB6CF7DB992875A689164DA4EDAFB7F3F1505F*, const RuntimeMethod*))ArraySortHelper_1__ctor_mF3E1EA555692305BF2DE0C2188279568245A8830_gshared)(__this, method);
}
inline Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* (*) (const RuntimeMethod*))Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051_gshared)(method);
}
inline void ArraySortHelper_2_IntrospectiveSort_m0A17977AEF029F60FB79FD801B413366FA66EF42 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_left, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_2_IntrospectiveSort_m0A17977AEF029F60FB79FD801B413366FA66EF42_gshared)(___0_keys, ___1_values, ___2_left, ___3_length, ___4_comparer, method);
}
inline void ArraySortHelper_2_IntroSort_mD6DB9589646AEC8A233A82DF1FDE372B736B5AB5 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, int32_t ___4_depthLimit, RuntimeObject* ___5_comparer, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_2_IntroSort_mD6DB9589646AEC8A233A82DF1FDE372B736B5AB5_gshared)(___0_keys, ___1_values, ___2_lo, ___3_hi, ___4_depthLimit, ___5_comparer, method);
}
inline void ArraySortHelper_2_SwapIfGreaterWithItems_m3F7DF0379AE9AB631A6FAC0583B0B2D24BF81975 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, RuntimeObject* ___2_comparer, int32_t ___3_a, int32_t ___4_b, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))ArraySortHelper_2_SwapIfGreaterWithItems_m3F7DF0379AE9AB631A6FAC0583B0B2D24BF81975_gshared)(___0_keys, ___1_values, ___2_comparer, ___3_a, ___4_b, method);
}
inline void ArraySortHelper_2_InsertionSort_m20C87943C2EA83ECCBD96E7C50EB13AC67146AA5 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_2_InsertionSort_m20C87943C2EA83ECCBD96E7C50EB13AC67146AA5_gshared)(___0_keys, ___1_values, ___2_lo, ___3_hi, ___4_comparer, method);
}
inline void ArraySortHelper_2_Heapsort_mE480928E488842ABB5EA3CB974C5CDAC779BAE14 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_2_Heapsort_mE480928E488842ABB5EA3CB974C5CDAC779BAE14_gshared)(___0_keys, ___1_values, ___2_lo, ___3_hi, ___4_comparer, method);
}
inline int32_t ArraySortHelper_2_PickPivotAndPartition_m166BF2FF901E7457DE291FF94704FFAE7FD6FC9B (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_2_PickPivotAndPartition_m166BF2FF901E7457DE291FF94704FFAE7FD6FC9B_gshared)(___0_keys, ___1_values, ___2_lo, ___3_hi, ___4_comparer, method);
}
inline void ArraySortHelper_2_Swap_m8E06889F0CFDDB36D72CA149718D1DA69B492FE4 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_i, int32_t ___3_j, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))ArraySortHelper_2_Swap_m8E06889F0CFDDB36D72CA149718D1DA69B492FE4_gshared)(___0_keys, ___1_values, ___2_i, ___3_j, method);
}
inline void ArraySortHelper_2_DownHeap_mCE50BB8E3B0675EE9D0D575D0EBC9BCC5A8D2801 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_i, int32_t ___3_n, int32_t ___4_lo, RuntimeObject* ___5_comparer, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_2_DownHeap_mCE50BB8E3B0675EE9D0D575D0EBC9BCC5A8D2801_gshared)(___0_keys, ___1_values, ___2_i, ___3_n, ___4_lo, ___5_comparer, method);
}
inline void ArraySortHelper_2__ctor_m1119B44E916721D12206A0232285DA5BB4151627 (ArraySortHelper_2_t2ADBEC137D76AF37A250A1FBB9051B71AB1F10A7* __this, const RuntimeMethod* method)
{
	((  void (*) (ArraySortHelper_2_t2ADBEC137D76AF37A250A1FBB9051B71AB1F10A7*, const RuntimeMethod*))ArraySortHelper_2__ctor_m1119B44E916721D12206A0232285DA5BB4151627_gshared)(__this, method);
}
inline Comparer_1_t156CA54426F60B4132C76BFACD5FDBD3043D437E* Comparer_1_get_Default_mDCEA11B875EEB23AECDA2D76B230E1AD7B6962E4 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t156CA54426F60B4132C76BFACD5FDBD3043D437E* (*) (const RuntimeMethod*))Comparer_1_get_Default_mDCEA11B875EEB23AECDA2D76B230E1AD7B6962E4_gshared)(method);
}
inline void ArraySortHelper_2_IntrospectiveSort_mDEACBEDABBAD8B687A0D61672A14A5915E915D31 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, int32_t ___2_left, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	((  void (*) (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_2_IntrospectiveSort_mDEACBEDABBAD8B687A0D61672A14A5915E915D31_gshared)(___0_keys, ___1_values, ___2_left, ___3_length, ___4_comparer, method);
}
inline void ArraySortHelper_2_IntroSort_mA54625173A6A1DCD2BC0AF59627AEEFB55AF98A8 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, int32_t ___2_lo, int32_t ___3_hi, int32_t ___4_depthLimit, RuntimeObject* ___5_comparer, const RuntimeMethod* method)
{
	((  void (*) (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_2_IntroSort_mA54625173A6A1DCD2BC0AF59627AEEFB55AF98A8_gshared)(___0_keys, ___1_values, ___2_lo, ___3_hi, ___4_depthLimit, ___5_comparer, method);
}
inline void ArraySortHelper_2_SwapIfGreaterWithItems_m41D1C03140B109A8A192A0053FCF4C446A552D47 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, RuntimeObject* ___2_comparer, int32_t ___3_a, int32_t ___4_b, const RuntimeMethod* method)
{
	((  void (*) (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))ArraySortHelper_2_SwapIfGreaterWithItems_m41D1C03140B109A8A192A0053FCF4C446A552D47_gshared)(___0_keys, ___1_values, ___2_comparer, ___3_a, ___4_b, method);
}
inline void ArraySortHelper_2_InsertionSort_mCB672D5F75C3401C489DC521F8B3791A6581F156 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	((  void (*) (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_2_InsertionSort_mCB672D5F75C3401C489DC521F8B3791A6581F156_gshared)(___0_keys, ___1_values, ___2_lo, ___3_hi, ___4_comparer, method);
}
inline void ArraySortHelper_2_Heapsort_m3EB6CCB850DE6C86E34B8752EDCFB39F003AB1A4 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	((  void (*) (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_2_Heapsort_m3EB6CCB850DE6C86E34B8752EDCFB39F003AB1A4_gshared)(___0_keys, ___1_values, ___2_lo, ___3_hi, ___4_comparer, method);
}
inline int32_t ArraySortHelper_2_PickPivotAndPartition_m9B8D4A15D693048F0AFBE6AA8EB9ACD34FA3703E (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_2_PickPivotAndPartition_m9B8D4A15D693048F0AFBE6AA8EB9ACD34FA3703E_gshared)(___0_keys, ___1_values, ___2_lo, ___3_hi, ___4_comparer, method);
}
inline void ArraySortHelper_2_Swap_m8D8C959E216E4B7A159F3ACEAB9612EA0985D8E4 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, int32_t ___2_i, int32_t ___3_j, const RuntimeMethod* method)
{
	((  void (*) (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t, int32_t, const RuntimeMethod*))ArraySortHelper_2_Swap_m8D8C959E216E4B7A159F3ACEAB9612EA0985D8E4_gshared)(___0_keys, ___1_values, ___2_i, ___3_j, method);
}
inline void ArraySortHelper_2_DownHeap_m2905BDE0F660F0C1CF7ADAEF869DCC8E251FAA6C (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, int32_t ___2_i, int32_t ___3_n, int32_t ___4_lo, RuntimeObject* ___5_comparer, const RuntimeMethod* method)
{
	((  void (*) (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_2_DownHeap_m2905BDE0F660F0C1CF7ADAEF869DCC8E251FAA6C_gshared)(___0_keys, ___1_values, ___2_i, ___3_n, ___4_lo, ___5_comparer, method);
}
inline void ArraySortHelper_2__ctor_mE2C046899BED288FEAF20A1041FA9C2619C74C3D (ArraySortHelper_2_tE4E677AAEE3AEDD26440F8404627379269E5E692* __this, const RuntimeMethod* method)
{
	((  void (*) (ArraySortHelper_2_tE4E677AAEE3AEDD26440F8404627379269E5E692*, const RuntimeMethod*))ArraySortHelper_2__ctor_mE2C046899BED288FEAF20A1041FA9C2619C74C3D_gshared)(__this, method);
}
inline Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* Comparer_1_get_Default_m9D7E1E21FFEE2C32B345D0E5C835BA713DA80B2C (const RuntimeMethod* method)
{
	return ((  Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* (*) (const RuntimeMethod*))Comparer_1_get_Default_m9D7E1E21FFEE2C32B345D0E5C835BA713DA80B2C_gshared)(method);
}
inline void ArraySortHelper_2_IntrospectiveSort_m9E7EB330972747BD8E7B6E9970D6E487ABABB500 (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_left, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	((  void (*) (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_2_IntrospectiveSort_m9E7EB330972747BD8E7B6E9970D6E487ABABB500_gshared)(___0_keys, ___1_values, ___2_left, ___3_length, ___4_comparer, method);
}
inline void ArraySortHelper_2_IntroSort_mD1680D7BF4A65DD4C5ED7C94432784882436F785 (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, int32_t ___4_depthLimit, RuntimeObject* ___5_comparer, const RuntimeMethod* method)
{
	((  void (*) (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_2_IntroSort_mD1680D7BF4A65DD4C5ED7C94432784882436F785_gshared)(___0_keys, ___1_values, ___2_lo, ___3_hi, ___4_depthLimit, ___5_comparer, method);
}
inline void ArraySortHelper_2_SwapIfGreaterWithItems_m6CFAE71AC004D1CB6B900AC819480AF4FBEDD42B (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, RuntimeObject* ___2_comparer, int32_t ___3_a, int32_t ___4_b, const RuntimeMethod* method)
{
	((  void (*) (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))ArraySortHelper_2_SwapIfGreaterWithItems_m6CFAE71AC004D1CB6B900AC819480AF4FBEDD42B_gshared)(___0_keys, ___1_values, ___2_comparer, ___3_a, ___4_b, method);
}
inline void ArraySortHelper_2_InsertionSort_mEBBF5396F4DAC8F56276C67482061E0A925B4508 (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	((  void (*) (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_2_InsertionSort_mEBBF5396F4DAC8F56276C67482061E0A925B4508_gshared)(___0_keys, ___1_values, ___2_lo, ___3_hi, ___4_comparer, method);
}
inline void ArraySortHelper_2_Heapsort_m7CC28E5E1744A030B1A1BFAF54CB5A604C669C67 (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	((  void (*) (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_2_Heapsort_m7CC28E5E1744A030B1A1BFAF54CB5A604C669C67_gshared)(___0_keys, ___1_values, ___2_lo, ___3_hi, ___4_comparer, method);
}
inline int32_t ArraySortHelper_2_PickPivotAndPartition_mB86F8CF4E83122E6A13CACB968BD0F3046401851 (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_2_PickPivotAndPartition_mB86F8CF4E83122E6A13CACB968BD0F3046401851_gshared)(___0_keys, ___1_values, ___2_lo, ___3_hi, ___4_comparer, method);
}
inline void ArraySortHelper_2_Swap_m85472190C8B8145BF45B6C918DDBFC6B7A5ACE31 (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_i, int32_t ___3_j, const RuntimeMethod* method)
{
	((  void (*) (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))ArraySortHelper_2_Swap_m85472190C8B8145BF45B6C918DDBFC6B7A5ACE31_gshared)(___0_keys, ___1_values, ___2_i, ___3_j, method);
}
inline void ArraySortHelper_2_DownHeap_m695FE5B74D11DDAF60F4F4FCA8A6A0084C6086A4 (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_i, int32_t ___3_n, int32_t ___4_lo, RuntimeObject* ___5_comparer, const RuntimeMethod* method)
{
	((  void (*) (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_2_DownHeap_m695FE5B74D11DDAF60F4F4FCA8A6A0084C6086A4_gshared)(___0_keys, ___1_values, ___2_i, ___3_n, ___4_lo, ___5_comparer, method);
}
inline void ArraySortHelper_2__ctor_m0B784F3FFEF6A37687B6D8EDDCA36E855766A00E (ArraySortHelper_2_t426C164FEAE6FB793F95132D9B3B9D7C00526F6F* __this, const RuntimeMethod* method)
{
	((  void (*) (ArraySortHelper_2_t426C164FEAE6FB793F95132D9B3B9D7C00526F6F*, const RuntimeMethod*))ArraySortHelper_2__ctor_m0B784F3FFEF6A37687B6D8EDDCA36E855766A00E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncInstantiateOperation__ctor_m0A63AF9DEC342106170FA1821748827015B47435 (AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40* __this, intptr_t ___0_ptr, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
inline void Awaiter__ctor_m0D4459378C0748F8FBF9CEB11D6BACFB010E6478 (Awaiter_t8B3BFA67A1E74F17A973E27246D6BD904CA41D32* __this, AsyncInstantiateOperation_1_t4ADCB11AF0D1CE8F6CBB592A95ED176851CE3C4F* ___0_op, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t8B3BFA67A1E74F17A973E27246D6BD904CA41D32*, AsyncInstantiateOperation_1_t4ADCB11AF0D1CE8F6CBB592A95ED176851CE3C4F*, const RuntimeMethod*))Awaiter__ctor_m0D4459378C0748F8FBF9CEB11D6BACFB010E6478_gshared)(__this, ___0_op, method);
}
inline void Awaiter__ctor_mAF98E84E028D9DF706E1DA7721D64E73719C85EF (Awaiter_t59A92513E07691C90A027430E5BF4BC7A9A592D8* __this, AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB* ___0_op, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t59A92513E07691C90A027430E5BF4BC7A9A592D8*, AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB*, const RuntimeMethod*))Awaiter__ctor_mAF98E84E028D9DF706E1DA7721D64E73719C85EF_gshared)(__this, ___0_op, method);
}
inline void AsyncLocalValueChangedArgs_1__ctor_mE42A8DCCEF1217FD021FBD189C2BEDAD7FAE52F0 (AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30* __this, int32_t ___0_previousValue, int32_t ___1_currentValue, bool ___2_contextChanged, const RuntimeMethod* method)
{
	((  void (*) (AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30*, int32_t, int32_t, bool, const RuntimeMethod*))AsyncLocalValueChangedArgs_1__ctor_mE42A8DCCEF1217FD021FBD189C2BEDAD7FAE52F0_gshared)(__this, ___0_previousValue, ___1_currentValue, ___2_contextChanged, method);
}
inline void AsyncLocalValueChangedArgs_1__ctor_mCD46AE17C8F65750A0FCD16854B467184DBB7517 (AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95* __this, Il2CppSharedGenericObject* ___0_previousValue, Il2CppSharedGenericObject* ___1_currentValue, bool ___2_contextChanged, const RuntimeMethod* method)
{
	((  void (*) (AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, bool, const RuntimeMethod*))AsyncLocalValueChangedArgs_1__ctor_mCD46AE17C8F65750A0FCD16854B467184DBB7517_gshared)(__this, ___0_previousValue, ___1_currentValue, ___2_contextChanged, method);
}
inline void AsyncLocalValueChangedArgs_1__ctor_m8FC80AC8E561902AB0B4888598E9F43818996132 (AsyncLocalValueChangedArgs_1_t7A62C5604064A762FE6998F0A39E23222FFE8429* __this, Il2CppFullySharedGenericAny ___0_previousValue, Il2CppFullySharedGenericAny ___1_currentValue, bool ___2_contextChanged, const RuntimeMethod* method)
{
	((  void (*) (AsyncLocalValueChangedArgs_1_t7A62C5604064A762FE6998F0A39E23222FFE8429*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, bool, const RuntimeMethod*))AsyncLocalValueChangedArgs_1__ctor_m8FC80AC8E561902AB0B4888598E9F43818996132_gshared)((AsyncLocalValueChangedArgs_1_t7A62C5604064A762FE6998F0A39E23222FFE8429*)__this, ___0_previousValue, ___1_currentValue, ___2_contextChanged, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExecutionContext_GetLocalValue_mD7817BA06511586607DB09BC0B147294D11961ED (RuntimeObject* ___0_local, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_SetLocalValue_m47C23A6C729166E0F87ED79D268F7043AD58E1A5 (RuntimeObject* ___0_local, RuntimeObject* ___1_newValue, bool ___2_needChangeNotifications, const RuntimeMethod* method) ;
inline void Action_1_Invoke_mBCE58B67D7100D1DFF3F431F7DF460E9C688745B_inline (Action_1_t69E611F01CC2051A51509BEA84FA829EA4D7C643* __this, AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t69E611F01CC2051A51509BEA84FA829EA4D7C643*, AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30, const RuntimeMethod*))Action_1_Invoke_mBCE58B67D7100D1DFF3F431F7DF460E9C688745B_gshared_inline)(__this, ___0_obj, method);
}
inline void Action_1_Invoke_m15B09A14760255FA046745C030377D21CE4BE793_inline (Action_1_tB137F0A79CAAF9953E6A15AB8139E511ACF2041D* __this, AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB137F0A79CAAF9953E6A15AB8139E511ACF2041D*, AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95, const RuntimeMethod*))Action_1_Invoke_m15B09A14760255FA046745C030377D21CE4BE793_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncMethodBuilderCore_SetStateMachine_m156C470618D0E6B9E018904A491BBD44466EBFDA (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mC468FEBA35E9688F98709D52A7539B2C1C4C8C15 (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_mC468FEBA35E9688F98709D52A7539B2C1C4C8C15_gshared)(__this, ___0_stateMachine, method);
}
inline void Task_1__ctor_m6FD25DABCE184917175389E391C873409261DDB0 (Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0*, const RuntimeMethod*))Task_1__ctor_m6FD25DABCE184917175389E391C873409261DDB0_gshared)(__this, method);
}
inline Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* AsyncTaskMethodBuilder_1_get_Task_m7240951B6E9A5DB275CDFCA78339FFEE26BA8802 (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* (*) (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m7240951B6E9A5DB275CDFCA78339FFEE26BA8802_gshared)(__this, method);
}
inline Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* AsyncTaskMethodBuilder_1_GetTaskForResult_m77E79732C249B6B4254DF543FA0A2FAE26803011 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01, const RuntimeMethod*))AsyncTaskMethodBuilder_1_GetTaskForResult_m77E79732C249B6B4254DF543FA0A2FAE26803011_gshared)(___0_result, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335 (int32_t ___0_traceLevel, int32_t ___1_taskId, int32_t ___2_status, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C (int32_t ___0_taskId, const RuntimeMethod* method) ;
inline bool Task_1_TrySetResult_m0E1289A1CCF695E50715221524D7B407E43BE28C (Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0*, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01, const RuntimeMethod*))Task_1_TrySetResult_m0E1289A1CCF695E50715221524D7B407E43BE28C_gshared)(__this, ___0_result, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058 (String_t* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void AsyncTaskMethodBuilder_1_SetResult_m0582B44433D671C064F3AE9A809A3EA5FE256781 (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3*, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0582B44433D671C064F3AE9A809A3EA5FE256781_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_m42172F6932E531FBEEFE4AED72241320EF927434 (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* __this, Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* ___0_completedTask, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3*, Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m42172F6932E531FBEEFE4AED72241320EF927434_gshared)(__this, ___0_completedTask, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, RuntimeObject* ___0_exceptionObject, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_tokenToRecord, RuntimeObject* ___1_cancellationException, const RuntimeMethod* method) ;
inline void AsyncTaskMethodBuilder_1_SetException_m65D6A428A99A2074CE9E23A65EFE474879ADC095 (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m65D6A428A99A2074CE9E23A65EFE474879ADC095_gshared)(__this, ___0_exception, method);
}
inline void Task_1__ctor_mF447742220AD60B921E950DB392B44F553021674 (Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0*, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01, const RuntimeMethod*))Task_1__ctor_mF447742220AD60B921E950DB392B44F553021674_gshared)(__this, ___0_result, method);
}
inline Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* AsyncTaskCache_CreateCacheableTask_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_m96AB4AB175E7A53B8211E82B7CC642AD7E340637 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01, const RuntimeMethod*))AsyncTaskCache_CreateCacheableTask_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_m96AB4AB175E7A53B8211E82B7CC642AD7E340637_gshared)(___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m63FF5F72B43D370B1069C9079A541A6E8AC2CE1B (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m63FF5F72B43D370B1069C9079A541A6E8AC2CE1B_gshared)(__this, ___0_stateMachine, method);
}
inline void Task_1__ctor_mD3FC7E2EF363236809F13343A64FC880CA6C74FA (Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B*, const RuntimeMethod*))Task_1__ctor_mD3FC7E2EF363236809F13343A64FC880CA6C74FA_gshared)(__this, method);
}
inline Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* AsyncTaskMethodBuilder_1_get_Task_mC10888726AB1CF669A543F39EC82C1B8B296C524 (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* (*) (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mC10888726AB1CF669A543F39EC82C1B8B296C524_gshared)(__this, method);
}
inline Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* AsyncTaskMethodBuilder_1_GetTaskForResult_m6B3189831D5E29F5299A08939FE67EE7D6A55CF6 (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* (*) (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC, const RuntimeMethod*))AsyncTaskMethodBuilder_1_GetTaskForResult_m6B3189831D5E29F5299A08939FE67EE7D6A55CF6_gshared)(___0_result, method);
}
inline bool Task_1_TrySetResult_m45CC6CDCCB981248C56909C9D64A2995260A2621 (Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B*, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC, const RuntimeMethod*))Task_1_TrySetResult_m45CC6CDCCB981248C56909C9D64A2995260A2621_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_m4A9FF4B718DBEE05F481602FC54B269D0A99F2FD (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E*, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m4A9FF4B718DBEE05F481602FC54B269D0A99F2FD_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_m6746E4B742BF588934A5B6DEC219B8620E218FC7 (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* __this, Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* ___0_completedTask, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E*, Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m6746E4B742BF588934A5B6DEC219B8620E218FC7_gshared)(__this, ___0_completedTask, method);
}
inline void AsyncTaskMethodBuilder_1_SetException_m20A87382A7B6D6EFFFCABB906FA5E385D976715E (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m20A87382A7B6D6EFFFCABB906FA5E385D976715E_gshared)(__this, ___0_exception, method);
}
inline void Task_1__ctor_m8D3E36AB4BDE6C83EAEBA04A2495EDF3D5F17E7E (Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B*, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC, const RuntimeMethod*))Task_1__ctor_m8D3E36AB4BDE6C83EAEBA04A2495EDF3D5F17E7E_gshared)(__this, ___0_result, method);
}
inline Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* AsyncTaskCache_CreateCacheableTask_TisNullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_m5C538BE589257259BE446E11D4BF68C8B5C2B2E9 (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* (*) (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC, const RuntimeMethod*))AsyncTaskCache_CreateCacheableTask_TisNullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_m5C538BE589257259BE446E11D4BF68C8B5C2B2E9_gshared)(___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mE0D6C0F35D575B78671BF90F206948F638430F50 (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_mE0D6C0F35D575B78671BF90F206948F638430F50_gshared)(__this, ___0_stateMachine, method);
}
inline void Task_1__ctor_mC8EFB6F199A7B074BA039A2B4CEB2DAA776F959D (Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964*, const RuntimeMethod*))Task_1__ctor_mC8EFB6F199A7B074BA039A2B4CEB2DAA776F959D_gshared)(__this, method);
}
inline Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* AsyncTaskMethodBuilder_1_get_Task_mFF107A582F8CB464DC795B93946486F5CB72C967 (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* (*) (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mFF107A582F8CB464DC795B93946486F5CB72C967_gshared)(__this, method);
}
inline Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* AsyncTaskMethodBuilder_1_GetTaskForResult_m56752E94BB4DD52A5AEAC4F698DFEEDF9275A857 (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* (*) (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B, const RuntimeMethod*))AsyncTaskMethodBuilder_1_GetTaskForResult_m56752E94BB4DD52A5AEAC4F698DFEEDF9275A857_gshared)(___0_result, method);
}
inline bool Task_1_TrySetResult_m7BBE50D093A6F0F6CD80D0AEF961E9B1F489EB15 (Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* __this, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964*, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B, const RuntimeMethod*))Task_1_TrySetResult_m7BBE50D093A6F0F6CD80D0AEF961E9B1F489EB15_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_m354CAA69E85D02ECDA58F4E3ED331615B9B286D9 (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* __this, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6*, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m354CAA69E85D02ECDA58F4E3ED331615B9B286D9_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_m0A2FD7A765CABE5B08E6F7C5B44B0D346063B6FE (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* __this, Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* ___0_completedTask, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6*, Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0A2FD7A765CABE5B08E6F7C5B44B0D346063B6FE_gshared)(__this, ___0_completedTask, method);
}
inline void AsyncTaskMethodBuilder_1_SetException_mEA9A1250CD59EB926FE49E9557A3680DF0FE336D (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mEA9A1250CD59EB926FE49E9557A3680DF0FE336D_gshared)(__this, ___0_exception, method);
}
inline void Task_1__ctor_mAC82BD4DDEA1A5100605394F9936B0F565FCC507 (Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* __this, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964*, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B, const RuntimeMethod*))Task_1__ctor_mAC82BD4DDEA1A5100605394F9936B0F565FCC507_gshared)(__this, ___0_result, method);
}
inline Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* AsyncTaskCache_CreateCacheableTask_TisNullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_m5C1E3DE59946A59843B982943FCCD902F176696E (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* (*) (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B, const RuntimeMethod*))AsyncTaskCache_CreateCacheableTask_TisNullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_m5C1E3DE59946A59843B982943FCCD902F176696E_gshared)(___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m41A9EFE80569D0ED18656151ACD1E3563B288BBA (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m41A9EFE80569D0ED18656151ACD1E3563B288BBA_gshared)(__this, ___0_stateMachine, method);
}
inline void Task_1__ctor_m2A24686E3CD6ADE147BFEB3CD25DDEB30D830AE5 (Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239*, const RuntimeMethod*))Task_1__ctor_m2A24686E3CD6ADE147BFEB3CD25DDEB30D830AE5_gshared)(__this, method);
}
inline Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* AsyncTaskMethodBuilder_1_get_Task_m1BFEC2D85643659CCFCB0055986B849F09DB6DE2 (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* (*) (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m1BFEC2D85643659CCFCB0055986B849F09DB6DE2_gshared)(__this, method);
}
inline Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* AsyncTaskMethodBuilder_1_GetTaskForResult_m7C0AB57139BF368AC6D19E94BA17FAF38EE26F37 (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* (*) (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB, const RuntimeMethod*))AsyncTaskMethodBuilder_1_GetTaskForResult_m7C0AB57139BF368AC6D19E94BA17FAF38EE26F37_gshared)(___0_result, method);
}
inline bool Task_1_TrySetResult_mECC96B0C1F0FF06B9F41396F42346083FBF52CA7 (Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239*, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB, const RuntimeMethod*))Task_1_TrySetResult_mECC96B0C1F0FF06B9F41396F42346083FBF52CA7_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_m8FD5A31BDA892931A44F70190116C626F5FE76CF (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36*, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m8FD5A31BDA892931A44F70190116C626F5FE76CF_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_mE337A2D1B8EBE2EA7BEC9B0C7771E9C57BE37356 (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* __this, Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* ___0_completedTask, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36*, Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mE337A2D1B8EBE2EA7BEC9B0C7771E9C57BE37356_gshared)(__this, ___0_completedTask, method);
}
inline void AsyncTaskMethodBuilder_1_SetException_mB6B23BD3B309A05B4215C83F5C5AB68AEBDD470D (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mB6B23BD3B309A05B4215C83F5C5AB68AEBDD470D_gshared)(__this, ___0_exception, method);
}
inline void Task_1__ctor_m4BFE73FA4ECA4AE630CE7CBD188EAC1FE9722429 (Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239*, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB, const RuntimeMethod*))Task_1__ctor_m4BFE73FA4ECA4AE630CE7CBD188EAC1FE9722429_gshared)(__this, ___0_result, method);
}
inline Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* AsyncTaskCache_CreateCacheableTask_TisNullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_m4C2678F8646CE15535AA9FF141054C5D350E6E84 (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* (*) (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB, const RuntimeMethod*))AsyncTaskCache_CreateCacheableTask_TisNullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_m4C2678F8646CE15535AA9FF141054C5D350E6E84_gshared)(___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mBECC7576674C907A0494A52697C163704277A86D (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_mBECC7576674C907A0494A52697C163704277A86D_gshared)(__this, ___0_stateMachine, method);
}
inline void Task_1__ctor_m345E75D3154D6F145F3BC063812295BC72297854 (Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41*, const RuntimeMethod*))Task_1__ctor_m345E75D3154D6F145F3BC063812295BC72297854_gshared)(__this, method);
}
inline Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* AsyncTaskMethodBuilder_1_get_Task_m7164E00326DC7BC82FE12A781478471DD7A1CE69 (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* (*) (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m7164E00326DC7BC82FE12A781478471DD7A1CE69_gshared)(__this, method);
}
inline Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* AsyncTaskMethodBuilder_1_GetTaskForResult_m20835BD24CC7D28A02C3240F74B31E4DB2D2EE6B (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165, const RuntimeMethod*))AsyncTaskMethodBuilder_1_GetTaskForResult_m20835BD24CC7D28A02C3240F74B31E4DB2D2EE6B_gshared)(___0_result, method);
}
inline bool Task_1_TrySetResult_m63A166803A98E96536A3D21D7E9E8F8FFF5761D0 (Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41*, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165, const RuntimeMethod*))Task_1_TrySetResult_m63A166803A98E96536A3D21D7E9E8F8FFF5761D0_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_m8B35722630A089A6AE51C45F0B6A16B21AE914A0 (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7*, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m8B35722630A089A6AE51C45F0B6A16B21AE914A0_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_m431A98AD6F85C66715CA4EC9A884D3486625CAC3 (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* __this, Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* ___0_completedTask, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7*, Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m431A98AD6F85C66715CA4EC9A884D3486625CAC3_gshared)(__this, ___0_completedTask, method);
}
inline void AsyncTaskMethodBuilder_1_SetException_mB2E9A1B7DBB59C420CDB96A04A128F745DE63AB4 (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mB2E9A1B7DBB59C420CDB96A04A128F745DE63AB4_gshared)(__this, ___0_exception, method);
}
inline void Task_1__ctor_mC20EE5CCB1CCB1C6150DA69D0756E83E1547BE6A (Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41*, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165, const RuntimeMethod*))Task_1__ctor_mC20EE5CCB1CCB1C6150DA69D0756E83E1547BE6A_gshared)(__this, ___0_result, method);
}
inline Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* AsyncTaskCache_CreateCacheableTask_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_mD2FD1BA37CD7BC9F997D797EF6CBD0208F55D7E2 (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165, const RuntimeMethod*))AsyncTaskCache_CreateCacheableTask_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_mD2FD1BA37CD7BC9F997D797EF6CBD0208F55D7E2_gshared)(___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m202DAC650B3B8EFE6A02ED46F243B399A3308879 (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m202DAC650B3B8EFE6A02ED46F243B399A3308879_gshared)(__this, ___0_stateMachine, method);
}
inline void Task_1__ctor_m9AD5FE1A0F48B1C1AD8614F87739B31DD3DE3568 (Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7*, const RuntimeMethod*))Task_1__ctor_m9AD5FE1A0F48B1C1AD8614F87739B31DD3DE3568_gshared)(__this, method);
}
inline Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* AsyncTaskMethodBuilder_1_get_Task_mB36BC37F05CC1BD3EDB9EC66B9BBEA7DE33F3D03 (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* (*) (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mB36BC37F05CC1BD3EDB9EC66B9BBEA7DE33F3D03_gshared)(__this, method);
}
inline Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* AsyncTaskMethodBuilder_1_GetTaskForResult_m81DB6DAED4F1821904FA836D73BB5CE8FBE778EE (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, const RuntimeMethod*))AsyncTaskMethodBuilder_1_GetTaskForResult_m81DB6DAED4F1821904FA836D73BB5CE8FBE778EE_gshared)(___0_result, method);
}
inline bool Task_1_TrySetResult_m48D840CA62136D390874D338ED6E57849E33490B (Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7*, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, const RuntimeMethod*))Task_1_TrySetResult_m48D840CA62136D390874D338ED6E57849E33490B_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_m7814370659E8E3550E3A679C1F2F516592198487 (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7*, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m7814370659E8E3550E3A679C1F2F516592198487_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_m628CA4F28FE2878774E97C22597DDFC877801B1D (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* __this, Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* ___0_completedTask, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7*, Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m628CA4F28FE2878774E97C22597DDFC877801B1D_gshared)(__this, ___0_completedTask, method);
}
inline void AsyncTaskMethodBuilder_1_SetException_m76968B53E22BA2AD3C6102934BDC2C9013F74A95 (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m76968B53E22BA2AD3C6102934BDC2C9013F74A95_gshared)(__this, ___0_exception, method);
}
inline void Task_1__ctor_m0A2664C4950556338199629BD2C98586D70A0813 (Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7*, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, const RuntimeMethod*))Task_1__ctor_m0A2664C4950556338199629BD2C98586D70A0813_gshared)(__this, ___0_result, method);
}
inline Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* AsyncTaskCache_CreateCacheableTask_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m443D01DF96CD3252CAFF048A991441D94DE3B66B (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, const RuntimeMethod*))AsyncTaskCache_CreateCacheableTask_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m443D01DF96CD3252CAFF048A991441D94DE3B66B_gshared)(___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m8F0334A0C9907253ABE4E56C7A7418B623694DCD (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m8F0334A0C9907253ABE4E56C7A7418B623694DCD_gshared)(__this, ___0_stateMachine, method);
}
inline void Task_1__ctor_mB69E08DDFCF368BC5ACC43CC245DF9583AB4E038 (Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F*, const RuntimeMethod*))Task_1__ctor_mB69E08DDFCF368BC5ACC43CC245DF9583AB4E038_gshared)(__this, method);
}
inline Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* AsyncTaskMethodBuilder_1_get_Task_m48238D6774C93E57C332776A6554A23FDB5F96DA (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* (*) (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m48238D6774C93E57C332776A6554A23FDB5F96DA_gshared)(__this, method);
}
inline Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* AsyncTaskMethodBuilder_1_GetTaskForResult_m67F6A4AD611FF3FB5A9FF21B8F6AF483DAC09C6C (OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* (*) (OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9, const RuntimeMethod*))AsyncTaskMethodBuilder_1_GetTaskForResult_m67F6A4AD611FF3FB5A9FF21B8F6AF483DAC09C6C_gshared)(___0_result, method);
}
inline bool Task_1_TrySetResult_mB50D5AA503E72529C566F4EE0137B963F3FE5673 (Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F*, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9, const RuntimeMethod*))Task_1_TrySetResult_mB50D5AA503E72529C566F4EE0137B963F3FE5673_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_m359B80F1DDD3F620C7468C447D5348089529F181 (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797*, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m359B80F1DDD3F620C7468C447D5348089529F181_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_mABA76C3ED04D3C65BAA79DDCE103FAB05EC40C33 (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* __this, Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* ___0_completedTask, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797*, Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mABA76C3ED04D3C65BAA79DDCE103FAB05EC40C33_gshared)(__this, ___0_completedTask, method);
}
inline void AsyncTaskMethodBuilder_1_SetException_m0FA6E3BCDEFBE9E3ED255A939D64874D3F875C1F (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m0FA6E3BCDEFBE9E3ED255A939D64874D3F875C1F_gshared)(__this, ___0_exception, method);
}
inline Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* JitHelpers_UnsafeCast_TisTask_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F_mE080E821ED209DAF60F6AB8C9A449191B4F9C6CC (RuntimeObject* ___0_o, const RuntimeMethod* method)
{
	return ((  Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* (*) (RuntimeObject*, const RuntimeMethod*))JitHelpers_UnsafeCast_TisIl2CppSharedGenericObject_m5D9454AE1AF0205501A6EFB33F3D7A80B0DC08F2_gshared)(___0_o, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIntPtr_op_Equality_m6854CBDA705729A896265CF7D2BD522E3460DCFB (uintptr_t ___0_value1, uintptr_t ___1_value2, const RuntimeMethod* method) ;
inline void Task_1__ctor_m4D4BD509ECDCE011E9B576253B3A653E552612B9 (Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F*, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9, const RuntimeMethod*))Task_1__ctor_m4D4BD509ECDCE011E9B576253B3A653E552612B9_gshared)(__this, ___0_result, method);
}
inline Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* AsyncTaskCache_CreateCacheableTask_TisOVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9_m3753A58FAA7436486AA441B6A740C0FB1F81DADA (OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* (*) (OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9, const RuntimeMethod*))AsyncTaskCache_CreateCacheableTask_TisOVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9_m3753A58FAA7436486AA441B6A740C0FB1F81DADA_gshared)(___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mC2B0A2D78E1927E162A724135D91C957FFCC5651 (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_mC2B0A2D78E1927E162A724135D91C957FFCC5651_gshared)(__this, ___0_stateMachine, method);
}
inline void Task_1__ctor_m9AF80B7E21D4365B610C21031E29FCB83CD32D27 (Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7*, const RuntimeMethod*))Task_1__ctor_m9AF80B7E21D4365B610C21031E29FCB83CD32D27_gshared)(__this, method);
}
inline Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* AsyncTaskMethodBuilder_1_get_Task_m49E13587633B83D706E7F85D3122B6583813C2D9 (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* (*) (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m49E13587633B83D706E7F85D3122B6583813C2D9_gshared)(__this, method);
}
inline Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* AsyncTaskMethodBuilder_1_GetTaskForResult_mE32CD0E7E25478FB00E104356F76E6629CA92A38 (OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* (*) (OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387, const RuntimeMethod*))AsyncTaskMethodBuilder_1_GetTaskForResult_mE32CD0E7E25478FB00E104356F76E6629CA92A38_gshared)(___0_result, method);
}
inline bool Task_1_TrySetResult_m0CB92709B2014A703FB57915E6ECB17C24789664 (Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* __this, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7*, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387, const RuntimeMethod*))Task_1_TrySetResult_m0CB92709B2014A703FB57915E6ECB17C24789664_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_mD18342A940803A50A2B8530196601B5A54707F8D (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* __this, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A*, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mD18342A940803A50A2B8530196601B5A54707F8D_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_mCCDB51B3AF567DC9F791B29E74A11E1B7CE99D99 (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* __this, Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* ___0_completedTask, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A*, Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mCCDB51B3AF567DC9F791B29E74A11E1B7CE99D99_gshared)(__this, ___0_completedTask, method);
}
inline void AsyncTaskMethodBuilder_1_SetException_m8553CC1B427969FE40F44B34DB84F9C76785B4B6 (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m8553CC1B427969FE40F44B34DB84F9C76785B4B6_gshared)(__this, ___0_exception, method);
}
inline Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* JitHelpers_UnsafeCast_TisTask_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7_m5961D8081C19D6877260F9C7EFFF6C6EBF9365D3 (RuntimeObject* ___0_o, const RuntimeMethod* method)
{
	return ((  Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* (*) (RuntimeObject*, const RuntimeMethod*))JitHelpers_UnsafeCast_TisIl2CppSharedGenericObject_m5D9454AE1AF0205501A6EFB33F3D7A80B0DC08F2_gshared)(___0_o, method);
}
inline void Task_1__ctor_m541BFC0D49AFB557E47F03FEE5C368C138FA8128 (Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* __this, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7*, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387, const RuntimeMethod*))Task_1__ctor_m541BFC0D49AFB557E47F03FEE5C368C138FA8128_gshared)(__this, ___0_result, method);
}
inline Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387_mA8F3E545AE2A2D8B0D14213741CF6F3FCAC71F0F (OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* (*) (OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387, const RuntimeMethod*))AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387_mA8F3E545AE2A2D8B0D14213741CF6F3FCAC71F0F_gshared)(___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m01C859B5FB9F1692FBC1C3CAC2CE1B821FECE3FF (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m01C859B5FB9F1692FBC1C3CAC2CE1B821FECE3FF_gshared)(__this, ___0_stateMachine, method);
}
inline void Task_1__ctor_m75C1D611CBE6A149C79A322EA8F1CF2E65865149 (Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C*, const RuntimeMethod*))Task_1__ctor_m75C1D611CBE6A149C79A322EA8F1CF2E65865149_gshared)(__this, method);
}
inline Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* AsyncTaskMethodBuilder_1_get_Task_m92E592769E741DEDCDD787CC7ADBD08C06A32314 (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* (*) (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m92E592769E741DEDCDD787CC7ADBD08C06A32314_gshared)(__this, method);
}
inline Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* AsyncTaskMethodBuilder_1_GetTaskForResult_m067DB75F372431CFB5C8A8F9427357714414B5BF (OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* (*) (OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8, const RuntimeMethod*))AsyncTaskMethodBuilder_1_GetTaskForResult_m067DB75F372431CFB5C8A8F9427357714414B5BF_gshared)(___0_result, method);
}
inline bool Task_1_TrySetResult_m9203F629B87AA23B46F58CBDDBAD8CD60184C8B9 (Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* __this, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C*, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8, const RuntimeMethod*))Task_1_TrySetResult_m9203F629B87AA23B46F58CBDDBAD8CD60184C8B9_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_mA36BEF799A8E58526F3FC16F10E1FA407B903FE4 (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* __this, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B*, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mA36BEF799A8E58526F3FC16F10E1FA407B903FE4_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_m508B0A955AAB580845391FC5F547916629D25057 (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* __this, Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* ___0_completedTask, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B*, Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m508B0A955AAB580845391FC5F547916629D25057_gshared)(__this, ___0_completedTask, method);
}
inline void AsyncTaskMethodBuilder_1_SetException_m7B12174F42A526861DF8EF8CB8F21EB99A529266 (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m7B12174F42A526861DF8EF8CB8F21EB99A529266_gshared)(__this, ___0_exception, method);
}
inline Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* JitHelpers_UnsafeCast_TisTask_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C_m9166DCF087B082FD222A55A6B16A55E31E5C8259 (RuntimeObject* ___0_o, const RuntimeMethod* method)
{
	return ((  Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* (*) (RuntimeObject*, const RuntimeMethod*))JitHelpers_UnsafeCast_TisIl2CppSharedGenericObject_m5D9454AE1AF0205501A6EFB33F3D7A80B0DC08F2_gshared)(___0_o, method);
}
inline void Task_1__ctor_m19D57D02F2C0DEE7393502186931AB78CEF41EEE (Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* __this, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C*, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8, const RuntimeMethod*))Task_1__ctor_m19D57D02F2C0DEE7393502186931AB78CEF41EEE_gshared)(__this, ___0_result, method);
}
inline Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8_mC640EA46869E11911ABB7A864919549B88CFF94C (OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* (*) (OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8, const RuntimeMethod*))AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8_mC640EA46869E11911ABB7A864919549B88CFF94C_gshared)(___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m2C1E7220C803A3E07795628C521525E8398E9EB5 (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m2C1E7220C803A3E07795628C521525E8398E9EB5_gshared)(__this, ___0_stateMachine, method);
}
inline void Task_1__ctor_m2D1462857395F1C85B4A7E79CDD63B5BB391A0FC (Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4*, const RuntimeMethod*))Task_1__ctor_m2D1462857395F1C85B4A7E79CDD63B5BB391A0FC_gshared)(__this, method);
}
inline Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* AsyncTaskMethodBuilder_1_get_Task_m39CA24472D2EEFF162623CFA59CE7431A2715B56 (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* (*) (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m39CA24472D2EEFF162623CFA59CE7431A2715B56_gshared)(__this, method);
}
inline Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* AsyncTaskMethodBuilder_1_GetTaskForResult_mF084BE519715FD8045AB1BC65E80A349906F2073 (OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* (*) (OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D, const RuntimeMethod*))AsyncTaskMethodBuilder_1_GetTaskForResult_mF084BE519715FD8045AB1BC65E80A349906F2073_gshared)(___0_result, method);
}
inline bool Task_1_TrySetResult_m2B77B5733D9DF23D82119B8392391F2E530C1435 (Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* __this, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4*, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D, const RuntimeMethod*))Task_1_TrySetResult_m2B77B5733D9DF23D82119B8392391F2E530C1435_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_mBE3A4804C5B8834205E6DB359356A74C4CE559D7 (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* __this, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5*, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mBE3A4804C5B8834205E6DB359356A74C4CE559D7_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_mAE09C9555C653EBF9DD13CFBFBAEAAA356E2AD0D (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* __this, Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* ___0_completedTask, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5*, Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mAE09C9555C653EBF9DD13CFBFBAEAAA356E2AD0D_gshared)(__this, ___0_completedTask, method);
}
inline void AsyncTaskMethodBuilder_1_SetException_m366B07CBB616AF29432B456A6D01739F0872D48C (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m366B07CBB616AF29432B456A6D01739F0872D48C_gshared)(__this, ___0_exception, method);
}
inline Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* JitHelpers_UnsafeCast_TisTask_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4_mCF03DE27861770061661F941FD86938EB0EAB19B (RuntimeObject* ___0_o, const RuntimeMethod* method)
{
	return ((  Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* (*) (RuntimeObject*, const RuntimeMethod*))JitHelpers_UnsafeCast_TisIl2CppSharedGenericObject_m5D9454AE1AF0205501A6EFB33F3D7A80B0DC08F2_gshared)(___0_o, method);
}
inline void Task_1__ctor_m2A47910E1599CEE2DB645BACAB80F9248911C45F (Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* __this, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4*, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D, const RuntimeMethod*))Task_1__ctor_m2A47910E1599CEE2DB645BACAB80F9248911C45F_gshared)(__this, ___0_result, method);
}
inline Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D_m49ACC1E311C97A79F7CCC1D8DB7BBDB1142D37ED (OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* (*) (OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D, const RuntimeMethod*))AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D_m49ACC1E311C97A79F7CCC1D8DB7BBDB1142D37ED_gshared)(___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mA9C9531F33E5C468F3C992F3259CA27903FFE633 (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_mA9C9531F33E5C468F3C992F3259CA27903FFE633_gshared)(__this, ___0_stateMachine, method);
}
inline void Task_1__ctor_m773E32A0278D4184509216516F51E633D556249D (Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1*, const RuntimeMethod*))Task_1__ctor_m773E32A0278D4184509216516F51E633D556249D_gshared)(__this, method);
}
inline Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* AsyncTaskMethodBuilder_1_get_Task_mE609D90E26A71ADDE2ADBB19849044C7CA4C4D4B (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* (*) (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mE609D90E26A71ADDE2ADBB19849044C7CA4C4D4B_gshared)(__this, method);
}
inline Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* AsyncTaskMethodBuilder_1_GetTaskForResult_m46974E7C50DB99B6F03020A87DB2DEDF4334862A (ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* (*) (ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F, const RuntimeMethod*))AsyncTaskMethodBuilder_1_GetTaskForResult_m46974E7C50DB99B6F03020A87DB2DEDF4334862A_gshared)(___0_result, method);
}
inline bool Task_1_TrySetResult_m35667C7E8DFA2602F26A7302980F2450EDBD28FA (Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* __this, ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1*, ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F, const RuntimeMethod*))Task_1_TrySetResult_m35667C7E8DFA2602F26A7302980F2450EDBD28FA_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_mAE4006FB62DEEE49C59A099D0AF0262DC87FD274 (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* __this, ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F*, ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mAE4006FB62DEEE49C59A099D0AF0262DC87FD274_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_m3A9C5949460ED87484B817BE59DFCB8F122C31B2 (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* __this, Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* ___0_completedTask, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F*, Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3A9C5949460ED87484B817BE59DFCB8F122C31B2_gshared)(__this, ___0_completedTask, method);
}
inline void AsyncTaskMethodBuilder_1_SetException_m877EAFFD76B7C235F9DCBE854DC10E9D71F691CE (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m877EAFFD76B7C235F9DCBE854DC10E9D71F691CE_gshared)(__this, ___0_exception, method);
}
inline Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* JitHelpers_UnsafeCast_TisTask_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1_m7286BF58224B81BDD4C8B670A0756D3D47C9EB85 (RuntimeObject* ___0_o, const RuntimeMethod* method)
{
	return ((  Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* (*) (RuntimeObject*, const RuntimeMethod*))JitHelpers_UnsafeCast_TisIl2CppSharedGenericObject_m5D9454AE1AF0205501A6EFB33F3D7A80B0DC08F2_gshared)(___0_o, method);
}
inline void Task_1__ctor_m850623421A0EDC334FF9766142F6A0EB81E94F31 (Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* __this, ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1*, ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F, const RuntimeMethod*))Task_1__ctor_m850623421A0EDC334FF9766142F6A0EB81E94F31_gshared)(__this, ___0_result, method);
}
inline Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* AsyncTaskCache_CreateCacheableTask_TisValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F_m50D5F3901C4DD732985EF18C8178CF77A93AB0F6 (ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* (*) (ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F, const RuntimeMethod*))AsyncTaskCache_CreateCacheableTask_TisValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F_m50D5F3901C4DD732985EF18C8178CF77A93AB0F6_gshared)(___0_result, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 12261
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mEBE2024F617F027FE18BC080E400CFE4416CCF76_gshared (ArraySortHelper_1_t29D513914E96AEF32E502B99C6F0EEF37999E378* __this, EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_keys, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Exception_t* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			RuntimeObject* L_0 = ___3_comparer;
			if (L_0)
			{
				goto IL_000b_1;
			}
		}
		{
			Comparer_1_t046D3212892FFACD58B023FFC2E7B761286BD6B0* L_1;
			L_1 = Comparer_1_get_Default_m66D6D538764F212C8057ADF0ECFECEB94220CBC0(il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			___3_comparer = (RuntimeObject*)L_1;
		}

IL_000b_1:
		{
			EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_2 = ___0_keys;
			int32_t L_3 = ___1_index;
			int32_t L_4 = ___2_length;
			RuntimeObject* L_5 = ___3_comparer;
			RuntimeObject* L_6 = L_5;
			void* L_7 = (void*)GetInterfaceMethodInfo((RuntimeObject*)L_6, 0, il2cpp_rgctx_data(method->klass->rgctx_data, 0));
			Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* L_8 = (Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
			Comparison_1__ctor_mF1256A1EE11001F73B1C511B4F994E4240BC93F8(L_8, (RuntimeObject*)L_6, (intptr_t)(L_7), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
			ArraySortHelper_1_IntrospectiveSort_mC350EB6B830FCE8071F6E6E0CE4AF0AE8EDFDA45(L_2, L_3, L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			goto IL_003d;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002d;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0030;
		}
		throw e;
	}

CATCH_0023:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = ((IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)IL2CPP_GET_ACTIVE_EXCEPTION(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*));;
		RuntimeObject* L_10 = ___3_comparer;
		IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m119232371BEE9732FE70D22EE93B3818E577EFAF((RuntimeObject*)L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003d;
	}

CATCH_002d:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4* L_11 = ((ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*)IL2CPP_GET_ACTIVE_EXCEPTION(ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*));;
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
	}

CATCH_0030:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		Exception_t* L_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_0 = L_12;
		Exception_t* L_13 = V_0;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EDB6C049ED9617FA335A262A29BF30B15221AEA)), L_13, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_003d:
	{
		return;
	}
}
// Method Definition Index: 12262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_mD42C72B4DE29288F0C3CB8A9DCC900451E3E9281_gshared (ArraySortHelper_1_t29D513914E96AEF32E502B99C6F0EEF37999E378* __this, EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_array, int32_t ___1_index, int32_t ___2_length, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Exception_t* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			RuntimeObject* L_0 = ___4_comparer;
			if (L_0)
			{
				goto IL_000b_1;
			}
		}
		{
			Comparer_1_t046D3212892FFACD58B023FFC2E7B761286BD6B0* L_1;
			L_1 = Comparer_1_get_Default_m66D6D538764F212C8057ADF0ECFECEB94220CBC0(il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			___4_comparer = (RuntimeObject*)L_1;
		}

IL_000b_1:
		{
			EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_2 = ___0_array;
			int32_t L_3 = ___1_index;
			int32_t L_4 = ___2_length;
			EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_5 = ___3_value;
			RuntimeObject* L_6 = ___4_comparer;
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
			int32_t L_7;
			L_7 = ArraySortHelper_1_InternalBinarySearch_mA397D30A8A65D136FB5773BAC0ECCF9D7686106C(L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			V_0 = L_7;
			goto IL_002a;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001d;
		}
		throw e;
	}

CATCH_001a:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4* L_8 = ((ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*)IL2CPP_GET_ACTIVE_EXCEPTION(ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*));;
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
	}

CATCH_001d:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		Exception_t* L_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_1 = L_9;
		Exception_t* L_10 = V_1;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EDB6C049ED9617FA335A262A29BF30B15221AEA)), L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_002a:
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// Method Definition Index: 12263
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m1D9197C35C62EB571BA89B7AA611831DA2684589_gshared (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* ___3_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Exception_t* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_0 = ___0_keys;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_length;
		Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* L_3 = ___3_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_IntrospectiveSort_mC350EB6B830FCE8071F6E6E0CE4AF0AE8EDFDA45(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		goto IL_0024;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000b;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0014;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_000b:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_4 = ((IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)IL2CPP_GET_ACTIVE_EXCEPTION(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*));;
		Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* L_5 = ___3_comparer;
		IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m119232371BEE9732FE70D22EE93B3818E577EFAF((RuntimeObject*)L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0024;
	}

CATCH_0014:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4* L_6 = ((ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*)IL2CPP_GET_ACTIVE_EXCEPTION(ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*));;
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
	}

CATCH_0017:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		Exception_t* L_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_0 = L_7;
		Exception_t* L_8 = V_0;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EDB6C049ED9617FA335A262A29BF30B15221AEA)), L_8, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0024:
	{
		return;
	}
}
// Method Definition Index: 12264
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_InternalBinarySearch_mA397D30A8A65D136FB5773BAC0ECCF9D7686106C_gshared (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_array, int32_t ___1_index, int32_t ___2_length, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___1_index;
		V_0 = L_0;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_length;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1));
		goto IL_0035;
	}

IL_000a:
	{
		CHECK_PAUSE_POINT;
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_4, L_5))>>1))));
		RuntimeObject* L_6 = ___4_comparer;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_7 = ___0_array;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_11 = ___3_value;
		NullCheck(L_6);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker2< int32_t, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_6, L_10, L_11);
		V_3 = L_12;
		int32_t L_13 = V_3;
		if (L_13)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_14 = V_2;
		return L_14;
	}

IL_0027:
	{
		int32_t L_15 = V_3;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_16 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		goto IL_0035;
	}

IL_0031:
	{
		int32_t L_17 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
	}

IL_0035:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		if ((((int32_t)L_18) <= ((int32_t)L_19)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_20 = V_0;
		return ((~L_20));
	}
}
// Method Definition Index: 12265
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_SwapIfGreater_mF58B0FCBB8E2EF1524D335F9C1028D607AA8AEDF_gshared (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_keys, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* ___1_comparer, int32_t ___2_a, int32_t ___3_b, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_a;
		int32_t L_1 = ___3_b;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0039;
		}
	}
	{
		Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* L_2 = ___1_comparer;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_3 = ___0_keys;
		int32_t L_4 = ___2_a;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_7 = ___0_keys;
		int32_t L_8 = ___3_b;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_2);
		int32_t L_11;
		L_11 = Comparison_1_Invoke_m68AD1C3D3189530752991F04C1ACBEA52B47F8B6_inline(L_2, L_6, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_12 = ___0_keys;
		int32_t L_13 = ___2_a;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = L_15;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_16 = ___0_keys;
		int32_t L_17 = ___2_a;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_18 = ___0_keys;
		int32_t L_19 = ___3_b;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289)L_21);
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_22 = ___0_keys;
		int32_t L_23 = ___3_b;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289)L_24);
	}

IL_0039:
	{
		return;
	}
}
// Method Definition Index: 12266
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Swap_mA01B2FB08115BB00F10F9AC1FEBE292FB680EC65_gshared (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_a, int32_t ___1_i, int32_t ___2_j, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___1_i;
		int32_t L_1 = ___2_j;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0022;
		}
	}
	{
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_2 = ___0_a;
		int32_t L_3 = ___1_i;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_6 = ___0_a;
		int32_t L_7 = ___1_i;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_8 = ___0_a;
		int32_t L_9 = ___2_j;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289)L_11);
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_12 = ___0_a;
		int32_t L_13 = ___2_j;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289)L_14);
	}

IL_0022:
	{
		return;
	}
}
// Method Definition Index: 12267
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_IntrospectiveSort_mC350EB6B830FCE8071F6E6E0CE4AF0AE8EDFDA45_gshared (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_keys, int32_t ___1_left, int32_t ___2_length, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* ___3_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_length;
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_1 = ___0_keys;
		int32_t L_2 = ___1_left;
		int32_t L_3 = ___2_length;
		int32_t L_4 = ___1_left;
		int32_t L_5 = ___2_length;
		int32_t L_6;
		L_6 = IntrospectiveSortUtilities_FloorLog2PlusOne_m33AC60574EC2B80A3B7084361A3736D4CFE91F6D(L_5, NULL);
		Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* L_7 = ___3_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_IntroSort_m939196810219AE088FE864039D8F2D87E7EA7C0B(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), ((int32_t)il2cpp_codegen_multiply(2, L_6)), L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return;
	}
}
// Method Definition Index: 12268
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_IntroSort_m939196810219AE088FE864039D8F2D87E7EA7C0B_gshared (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depthLimit, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		goto IL_0086;
	}

IL_0005:
	{
		CHECK_PAUSE_POINT;
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_5 = ___0_keys;
		Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* L_6 = ___4_comparer;
		int32_t L_7 = ___1_lo;
		int32_t L_8 = ___2_hi;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_SwapIfGreater_mF58B0FCBB8E2EF1524D335F9C1028D607AA8AEDF(L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0024:
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_004b;
		}
	}
	{
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_10 = ___0_keys;
		Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* L_11 = ___4_comparer;
		int32_t L_12 = ___1_lo;
		int32_t L_13 = ___2_hi;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_SwapIfGreater_mF58B0FCBB8E2EF1524D335F9C1028D607AA8AEDF(L_10, L_11, L_12, ((int32_t)il2cpp_codegen_subtract(L_13, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_14 = ___0_keys;
		Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* L_15 = ___4_comparer;
		int32_t L_16 = ___1_lo;
		int32_t L_17 = ___2_hi;
		ArraySortHelper_1_SwapIfGreater_mF58B0FCBB8E2EF1524D335F9C1028D607AA8AEDF(L_14, L_15, L_16, L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_18 = ___0_keys;
		Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* L_19 = ___4_comparer;
		int32_t L_20 = ___2_hi;
		int32_t L_21 = ___2_hi;
		ArraySortHelper_1_SwapIfGreater_mF58B0FCBB8E2EF1524D335F9C1028D607AA8AEDF(L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, 1)), L_21, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_004b:
	{
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_22 = ___0_keys;
		int32_t L_23 = ___1_lo;
		int32_t L_24 = ___2_hi;
		Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* L_25 = ___4_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_InsertionSort_m11E8F0D25CF30F3495F81D42D01B86D598EDA818(L_22, L_23, L_24, L_25, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return;
	}

IL_0056:
	{
		int32_t L_26 = ___3_depthLimit;
		if (L_26)
		{
			goto IL_0064;
		}
	}
	{
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_27 = ___0_keys;
		int32_t L_28 = ___1_lo;
		int32_t L_29 = ___2_hi;
		Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* L_30 = ___4_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_Heapsort_m70A6C366B44EDB0915D7DF4B9C61796C48EA8285(L_27, L_28, L_29, L_30, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return;
	}

IL_0064:
	{
		int32_t L_31 = ___3_depthLimit;
		___3_depthLimit = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_32 = ___0_keys;
		int32_t L_33 = ___1_lo;
		int32_t L_34 = ___2_hi;
		Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* L_35 = ___4_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		int32_t L_36;
		L_36 = ArraySortHelper_1_PickPivotAndPartition_m1DC04655BD855ADE68AC85C27B9D79F98FF94FA3(L_32, L_33, L_34, L_35, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		V_1 = L_36;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_37 = ___0_keys;
		int32_t L_38 = V_1;
		int32_t L_39 = ___2_hi;
		int32_t L_40 = ___3_depthLimit;
		Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* L_41 = ___4_comparer;
		ArraySortHelper_1_IntroSort_m939196810219AE088FE864039D8F2D87E7EA7C0B(L_37, ((int32_t)il2cpp_codegen_add(L_38, 1)), L_39, L_40, L_41, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		int32_t L_42 = V_1;
		___2_hi = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_0086:
	{
		int32_t L_43 = ___2_hi;
		int32_t L_44 = ___1_lo;
		if ((((int32_t)L_43) > ((int32_t)L_44)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 12269
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_PickPivotAndPartition_m1DC04655BD855ADE68AC85C27B9D79F98FF94FA3_gshared (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* ___3_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___1_lo;
		int32_t L_1 = ___2_hi;
		int32_t L_2 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_3 = ___0_keys;
		Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* L_4 = ___3_comparer;
		int32_t L_5 = ___1_lo;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_SwapIfGreater_mF58B0FCBB8E2EF1524D335F9C1028D607AA8AEDF(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_7 = ___0_keys;
		Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* L_8 = ___3_comparer;
		int32_t L_9 = ___1_lo;
		int32_t L_10 = ___2_hi;
		ArraySortHelper_1_SwapIfGreater_mF58B0FCBB8E2EF1524D335F9C1028D607AA8AEDF(L_7, L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_11 = ___0_keys;
		Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* L_12 = ___3_comparer;
		int32_t L_13 = V_0;
		int32_t L_14 = ___2_hi;
		ArraySortHelper_1_SwapIfGreater_mF58B0FCBB8E2EF1524D335F9C1028D607AA8AEDF(L_11, L_12, L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_15 = ___0_keys;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_1 = L_18;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_19 = ___0_keys;
		int32_t L_20 = V_0;
		int32_t L_21 = ___2_hi;
		ArraySortHelper_1_Swap_mA01B2FB08115BB00F10F9AC1FEBE292FB680EC65(L_19, L_20, ((int32_t)il2cpp_codegen_subtract(L_21, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		int32_t L_22 = ___1_lo;
		V_2 = L_22;
		int32_t L_23 = ___2_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		goto IL_0073;
	}

IL_003d:
	{
		CHECK_PAUSE_POINT;
		Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* L_24 = ___3_comparer;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_25 = ___0_keys;
		int32_t L_26 = V_2;
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		V_2 = L_27;
		NullCheck(L_25);
		int32_t L_28 = L_27;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_29 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_30 = V_1;
		NullCheck(L_24);
		int32_t L_31;
		L_31 = Comparison_1_Invoke_m68AD1C3D3189530752991F04C1ACBEA52B47F8B6_inline(L_24, L_29, L_30, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}

IL_0052:
	{
		CHECK_PAUSE_POINT;
		Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* L_32 = ___3_comparer;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_33 = V_1;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_34 = ___0_keys;
		int32_t L_35 = V_3;
		int32_t L_36 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		V_3 = L_36;
		NullCheck(L_34);
		int32_t L_37 = L_36;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_32);
		int32_t L_39;
		L_39 = Comparison_1_Invoke_m68AD1C3D3189530752991F04C1ACBEA52B47F8B6_inline(L_32, L_33, L_38, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		if ((((int32_t)L_39) < ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_40 = V_2;
		int32_t L_41 = V_3;
		if ((((int32_t)L_40) >= ((int32_t)L_41)))
		{
			goto IL_0077;
		}
	}
	{
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_42 = ___0_keys;
		int32_t L_43 = V_2;
		int32_t L_44 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_Swap_mA01B2FB08115BB00F10F9AC1FEBE292FB680EC65(L_42, L_43, L_44, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
	}

IL_0073:
	{
		int32_t L_45 = V_2;
		int32_t L_46 = V_3;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_003d;
		}
	}

IL_0077:
	{
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_47 = ___0_keys;
		int32_t L_48 = V_2;
		int32_t L_49 = ___2_hi;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_Swap_mA01B2FB08115BB00F10F9AC1FEBE292FB680EC65(L_47, L_48, ((int32_t)il2cpp_codegen_subtract(L_49, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		int32_t L_50 = V_2;
		return L_50;
	}
}
// Method Definition Index: 12270
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Heapsort_m70A6C366B44EDB0915D7DF4B9C61796C48EA8285_gshared (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* ___3_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		goto IL_001a;
	}

IL_000c:
	{
		CHECK_PAUSE_POINT;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_3 = ___0_keys;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_lo;
		Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* L_7 = ___3_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_DownHeap_m868207A1048F8EE1A1A2A98A052516F2065145BF(L_3, L_4, L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_001a:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_10 = V_0;
		V_2 = L_10;
		goto IL_003e;
	}

IL_0022:
	{
		CHECK_PAUSE_POINT;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_11 = ___0_keys;
		int32_t L_12 = ___1_lo;
		int32_t L_13 = ___1_lo;
		int32_t L_14 = V_2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_Swap_mA01B2FB08115BB00F10F9AC1FEBE292FB680EC65(L_11, L_12, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_15 = ___0_keys;
		int32_t L_16 = V_2;
		int32_t L_17 = ___1_lo;
		Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* L_18 = ___3_comparer;
		ArraySortHelper_1_DownHeap_m868207A1048F8EE1A1A2A98A052516F2065145BF(L_15, 1, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), L_17, L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) > ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 12271
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_DownHeap_m868207A1048F8EE1A1A2A98A052516F2065145BF_gshared (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_keys, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_0 = ___0_keys;
		int32_t L_1 = ___3_lo;
		int32_t L_2 = ___1_i;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1));
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		goto IL_0067;
	}

IL_000e:
	{
		CHECK_PAUSE_POINT;
		int32_t L_5 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_5));
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_n;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0038;
		}
	}
	{
		Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* L_8 = ___4_comparer;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_9 = ___0_keys;
		int32_t L_10 = ___3_lo;
		int32_t L_11 = V_1;
		NullCheck(L_9);
		int32_t L_12 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_10, L_11)), 1));
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_14 = ___0_keys;
		int32_t L_15 = ___3_lo;
		int32_t L_16 = V_1;
		NullCheck(L_14);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_15, L_16));
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_8);
		int32_t L_19;
		L_19 = Comparison_1_Invoke_m68AD1C3D3189530752991F04C1ACBEA52B47F8B6_inline(L_8, L_13, L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0038:
	{
		Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* L_21 = ___4_comparer;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_22 = V_0;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_23 = ___0_keys;
		int32_t L_24 = ___3_lo;
		int32_t L_25 = V_1;
		NullCheck(L_23);
		int32_t L_26 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_24, L_25)), 1));
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_27 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_21);
		int32_t L_28;
		L_28 = Comparison_1_Invoke_m68AD1C3D3189530752991F04C1ACBEA52B47F8B6_inline(L_21, L_22, L_27, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_29 = ___0_keys;
		int32_t L_30 = ___3_lo;
		int32_t L_31 = ___1_i;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_32 = ___0_keys;
		int32_t L_33 = ___3_lo;
		int32_t L_34 = V_1;
		NullCheck(L_32);
		int32_t L_35 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_33, L_34)), 1));
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_30, L_31)), 1))), (EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289)L_36);
		int32_t L_37 = V_1;
		___1_i = L_37;
	}

IL_0067:
	{
		int32_t L_38 = ___1_i;
		int32_t L_39 = ___2_n;
		if ((((int32_t)L_38) <= ((int32_t)((int32_t)(L_39/2)))))
		{
			goto IL_000e;
		}
	}

IL_006d:
	{
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_40 = ___0_keys;
		int32_t L_41 = ___3_lo;
		int32_t L_42 = ___1_i;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_43 = V_0;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_42)), 1))), (EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289)L_43);
		return;
	}
}
// Method Definition Index: 12272
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_InsertionSort_m11E8F0D25CF30F3495F81D42D01B86D598EDA818_gshared (EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* ___3_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___1_lo;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0004:
	{
		CHECK_PAUSE_POINT;
		int32_t L_1 = V_0;
		V_1 = L_1;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_2 = ___0_keys;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		goto IL_0026;
	}

IL_0012:
	{
		CHECK_PAUSE_POINT;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_6 = ___0_keys;
		int32_t L_7 = V_1;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_8 = ___0_keys;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289)L_11);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0026:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = ___1_lo;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003b;
		}
	}
	{
		Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* L_15 = ___3_comparer;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_16 = V_2;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_17 = ___0_keys;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_15);
		int32_t L_21;
		L_21 = Comparison_1_Invoke_m68AD1C3D3189530752991F04C1ACBEA52B47F8B6_inline(L_15, L_16, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_003b:
	{
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_22 = ___0_keys;
		int32_t L_23 = V_1;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_24 = V_2;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289)L_24);
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0049:
	{
		int32_t L_26 = V_0;
		int32_t L_27 = ___2_hi;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 12273
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySortHelper_1_t29D513914E96AEF32E502B99C6F0EEF37999E378* ArraySortHelper_1_get_Default_m836257AF158C80EFF8178028660636D8143A7C67_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t29D513914E96AEF32E502B99C6F0EEF37999E378* L_0 = ((ArraySortHelper_1_t29D513914E96AEF32E502B99C6F0EEF37999E378_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 12274
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1__ctor_mA9DDD938E21377AEC026E6B4DB153AF5F9A3AB8E_gshared (ArraySortHelper_1_t29D513914E96AEF32E502B99C6F0EEF37999E378* __this, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// Method Definition Index: 12275
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1__cctor_m05C16ADFFDAEC252B53DEC681952AD0959D4D510_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ArraySortHelper_1_t29D513914E96AEF32E502B99C6F0EEF37999E378* L_0 = (ArraySortHelper_1_t29D513914E96AEF32E502B99C6F0EEF37999E378*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		ArraySortHelper_1__ctor_mA9DDD938E21377AEC026E6B4DB153AF5F9A3AB8E(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		((ArraySortHelper_1_t29D513914E96AEF32E502B99C6F0EEF37999E378_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ArraySortHelper_1_t29D513914E96AEF32E502B99C6F0EEF37999E378_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper), (void*)L_0);
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
// Method Definition Index: 12261
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m0B6E57C2E5D8A0C12340A8630BF4F813DA740B0B_gshared (ArraySortHelper_1_tFF5DC7397168A75911DBA80813694A06456F38D5* __this, EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Exception_t* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			RuntimeObject* L_0 = ___3_comparer;
			if (L_0)
			{
				goto IL_000b_1;
			}
		}
		{
			Comparer_1_tBEF5D5DBCCD138F02D83FA6000B72EB74D74DD20* L_1;
			L_1 = Comparer_1_get_Default_m6977A1FE5EA104A1E2C7D49B33FA845B200D6AA5(il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			___3_comparer = (RuntimeObject*)L_1;
		}

IL_000b_1:
		{
			EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_2 = ___0_keys;
			int32_t L_3 = ___1_index;
			int32_t L_4 = ___2_length;
			RuntimeObject* L_5 = ___3_comparer;
			RuntimeObject* L_6 = L_5;
			void* L_7 = (void*)GetInterfaceMethodInfo((RuntimeObject*)L_6, 0, il2cpp_rgctx_data(method->klass->rgctx_data, 0));
			Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_8 = (Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
			Comparison_1__ctor_m63E2985624473006D3CFC65522CCDC2A032026ED(L_8, (RuntimeObject*)L_6, (intptr_t)(L_7), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
			ArraySortHelper_1_IntrospectiveSort_m1D55006AC462D75C2CE261FD91C93BF54EF3C71E(L_2, L_3, L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			goto IL_003d;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002d;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0030;
		}
		throw e;
	}

CATCH_0023:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = ((IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)IL2CPP_GET_ACTIVE_EXCEPTION(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*));;
		RuntimeObject* L_10 = ___3_comparer;
		IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m119232371BEE9732FE70D22EE93B3818E577EFAF((RuntimeObject*)L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003d;
	}

CATCH_002d:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4* L_11 = ((ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*)IL2CPP_GET_ACTIVE_EXCEPTION(ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*));;
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
	}

CATCH_0030:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		Exception_t* L_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_0 = L_12;
		Exception_t* L_13 = V_0;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EDB6C049ED9617FA335A262A29BF30B15221AEA)), L_13, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_003d:
	{
		return;
	}
}
// Method Definition Index: 12262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m7D4F1DD327F255ED63E730BEADD0FA15DBD5526B_gshared (ArraySortHelper_1_tFF5DC7397168A75911DBA80813694A06456F38D5* __this, EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_array, int32_t ___1_index, int32_t ___2_length, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Exception_t* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			RuntimeObject* L_0 = ___4_comparer;
			if (L_0)
			{
				goto IL_000b_1;
			}
		}
		{
			Comparer_1_tBEF5D5DBCCD138F02D83FA6000B72EB74D74DD20* L_1;
			L_1 = Comparer_1_get_Default_m6977A1FE5EA104A1E2C7D49B33FA845B200D6AA5(il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			___4_comparer = (RuntimeObject*)L_1;
		}

IL_000b_1:
		{
			EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_2 = ___0_array;
			int32_t L_3 = ___1_index;
			int32_t L_4 = ___2_length;
			Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_5 = ___3_value;
			RuntimeObject* L_6 = ___4_comparer;
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
			int32_t L_7;
			L_7 = ArraySortHelper_1_InternalBinarySearch_m7092E5D511A4386F62438C9FCA26F39D0A636179(L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			V_0 = L_7;
			goto IL_002a;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001d;
		}
		throw e;
	}

CATCH_001a:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4* L_8 = ((ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*)IL2CPP_GET_ACTIVE_EXCEPTION(ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*));;
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
	}

CATCH_001d:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		Exception_t* L_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_1 = L_9;
		Exception_t* L_10 = V_1;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EDB6C049ED9617FA335A262A29BF30B15221AEA)), L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_002a:
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// Method Definition Index: 12263
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m1067939443E7234328453DF9DC2F4EFB3246C66F_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___3_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Exception_t* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_0 = ___0_keys;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_length;
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_3 = ___3_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_IntrospectiveSort_m1D55006AC462D75C2CE261FD91C93BF54EF3C71E(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		goto IL_0024;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000b;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0014;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_000b:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_4 = ((IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)IL2CPP_GET_ACTIVE_EXCEPTION(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*));;
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_5 = ___3_comparer;
		IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m119232371BEE9732FE70D22EE93B3818E577EFAF((RuntimeObject*)L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0024;
	}

CATCH_0014:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4* L_6 = ((ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*)IL2CPP_GET_ACTIVE_EXCEPTION(ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*));;
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
	}

CATCH_0017:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		Exception_t* L_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_0 = L_7;
		Exception_t* L_8 = V_0;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EDB6C049ED9617FA335A262A29BF30B15221AEA)), L_8, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0024:
	{
		return;
	}
}
// Method Definition Index: 12264
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_InternalBinarySearch_m7092E5D511A4386F62438C9FCA26F39D0A636179_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_array, int32_t ___1_index, int32_t ___2_length, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___1_index;
		V_0 = L_0;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_length;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1));
		goto IL_0035;
	}

IL_000a:
	{
		CHECK_PAUSE_POINT;
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_4, L_5))>>1))));
		RuntimeObject* L_6 = ___4_comparer;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_7 = ___0_array;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_11 = ___3_value;
		NullCheck(L_6);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker2< int32_t, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_6, L_10, L_11);
		V_3 = L_12;
		int32_t L_13 = V_3;
		if (L_13)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_14 = V_2;
		return L_14;
	}

IL_0027:
	{
		int32_t L_15 = V_3;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_16 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		goto IL_0035;
	}

IL_0031:
	{
		int32_t L_17 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
	}

IL_0035:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		if ((((int32_t)L_18) <= ((int32_t)L_19)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_20 = V_0;
		return ((~L_20));
	}
}
// Method Definition Index: 12265
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_SwapIfGreater_mCE5B161EB27F9EE49B85D2D69DC8F81B04FFEBE1_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___1_comparer, int32_t ___2_a, int32_t ___3_b, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_a;
		int32_t L_1 = ___3_b;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0039;
		}
	}
	{
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_2 = ___1_comparer;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_3 = ___0_keys;
		int32_t L_4 = ___2_a;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_7 = ___0_keys;
		int32_t L_8 = ___3_b;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_2);
		int32_t L_11;
		L_11 = Comparison_1_Invoke_m3D0BD99863A18604C8E21A32D41D56217B26A9A4_inline(L_2, L_6, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_12 = ___0_keys;
		int32_t L_13 = ___2_a;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = L_15;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_16 = ___0_keys;
		int32_t L_17 = ___2_a;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_18 = ___0_keys;
		int32_t L_19 = ___3_b;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C)L_21);
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_22 = ___0_keys;
		int32_t L_23 = ___3_b;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C)L_24);
	}

IL_0039:
	{
		return;
	}
}
// Method Definition Index: 12266
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Swap_m2A59821D7B56FB86D678D06D8F1E81CC8E7948F5_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_a, int32_t ___1_i, int32_t ___2_j, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___1_i;
		int32_t L_1 = ___2_j;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0022;
		}
	}
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_2 = ___0_a;
		int32_t L_3 = ___1_i;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_6 = ___0_a;
		int32_t L_7 = ___1_i;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_8 = ___0_a;
		int32_t L_9 = ___2_j;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C)L_11);
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_12 = ___0_a;
		int32_t L_13 = ___2_j;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C)L_14);
	}

IL_0022:
	{
		return;
	}
}
// Method Definition Index: 12267
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_IntrospectiveSort_m1D55006AC462D75C2CE261FD91C93BF54EF3C71E_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, int32_t ___1_left, int32_t ___2_length, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___3_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_length;
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_1 = ___0_keys;
		int32_t L_2 = ___1_left;
		int32_t L_3 = ___2_length;
		int32_t L_4 = ___1_left;
		int32_t L_5 = ___2_length;
		int32_t L_6;
		L_6 = IntrospectiveSortUtilities_FloorLog2PlusOne_m33AC60574EC2B80A3B7084361A3736D4CFE91F6D(L_5, NULL);
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_7 = ___3_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_IntroSort_m0BD5189B2CB234383AE43301D50A0C6247542F76(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), ((int32_t)il2cpp_codegen_multiply(2, L_6)), L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return;
	}
}
// Method Definition Index: 12268
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_IntroSort_m0BD5189B2CB234383AE43301D50A0C6247542F76_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depthLimit, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		goto IL_0086;
	}

IL_0005:
	{
		CHECK_PAUSE_POINT;
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_5 = ___0_keys;
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_6 = ___4_comparer;
		int32_t L_7 = ___1_lo;
		int32_t L_8 = ___2_hi;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_SwapIfGreater_mCE5B161EB27F9EE49B85D2D69DC8F81B04FFEBE1(L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0024:
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_004b;
		}
	}
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_10 = ___0_keys;
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_11 = ___4_comparer;
		int32_t L_12 = ___1_lo;
		int32_t L_13 = ___2_hi;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_SwapIfGreater_mCE5B161EB27F9EE49B85D2D69DC8F81B04FFEBE1(L_10, L_11, L_12, ((int32_t)il2cpp_codegen_subtract(L_13, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_14 = ___0_keys;
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_15 = ___4_comparer;
		int32_t L_16 = ___1_lo;
		int32_t L_17 = ___2_hi;
		ArraySortHelper_1_SwapIfGreater_mCE5B161EB27F9EE49B85D2D69DC8F81B04FFEBE1(L_14, L_15, L_16, L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_18 = ___0_keys;
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_19 = ___4_comparer;
		int32_t L_20 = ___2_hi;
		int32_t L_21 = ___2_hi;
		ArraySortHelper_1_SwapIfGreater_mCE5B161EB27F9EE49B85D2D69DC8F81B04FFEBE1(L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, 1)), L_21, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_004b:
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_22 = ___0_keys;
		int32_t L_23 = ___1_lo;
		int32_t L_24 = ___2_hi;
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_25 = ___4_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_InsertionSort_m13814DFA2EBB58EE7D931298557C30AFF312B2FC(L_22, L_23, L_24, L_25, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return;
	}

IL_0056:
	{
		int32_t L_26 = ___3_depthLimit;
		if (L_26)
		{
			goto IL_0064;
		}
	}
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_27 = ___0_keys;
		int32_t L_28 = ___1_lo;
		int32_t L_29 = ___2_hi;
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_30 = ___4_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_Heapsort_m65FDFF63518040E9448380617CEC8D5CCBA7FAC4(L_27, L_28, L_29, L_30, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return;
	}

IL_0064:
	{
		int32_t L_31 = ___3_depthLimit;
		___3_depthLimit = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_32 = ___0_keys;
		int32_t L_33 = ___1_lo;
		int32_t L_34 = ___2_hi;
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_35 = ___4_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		int32_t L_36;
		L_36 = ArraySortHelper_1_PickPivotAndPartition_mFB9F7BC3732F70A35DC439A3A8E67A4AAC8F537A(L_32, L_33, L_34, L_35, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		V_1 = L_36;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_37 = ___0_keys;
		int32_t L_38 = V_1;
		int32_t L_39 = ___2_hi;
		int32_t L_40 = ___3_depthLimit;
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_41 = ___4_comparer;
		ArraySortHelper_1_IntroSort_m0BD5189B2CB234383AE43301D50A0C6247542F76(L_37, ((int32_t)il2cpp_codegen_add(L_38, 1)), L_39, L_40, L_41, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		int32_t L_42 = V_1;
		___2_hi = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_0086:
	{
		int32_t L_43 = ___2_hi;
		int32_t L_44 = ___1_lo;
		if ((((int32_t)L_43) > ((int32_t)L_44)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 12269
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_PickPivotAndPartition_mFB9F7BC3732F70A35DC439A3A8E67A4AAC8F537A_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___3_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___1_lo;
		int32_t L_1 = ___2_hi;
		int32_t L_2 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_3 = ___0_keys;
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_4 = ___3_comparer;
		int32_t L_5 = ___1_lo;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_SwapIfGreater_mCE5B161EB27F9EE49B85D2D69DC8F81B04FFEBE1(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_7 = ___0_keys;
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_8 = ___3_comparer;
		int32_t L_9 = ___1_lo;
		int32_t L_10 = ___2_hi;
		ArraySortHelper_1_SwapIfGreater_mCE5B161EB27F9EE49B85D2D69DC8F81B04FFEBE1(L_7, L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_11 = ___0_keys;
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_12 = ___3_comparer;
		int32_t L_13 = V_0;
		int32_t L_14 = ___2_hi;
		ArraySortHelper_1_SwapIfGreater_mCE5B161EB27F9EE49B85D2D69DC8F81B04FFEBE1(L_11, L_12, L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_15 = ___0_keys;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_1 = L_18;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_19 = ___0_keys;
		int32_t L_20 = V_0;
		int32_t L_21 = ___2_hi;
		ArraySortHelper_1_Swap_m2A59821D7B56FB86D678D06D8F1E81CC8E7948F5(L_19, L_20, ((int32_t)il2cpp_codegen_subtract(L_21, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		int32_t L_22 = ___1_lo;
		V_2 = L_22;
		int32_t L_23 = ___2_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		goto IL_0073;
	}

IL_003d:
	{
		CHECK_PAUSE_POINT;
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_24 = ___3_comparer;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_25 = ___0_keys;
		int32_t L_26 = V_2;
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		V_2 = L_27;
		NullCheck(L_25);
		int32_t L_28 = L_27;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_29 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_30 = V_1;
		NullCheck(L_24);
		int32_t L_31;
		L_31 = Comparison_1_Invoke_m3D0BD99863A18604C8E21A32D41D56217B26A9A4_inline(L_24, L_29, L_30, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}

IL_0052:
	{
		CHECK_PAUSE_POINT;
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_32 = ___3_comparer;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_33 = V_1;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_34 = ___0_keys;
		int32_t L_35 = V_3;
		int32_t L_36 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		V_3 = L_36;
		NullCheck(L_34);
		int32_t L_37 = L_36;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_32);
		int32_t L_39;
		L_39 = Comparison_1_Invoke_m3D0BD99863A18604C8E21A32D41D56217B26A9A4_inline(L_32, L_33, L_38, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		if ((((int32_t)L_39) < ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_40 = V_2;
		int32_t L_41 = V_3;
		if ((((int32_t)L_40) >= ((int32_t)L_41)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_42 = ___0_keys;
		int32_t L_43 = V_2;
		int32_t L_44 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_Swap_m2A59821D7B56FB86D678D06D8F1E81CC8E7948F5(L_42, L_43, L_44, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
	}

IL_0073:
	{
		int32_t L_45 = V_2;
		int32_t L_46 = V_3;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_003d;
		}
	}

IL_0077:
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_47 = ___0_keys;
		int32_t L_48 = V_2;
		int32_t L_49 = ___2_hi;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_Swap_m2A59821D7B56FB86D678D06D8F1E81CC8E7948F5(L_47, L_48, ((int32_t)il2cpp_codegen_subtract(L_49, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		int32_t L_50 = V_2;
		return L_50;
	}
}
// Method Definition Index: 12270
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Heapsort_m65FDFF63518040E9448380617CEC8D5CCBA7FAC4_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___3_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		goto IL_001a;
	}

IL_000c:
	{
		CHECK_PAUSE_POINT;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_3 = ___0_keys;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_lo;
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_7 = ___3_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_DownHeap_m5416FCE905F210069CCDB16E9D8AB282806BF652(L_3, L_4, L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_001a:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_10 = V_0;
		V_2 = L_10;
		goto IL_003e;
	}

IL_0022:
	{
		CHECK_PAUSE_POINT;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_11 = ___0_keys;
		int32_t L_12 = ___1_lo;
		int32_t L_13 = ___1_lo;
		int32_t L_14 = V_2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_Swap_m2A59821D7B56FB86D678D06D8F1E81CC8E7948F5(L_11, L_12, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_15 = ___0_keys;
		int32_t L_16 = V_2;
		int32_t L_17 = ___1_lo;
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_18 = ___3_comparer;
		ArraySortHelper_1_DownHeap_m5416FCE905F210069CCDB16E9D8AB282806BF652(L_15, 1, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), L_17, L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) > ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 12271
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_DownHeap_m5416FCE905F210069CCDB16E9D8AB282806BF652_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_0 = ___0_keys;
		int32_t L_1 = ___3_lo;
		int32_t L_2 = ___1_i;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1));
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		goto IL_0067;
	}

IL_000e:
	{
		CHECK_PAUSE_POINT;
		int32_t L_5 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_5));
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_n;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0038;
		}
	}
	{
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_8 = ___4_comparer;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_9 = ___0_keys;
		int32_t L_10 = ___3_lo;
		int32_t L_11 = V_1;
		NullCheck(L_9);
		int32_t L_12 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_10, L_11)), 1));
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_14 = ___0_keys;
		int32_t L_15 = ___3_lo;
		int32_t L_16 = V_1;
		NullCheck(L_14);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_15, L_16));
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_8);
		int32_t L_19;
		L_19 = Comparison_1_Invoke_m3D0BD99863A18604C8E21A32D41D56217B26A9A4_inline(L_8, L_13, L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0038:
	{
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_21 = ___4_comparer;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_22 = V_0;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_23 = ___0_keys;
		int32_t L_24 = ___3_lo;
		int32_t L_25 = V_1;
		NullCheck(L_23);
		int32_t L_26 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_24, L_25)), 1));
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_27 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_21);
		int32_t L_28;
		L_28 = Comparison_1_Invoke_m3D0BD99863A18604C8E21A32D41D56217B26A9A4_inline(L_21, L_22, L_27, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_29 = ___0_keys;
		int32_t L_30 = ___3_lo;
		int32_t L_31 = ___1_i;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_32 = ___0_keys;
		int32_t L_33 = ___3_lo;
		int32_t L_34 = V_1;
		NullCheck(L_32);
		int32_t L_35 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_33, L_34)), 1));
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_30, L_31)), 1))), (Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C)L_36);
		int32_t L_37 = V_1;
		___1_i = L_37;
	}

IL_0067:
	{
		int32_t L_38 = ___1_i;
		int32_t L_39 = ___2_n;
		if ((((int32_t)L_38) <= ((int32_t)((int32_t)(L_39/2)))))
		{
			goto IL_000e;
		}
	}

IL_006d:
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_40 = ___0_keys;
		int32_t L_41 = ___3_lo;
		int32_t L_42 = ___1_i;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_43 = V_0;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_42)), 1))), (Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C)L_43);
		return;
	}
}
// Method Definition Index: 12272
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_InsertionSort_m13814DFA2EBB58EE7D931298557C30AFF312B2FC_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___3_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___1_lo;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0004:
	{
		CHECK_PAUSE_POINT;
		int32_t L_1 = V_0;
		V_1 = L_1;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_2 = ___0_keys;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		goto IL_0026;
	}

IL_0012:
	{
		CHECK_PAUSE_POINT;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_6 = ___0_keys;
		int32_t L_7 = V_1;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_8 = ___0_keys;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C)L_11);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0026:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = ___1_lo;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003b;
		}
	}
	{
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_15 = ___3_comparer;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_16 = V_2;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_17 = ___0_keys;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_15);
		int32_t L_21;
		L_21 = Comparison_1_Invoke_m3D0BD99863A18604C8E21A32D41D56217B26A9A4_inline(L_15, L_16, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_003b:
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_22 = ___0_keys;
		int32_t L_23 = V_1;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_24 = V_2;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C)L_24);
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0049:
	{
		int32_t L_26 = V_0;
		int32_t L_27 = ___2_hi;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 12273
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySortHelper_1_tFF5DC7397168A75911DBA80813694A06456F38D5* ArraySortHelper_1_get_Default_m7CAAC441420540BF498296A4396EA68C0C9BDD49_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tFF5DC7397168A75911DBA80813694A06456F38D5* L_0 = ((ArraySortHelper_1_tFF5DC7397168A75911DBA80813694A06456F38D5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 12274
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1__ctor_mAA50051D3DEA95619F2F46DD0C756D048648DD2E_gshared (ArraySortHelper_1_tFF5DC7397168A75911DBA80813694A06456F38D5* __this, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// Method Definition Index: 12275
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1__cctor_m14DFBB24927A1CA5F05B496382BA908F824B325D_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ArraySortHelper_1_tFF5DC7397168A75911DBA80813694A06456F38D5* L_0 = (ArraySortHelper_1_tFF5DC7397168A75911DBA80813694A06456F38D5*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		ArraySortHelper_1__ctor_mAA50051D3DEA95619F2F46DD0C756D048648DD2E(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		((ArraySortHelper_1_tFF5DC7397168A75911DBA80813694A06456F38D5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ArraySortHelper_1_tFF5DC7397168A75911DBA80813694A06456F38D5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper), (void*)L_0);
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
// Method Definition Index: 12261
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m7043C81C2F4CA8491BEFC493A686810F7F56934A_gshared (ArraySortHelper_1_tA6CB6CF7DB992875A689164DA4EDAFB7F3F1505F* __this, PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_keys, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Exception_t* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			RuntimeObject* L_0 = ___3_comparer;
			if (L_0)
			{
				goto IL_000b_1;
			}
		}
		{
			Comparer_1_t0DF99FC079A32C7177827C3CD2D6BD476B79D392* L_1;
			L_1 = Comparer_1_get_Default_m75317E2206D3EA2B6B86263B0969BBF80896A2BE(il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			___3_comparer = (RuntimeObject*)L_1;
		}

IL_000b_1:
		{
			PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_2 = ___0_keys;
			int32_t L_3 = ___1_index;
			int32_t L_4 = ___2_length;
			RuntimeObject* L_5 = ___3_comparer;
			RuntimeObject* L_6 = L_5;
			void* L_7 = (void*)GetInterfaceMethodInfo((RuntimeObject*)L_6, 0, il2cpp_rgctx_data(method->klass->rgctx_data, 0));
			Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* L_8 = (Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
			Comparison_1__ctor_m79589F26FA4F6C202E8E78B5340AAFADA082CAA4(L_8, (RuntimeObject*)L_6, (intptr_t)(L_7), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
			ArraySortHelper_1_IntrospectiveSort_mDA3D72A0F426A4F36FF37ED42DF0A1F1BBF1A01E(L_2, L_3, L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			goto IL_003d;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002d;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0030;
		}
		throw e;
	}

CATCH_0023:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = ((IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)IL2CPP_GET_ACTIVE_EXCEPTION(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*));;
		RuntimeObject* L_10 = ___3_comparer;
		IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m119232371BEE9732FE70D22EE93B3818E577EFAF((RuntimeObject*)L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003d;
	}

CATCH_002d:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4* L_11 = ((ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*)IL2CPP_GET_ACTIVE_EXCEPTION(ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*));;
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
	}

CATCH_0030:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		Exception_t* L_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_0 = L_12;
		Exception_t* L_13 = V_0;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EDB6C049ED9617FA335A262A29BF30B15221AEA)), L_13, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_003d:
	{
		return;
	}
}
// Method Definition Index: 12262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m6FE12975FC3CA0ED9BB0623326F1C48B9D86F461_gshared (ArraySortHelper_1_tA6CB6CF7DB992875A689164DA4EDAFB7F3F1505F* __this, PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_array, int32_t ___1_index, int32_t ___2_length, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Exception_t* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			RuntimeObject* L_0 = ___4_comparer;
			if (L_0)
			{
				goto IL_000b_1;
			}
		}
		{
			Comparer_1_t0DF99FC079A32C7177827C3CD2D6BD476B79D392* L_1;
			L_1 = Comparer_1_get_Default_m75317E2206D3EA2B6B86263B0969BBF80896A2BE(il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			___4_comparer = (RuntimeObject*)L_1;
		}

IL_000b_1:
		{
			PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_2 = ___0_array;
			int32_t L_3 = ___1_index;
			int32_t L_4 = ___2_length;
			PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_5 = ___3_value;
			RuntimeObject* L_6 = ___4_comparer;
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
			int32_t L_7;
			L_7 = ArraySortHelper_1_InternalBinarySearch_m9A6A543CEF63BE36590807A16365D0851B469BE1(L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			V_0 = L_7;
			goto IL_002a;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001d;
		}
		throw e;
	}

CATCH_001a:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4* L_8 = ((ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*)IL2CPP_GET_ACTIVE_EXCEPTION(ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*));;
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
	}

CATCH_001d:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		Exception_t* L_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_1 = L_9;
		Exception_t* L_10 = V_1;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EDB6C049ED9617FA335A262A29BF30B15221AEA)), L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_002a:
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// Method Definition Index: 12263
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mF693E9D2E2ED283AFFF3524C5111B08E1DFDEDAD_gshared (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* ___3_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Exception_t* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_0 = ___0_keys;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_length;
		Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* L_3 = ___3_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_IntrospectiveSort_mDA3D72A0F426A4F36FF37ED42DF0A1F1BBF1A01E(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		goto IL_0024;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000b;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0014;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_000b:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_4 = ((IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)IL2CPP_GET_ACTIVE_EXCEPTION(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*));;
		Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* L_5 = ___3_comparer;
		IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m119232371BEE9732FE70D22EE93B3818E577EFAF((RuntimeObject*)L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0024;
	}

CATCH_0014:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4* L_6 = ((ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*)IL2CPP_GET_ACTIVE_EXCEPTION(ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*));;
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
	}

CATCH_0017:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		Exception_t* L_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_0 = L_7;
		Exception_t* L_8 = V_0;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EDB6C049ED9617FA335A262A29BF30B15221AEA)), L_8, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0024:
	{
		return;
	}
}
// Method Definition Index: 12264
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_InternalBinarySearch_m9A6A543CEF63BE36590807A16365D0851B469BE1_gshared (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_array, int32_t ___1_index, int32_t ___2_length, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___1_index;
		V_0 = L_0;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_length;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1));
		goto IL_0035;
	}

IL_000a:
	{
		CHECK_PAUSE_POINT;
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_4, L_5))>>1))));
		RuntimeObject* L_6 = ___4_comparer;
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_7 = ___0_array;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_11 = ___3_value;
		NullCheck(L_6);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker2< int32_t, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_6, L_10, L_11);
		V_3 = L_12;
		int32_t L_13 = V_3;
		if (L_13)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_14 = V_2;
		return L_14;
	}

IL_0027:
	{
		int32_t L_15 = V_3;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_16 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		goto IL_0035;
	}

IL_0031:
	{
		int32_t L_17 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
	}

IL_0035:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		if ((((int32_t)L_18) <= ((int32_t)L_19)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_20 = V_0;
		return ((~L_20));
	}
}
// Method Definition Index: 12265
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_SwapIfGreater_m6630EA6B7A437D8BA6C0B6F8B4DDCFB79D57B830_gshared (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_keys, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* ___1_comparer, int32_t ___2_a, int32_t ___3_b, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_a;
		int32_t L_1 = ___3_b;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0039;
		}
	}
	{
		Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* L_2 = ___1_comparer;
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_3 = ___0_keys;
		int32_t L_4 = ___2_a;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_7 = ___0_keys;
		int32_t L_8 = ___3_b;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_2);
		int32_t L_11;
		L_11 = Comparison_1_Invoke_mEA9A6C71B80C9370449DC9B10920F7B713E858F9_inline(L_2, L_6, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_12 = ___0_keys;
		int32_t L_13 = ___2_a;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = L_15;
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_16 = ___0_keys;
		int32_t L_17 = ___2_a;
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_18 = ___0_keys;
		int32_t L_19 = ___3_b;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3)L_21);
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_22 = ___0_keys;
		int32_t L_23 = ___3_b;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3)L_24);
	}

IL_0039:
	{
		return;
	}
}
// Method Definition Index: 12266
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Swap_m896BC6EED1BC0BC81DB9ECED89231155C9654AC1_gshared (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_a, int32_t ___1_i, int32_t ___2_j, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___1_i;
		int32_t L_1 = ___2_j;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0022;
		}
	}
	{
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_2 = ___0_a;
		int32_t L_3 = ___1_i;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_6 = ___0_a;
		int32_t L_7 = ___1_i;
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_8 = ___0_a;
		int32_t L_9 = ___2_j;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3)L_11);
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_12 = ___0_a;
		int32_t L_13 = ___2_j;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3)L_14);
	}

IL_0022:
	{
		return;
	}
}
// Method Definition Index: 12267
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_IntrospectiveSort_mDA3D72A0F426A4F36FF37ED42DF0A1F1BBF1A01E_gshared (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_keys, int32_t ___1_left, int32_t ___2_length, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* ___3_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_length;
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_1 = ___0_keys;
		int32_t L_2 = ___1_left;
		int32_t L_3 = ___2_length;
		int32_t L_4 = ___1_left;
		int32_t L_5 = ___2_length;
		int32_t L_6;
		L_6 = IntrospectiveSortUtilities_FloorLog2PlusOne_m33AC60574EC2B80A3B7084361A3736D4CFE91F6D(L_5, NULL);
		Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* L_7 = ___3_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_IntroSort_mAF3E9C95C91FDFF3DD451A576BA3292F84CF4A1E(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), ((int32_t)il2cpp_codegen_multiply(2, L_6)), L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return;
	}
}
// Method Definition Index: 12268
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_IntroSort_mAF3E9C95C91FDFF3DD451A576BA3292F84CF4A1E_gshared (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depthLimit, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		goto IL_0086;
	}

IL_0005:
	{
		CHECK_PAUSE_POINT;
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_5 = ___0_keys;
		Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* L_6 = ___4_comparer;
		int32_t L_7 = ___1_lo;
		int32_t L_8 = ___2_hi;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_SwapIfGreater_m6630EA6B7A437D8BA6C0B6F8B4DDCFB79D57B830(L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0024:
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_004b;
		}
	}
	{
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_10 = ___0_keys;
		Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* L_11 = ___4_comparer;
		int32_t L_12 = ___1_lo;
		int32_t L_13 = ___2_hi;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_SwapIfGreater_m6630EA6B7A437D8BA6C0B6F8B4DDCFB79D57B830(L_10, L_11, L_12, ((int32_t)il2cpp_codegen_subtract(L_13, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_14 = ___0_keys;
		Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* L_15 = ___4_comparer;
		int32_t L_16 = ___1_lo;
		int32_t L_17 = ___2_hi;
		ArraySortHelper_1_SwapIfGreater_m6630EA6B7A437D8BA6C0B6F8B4DDCFB79D57B830(L_14, L_15, L_16, L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_18 = ___0_keys;
		Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* L_19 = ___4_comparer;
		int32_t L_20 = ___2_hi;
		int32_t L_21 = ___2_hi;
		ArraySortHelper_1_SwapIfGreater_m6630EA6B7A437D8BA6C0B6F8B4DDCFB79D57B830(L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, 1)), L_21, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_004b:
	{
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_22 = ___0_keys;
		int32_t L_23 = ___1_lo;
		int32_t L_24 = ___2_hi;
		Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* L_25 = ___4_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_InsertionSort_mD52F61852A2990F4AFF738940B40893ABC84B875(L_22, L_23, L_24, L_25, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return;
	}

IL_0056:
	{
		int32_t L_26 = ___3_depthLimit;
		if (L_26)
		{
			goto IL_0064;
		}
	}
	{
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_27 = ___0_keys;
		int32_t L_28 = ___1_lo;
		int32_t L_29 = ___2_hi;
		Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* L_30 = ___4_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_Heapsort_m9A0E52D87FE89BD5100834D93A7B9EEBFF287129(L_27, L_28, L_29, L_30, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return;
	}

IL_0064:
	{
		int32_t L_31 = ___3_depthLimit;
		___3_depthLimit = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_32 = ___0_keys;
		int32_t L_33 = ___1_lo;
		int32_t L_34 = ___2_hi;
		Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* L_35 = ___4_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		int32_t L_36;
		L_36 = ArraySortHelper_1_PickPivotAndPartition_mDA85D4C36534CE7BE0D4C2537762FADC77E4A285(L_32, L_33, L_34, L_35, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		V_1 = L_36;
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_37 = ___0_keys;
		int32_t L_38 = V_1;
		int32_t L_39 = ___2_hi;
		int32_t L_40 = ___3_depthLimit;
		Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* L_41 = ___4_comparer;
		ArraySortHelper_1_IntroSort_mAF3E9C95C91FDFF3DD451A576BA3292F84CF4A1E(L_37, ((int32_t)il2cpp_codegen_add(L_38, 1)), L_39, L_40, L_41, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		int32_t L_42 = V_1;
		___2_hi = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_0086:
	{
		int32_t L_43 = ___2_hi;
		int32_t L_44 = ___1_lo;
		if ((((int32_t)L_43) > ((int32_t)L_44)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 12269
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_PickPivotAndPartition_mDA85D4C36534CE7BE0D4C2537762FADC77E4A285_gshared (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* ___3_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___1_lo;
		int32_t L_1 = ___2_hi;
		int32_t L_2 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_3 = ___0_keys;
		Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* L_4 = ___3_comparer;
		int32_t L_5 = ___1_lo;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_SwapIfGreater_m6630EA6B7A437D8BA6C0B6F8B4DDCFB79D57B830(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_7 = ___0_keys;
		Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* L_8 = ___3_comparer;
		int32_t L_9 = ___1_lo;
		int32_t L_10 = ___2_hi;
		ArraySortHelper_1_SwapIfGreater_m6630EA6B7A437D8BA6C0B6F8B4DDCFB79D57B830(L_7, L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_11 = ___0_keys;
		Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* L_12 = ___3_comparer;
		int32_t L_13 = V_0;
		int32_t L_14 = ___2_hi;
		ArraySortHelper_1_SwapIfGreater_m6630EA6B7A437D8BA6C0B6F8B4DDCFB79D57B830(L_11, L_12, L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_15 = ___0_keys;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_1 = L_18;
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_19 = ___0_keys;
		int32_t L_20 = V_0;
		int32_t L_21 = ___2_hi;
		ArraySortHelper_1_Swap_m896BC6EED1BC0BC81DB9ECED89231155C9654AC1(L_19, L_20, ((int32_t)il2cpp_codegen_subtract(L_21, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		int32_t L_22 = ___1_lo;
		V_2 = L_22;
		int32_t L_23 = ___2_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		goto IL_0073;
	}

IL_003d:
	{
		CHECK_PAUSE_POINT;
		Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* L_24 = ___3_comparer;
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_25 = ___0_keys;
		int32_t L_26 = V_2;
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		V_2 = L_27;
		NullCheck(L_25);
		int32_t L_28 = L_27;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_29 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_30 = V_1;
		NullCheck(L_24);
		int32_t L_31;
		L_31 = Comparison_1_Invoke_mEA9A6C71B80C9370449DC9B10920F7B713E858F9_inline(L_24, L_29, L_30, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}

IL_0052:
	{
		CHECK_PAUSE_POINT;
		Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* L_32 = ___3_comparer;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_33 = V_1;
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_34 = ___0_keys;
		int32_t L_35 = V_3;
		int32_t L_36 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		V_3 = L_36;
		NullCheck(L_34);
		int32_t L_37 = L_36;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_32);
		int32_t L_39;
		L_39 = Comparison_1_Invoke_mEA9A6C71B80C9370449DC9B10920F7B713E858F9_inline(L_32, L_33, L_38, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		if ((((int32_t)L_39) < ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_40 = V_2;
		int32_t L_41 = V_3;
		if ((((int32_t)L_40) >= ((int32_t)L_41)))
		{
			goto IL_0077;
		}
	}
	{
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_42 = ___0_keys;
		int32_t L_43 = V_2;
		int32_t L_44 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_Swap_m896BC6EED1BC0BC81DB9ECED89231155C9654AC1(L_42, L_43, L_44, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
	}

IL_0073:
	{
		int32_t L_45 = V_2;
		int32_t L_46 = V_3;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_003d;
		}
	}

IL_0077:
	{
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_47 = ___0_keys;
		int32_t L_48 = V_2;
		int32_t L_49 = ___2_hi;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_Swap_m896BC6EED1BC0BC81DB9ECED89231155C9654AC1(L_47, L_48, ((int32_t)il2cpp_codegen_subtract(L_49, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		int32_t L_50 = V_2;
		return L_50;
	}
}
// Method Definition Index: 12270
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Heapsort_m9A0E52D87FE89BD5100834D93A7B9EEBFF287129_gshared (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* ___3_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		goto IL_001a;
	}

IL_000c:
	{
		CHECK_PAUSE_POINT;
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_3 = ___0_keys;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_lo;
		Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* L_7 = ___3_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_DownHeap_mE4140279D77FB4B11DC2C2259AF128FBBFC3466B(L_3, L_4, L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_001a:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_10 = V_0;
		V_2 = L_10;
		goto IL_003e;
	}

IL_0022:
	{
		CHECK_PAUSE_POINT;
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_11 = ___0_keys;
		int32_t L_12 = ___1_lo;
		int32_t L_13 = ___1_lo;
		int32_t L_14 = V_2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_Swap_m896BC6EED1BC0BC81DB9ECED89231155C9654AC1(L_11, L_12, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_15 = ___0_keys;
		int32_t L_16 = V_2;
		int32_t L_17 = ___1_lo;
		Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* L_18 = ___3_comparer;
		ArraySortHelper_1_DownHeap_mE4140279D77FB4B11DC2C2259AF128FBBFC3466B(L_15, 1, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), L_17, L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) > ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 12271
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_DownHeap_mE4140279D77FB4B11DC2C2259AF128FBBFC3466B_gshared (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_keys, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_0 = ___0_keys;
		int32_t L_1 = ___3_lo;
		int32_t L_2 = ___1_i;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1));
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		goto IL_0067;
	}

IL_000e:
	{
		CHECK_PAUSE_POINT;
		int32_t L_5 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_5));
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_n;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0038;
		}
	}
	{
		Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* L_8 = ___4_comparer;
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_9 = ___0_keys;
		int32_t L_10 = ___3_lo;
		int32_t L_11 = V_1;
		NullCheck(L_9);
		int32_t L_12 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_10, L_11)), 1));
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_14 = ___0_keys;
		int32_t L_15 = ___3_lo;
		int32_t L_16 = V_1;
		NullCheck(L_14);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_15, L_16));
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_8);
		int32_t L_19;
		L_19 = Comparison_1_Invoke_mEA9A6C71B80C9370449DC9B10920F7B713E858F9_inline(L_8, L_13, L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0038:
	{
		Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* L_21 = ___4_comparer;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_22 = V_0;
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_23 = ___0_keys;
		int32_t L_24 = ___3_lo;
		int32_t L_25 = V_1;
		NullCheck(L_23);
		int32_t L_26 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_24, L_25)), 1));
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_27 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_21);
		int32_t L_28;
		L_28 = Comparison_1_Invoke_mEA9A6C71B80C9370449DC9B10920F7B713E858F9_inline(L_21, L_22, L_27, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_29 = ___0_keys;
		int32_t L_30 = ___3_lo;
		int32_t L_31 = ___1_i;
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_32 = ___0_keys;
		int32_t L_33 = ___3_lo;
		int32_t L_34 = V_1;
		NullCheck(L_32);
		int32_t L_35 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_33, L_34)), 1));
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_30, L_31)), 1))), (PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3)L_36);
		int32_t L_37 = V_1;
		___1_i = L_37;
	}

IL_0067:
	{
		int32_t L_38 = ___1_i;
		int32_t L_39 = ___2_n;
		if ((((int32_t)L_38) <= ((int32_t)((int32_t)(L_39/2)))))
		{
			goto IL_000e;
		}
	}

IL_006d:
	{
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_40 = ___0_keys;
		int32_t L_41 = ___3_lo;
		int32_t L_42 = ___1_i;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_43 = V_0;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_42)), 1))), (PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3)L_43);
		return;
	}
}
// Method Definition Index: 12272
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_InsertionSort_mD52F61852A2990F4AFF738940B40893ABC84B875_gshared (PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_keys, int32_t ___1_lo, int32_t ___2_hi, Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* ___3_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___1_lo;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0004:
	{
		CHECK_PAUSE_POINT;
		int32_t L_1 = V_0;
		V_1 = L_1;
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_2 = ___0_keys;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		goto IL_0026;
	}

IL_0012:
	{
		CHECK_PAUSE_POINT;
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_6 = ___0_keys;
		int32_t L_7 = V_1;
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_8 = ___0_keys;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3)L_11);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0026:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = ___1_lo;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003b;
		}
	}
	{
		Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* L_15 = ___3_comparer;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_16 = V_2;
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_17 = ___0_keys;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_15);
		int32_t L_21;
		L_21 = Comparison_1_Invoke_mEA9A6C71B80C9370449DC9B10920F7B713E858F9_inline(L_15, L_16, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_003b:
	{
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_22 = ___0_keys;
		int32_t L_23 = V_1;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_24 = V_2;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3)L_24);
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0049:
	{
		int32_t L_26 = V_0;
		int32_t L_27 = ___2_hi;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 12273
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySortHelper_1_tA6CB6CF7DB992875A689164DA4EDAFB7F3F1505F* ArraySortHelper_1_get_Default_m1E0CB53F2EBF4103281C716F5EE376038CB10394_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tA6CB6CF7DB992875A689164DA4EDAFB7F3F1505F* L_0 = ((ArraySortHelper_1_tA6CB6CF7DB992875A689164DA4EDAFB7F3F1505F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 12274
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1__ctor_mF3E1EA555692305BF2DE0C2188279568245A8830_gshared (ArraySortHelper_1_tA6CB6CF7DB992875A689164DA4EDAFB7F3F1505F* __this, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// Method Definition Index: 12275
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1__cctor_m72C20C1555350DCA0CEFA8EE6895DC98D2D05CE6_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ArraySortHelper_1_tA6CB6CF7DB992875A689164DA4EDAFB7F3F1505F* L_0 = (ArraySortHelper_1_tA6CB6CF7DB992875A689164DA4EDAFB7F3F1505F*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		ArraySortHelper_1__ctor_mF3E1EA555692305BF2DE0C2188279568245A8830(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		((ArraySortHelper_1_tA6CB6CF7DB992875A689164DA4EDAFB7F3F1505F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ArraySortHelper_1_tA6CB6CF7DB992875A689164DA4EDAFB7F3F1505F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper), (void*)L_0);
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
// Method Definition Index: 12276
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_Sort_m1F75CE3154AE6699D449012F2B7CFF3730363699_gshared (ArraySortHelper_2_t2ADBEC137D76AF37A250A1FBB9051B71AB1F10A7* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_index, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Exception_t* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			RuntimeObject* L_0 = ___4_comparer;
			if (!L_0)
			{
				goto IL_000d_1;
			}
		}
		{
			RuntimeObject* L_1 = ___4_comparer;
			Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* L_2;
			L_2 = Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051(il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			if ((!(((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80*)L_2))))
			{
				goto IL_0014_1;
			}
		}

IL_000d_1:
		{
			Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* L_3;
			L_3 = Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051(il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			___4_comparer = (RuntimeObject*)L_3;
		}

IL_0014_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___0_keys;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___1_values;
			int32_t L_6 = ___2_index;
			int32_t L_7 = ___3_length;
			RuntimeObject* L_8 = ___4_comparer;
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
			ArraySortHelper_2_IntrospectiveSort_m0A17977AEF029F60FB79FD801B413366FA66EF42(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			goto IL_003c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0022;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002c;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002f;
		}
		throw e;
	}

CATCH_0022:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = ((IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)IL2CPP_GET_ACTIVE_EXCEPTION(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*));;
		RuntimeObject* L_10 = ___4_comparer;
		IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m119232371BEE9732FE70D22EE93B3818E577EFAF((RuntimeObject*)L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003c;
	}

CATCH_002c:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4* L_11 = ((ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*)IL2CPP_GET_ACTIVE_EXCEPTION(ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*));;
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
	}

CATCH_002f:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		Exception_t* L_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_0 = L_12;
		Exception_t* L_13 = V_0;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EDB6C049ED9617FA335A262A29BF30B15221AEA)), L_13, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_003c:
	{
		return;
	}
}
// Method Definition Index: 12277
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_SwapIfGreaterWithItems_m3F7DF0379AE9AB631A6FAC0583B0B2D24BF81975_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, RuntimeObject* ___2_comparer, int32_t ___3_a, int32_t ___4_b, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___3_a;
		int32_t L_1 = ___4_b;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_comparer;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___0_keys;
		int32_t L_4 = ___3_a;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___0_keys;
		int32_t L_8 = ___4_b;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_2);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_2, L_6, L_10);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___0_keys;
		int32_t L_13 = ___3_a;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = L_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ___0_keys;
		int32_t L_17 = ___3_a;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ___0_keys;
		int32_t L_19 = ___4_b;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (int32_t)L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = ___0_keys;
		int32_t L_23 = ___4_b;
		int32_t L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = ___1_values;
		int32_t L_26 = ___3_a;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_1 = L_28;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = ___1_values;
		int32_t L_30 = ___3_a;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = ___1_values;
		int32_t L_32 = ___4_b;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (int32_t)L_34);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = ___1_values;
		int32_t L_36 = ___4_b;
		int32_t L_37 = V_1;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)L_37);
	}

IL_005d:
	{
		return;
	}
}
// Method Definition Index: 12278
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_Swap_m8E06889F0CFDDB36D72CA149718D1DA69B492FE4_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_i, int32_t ___3_j, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_i;
		int32_t L_1 = ___3_j;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0040;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_keys;
		int32_t L_3 = ___2_i;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___0_keys;
		int32_t L_7 = ___2_i;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___0_keys;
		int32_t L_9 = ___3_j;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___0_keys;
		int32_t L_13 = ___3_j;
		int32_t L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int32_t)L_14);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = ___1_values;
		int32_t L_16 = ___2_i;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_1 = L_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ___1_values;
		int32_t L_20 = ___2_i;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = ___1_values;
		int32_t L_22 = ___3_j;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (int32_t)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = ___1_values;
		int32_t L_26 = ___3_j;
		int32_t L_27 = V_1;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (int32_t)L_27);
	}

IL_0040:
	{
		return;
	}
}
// Method Definition Index: 12279
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_IntrospectiveSort_m0A17977AEF029F60FB79FD801B413366FA66EF42_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_left, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___3_length;
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___1_values;
		int32_t L_3 = ___2_left;
		int32_t L_4 = ___3_length;
		int32_t L_5 = ___2_left;
		int32_t L_6 = ___3_length;
		int32_t L_7;
		L_7 = IntrospectiveSortUtilities_FloorLog2PlusOne_m33AC60574EC2B80A3B7084361A3736D4CFE91F6D(L_6, NULL);
		RuntimeObject* L_8 = ___4_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_IntroSort_mD6DB9589646AEC8A233A82DF1FDE372B736B5AB5(L_1, L_2, L_3, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_4, L_5)), 1)), ((int32_t)il2cpp_codegen_multiply(2, L_7)), L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return;
	}
}
// Method Definition Index: 12280
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_IntroSort_mD6DB9589646AEC8A233A82DF1FDE372B736B5AB5_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, int32_t ___4_depthLimit, RuntimeObject* ___5_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		goto IL_0091;
	}

IL_0005:
	{
		CHECK_PAUSE_POINT;
		int32_t L_0 = ___3_hi;
		int32_t L_1 = ___2_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0025;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___1_values;
		RuntimeObject* L_7 = ___5_comparer;
		int32_t L_8 = ___2_lo;
		int32_t L_9 = ___3_hi;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_SwapIfGreaterWithItems_m3F7DF0379AE9AB631A6FAC0583B0B2D24BF81975(L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return;
	}

IL_0025:
	{
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_004f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___1_values;
		RuntimeObject* L_13 = ___5_comparer;
		int32_t L_14 = ___2_lo;
		int32_t L_15 = ___3_hi;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_SwapIfGreaterWithItems_m3F7DF0379AE9AB631A6FAC0583B0B2D24BF81975(L_11, L_12, L_13, L_14, ((int32_t)il2cpp_codegen_subtract(L_15, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___1_values;
		RuntimeObject* L_18 = ___5_comparer;
		int32_t L_19 = ___2_lo;
		int32_t L_20 = ___3_hi;
		ArraySortHelper_2_SwapIfGreaterWithItems_m3F7DF0379AE9AB631A6FAC0583B0B2D24BF81975(L_16, L_17, L_18, L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = ___1_values;
		RuntimeObject* L_23 = ___5_comparer;
		int32_t L_24 = ___3_hi;
		int32_t L_25 = ___3_hi;
		ArraySortHelper_2_SwapIfGreaterWithItems_m3F7DF0379AE9AB631A6FAC0583B0B2D24BF81975(L_21, L_22, L_23, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), L_25, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return;
	}

IL_004f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = ___1_values;
		int32_t L_28 = ___2_lo;
		int32_t L_29 = ___3_hi;
		RuntimeObject* L_30 = ___5_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_InsertionSort_m20C87943C2EA83ECCBD96E7C50EB13AC67146AA5(L_26, L_27, L_28, L_29, L_30, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_005b:
	{
		int32_t L_31 = ___4_depthLimit;
		if (L_31)
		{
			goto IL_006b;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = ___1_values;
		int32_t L_34 = ___2_lo;
		int32_t L_35 = ___3_hi;
		RuntimeObject* L_36 = ___5_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_Heapsort_mE480928E488842ABB5EA3CB974C5CDAC779BAE14(L_32, L_33, L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return;
	}

IL_006b:
	{
		int32_t L_37 = ___4_depthLimit;
		___4_depthLimit = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = ___1_values;
		int32_t L_40 = ___2_lo;
		int32_t L_41 = ___3_hi;
		RuntimeObject* L_42 = ___5_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_43;
		L_43 = ArraySortHelper_2_PickPivotAndPartition_m166BF2FF901E7457DE291FF94704FFAE7FD6FC9B(L_38, L_39, L_40, L_41, L_42, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		V_1 = L_43;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = ___1_values;
		int32_t L_46 = V_1;
		int32_t L_47 = ___3_hi;
		int32_t L_48 = ___4_depthLimit;
		RuntimeObject* L_49 = ___5_comparer;
		ArraySortHelper_2_IntroSort_mD6DB9589646AEC8A233A82DF1FDE372B736B5AB5(L_44, L_45, ((int32_t)il2cpp_codegen_add(L_46, 1)), L_47, L_48, L_49, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		int32_t L_50 = V_1;
		___3_hi = ((int32_t)il2cpp_codegen_subtract(L_50, 1));
	}

IL_0091:
	{
		int32_t L_51 = ___3_hi;
		int32_t L_52 = ___2_lo;
		if ((((int32_t)L_51) > ((int32_t)L_52)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 12281
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_2_PickPivotAndPartition_m166BF2FF901E7457DE291FF94704FFAE7FD6FC9B_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_lo;
		int32_t L_1 = ___3_hi;
		int32_t L_2 = ___2_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___1_values;
		RuntimeObject* L_5 = ___4_comparer;
		int32_t L_6 = ___2_lo;
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_SwapIfGreaterWithItems_m3F7DF0379AE9AB631A6FAC0583B0B2D24BF81975(L_3, L_4, L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___1_values;
		RuntimeObject* L_10 = ___4_comparer;
		int32_t L_11 = ___2_lo;
		int32_t L_12 = ___3_hi;
		ArraySortHelper_2_SwapIfGreaterWithItems_m3F7DF0379AE9AB631A6FAC0583B0B2D24BF81975(L_8, L_9, L_10, L_11, L_12, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ___1_values;
		RuntimeObject* L_15 = ___4_comparer;
		int32_t L_16 = V_0;
		int32_t L_17 = ___3_hi;
		ArraySortHelper_2_SwapIfGreaterWithItems_m3F7DF0379AE9AB631A6FAC0583B0B2D24BF81975(L_13, L_14, L_15, L_16, L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ___0_keys;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_1 = L_21;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ___1_values;
		int32_t L_24 = V_0;
		int32_t L_25 = ___3_hi;
		ArraySortHelper_2_Swap_m8E06889F0CFDDB36D72CA149718D1DA69B492FE4(L_22, L_23, L_24, ((int32_t)il2cpp_codegen_subtract(L_25, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		int32_t L_26 = ___2_lo;
		V_2 = L_26;
		int32_t L_27 = ___3_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		goto IL_007d;
	}

IL_0044:
	{
		CHECK_PAUSE_POINT;
		RuntimeObject* L_28 = ___4_comparer;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = ___0_keys;
		int32_t L_30 = V_2;
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		V_2 = L_31;
		NullCheck(L_29);
		int32_t L_32 = L_31;
		int32_t L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		int32_t L_34 = V_1;
		NullCheck(L_28);
		int32_t L_35;
		L_35 = InterfaceFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_28, L_33, L_34);
		if ((((int32_t)L_35) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}

IL_005a:
	{
		CHECK_PAUSE_POINT;
		RuntimeObject* L_36 = ___4_comparer;
		int32_t L_37 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = ___0_keys;
		int32_t L_39 = V_3;
		int32_t L_40 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
		V_3 = L_40;
		NullCheck(L_38);
		int32_t L_41 = L_40;
		int32_t L_42 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_36);
		int32_t L_43;
		L_43 = InterfaceFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_36, L_37, L_42);
		if ((((int32_t)L_43) < ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_44 = V_2;
		int32_t L_45 = V_3;
		if ((((int32_t)L_44) >= ((int32_t)L_45)))
		{
			goto IL_0081;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = ___1_values;
		int32_t L_48 = V_2;
		int32_t L_49 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_Swap_m8E06889F0CFDDB36D72CA149718D1DA69B492FE4(L_46, L_47, L_48, L_49, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
	}

IL_007d:
	{
		int32_t L_50 = V_2;
		int32_t L_51 = V_3;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_0044;
		}
	}

IL_0081:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = ___1_values;
		int32_t L_54 = V_2;
		int32_t L_55 = ___3_hi;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_Swap_m8E06889F0CFDDB36D72CA149718D1DA69B492FE4(L_52, L_53, L_54, ((int32_t)il2cpp_codegen_subtract(L_55, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		int32_t L_56 = V_2;
		return L_56;
	}
}
// Method Definition Index: 12282
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_Heapsort_mE480928E488842ABB5EA3CB974C5CDAC779BAE14_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___3_hi;
		int32_t L_1 = ___2_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		goto IL_001c;
	}

IL_000c:
	{
		CHECK_PAUSE_POINT;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___1_values;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		int32_t L_7 = ___2_lo;
		RuntimeObject* L_8 = ___4_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_DownHeap_mCE50BB8E3B0675EE9D0D575D0EBC9BCC5A8D2801(L_3, L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}

IL_001c:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_11 = V_0;
		V_2 = L_11;
		goto IL_0043;
	}

IL_0024:
	{
		CHECK_PAUSE_POINT;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = ___1_values;
		int32_t L_14 = ___2_lo;
		int32_t L_15 = ___2_lo;
		int32_t L_16 = V_2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_Swap_m8E06889F0CFDDB36D72CA149718D1DA69B492FE4(L_12, L_13, L_14, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_15, L_16)), 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ___1_values;
		int32_t L_19 = V_2;
		int32_t L_20 = ___2_lo;
		RuntimeObject* L_21 = ___4_comparer;
		ArraySortHelper_2_DownHeap_mCE50BB8E3B0675EE9D0D575D0EBC9BCC5A8D2801(L_17, L_18, 1, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), L_20, L_21, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
	}

IL_0043:
	{
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) > ((int32_t)1)))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 12283
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_DownHeap_mCE50BB8E3B0675EE9D0D575D0EBC9BCC5A8D2801_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_i, int32_t ___3_n, int32_t ___4_lo, RuntimeObject* ___5_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_keys;
		int32_t L_1 = ___4_lo;
		int32_t L_2 = ___2_i;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1));
		int32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___1_values;
		int32_t L_6 = ___4_lo;
		int32_t L_7 = ___2_i;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_6, L_7)), 1));
		int32_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		goto IL_0092;
	}

IL_001c:
	{
		CHECK_PAUSE_POINT;
		int32_t L_10 = ___2_i;
		V_2 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		int32_t L_11 = V_2;
		int32_t L_12 = ___3_n;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_13 = ___5_comparer;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ___0_keys;
		int32_t L_15 = ___4_lo;
		int32_t L_16 = V_2;
		NullCheck(L_14);
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_15, L_16)), 1));
		int32_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ___0_keys;
		int32_t L_20 = ___4_lo;
		int32_t L_21 = V_2;
		NullCheck(L_19);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		int32_t L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_13);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_13, L_18, L_23);
		if ((((int32_t)L_24) >= ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0048:
	{
		RuntimeObject* L_26 = ___5_comparer;
		int32_t L_27 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = ___0_keys;
		int32_t L_29 = ___4_lo;
		int32_t L_30 = V_2;
		NullCheck(L_28);
		int32_t L_31 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_26);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_26, L_27, L_32);
		if ((((int32_t)L_33) >= ((int32_t)0)))
		{
			goto IL_0098;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = ___0_keys;
		int32_t L_35 = ___4_lo;
		int32_t L_36 = ___2_i;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = ___0_keys;
		int32_t L_38 = ___4_lo;
		int32_t L_39 = V_2;
		NullCheck(L_37);
		int32_t L_40 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_38, L_39)), 1));
		int32_t L_41 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), (int32_t)L_41);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = ___1_values;
		int32_t L_43 = ___4_lo;
		int32_t L_44 = ___2_i;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = ___1_values;
		int32_t L_46 = ___4_lo;
		int32_t L_47 = V_2;
		NullCheck(L_45);
		int32_t L_48 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_46, L_47)), 1));
		int32_t L_49 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_43, L_44)), 1))), (int32_t)L_49);
		int32_t L_50 = V_2;
		___2_i = L_50;
	}

IL_0092:
	{
		int32_t L_51 = ___2_i;
		int32_t L_52 = ___3_n;
		if ((((int32_t)L_51) <= ((int32_t)((int32_t)(L_52/2)))))
		{
			goto IL_001c;
		}
	}

IL_0098:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = ___0_keys;
		int32_t L_54 = ___4_lo;
		int32_t L_55 = ___2_i;
		int32_t L_56 = V_0;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_54, L_55)), 1))), (int32_t)L_56);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = ___1_values;
		int32_t L_58 = ___4_lo;
		int32_t L_59 = ___2_i;
		int32_t L_60 = V_1;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_58, L_59)), 1))), (int32_t)L_60);
		return;
	}
}
// Method Definition Index: 12284
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_InsertionSort_m20C87943C2EA83ECCBD96E7C50EB13AC67146AA5_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_lo;
		V_0 = L_0;
		goto IL_006e;
	}

IL_0004:
	{
		CHECK_PAUSE_POINT;
		int32_t L_1 = V_0;
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_keys;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___1_values;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		goto IL_0040;
	}

IL_001c:
	{
		CHECK_PAUSE_POINT;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ___0_keys;
		int32_t L_11 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___0_keys;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, 1))), (int32_t)L_15);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ___1_values;
		int32_t L_17 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ___1_values;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_17, 1))), (int32_t)L_21);
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
	}

IL_0040:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = ___2_lo;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0056;
		}
	}
	{
		RuntimeObject* L_25 = ___4_comparer;
		int32_t L_26 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = ___0_keys;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		int32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_25);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_25, L_26, L_30);
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_001c;
		}
	}

IL_0056:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = ___0_keys;
		int32_t L_33 = V_1;
		int32_t L_34 = V_2;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_33, 1))), (int32_t)L_34);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = ___1_values;
		int32_t L_36 = V_1;
		int32_t L_37 = V_3;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 1))), (int32_t)L_37);
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_006e:
	{
		int32_t L_39 = V_0;
		int32_t L_40 = ___3_hi;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 12285
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySortHelper_2_t2ADBEC137D76AF37A250A1FBB9051B71AB1F10A7* ArraySortHelper_2_get_Default_m142DB113E5C9B532F8CAE6956F634676B913886E_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_t2ADBEC137D76AF37A250A1FBB9051B71AB1F10A7* L_0 = ((ArraySortHelper_2_t2ADBEC137D76AF37A250A1FBB9051B71AB1F10A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 12286
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2__ctor_m1119B44E916721D12206A0232285DA5BB4151627_gshared (ArraySortHelper_2_t2ADBEC137D76AF37A250A1FBB9051B71AB1F10A7* __this, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// Method Definition Index: 12287
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2__cctor_mF76EADC5D483E88ED87E25EFAD6EBAC89689E850_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ArraySortHelper_2_t2ADBEC137D76AF37A250A1FBB9051B71AB1F10A7* L_0 = (ArraySortHelper_2_t2ADBEC137D76AF37A250A1FBB9051B71AB1F10A7*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		ArraySortHelper_2__ctor_m1119B44E916721D12206A0232285DA5BB4151627(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		((ArraySortHelper_2_t2ADBEC137D76AF37A250A1FBB9051B71AB1F10A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___s_defaultArraySortHelper = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ArraySortHelper_2_t2ADBEC137D76AF37A250A1FBB9051B71AB1F10A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___s_defaultArraySortHelper), (void*)L_0);
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
// Method Definition Index: 12276
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_Sort_m10E66D09F0B7D531664A5FB53335A8D2B3D2E23A_gshared (ArraySortHelper_2_tE4E677AAEE3AEDD26440F8404627379269E5E692* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, int32_t ___2_index, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Exception_t* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			RuntimeObject* L_0 = ___4_comparer;
			if (!L_0)
			{
				goto IL_000d_1;
			}
		}
		{
			RuntimeObject* L_1 = ___4_comparer;
			Comparer_1_t156CA54426F60B4132C76BFACD5FDBD3043D437E* L_2;
			L_2 = Comparer_1_get_Default_mDCEA11B875EEB23AECDA2D76B230E1AD7B6962E4(il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			if ((!(((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(Comparer_1_t156CA54426F60B4132C76BFACD5FDBD3043D437E*)L_2))))
			{
				goto IL_0014_1;
			}
		}

IL_000d_1:
		{
			Comparer_1_t156CA54426F60B4132C76BFACD5FDBD3043D437E* L_3;
			L_3 = Comparer_1_get_Default_mDCEA11B875EEB23AECDA2D76B230E1AD7B6962E4(il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			___4_comparer = (RuntimeObject*)L_3;
		}

IL_0014_1:
		{
			UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___0_keys;
			__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = ___1_values;
			int32_t L_6 = ___2_index;
			int32_t L_7 = ___3_length;
			RuntimeObject* L_8 = ___4_comparer;
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
			ArraySortHelper_2_IntrospectiveSort_mDEACBEDABBAD8B687A0D61672A14A5915E915D31(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			goto IL_003c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0022;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002c;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002f;
		}
		throw e;
	}

CATCH_0022:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = ((IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)IL2CPP_GET_ACTIVE_EXCEPTION(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*));;
		RuntimeObject* L_10 = ___4_comparer;
		IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m119232371BEE9732FE70D22EE93B3818E577EFAF((RuntimeObject*)L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003c;
	}

CATCH_002c:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4* L_11 = ((ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*)IL2CPP_GET_ACTIVE_EXCEPTION(ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*));;
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
	}

CATCH_002f:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		Exception_t* L_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_0 = L_12;
		Exception_t* L_13 = V_0;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EDB6C049ED9617FA335A262A29BF30B15221AEA)), L_13, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_003c:
	{
		return;
	}
}
// Method Definition Index: 12277
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_SwapIfGreaterWithItems_m41D1C03140B109A8A192A0053FCF4C446A552D47_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, RuntimeObject* ___2_comparer, int32_t ___3_a, int32_t ___4_b, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	uint64_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___3_a;
		int32_t L_1 = ___4_b;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_comparer;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___0_keys;
		int32_t L_4 = ___3_a;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint64_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = ___0_keys;
		int32_t L_8 = ___4_b;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint64_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_2);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2< int32_t, uint64_t, uint64_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_2, L_6, L_10);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___0_keys;
		int32_t L_13 = ___3_a;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint64_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = L_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = ___0_keys;
		int32_t L_17 = ___3_a;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_18 = ___0_keys;
		int32_t L_19 = ___4_b;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint64_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint64_t)L_21);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_22 = ___0_keys;
		int32_t L_23 = ___4_b;
		uint64_t L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint64_t)L_24);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_25 = ___1_values;
		int32_t L_26 = ___3_a;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Il2CppSharedGenericObject* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_1 = L_28;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_29 = ___1_values;
		int32_t L_30 = ___3_a;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_31 = ___1_values;
		int32_t L_32 = ___4_b;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		Il2CppSharedGenericObject* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (Il2CppSharedGenericObject*)L_34);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_35 = ___1_values;
		int32_t L_36 = ___4_b;
		Il2CppSharedGenericObject* L_37 = V_1;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (Il2CppSharedGenericObject*)L_37);
	}

IL_005d:
	{
		return;
	}
}
// Method Definition Index: 12278
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_Swap_m8D8C959E216E4B7A159F3ACEAB9612EA0985D8E4_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, int32_t ___2_i, int32_t ___3_j, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	uint64_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_i;
		int32_t L_1 = ___3_j;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0040;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___0_keys;
		int32_t L_3 = ___2_i;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint64_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___0_keys;
		int32_t L_7 = ___2_i;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_keys;
		int32_t L_9 = ___3_j;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint64_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint64_t)L_11);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___0_keys;
		int32_t L_13 = ___3_j;
		uint64_t L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint64_t)L_14);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_15 = ___1_values;
		int32_t L_16 = ___2_i;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Il2CppSharedGenericObject* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_1 = L_18;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_19 = ___1_values;
		int32_t L_20 = ___2_i;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_21 = ___1_values;
		int32_t L_22 = ___3_j;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Il2CppSharedGenericObject* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (Il2CppSharedGenericObject*)L_24);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_25 = ___1_values;
		int32_t L_26 = ___3_j;
		Il2CppSharedGenericObject* L_27 = V_1;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Il2CppSharedGenericObject*)L_27);
	}

IL_0040:
	{
		return;
	}
}
// Method Definition Index: 12279
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_IntrospectiveSort_mDEACBEDABBAD8B687A0D61672A14A5915E915D31_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, int32_t ___2_left, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___3_length;
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_keys;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_2 = ___1_values;
		int32_t L_3 = ___2_left;
		int32_t L_4 = ___3_length;
		int32_t L_5 = ___2_left;
		int32_t L_6 = ___3_length;
		int32_t L_7;
		L_7 = IntrospectiveSortUtilities_FloorLog2PlusOne_m33AC60574EC2B80A3B7084361A3736D4CFE91F6D(L_6, NULL);
		RuntimeObject* L_8 = ___4_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_IntroSort_mA54625173A6A1DCD2BC0AF59627AEEFB55AF98A8(L_1, L_2, L_3, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_4, L_5)), 1)), ((int32_t)il2cpp_codegen_multiply(2, L_7)), L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return;
	}
}
// Method Definition Index: 12280
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_IntroSort_mA54625173A6A1DCD2BC0AF59627AEEFB55AF98A8_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, int32_t ___2_lo, int32_t ___3_hi, int32_t ___4_depthLimit, RuntimeObject* ___5_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		goto IL_0091;
	}

IL_0005:
	{
		CHECK_PAUSE_POINT;
		int32_t L_0 = ___3_hi;
		int32_t L_1 = ___2_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0025;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___0_keys;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = ___1_values;
		RuntimeObject* L_7 = ___5_comparer;
		int32_t L_8 = ___2_lo;
		int32_t L_9 = ___3_hi;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_SwapIfGreaterWithItems_m41D1C03140B109A8A192A0053FCF4C446A552D47(L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return;
	}

IL_0025:
	{
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_004f;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___0_keys;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = ___1_values;
		RuntimeObject* L_13 = ___5_comparer;
		int32_t L_14 = ___2_lo;
		int32_t L_15 = ___3_hi;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_SwapIfGreaterWithItems_m41D1C03140B109A8A192A0053FCF4C446A552D47(L_11, L_12, L_13, L_14, ((int32_t)il2cpp_codegen_subtract(L_15, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = ___0_keys;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_17 = ___1_values;
		RuntimeObject* L_18 = ___5_comparer;
		int32_t L_19 = ___2_lo;
		int32_t L_20 = ___3_hi;
		ArraySortHelper_2_SwapIfGreaterWithItems_m41D1C03140B109A8A192A0053FCF4C446A552D47(L_16, L_17, L_18, L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = ___0_keys;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_22 = ___1_values;
		RuntimeObject* L_23 = ___5_comparer;
		int32_t L_24 = ___3_hi;
		int32_t L_25 = ___3_hi;
		ArraySortHelper_2_SwapIfGreaterWithItems_m41D1C03140B109A8A192A0053FCF4C446A552D47(L_21, L_22, L_23, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), L_25, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return;
	}

IL_004f:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___0_keys;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_27 = ___1_values;
		int32_t L_28 = ___2_lo;
		int32_t L_29 = ___3_hi;
		RuntimeObject* L_30 = ___5_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_InsertionSort_mCB672D5F75C3401C489DC521F8B3791A6581F156(L_26, L_27, L_28, L_29, L_30, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_005b:
	{
		int32_t L_31 = ___4_depthLimit;
		if (L_31)
		{
			goto IL_006b;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = ___0_keys;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_33 = ___1_values;
		int32_t L_34 = ___2_lo;
		int32_t L_35 = ___3_hi;
		RuntimeObject* L_36 = ___5_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_Heapsort_m3EB6CCB850DE6C86E34B8752EDCFB39F003AB1A4(L_32, L_33, L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return;
	}

IL_006b:
	{
		int32_t L_37 = ___4_depthLimit;
		___4_depthLimit = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38 = ___0_keys;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_39 = ___1_values;
		int32_t L_40 = ___2_lo;
		int32_t L_41 = ___3_hi;
		RuntimeObject* L_42 = ___5_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_43;
		L_43 = ArraySortHelper_2_PickPivotAndPartition_m9B8D4A15D693048F0AFBE6AA8EB9ACD34FA3703E(L_38, L_39, L_40, L_41, L_42, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		V_1 = L_43;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_44 = ___0_keys;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_45 = ___1_values;
		int32_t L_46 = V_1;
		int32_t L_47 = ___3_hi;
		int32_t L_48 = ___4_depthLimit;
		RuntimeObject* L_49 = ___5_comparer;
		ArraySortHelper_2_IntroSort_mA54625173A6A1DCD2BC0AF59627AEEFB55AF98A8(L_44, L_45, ((int32_t)il2cpp_codegen_add(L_46, 1)), L_47, L_48, L_49, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		int32_t L_50 = V_1;
		___3_hi = ((int32_t)il2cpp_codegen_subtract(L_50, 1));
	}

IL_0091:
	{
		int32_t L_51 = ___3_hi;
		int32_t L_52 = ___2_lo;
		if ((((int32_t)L_51) > ((int32_t)L_52)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 12281
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_2_PickPivotAndPartition_m9B8D4A15D693048F0AFBE6AA8EB9ACD34FA3703E_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_lo;
		int32_t L_1 = ___3_hi;
		int32_t L_2 = ___2_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___0_keys;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = ___1_values;
		RuntimeObject* L_5 = ___4_comparer;
		int32_t L_6 = ___2_lo;
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_SwapIfGreaterWithItems_m41D1C03140B109A8A192A0053FCF4C446A552D47(L_3, L_4, L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_keys;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_9 = ___1_values;
		RuntimeObject* L_10 = ___4_comparer;
		int32_t L_11 = ___2_lo;
		int32_t L_12 = ___3_hi;
		ArraySortHelper_2_SwapIfGreaterWithItems_m41D1C03140B109A8A192A0053FCF4C446A552D47(L_8, L_9, L_10, L_11, L_12, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = ___0_keys;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_14 = ___1_values;
		RuntimeObject* L_15 = ___4_comparer;
		int32_t L_16 = V_0;
		int32_t L_17 = ___3_hi;
		ArraySortHelper_2_SwapIfGreaterWithItems_m41D1C03140B109A8A192A0053FCF4C446A552D47(L_13, L_14, L_15, L_16, L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_18 = ___0_keys;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint64_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_1 = L_21;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_22 = ___0_keys;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_23 = ___1_values;
		int32_t L_24 = V_0;
		int32_t L_25 = ___3_hi;
		ArraySortHelper_2_Swap_m8D8C959E216E4B7A159F3ACEAB9612EA0985D8E4(L_22, L_23, L_24, ((int32_t)il2cpp_codegen_subtract(L_25, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		int32_t L_26 = ___2_lo;
		V_2 = L_26;
		int32_t L_27 = ___3_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		goto IL_007d;
	}

IL_0044:
	{
		CHECK_PAUSE_POINT;
		RuntimeObject* L_28 = ___4_comparer;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___0_keys;
		int32_t L_30 = V_2;
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		V_2 = L_31;
		NullCheck(L_29);
		int32_t L_32 = L_31;
		uint64_t L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		uint64_t L_34 = V_1;
		NullCheck(L_28);
		int32_t L_35;
		L_35 = InterfaceFuncInvoker2< int32_t, uint64_t, uint64_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_28, L_33, L_34);
		if ((((int32_t)L_35) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}

IL_005a:
	{
		CHECK_PAUSE_POINT;
		RuntimeObject* L_36 = ___4_comparer;
		uint64_t L_37 = V_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38 = ___0_keys;
		int32_t L_39 = V_3;
		int32_t L_40 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
		V_3 = L_40;
		NullCheck(L_38);
		int32_t L_41 = L_40;
		uint64_t L_42 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_36);
		int32_t L_43;
		L_43 = InterfaceFuncInvoker2< int32_t, uint64_t, uint64_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_36, L_37, L_42);
		if ((((int32_t)L_43) < ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_44 = V_2;
		int32_t L_45 = V_3;
		if ((((int32_t)L_44) >= ((int32_t)L_45)))
		{
			goto IL_0081;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_46 = ___0_keys;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_47 = ___1_values;
		int32_t L_48 = V_2;
		int32_t L_49 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_Swap_m8D8C959E216E4B7A159F3ACEAB9612EA0985D8E4(L_46, L_47, L_48, L_49, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
	}

IL_007d:
	{
		int32_t L_50 = V_2;
		int32_t L_51 = V_3;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_0044;
		}
	}

IL_0081:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_52 = ___0_keys;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_53 = ___1_values;
		int32_t L_54 = V_2;
		int32_t L_55 = ___3_hi;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_Swap_m8D8C959E216E4B7A159F3ACEAB9612EA0985D8E4(L_52, L_53, L_54, ((int32_t)il2cpp_codegen_subtract(L_55, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		int32_t L_56 = V_2;
		return L_56;
	}
}
// Method Definition Index: 12282
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_Heapsort_m3EB6CCB850DE6C86E34B8752EDCFB39F003AB1A4_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___3_hi;
		int32_t L_1 = ___2_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		goto IL_001c;
	}

IL_000c:
	{
		CHECK_PAUSE_POINT;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___0_keys;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = ___1_values;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		int32_t L_7 = ___2_lo;
		RuntimeObject* L_8 = ___4_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_DownHeap_m2905BDE0F660F0C1CF7ADAEF869DCC8E251FAA6C(L_3, L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}

IL_001c:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_11 = V_0;
		V_2 = L_11;
		goto IL_0043;
	}

IL_0024:
	{
		CHECK_PAUSE_POINT;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___0_keys;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_13 = ___1_values;
		int32_t L_14 = ___2_lo;
		int32_t L_15 = ___2_lo;
		int32_t L_16 = V_2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_Swap_m8D8C959E216E4B7A159F3ACEAB9612EA0985D8E4(L_12, L_13, L_14, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_15, L_16)), 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___0_keys;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_18 = ___1_values;
		int32_t L_19 = V_2;
		int32_t L_20 = ___2_lo;
		RuntimeObject* L_21 = ___4_comparer;
		ArraySortHelper_2_DownHeap_m2905BDE0F660F0C1CF7ADAEF869DCC8E251FAA6C(L_17, L_18, 1, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), L_20, L_21, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
	}

IL_0043:
	{
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) > ((int32_t)1)))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 12283
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_DownHeap_m2905BDE0F660F0C1CF7ADAEF869DCC8E251FAA6C_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, int32_t ___2_i, int32_t ___3_n, int32_t ___4_lo, RuntimeObject* ___5_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	uint64_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_keys;
		int32_t L_1 = ___4_lo;
		int32_t L_2 = ___2_i;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1));
		uint64_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = ___1_values;
		int32_t L_6 = ___4_lo;
		int32_t L_7 = ___2_i;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_6, L_7)), 1));
		Il2CppSharedGenericObject* L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		goto IL_0092;
	}

IL_001c:
	{
		CHECK_PAUSE_POINT;
		int32_t L_10 = ___2_i;
		V_2 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		int32_t L_11 = V_2;
		int32_t L_12 = ___3_n;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_13 = ___5_comparer;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___0_keys;
		int32_t L_15 = ___4_lo;
		int32_t L_16 = V_2;
		NullCheck(L_14);
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_15, L_16)), 1));
		uint64_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_19 = ___0_keys;
		int32_t L_20 = ___4_lo;
		int32_t L_21 = V_2;
		NullCheck(L_19);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		uint64_t L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_13);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker2< int32_t, uint64_t, uint64_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_13, L_18, L_23);
		if ((((int32_t)L_24) >= ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0048:
	{
		RuntimeObject* L_26 = ___5_comparer;
		uint64_t L_27 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_28 = ___0_keys;
		int32_t L_29 = ___4_lo;
		int32_t L_30 = V_2;
		NullCheck(L_28);
		int32_t L_31 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		uint64_t L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_26);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker2< int32_t, uint64_t, uint64_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_26, L_27, L_32);
		if ((((int32_t)L_33) >= ((int32_t)0)))
		{
			goto IL_0098;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_34 = ___0_keys;
		int32_t L_35 = ___4_lo;
		int32_t L_36 = ___2_i;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_37 = ___0_keys;
		int32_t L_38 = ___4_lo;
		int32_t L_39 = V_2;
		NullCheck(L_37);
		int32_t L_40 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_38, L_39)), 1));
		uint64_t L_41 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), (uint64_t)L_41);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_42 = ___1_values;
		int32_t L_43 = ___4_lo;
		int32_t L_44 = ___2_i;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_45 = ___1_values;
		int32_t L_46 = ___4_lo;
		int32_t L_47 = V_2;
		NullCheck(L_45);
		int32_t L_48 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_46, L_47)), 1));
		Il2CppSharedGenericObject* L_49 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_43, L_44)), 1))), (Il2CppSharedGenericObject*)L_49);
		int32_t L_50 = V_2;
		___2_i = L_50;
	}

IL_0092:
	{
		int32_t L_51 = ___2_i;
		int32_t L_52 = ___3_n;
		if ((((int32_t)L_51) <= ((int32_t)((int32_t)(L_52/2)))))
		{
			goto IL_001c;
		}
	}

IL_0098:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_53 = ___0_keys;
		int32_t L_54 = ___4_lo;
		int32_t L_55 = ___2_i;
		uint64_t L_56 = V_0;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_54, L_55)), 1))), (uint64_t)L_56);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_57 = ___1_values;
		int32_t L_58 = ___4_lo;
		int32_t L_59 = ___2_i;
		Il2CppSharedGenericObject* L_60 = V_1;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_58, L_59)), 1))), (Il2CppSharedGenericObject*)L_60);
		return;
	}
}
// Method Definition Index: 12284
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_InsertionSort_mCB672D5F75C3401C489DC521F8B3791A6581F156_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_keys, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	Il2CppSharedGenericObject* V_3 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_lo;
		V_0 = L_0;
		goto IL_006e;
	}

IL_0004:
	{
		CHECK_PAUSE_POINT;
		int32_t L_1 = V_0;
		V_1 = L_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___0_keys;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		uint64_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = ___1_values;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		Il2CppSharedGenericObject* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		goto IL_0040;
	}

IL_001c:
	{
		CHECK_PAUSE_POINT;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = ___0_keys;
		int32_t L_11 = V_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___0_keys;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint64_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, 1))), (uint64_t)L_15);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_16 = ___1_values;
		int32_t L_17 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_18 = ___1_values;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Il2CppSharedGenericObject* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_17, 1))), (Il2CppSharedGenericObject*)L_21);
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
	}

IL_0040:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = ___2_lo;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0056;
		}
	}
	{
		RuntimeObject* L_25 = ___4_comparer;
		uint64_t L_26 = V_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_27 = ___0_keys;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		uint64_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_25);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker2< int32_t, uint64_t, uint64_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_25, L_26, L_30);
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_001c;
		}
	}

IL_0056:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = ___0_keys;
		int32_t L_33 = V_1;
		uint64_t L_34 = V_2;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_33, 1))), (uint64_t)L_34);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_35 = ___1_values;
		int32_t L_36 = V_1;
		Il2CppSharedGenericObject* L_37 = V_3;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 1))), (Il2CppSharedGenericObject*)L_37);
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_006e:
	{
		int32_t L_39 = V_0;
		int32_t L_40 = ___3_hi;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 12285
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySortHelper_2_tE4E677AAEE3AEDD26440F8404627379269E5E692* ArraySortHelper_2_get_Default_mE0F0527DDA7A6AEEFF521D82BAF23AD60AD8EF7F_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_tE4E677AAEE3AEDD26440F8404627379269E5E692* L_0 = ((ArraySortHelper_2_tE4E677AAEE3AEDD26440F8404627379269E5E692_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 12286
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2__ctor_mE2C046899BED288FEAF20A1041FA9C2619C74C3D_gshared (ArraySortHelper_2_tE4E677AAEE3AEDD26440F8404627379269E5E692* __this, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// Method Definition Index: 12287
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2__cctor_m483A447F86768BD92F1414FE4009E9FD36F28C30_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ArraySortHelper_2_tE4E677AAEE3AEDD26440F8404627379269E5E692* L_0 = (ArraySortHelper_2_tE4E677AAEE3AEDD26440F8404627379269E5E692*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		ArraySortHelper_2__ctor_mE2C046899BED288FEAF20A1041FA9C2619C74C3D(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		((ArraySortHelper_2_tE4E677AAEE3AEDD26440F8404627379269E5E692_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___s_defaultArraySortHelper = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ArraySortHelper_2_tE4E677AAEE3AEDD26440F8404627379269E5E692_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___s_defaultArraySortHelper), (void*)L_0);
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
// Method Definition Index: 12276
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_Sort_m7CA50F0D894D1D6E1D3423BCA87EC16C488CF08F_gshared (ArraySortHelper_2_t426C164FEAE6FB793F95132D9B3B9D7C00526F6F* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_index, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Exception_t* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			RuntimeObject* L_0 = ___4_comparer;
			if (!L_0)
			{
				goto IL_000d_1;
			}
		}
		{
			RuntimeObject* L_1 = ___4_comparer;
			Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* L_2;
			L_2 = Comparer_1_get_Default_m9D7E1E21FFEE2C32B345D0E5C835BA713DA80B2C(il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			if ((!(((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024*)L_2))))
			{
				goto IL_0014_1;
			}
		}

IL_000d_1:
		{
			Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* L_3;
			L_3 = Comparer_1_get_Default_m9D7E1E21FFEE2C32B345D0E5C835BA713DA80B2C(il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			___4_comparer = (RuntimeObject*)L_3;
		}

IL_0014_1:
		{
			__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = ___0_keys;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___1_values;
			int32_t L_6 = ___2_index;
			int32_t L_7 = ___3_length;
			RuntimeObject* L_8 = ___4_comparer;
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
			ArraySortHelper_2_IntrospectiveSort_m9E7EB330972747BD8E7B6E9970D6E487ABABB500(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			goto IL_003c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0022;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002c;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002f;
		}
		throw e;
	}

CATCH_0022:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = ((IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)IL2CPP_GET_ACTIVE_EXCEPTION(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*));;
		RuntimeObject* L_10 = ___4_comparer;
		IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m119232371BEE9732FE70D22EE93B3818E577EFAF((RuntimeObject*)L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003c;
	}

CATCH_002c:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4* L_11 = ((ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*)IL2CPP_GET_ACTIVE_EXCEPTION(ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*));;
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
	}

CATCH_002f:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		Exception_t* L_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_0 = L_12;
		Exception_t* L_13 = V_0;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EDB6C049ED9617FA335A262A29BF30B15221AEA)), L_13, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_003c:
	{
		return;
	}
}
// Method Definition Index: 12277
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_SwapIfGreaterWithItems_m6CFAE71AC004D1CB6B900AC819480AF4FBEDD42B_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, RuntimeObject* ___2_comparer, int32_t ___3_a, int32_t ___4_b, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___3_a;
		int32_t L_1 = ___4_b;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_comparer;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = ___0_keys;
		int32_t L_4 = ___3_a;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Il2CppSharedGenericObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = ___0_keys;
		int32_t L_8 = ___4_b;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Il2CppSharedGenericObject* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_2);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2< int32_t, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_2, L_6, L_10);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = ___0_keys;
		int32_t L_13 = ___3_a;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Il2CppSharedGenericObject* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = L_15;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_16 = ___0_keys;
		int32_t L_17 = ___3_a;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_18 = ___0_keys;
		int32_t L_19 = ___4_b;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Il2CppSharedGenericObject* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Il2CppSharedGenericObject*)L_21);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_22 = ___0_keys;
		int32_t L_23 = ___4_b;
		Il2CppSharedGenericObject* L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Il2CppSharedGenericObject*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = ___1_values;
		int32_t L_26 = ___3_a;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_1 = L_28;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = ___1_values;
		int32_t L_30 = ___3_a;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = ___1_values;
		int32_t L_32 = ___4_b;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (int32_t)L_34);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = ___1_values;
		int32_t L_36 = ___4_b;
		int32_t L_37 = V_1;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)L_37);
	}

IL_005d:
	{
		return;
	}
}
// Method Definition Index: 12278
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_Swap_m85472190C8B8145BF45B6C918DDBFC6B7A5ACE31_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_i, int32_t ___3_j, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_i;
		int32_t L_1 = ___3_j;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0040;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_2 = ___0_keys;
		int32_t L_3 = ___2_i;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Il2CppSharedGenericObject* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = ___0_keys;
		int32_t L_7 = ___2_i;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_8 = ___0_keys;
		int32_t L_9 = ___3_j;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Il2CppSharedGenericObject* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Il2CppSharedGenericObject*)L_11);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = ___0_keys;
		int32_t L_13 = ___3_j;
		Il2CppSharedGenericObject* L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Il2CppSharedGenericObject*)L_14);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = ___1_values;
		int32_t L_16 = ___2_i;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_1 = L_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ___1_values;
		int32_t L_20 = ___2_i;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = ___1_values;
		int32_t L_22 = ___3_j;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (int32_t)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = ___1_values;
		int32_t L_26 = ___3_j;
		int32_t L_27 = V_1;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (int32_t)L_27);
	}

IL_0040:
	{
		return;
	}
}
// Method Definition Index: 12279
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_IntrospectiveSort_m9E7EB330972747BD8E7B6E9970D6E487ABABB500_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_left, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___3_length;
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___1_values;
		int32_t L_3 = ___2_left;
		int32_t L_4 = ___3_length;
		int32_t L_5 = ___2_left;
		int32_t L_6 = ___3_length;
		int32_t L_7;
		L_7 = IntrospectiveSortUtilities_FloorLog2PlusOne_m33AC60574EC2B80A3B7084361A3736D4CFE91F6D(L_6, NULL);
		RuntimeObject* L_8 = ___4_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_IntroSort_mD1680D7BF4A65DD4C5ED7C94432784882436F785(L_1, L_2, L_3, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_4, L_5)), 1)), ((int32_t)il2cpp_codegen_multiply(2, L_7)), L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return;
	}
}
// Method Definition Index: 12280
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_IntroSort_mD1680D7BF4A65DD4C5ED7C94432784882436F785_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, int32_t ___4_depthLimit, RuntimeObject* ___5_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		goto IL_0091;
	}

IL_0005:
	{
		CHECK_PAUSE_POINT;
		int32_t L_0 = ___3_hi;
		int32_t L_1 = ___2_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0025;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___1_values;
		RuntimeObject* L_7 = ___5_comparer;
		int32_t L_8 = ___2_lo;
		int32_t L_9 = ___3_hi;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_SwapIfGreaterWithItems_m6CFAE71AC004D1CB6B900AC819480AF4FBEDD42B(L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return;
	}

IL_0025:
	{
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_004f;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___1_values;
		RuntimeObject* L_13 = ___5_comparer;
		int32_t L_14 = ___2_lo;
		int32_t L_15 = ___3_hi;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_SwapIfGreaterWithItems_m6CFAE71AC004D1CB6B900AC819480AF4FBEDD42B(L_11, L_12, L_13, L_14, ((int32_t)il2cpp_codegen_subtract(L_15, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_16 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___1_values;
		RuntimeObject* L_18 = ___5_comparer;
		int32_t L_19 = ___2_lo;
		int32_t L_20 = ___3_hi;
		ArraySortHelper_2_SwapIfGreaterWithItems_m6CFAE71AC004D1CB6B900AC819480AF4FBEDD42B(L_16, L_17, L_18, L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_21 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = ___1_values;
		RuntimeObject* L_23 = ___5_comparer;
		int32_t L_24 = ___3_hi;
		int32_t L_25 = ___3_hi;
		ArraySortHelper_2_SwapIfGreaterWithItems_m6CFAE71AC004D1CB6B900AC819480AF4FBEDD42B(L_21, L_22, L_23, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), L_25, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return;
	}

IL_004f:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_26 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = ___1_values;
		int32_t L_28 = ___2_lo;
		int32_t L_29 = ___3_hi;
		RuntimeObject* L_30 = ___5_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_InsertionSort_mEBBF5396F4DAC8F56276C67482061E0A925B4508(L_26, L_27, L_28, L_29, L_30, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_005b:
	{
		int32_t L_31 = ___4_depthLimit;
		if (L_31)
		{
			goto IL_006b;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_32 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = ___1_values;
		int32_t L_34 = ___2_lo;
		int32_t L_35 = ___3_hi;
		RuntimeObject* L_36 = ___5_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_Heapsort_m7CC28E5E1744A030B1A1BFAF54CB5A604C669C67(L_32, L_33, L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return;
	}

IL_006b:
	{
		int32_t L_37 = ___4_depthLimit;
		___4_depthLimit = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_38 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = ___1_values;
		int32_t L_40 = ___2_lo;
		int32_t L_41 = ___3_hi;
		RuntimeObject* L_42 = ___5_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_43;
		L_43 = ArraySortHelper_2_PickPivotAndPartition_mB86F8CF4E83122E6A13CACB968BD0F3046401851(L_38, L_39, L_40, L_41, L_42, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		V_1 = L_43;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_44 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = ___1_values;
		int32_t L_46 = V_1;
		int32_t L_47 = ___3_hi;
		int32_t L_48 = ___4_depthLimit;
		RuntimeObject* L_49 = ___5_comparer;
		ArraySortHelper_2_IntroSort_mD1680D7BF4A65DD4C5ED7C94432784882436F785(L_44, L_45, ((int32_t)il2cpp_codegen_add(L_46, 1)), L_47, L_48, L_49, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		int32_t L_50 = V_1;
		___3_hi = ((int32_t)il2cpp_codegen_subtract(L_50, 1));
	}

IL_0091:
	{
		int32_t L_51 = ___3_hi;
		int32_t L_52 = ___2_lo;
		if ((((int32_t)L_51) > ((int32_t)L_52)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 12281
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_2_PickPivotAndPartition_mB86F8CF4E83122E6A13CACB968BD0F3046401851_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_lo;
		int32_t L_1 = ___3_hi;
		int32_t L_2 = ___2_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___1_values;
		RuntimeObject* L_5 = ___4_comparer;
		int32_t L_6 = ___2_lo;
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_SwapIfGreaterWithItems_m6CFAE71AC004D1CB6B900AC819480AF4FBEDD42B(L_3, L_4, L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_8 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___1_values;
		RuntimeObject* L_10 = ___4_comparer;
		int32_t L_11 = ___2_lo;
		int32_t L_12 = ___3_hi;
		ArraySortHelper_2_SwapIfGreaterWithItems_m6CFAE71AC004D1CB6B900AC819480AF4FBEDD42B(L_8, L_9, L_10, L_11, L_12, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_13 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ___1_values;
		RuntimeObject* L_15 = ___4_comparer;
		int32_t L_16 = V_0;
		int32_t L_17 = ___3_hi;
		ArraySortHelper_2_SwapIfGreaterWithItems_m6CFAE71AC004D1CB6B900AC819480AF4FBEDD42B(L_13, L_14, L_15, L_16, L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_18 = ___0_keys;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Il2CppSharedGenericObject* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_1 = L_21;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_22 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ___1_values;
		int32_t L_24 = V_0;
		int32_t L_25 = ___3_hi;
		ArraySortHelper_2_Swap_m85472190C8B8145BF45B6C918DDBFC6B7A5ACE31(L_22, L_23, L_24, ((int32_t)il2cpp_codegen_subtract(L_25, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		int32_t L_26 = ___2_lo;
		V_2 = L_26;
		int32_t L_27 = ___3_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		goto IL_007d;
	}

IL_0044:
	{
		CHECK_PAUSE_POINT;
		RuntimeObject* L_28 = ___4_comparer;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_29 = ___0_keys;
		int32_t L_30 = V_2;
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		V_2 = L_31;
		NullCheck(L_29);
		int32_t L_32 = L_31;
		Il2CppSharedGenericObject* L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		Il2CppSharedGenericObject* L_34 = V_1;
		NullCheck(L_28);
		int32_t L_35;
		L_35 = InterfaceFuncInvoker2< int32_t, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_28, L_33, L_34);
		if ((((int32_t)L_35) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}

IL_005a:
	{
		CHECK_PAUSE_POINT;
		RuntimeObject* L_36 = ___4_comparer;
		Il2CppSharedGenericObject* L_37 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_38 = ___0_keys;
		int32_t L_39 = V_3;
		int32_t L_40 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
		V_3 = L_40;
		NullCheck(L_38);
		int32_t L_41 = L_40;
		Il2CppSharedGenericObject* L_42 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_36);
		int32_t L_43;
		L_43 = InterfaceFuncInvoker2< int32_t, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_36, L_37, L_42);
		if ((((int32_t)L_43) < ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_44 = V_2;
		int32_t L_45 = V_3;
		if ((((int32_t)L_44) >= ((int32_t)L_45)))
		{
			goto IL_0081;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_46 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = ___1_values;
		int32_t L_48 = V_2;
		int32_t L_49 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_Swap_m85472190C8B8145BF45B6C918DDBFC6B7A5ACE31(L_46, L_47, L_48, L_49, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
	}

IL_007d:
	{
		int32_t L_50 = V_2;
		int32_t L_51 = V_3;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_0044;
		}
	}

IL_0081:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_52 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = ___1_values;
		int32_t L_54 = V_2;
		int32_t L_55 = ___3_hi;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_Swap_m85472190C8B8145BF45B6C918DDBFC6B7A5ACE31(L_52, L_53, L_54, ((int32_t)il2cpp_codegen_subtract(L_55, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		int32_t L_56 = V_2;
		return L_56;
	}
}
// Method Definition Index: 12282
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_Heapsort_m7CC28E5E1744A030B1A1BFAF54CB5A604C669C67_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___3_hi;
		int32_t L_1 = ___2_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		goto IL_001c;
	}

IL_000c:
	{
		CHECK_PAUSE_POINT;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___1_values;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		int32_t L_7 = ___2_lo;
		RuntimeObject* L_8 = ___4_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_DownHeap_m695FE5B74D11DDAF60F4F4FCA8A6A0084C6086A4(L_3, L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}

IL_001c:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_11 = V_0;
		V_2 = L_11;
		goto IL_0043;
	}

IL_0024:
	{
		CHECK_PAUSE_POINT;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = ___1_values;
		int32_t L_14 = ___2_lo;
		int32_t L_15 = ___2_lo;
		int32_t L_16 = V_2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_Swap_m85472190C8B8145BF45B6C918DDBFC6B7A5ACE31(L_12, L_13, L_14, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_15, L_16)), 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_17 = ___0_keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ___1_values;
		int32_t L_19 = V_2;
		int32_t L_20 = ___2_lo;
		RuntimeObject* L_21 = ___4_comparer;
		ArraySortHelper_2_DownHeap_m695FE5B74D11DDAF60F4F4FCA8A6A0084C6086A4(L_17, L_18, 1, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), L_20, L_21, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
	}

IL_0043:
	{
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) > ((int32_t)1)))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 12283
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_DownHeap_m695FE5B74D11DDAF60F4F4FCA8A6A0084C6086A4_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_i, int32_t ___3_n, int32_t ___4_lo, RuntimeObject* ___5_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ___0_keys;
		int32_t L_1 = ___4_lo;
		int32_t L_2 = ___2_i;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1));
		Il2CppSharedGenericObject* L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___1_values;
		int32_t L_6 = ___4_lo;
		int32_t L_7 = ___2_i;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_6, L_7)), 1));
		int32_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		goto IL_0092;
	}

IL_001c:
	{
		CHECK_PAUSE_POINT;
		int32_t L_10 = ___2_i;
		V_2 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		int32_t L_11 = V_2;
		int32_t L_12 = ___3_n;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_13 = ___5_comparer;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_14 = ___0_keys;
		int32_t L_15 = ___4_lo;
		int32_t L_16 = V_2;
		NullCheck(L_14);
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_15, L_16)), 1));
		Il2CppSharedGenericObject* L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_19 = ___0_keys;
		int32_t L_20 = ___4_lo;
		int32_t L_21 = V_2;
		NullCheck(L_19);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		Il2CppSharedGenericObject* L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_13);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker2< int32_t, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_13, L_18, L_23);
		if ((((int32_t)L_24) >= ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0048:
	{
		RuntimeObject* L_26 = ___5_comparer;
		Il2CppSharedGenericObject* L_27 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_28 = ___0_keys;
		int32_t L_29 = ___4_lo;
		int32_t L_30 = V_2;
		NullCheck(L_28);
		int32_t L_31 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		Il2CppSharedGenericObject* L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_26);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker2< int32_t, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_26, L_27, L_32);
		if ((((int32_t)L_33) >= ((int32_t)0)))
		{
			goto IL_0098;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_34 = ___0_keys;
		int32_t L_35 = ___4_lo;
		int32_t L_36 = ___2_i;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_37 = ___0_keys;
		int32_t L_38 = ___4_lo;
		int32_t L_39 = V_2;
		NullCheck(L_37);
		int32_t L_40 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_38, L_39)), 1));
		Il2CppSharedGenericObject* L_41 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), (Il2CppSharedGenericObject*)L_41);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = ___1_values;
		int32_t L_43 = ___4_lo;
		int32_t L_44 = ___2_i;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = ___1_values;
		int32_t L_46 = ___4_lo;
		int32_t L_47 = V_2;
		NullCheck(L_45);
		int32_t L_48 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_46, L_47)), 1));
		int32_t L_49 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_43, L_44)), 1))), (int32_t)L_49);
		int32_t L_50 = V_2;
		___2_i = L_50;
	}

IL_0092:
	{
		int32_t L_51 = ___2_i;
		int32_t L_52 = ___3_n;
		if ((((int32_t)L_51) <= ((int32_t)((int32_t)(L_52/2)))))
		{
			goto IL_001c;
		}
	}

IL_0098:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_53 = ___0_keys;
		int32_t L_54 = ___4_lo;
		int32_t L_55 = ___2_i;
		Il2CppSharedGenericObject* L_56 = V_0;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_54, L_55)), 1))), (Il2CppSharedGenericObject*)L_56);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = ___1_values;
		int32_t L_58 = ___4_lo;
		int32_t L_59 = ___2_i;
		int32_t L_60 = V_1;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_58, L_59)), 1))), (int32_t)L_60);
		return;
	}
}
// Method Definition Index: 12284
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_InsertionSort_mEBBF5396F4DAC8F56276C67482061E0A925B4508_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject* V_2 = NULL;
	int32_t V_3 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_lo;
		V_0 = L_0;
		goto IL_006e;
	}

IL_0004:
	{
		CHECK_PAUSE_POINT;
		int32_t L_1 = V_0;
		V_1 = L_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_2 = ___0_keys;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		Il2CppSharedGenericObject* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___1_values;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		goto IL_0040;
	}

IL_001c:
	{
		CHECK_PAUSE_POINT;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_10 = ___0_keys;
		int32_t L_11 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = ___0_keys;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Il2CppSharedGenericObject* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, 1))), (Il2CppSharedGenericObject*)L_15);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ___1_values;
		int32_t L_17 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ___1_values;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_17, 1))), (int32_t)L_21);
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
	}

IL_0040:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = ___2_lo;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0056;
		}
	}
	{
		RuntimeObject* L_25 = ___4_comparer;
		Il2CppSharedGenericObject* L_26 = V_2;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_27 = ___0_keys;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Il2CppSharedGenericObject* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_25);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker2< int32_t, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_25, L_26, L_30);
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_001c;
		}
	}

IL_0056:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_32 = ___0_keys;
		int32_t L_33 = V_1;
		Il2CppSharedGenericObject* L_34 = V_2;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_33, 1))), (Il2CppSharedGenericObject*)L_34);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = ___1_values;
		int32_t L_36 = V_1;
		int32_t L_37 = V_3;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 1))), (int32_t)L_37);
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_006e:
	{
		int32_t L_39 = V_0;
		int32_t L_40 = ___3_hi;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 12285
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySortHelper_2_t426C164FEAE6FB793F95132D9B3B9D7C00526F6F* ArraySortHelper_2_get_Default_m2B5B90B859EEA1C9C358D1B98D76D1F4B4C77FE1_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_t426C164FEAE6FB793F95132D9B3B9D7C00526F6F* L_0 = ((ArraySortHelper_2_t426C164FEAE6FB793F95132D9B3B9D7C00526F6F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 12286
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2__ctor_m0B784F3FFEF6A37687B6D8EDDCA36E855766A00E_gshared (ArraySortHelper_2_t426C164FEAE6FB793F95132D9B3B9D7C00526F6F* __this, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// Method Definition Index: 12287
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2__cctor_mA41344790F87BB3163B2059EDCD74392132021BB_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ArraySortHelper_2_t426C164FEAE6FB793F95132D9B3B9D7C00526F6F* L_0 = (ArraySortHelper_2_t426C164FEAE6FB793F95132D9B3B9D7C00526F6F*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		ArraySortHelper_2__ctor_m0B784F3FFEF6A37687B6D8EDDCA36E855766A00E(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		((ArraySortHelper_2_t426C164FEAE6FB793F95132D9B3B9D7C00526F6F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___s_defaultArraySortHelper = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ArraySortHelper_2_t426C164FEAE6FB793F95132D9B3B9D7C00526F6F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___s_defaultArraySortHelper), (void*)L_0);
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
// Method Definition Index: 12276
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_Sort_m67A1C1526BE40E2C011C26532C1F58AFBB9BA21E_gshared (ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, int32_t ___2_index, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Exception_t* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			RuntimeObject* L_0 = ___4_comparer;
			if (!L_0)
			{
				goto IL_000d_1;
			}
		}
		{
			RuntimeObject* L_1 = ___4_comparer;
			Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_2;
			L_2 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			if ((!(((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*)L_2))))
			{
				goto IL_0014_1;
			}
		}

IL_000d_1:
		{
			Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_3;
			L_3 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			___4_comparer = (RuntimeObject*)L_3;
		}

IL_0014_1:
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_keys;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___1_values;
			int32_t L_6 = ___2_index;
			int32_t L_7 = ___3_length;
			RuntimeObject* L_8 = ___4_comparer;
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
			((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			goto IL_003c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0022;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002c;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002f;
		}
		throw e;
	}

CATCH_0022:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = ((IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)IL2CPP_GET_ACTIVE_EXCEPTION(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*));;
		RuntimeObject* L_10 = ___4_comparer;
		IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m119232371BEE9732FE70D22EE93B3818E577EFAF((RuntimeObject*)L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003c;
	}

CATCH_002c:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4* L_11 = ((ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*)IL2CPP_GET_ACTIVE_EXCEPTION(ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*));;
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
	}

CATCH_002f:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		Exception_t* L_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_0 = L_12;
		Exception_t* L_13 = V_0;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EDB6C049ED9617FA335A262A29BF30B15221AEA)), L_13, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_003c:
	{
		return;
	}
}
// Method Definition Index: 12277
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_SwapIfGreaterWithItems_m6E490EB198D788BBE9D34D8F5A04B80D54576C11_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, RuntimeObject* ___2_comparer, int32_t ___3_a, int32_t ___4_b, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	const uint32_t SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_15 = L_6;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_21 = L_10;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	const Il2CppFullySharedGenericAny L_34 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	const Il2CppFullySharedGenericAny L_37 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	memset(V_0, 0, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	memset(V_1, 0, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___3_a;
		int32_t L_1 = ___4_b;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_comparer;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_keys;
		int32_t L_4 = ___3_a;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = ___0_keys;
		int32_t L_8 = ___4_b;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		il2cpp_codegen_memcpy(L_10, (L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_2);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_keys;
		int32_t L_13 = ___3_a;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		il2cpp_codegen_memcpy(L_15, (L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		il2cpp_codegen_memcpy(V_0, L_15, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = ___0_keys;
		int32_t L_17 = ___3_a;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = ___0_keys;
		int32_t L_19 = ___4_b;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_16);
		il2cpp_codegen_memcpy((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)), L_21, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), (void**)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)), (void*)L_21);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = ___0_keys;
		int32_t L_23 = ___4_b;
		il2cpp_codegen_memcpy(L_24, V_0, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_22);
		il2cpp_codegen_memcpy((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)), L_24, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), (void**)(L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)), (void*)L_24);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = ___1_values;
		int32_t L_26 = ___3_a;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		il2cpp_codegen_memcpy(L_28, (L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		il2cpp_codegen_memcpy(V_1, L_28, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_29 = ___1_values;
		int32_t L_30 = ___3_a;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_31 = ___1_values;
		int32_t L_32 = ___4_b;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		il2cpp_codegen_memcpy(L_34, (L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)), SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		NullCheck(L_29);
		il2cpp_codegen_memcpy((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)), L_34, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10), (void**)(L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)), (void*)L_34);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_35 = ___1_values;
		int32_t L_36 = ___4_b;
		il2cpp_codegen_memcpy(L_37, V_1, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		NullCheck(L_35);
		il2cpp_codegen_memcpy((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)), L_37, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10), (void**)(L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)), (void*)L_37);
	}

IL_005d:
	{
		return;
	}
}
// Method Definition Index: 12278
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_Swap_m4E3BBA0495CB70B5AF4B4BAAF357D17A7A64067D_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, int32_t ___2_i, int32_t ___3_j, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	const uint32_t SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	memset(V_0, 0, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	memset(V_1, 0, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_i;
		int32_t L_1 = ___3_j;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0040;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_keys;
		int32_t L_3 = ___2_i;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		il2cpp_codegen_memcpy(L_5, (L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___0_keys;
		int32_t L_7 = ___2_i;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_keys;
		int32_t L_9 = ___3_j;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_11, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_11);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_keys;
		int32_t L_13 = ___3_j;
		il2cpp_codegen_memcpy(L_14, V_0, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_12);
		il2cpp_codegen_memcpy((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_14, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), (void**)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_14);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = ___1_values;
		int32_t L_16 = ___2_i;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		il2cpp_codegen_memcpy(L_18, (L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)), SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		il2cpp_codegen_memcpy(V_1, L_18, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = ___1_values;
		int32_t L_20 = ___2_i;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = ___1_values;
		int32_t L_22 = ___3_j;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		il2cpp_codegen_memcpy(L_24, (L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)), SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		NullCheck(L_19);
		il2cpp_codegen_memcpy((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), L_24, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10), (void**)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), (void*)L_24);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = ___1_values;
		int32_t L_26 = ___3_j;
		il2cpp_codegen_memcpy(L_27, V_1, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		NullCheck(L_25);
		il2cpp_codegen_memcpy((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)), L_27, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10), (void**)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)), (void*)L_27);
	}

IL_0040:
	{
		return;
	}
}
// Method Definition Index: 12279
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_IntrospectiveSort_mA6767EC9E69F44DE6ED028968D465B531788B972_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, int32_t ___2_left, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___3_length;
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___1_values;
		int32_t L_3 = ___2_left;
		int32_t L_4 = ___3_length;
		int32_t L_5 = ___2_left;
		int32_t L_6 = ___3_length;
		int32_t L_7;
		L_7 = IntrospectiveSortUtilities_FloorLog2PlusOne_m33AC60574EC2B80A3B7084361A3736D4CFE91F6D(L_6, NULL);
		RuntimeObject* L_8 = ___4_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))(L_1, L_2, L_3, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_4, L_5)), 1)), ((int32_t)il2cpp_codegen_multiply(2, L_7)), L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return;
	}
}
// Method Definition Index: 12280
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_IntroSort_mB8906A91956799131098C0F7B692B9336D1B3515_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, int32_t ___2_lo, int32_t ___3_hi, int32_t ___4_depthLimit, RuntimeObject* ___5_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		goto IL_0091;
	}

IL_0005:
	{
		CHECK_PAUSE_POINT;
		int32_t L_0 = ___3_hi;
		int32_t L_1 = ___2_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0025;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___1_values;
		RuntimeObject* L_7 = ___5_comparer;
		int32_t L_8 = ___2_lo;
		int32_t L_9 = ___3_hi;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))(L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return;
	}

IL_0025:
	{
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_004f;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___1_values;
		RuntimeObject* L_13 = ___5_comparer;
		int32_t L_14 = ___2_lo;
		int32_t L_15 = ___3_hi;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))(L_11, L_12, L_13, L_14, ((int32_t)il2cpp_codegen_subtract(L_15, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___1_values;
		RuntimeObject* L_18 = ___5_comparer;
		int32_t L_19 = ___2_lo;
		int32_t L_20 = ___3_hi;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))(L_16, L_17, L_18, L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = ___1_values;
		RuntimeObject* L_23 = ___5_comparer;
		int32_t L_24 = ___3_hi;
		int32_t L_25 = ___3_hi;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))(L_21, L_22, L_23, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), L_25, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return;
	}

IL_004f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_27 = ___1_values;
		int32_t L_28 = ___2_lo;
		int32_t L_29 = ___3_hi;
		RuntimeObject* L_30 = ___5_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)))(L_26, L_27, L_28, L_29, L_30, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_005b:
	{
		int32_t L_31 = ___4_depthLimit;
		if (L_31)
		{
			goto IL_006b;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_32 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_33 = ___1_values;
		int32_t L_34 = ___2_lo;
		int32_t L_35 = ___3_hi;
		RuntimeObject* L_36 = ___5_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)))(L_32, L_33, L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return;
	}

IL_006b:
	{
		int32_t L_37 = ___4_depthLimit;
		___4_depthLimit = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_38 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_39 = ___1_values;
		int32_t L_40 = ___2_lo;
		int32_t L_41 = ___3_hi;
		RuntimeObject* L_42 = ___5_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_43;
		L_43 = ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17)))(L_38, L_39, L_40, L_41, L_42, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		V_1 = L_43;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_44 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_45 = ___1_values;
		int32_t L_46 = V_1;
		int32_t L_47 = ___3_hi;
		int32_t L_48 = ___4_depthLimit;
		RuntimeObject* L_49 = ___5_comparer;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))(L_44, L_45, ((int32_t)il2cpp_codegen_add(L_46, 1)), L_47, L_48, L_49, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		int32_t L_50 = V_1;
		___3_hi = ((int32_t)il2cpp_codegen_subtract(L_50, 1));
	}

IL_0091:
	{
		int32_t L_51 = ___3_hi;
		int32_t L_52 = ___2_lo;
		if ((((int32_t)L_51) > ((int32_t)L_52)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 12281
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_2_PickPivotAndPartition_m56C491134822A7E87FDA9773609009929458DDC0_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_33 = L_21;
	const Il2CppFullySharedGenericAny L_37 = L_21;
	const Il2CppFullySharedGenericAny L_34 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_42 = L_34;
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	memset(V_1, 0, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_lo;
		int32_t L_1 = ___3_hi;
		int32_t L_2 = ___2_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___1_values;
		RuntimeObject* L_5 = ___4_comparer;
		int32_t L_6 = ___2_lo;
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))(L_3, L_4, L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = ___1_values;
		RuntimeObject* L_10 = ___4_comparer;
		int32_t L_11 = ___2_lo;
		int32_t L_12 = ___3_hi;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))(L_8, L_9, L_10, L_11, L_12, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = ___1_values;
		RuntimeObject* L_15 = ___4_comparer;
		int32_t L_16 = V_0;
		int32_t L_17 = ___3_hi;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))(L_13, L_14, L_15, L_16, L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = ___0_keys;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		il2cpp_codegen_memcpy(V_1, L_21, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = ___1_values;
		int32_t L_24 = V_0;
		int32_t L_25 = ___3_hi;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)))(L_22, L_23, L_24, ((int32_t)il2cpp_codegen_subtract(L_25, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		int32_t L_26 = ___2_lo;
		V_2 = L_26;
		int32_t L_27 = ___3_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		goto IL_007d;
	}

IL_0044:
	{
		CHECK_PAUSE_POINT;
		RuntimeObject* L_28 = ___4_comparer;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_29 = ___0_keys;
		int32_t L_30 = V_2;
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		V_2 = L_31;
		NullCheck(L_29);
		int32_t L_32 = L_31;
		il2cpp_codegen_memcpy(L_33, (L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		il2cpp_codegen_memcpy(L_34, V_1, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_28);
		int32_t L_35;
		L_35 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)) ? L_33: *(void**)L_33), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)) ? L_34: *(void**)L_34));
		if ((((int32_t)L_35) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}

IL_005a:
	{
		CHECK_PAUSE_POINT;
		RuntimeObject* L_36 = ___4_comparer;
		il2cpp_codegen_memcpy(L_37, V_1, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_38 = ___0_keys;
		int32_t L_39 = V_3;
		int32_t L_40 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
		V_3 = L_40;
		NullCheck(L_38);
		int32_t L_41 = L_40;
		il2cpp_codegen_memcpy(L_42, (L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_36);
		int32_t L_43;
		L_43 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)) ? L_37: *(void**)L_37), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)) ? L_42: *(void**)L_42));
		if ((((int32_t)L_43) < ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_44 = V_2;
		int32_t L_45 = V_3;
		if ((((int32_t)L_44) >= ((int32_t)L_45)))
		{
			goto IL_0081;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_46 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_47 = ___1_values;
		int32_t L_48 = V_2;
		int32_t L_49 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)))(L_46, L_47, L_48, L_49, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
	}

IL_007d:
	{
		int32_t L_50 = V_2;
		int32_t L_51 = V_3;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_0044;
		}
	}

IL_0081:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_52 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_53 = ___1_values;
		int32_t L_54 = V_2;
		int32_t L_55 = ___3_hi;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)))(L_52, L_53, L_54, ((int32_t)il2cpp_codegen_subtract(L_55, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		int32_t L_56 = V_2;
		return L_56;
	}
}
// Method Definition Index: 12282
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_Heapsort_mC5BEB206939A3EB5A724AD47D76036CE5069CD54_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___3_hi;
		int32_t L_1 = ___2_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		goto IL_001c;
	}

IL_000c:
	{
		CHECK_PAUSE_POINT;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___1_values;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		int32_t L_7 = ___2_lo;
		RuntimeObject* L_8 = ___4_comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19)))(L_3, L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}

IL_001c:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_11 = V_0;
		V_2 = L_11;
		goto IL_0043;
	}

IL_0024:
	{
		CHECK_PAUSE_POINT;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___1_values;
		int32_t L_14 = ___2_lo;
		int32_t L_15 = ___2_lo;
		int32_t L_16 = V_2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)))(L_12, L_13, L_14, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_15, L_16)), 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = ___1_values;
		int32_t L_19 = V_2;
		int32_t L_20 = ___2_lo;
		RuntimeObject* L_21 = ___4_comparer;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19)))(L_17, L_18, 1, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), L_20, L_21, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
	}

IL_0043:
	{
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) > ((int32_t)1)))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 12283
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_DownHeap_mDD8424C5C919BB8600D0753F66388896A76B9381_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, int32_t ___2_i, int32_t ___3_n, int32_t ___4_lo, RuntimeObject* ___5_comparer, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	const uint32_t SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_18 = L_4;
	const Il2CppFullySharedGenericAny L_27 = L_4;
	const Il2CppFullySharedGenericAny L_41 = L_4;
	const Il2CppFullySharedGenericAny L_56 = L_4;
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_32 = L_23;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	const Il2CppFullySharedGenericAny L_49 = L_9;
	const Il2CppFullySharedGenericAny L_60 = L_9;
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	memset(V_0, 0, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	memset(V_1, 0, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_keys;
		int32_t L_1 = ___4_lo;
		int32_t L_2 = ___2_i;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1));
		il2cpp_codegen_memcpy(L_4, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___1_values;
		int32_t L_6 = ___4_lo;
		int32_t L_7 = ___2_i;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_6, L_7)), 1));
		il2cpp_codegen_memcpy(L_9, (L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		il2cpp_codegen_memcpy(V_1, L_9, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		goto IL_0092;
	}

IL_001c:
	{
		CHECK_PAUSE_POINT;
		int32_t L_10 = ___2_i;
		V_2 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		int32_t L_11 = V_2;
		int32_t L_12 = ___3_n;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_13 = ___5_comparer;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = ___0_keys;
		int32_t L_15 = ___4_lo;
		int32_t L_16 = V_2;
		NullCheck(L_14);
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_15, L_16)), 1));
		il2cpp_codegen_memcpy(L_18, (L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = ___0_keys;
		int32_t L_20 = ___4_lo;
		int32_t L_21 = V_2;
		NullCheck(L_19);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		il2cpp_codegen_memcpy(L_23, (L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_13);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)) ? L_18: *(void**)L_18), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)) ? L_23: *(void**)L_23));
		if ((((int32_t)L_24) >= ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0048:
	{
		RuntimeObject* L_26 = ___5_comparer;
		il2cpp_codegen_memcpy(L_27, V_0, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_28 = ___0_keys;
		int32_t L_29 = ___4_lo;
		int32_t L_30 = V_2;
		NullCheck(L_28);
		int32_t L_31 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		il2cpp_codegen_memcpy(L_32, (L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_26);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)) ? L_27: *(void**)L_27), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)) ? L_32: *(void**)L_32));
		if ((((int32_t)L_33) >= ((int32_t)0)))
		{
			goto IL_0098;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_34 = ___0_keys;
		int32_t L_35 = ___4_lo;
		int32_t L_36 = ___2_i;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_37 = ___0_keys;
		int32_t L_38 = ___4_lo;
		int32_t L_39 = V_2;
		NullCheck(L_37);
		int32_t L_40 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_38, L_39)), 1));
		il2cpp_codegen_memcpy(L_41, (L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_34);
		il2cpp_codegen_memcpy((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1)))), L_41, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), (void**)(L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1)))), (void*)L_41);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_42 = ___1_values;
		int32_t L_43 = ___4_lo;
		int32_t L_44 = ___2_i;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_45 = ___1_values;
		int32_t L_46 = ___4_lo;
		int32_t L_47 = V_2;
		NullCheck(L_45);
		int32_t L_48 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_46, L_47)), 1));
		il2cpp_codegen_memcpy(L_49, (L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)), SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		NullCheck(L_42);
		il2cpp_codegen_memcpy((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_43, L_44)), 1)))), L_49, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10), (void**)(L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_43, L_44)), 1)))), (void*)L_49);
		int32_t L_50 = V_2;
		___2_i = L_50;
	}

IL_0092:
	{
		int32_t L_51 = ___2_i;
		int32_t L_52 = ___3_n;
		if ((((int32_t)L_51) <= ((int32_t)((int32_t)(L_52/2)))))
		{
			goto IL_001c;
		}
	}

IL_0098:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_53 = ___0_keys;
		int32_t L_54 = ___4_lo;
		int32_t L_55 = ___2_i;
		il2cpp_codegen_memcpy(L_56, V_0, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_53);
		il2cpp_codegen_memcpy((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_54, L_55)), 1)))), L_56, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), (void**)(L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_54, L_55)), 1)))), (void*)L_56);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_57 = ___1_values;
		int32_t L_58 = ___4_lo;
		int32_t L_59 = ___2_i;
		il2cpp_codegen_memcpy(L_60, V_1, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		NullCheck(L_57);
		il2cpp_codegen_memcpy((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_58, L_59)), 1)))), L_60, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10), (void**)(L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_58, L_59)), 1)))), (void*)L_60);
		return;
	}
}
// Method Definition Index: 12284
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_InsertionSort_m0ACE8418FCF4CE4DE24A47EBF8675EA70168B90F_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	const uint32_t SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_15 = L_5;
	const Il2CppFullySharedGenericAny L_26 = L_5;
	const Il2CppFullySharedGenericAny L_34 = L_5;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	const Il2CppFullySharedGenericAny L_21 = L_9;
	const Il2CppFullySharedGenericAny L_37 = L_9;
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	memset(V_2, 0, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	memset(V_3, 0, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_lo;
		V_0 = L_0;
		goto IL_006e;
	}

IL_0004:
	{
		CHECK_PAUSE_POINT;
		int32_t L_1 = V_0;
		V_1 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_keys;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		il2cpp_codegen_memcpy(L_5, (L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		il2cpp_codegen_memcpy(V_2, L_5, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___1_values;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		il2cpp_codegen_memcpy(V_3, L_9, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		goto IL_0040;
	}

IL_001c:
	{
		CHECK_PAUSE_POINT;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_keys;
		int32_t L_11 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_keys;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		il2cpp_codegen_memcpy(L_15, (L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, 1)))), L_15, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, 1)))), (void*)L_15);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = ___1_values;
		int32_t L_17 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = ___1_values;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		NullCheck(L_16);
		il2cpp_codegen_memcpy((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_17, 1)))), L_21, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10), (void**)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_17, 1)))), (void*)L_21);
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
	}

IL_0040:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = ___2_lo;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0056;
		}
	}
	{
		RuntimeObject* L_25 = ___4_comparer;
		il2cpp_codegen_memcpy(L_26, V_2, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_27 = ___0_keys;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		il2cpp_codegen_memcpy(L_30, (L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_25);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)) ? L_26: *(void**)L_26), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)) ? L_30: *(void**)L_30));
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_001c;
		}
	}

IL_0056:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_32 = ___0_keys;
		int32_t L_33 = V_1;
		il2cpp_codegen_memcpy(L_34, V_2, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_32);
		il2cpp_codegen_memcpy((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_33, 1)))), L_34, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), (void**)(L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_33, 1)))), (void*)L_34);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_35 = ___1_values;
		int32_t L_36 = V_1;
		il2cpp_codegen_memcpy(L_37, V_3, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		NullCheck(L_35);
		il2cpp_codegen_memcpy((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 1)))), L_37, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10), (void**)(L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 1)))), (void*)L_37);
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_006e:
	{
		int32_t L_39 = V_0;
		int32_t L_40 = ___3_hi;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 12285
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* ArraySortHelper_2_get_Default_mDA1AE59CEB66F5EC4B5C6DCEA30CE0E5EF4E83DE_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* L_0 = ((ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 12286
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2__ctor_m8F559E189035B7379269FEA4D659A1D5BC2C7327_gshared (ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* __this, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// Method Definition Index: 12287
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2__cctor_m0BD298AED5B9267EB7CDB1ED292C6E238C5A5C2A_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* L_0 = (ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		((  void (*) (ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21)))(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		((ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___s_defaultArraySortHelper = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___s_defaultArraySortHelper), (void*)L_0);
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
// Method Definition Index: 39027
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncInstantiateOperation_1__ctor_mEDA26B61D2CFE610CDBD471468646B45731E8526_gshared (AsyncInstantiateOperation_1_t4ADCB11AF0D1CE8F6CBB592A95ED176851CE3C4F* __this, intptr_t ___0_ptr, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInstantiateOperation_1_t46FFC1BE4DA14660ED92F8E371B53AFB78BAFD93_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_cancellationToken));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28716));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28717));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/AsyncInstantiateOperation.bindings.cs:79>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28718));
		intptr_t L_0 = ___0_ptr;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28719));
		il2cpp_codegen_runtime_class_init_inline(AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40_il2cpp_TypeInfo_var);
		AsyncInstantiateOperation__ctor_m0A63AF9DEC342106170FA1821748827015B47435((AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40*)__this, L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28719));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/AsyncInstantiateOperation.bindings.cs:81>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28720));
		return;
	}
}
// Method Definition Index: 39028
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* AsyncInstantiateOperation_1_get_Result_m19B7661801F9A3152F8CD164D18900B0D9913CB3_gshared (AsyncInstantiateOperation_1_t4ADCB11AF0D1CE8F6CBB592A95ED176851CE3C4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInstantiateOperation_1_t46FFC1BE4DA14660ED92F8E371B53AFB78BAFD93_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28721));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28722));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/AsyncInstantiateOperation.bindings.cs:87>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28723));
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_0 = ((AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40*)__this)->___m_Result;
		return ((__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)Castclass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
	}
}
// Method Definition Index: 39029
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* AsyncInstantiateOperation_1_CreateResultArray_mDD1ACB926DDECB9F280AB66D8FCCDDB99618C95D_gshared (AsyncInstantiateOperation_1_t4ADCB11AF0D1CE8F6CBB592A95ED176851CE3C4F* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInstantiateOperation_1_t46FFC1BE4DA14660ED92F8E371B53AFB78BAFD93_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_size));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28724));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28725));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/AsyncInstantiateOperation.bindings.cs:93>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28726));
		int32_t L_0 = ___0_size;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), (uint32_t)L_0);
		((AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40*)__this)->___m_Result = ((ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)Castclass((RuntimeObject*)L_1, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40*)__this)->___m_Result), (void*)((ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)Castclass((RuntimeObject*)L_1, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A_il2cpp_TypeInfo_var)));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/AsyncInstantiateOperation.bindings.cs:94>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28727));
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2 = ((AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40*)__this)->___m_Result;
		return L_2;
	}
}
// Method Definition Index: 39030
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_t8B3BFA67A1E74F17A973E27246D6BD904CA41D32 AsyncInstantiateOperation_1_GetAwaiter_m13B005CE3309CD8C6BDB7C4BAF97D632A185CBA5_gshared (AsyncInstantiateOperation_1_t4ADCB11AF0D1CE8F6CBB592A95ED176851CE3C4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInstantiateOperation_1_t46FFC1BE4DA14660ED92F8E371B53AFB78BAFD93_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28728));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28729));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/AsyncInstantiateOperation.bindings.cs:107>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28730));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28731));
		Awaiter_t8B3BFA67A1E74F17A973E27246D6BD904CA41D32 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m0D4459378C0748F8FBF9CEB11D6BACFB010E6478((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28731));
		return L_0;
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
// Method Definition Index: 39027
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncInstantiateOperation_1__ctor_m3E48F09CFE1A0F8060541BE23BCFE2BB4B9526B6_gshared (AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB* __this, intptr_t ___0_ptr, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInstantiateOperation_1_t46FFC1BE4DA14660ED92F8E371B53AFB78BAFD93_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_cancellationToken));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28716));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28717));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/AsyncInstantiateOperation.bindings.cs:79>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28718));
		intptr_t L_0 = ___0_ptr;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28719));
		il2cpp_codegen_runtime_class_init_inline(AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40_il2cpp_TypeInfo_var);
		AsyncInstantiateOperation__ctor_m0A63AF9DEC342106170FA1821748827015B47435((AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40*)__this, L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28719));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/AsyncInstantiateOperation.bindings.cs:81>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28720));
		return;
	}
}
// Method Definition Index: 39028
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* AsyncInstantiateOperation_1_get_Result_m2B4623A70F0475F913A7AFA12A3A14FD52E2B64C_gshared (AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInstantiateOperation_1_t46FFC1BE4DA14660ED92F8E371B53AFB78BAFD93_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28721));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28722));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/AsyncInstantiateOperation.bindings.cs:87>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28723));
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_0 = ((AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40*)__this)->___m_Result;
		return ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)Castclass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
	}
}
// Method Definition Index: 39029
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* AsyncInstantiateOperation_1_CreateResultArray_m9C573BE80715CE8902D7526B7AA76900AFEA114A_gshared (AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInstantiateOperation_1_t46FFC1BE4DA14660ED92F8E371B53AFB78BAFD93_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_size));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28724));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28725));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/AsyncInstantiateOperation.bindings.cs:93>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28726));
		int32_t L_0 = ___0_size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), (uint32_t)L_0);
		((AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40*)__this)->___m_Result = ((ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)Castclass((RuntimeObject*)L_1, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40*)__this)->___m_Result), (void*)((ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)Castclass((RuntimeObject*)L_1, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A_il2cpp_TypeInfo_var)));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/AsyncInstantiateOperation.bindings.cs:94>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28727));
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2 = ((AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40*)__this)->___m_Result;
		return L_2;
	}
}
// Method Definition Index: 39030
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_t59A92513E07691C90A027430E5BF4BC7A9A592D8 AsyncInstantiateOperation_1_GetAwaiter_mA8DFCC47CD0B999CEBC2A4EFD81D855037080535_gshared (AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInstantiateOperation_1_t46FFC1BE4DA14660ED92F8E371B53AFB78BAFD93_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28728));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28729));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/AsyncInstantiateOperation.bindings.cs:107>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28730));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28731));
		Awaiter_t59A92513E07691C90A027430E5BF4BC7A9A592D8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_mAF98E84E028D9DF706E1DA7721D64E73719C85EF((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28731));
		return L_0;
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
// Method Definition Index: 4619
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocalValueChangedArgs_1__ctor_mE42A8DCCEF1217FD021FBD189C2BEDAD7FAE52F0_gshared (AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30* __this, int32_t ___0_previousValue, int32_t ___1_currentValue, bool ___2_contextChanged, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj(__this, sizeof(AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30));
		int32_t L_0 = ___0_previousValue;
		__this->___U3CPreviousValueU3Ek__BackingField = L_0;
		int32_t L_1 = ___1_currentValue;
		__this->___U3CCurrentValueU3Ek__BackingField = L_1;
		bool L_2 = ___2_contextChanged;
		__this->___U3CThreadContextChangedU3Ek__BackingField = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncLocalValueChangedArgs_1__ctor_mE42A8DCCEF1217FD021FBD189C2BEDAD7FAE52F0_AdjustorThunk (RuntimeObject* __this, int32_t ___0_previousValue, int32_t ___1_currentValue, bool ___2_contextChanged, const RuntimeMethod* method)
{
	AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30>(__this);
	AsyncLocalValueChangedArgs_1__ctor_mE42A8DCCEF1217FD021FBD189C2BEDAD7FAE52F0(_thisAdjusted, ___0_previousValue, ___1_currentValue, ___2_contextChanged, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 4619
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocalValueChangedArgs_1__ctor_mCD46AE17C8F65750A0FCD16854B467184DBB7517_gshared (AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95* __this, Il2CppSharedGenericObject* ___0_previousValue, Il2CppSharedGenericObject* ___1_currentValue, bool ___2_contextChanged, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj(__this, sizeof(AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95));
		Il2CppSharedGenericObject* L_0 = ___0_previousValue;
		__this->___U3CPreviousValueU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPreviousValueU3Ek__BackingField), (void*)L_0);
		Il2CppSharedGenericObject* L_1 = ___1_currentValue;
		__this->___U3CCurrentValueU3Ek__BackingField = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentValueU3Ek__BackingField), (void*)L_1);
		bool L_2 = ___2_contextChanged;
		__this->___U3CThreadContextChangedU3Ek__BackingField = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncLocalValueChangedArgs_1__ctor_mCD46AE17C8F65750A0FCD16854B467184DBB7517_AdjustorThunk (RuntimeObject* __this, Il2CppSharedGenericObject* ___0_previousValue, Il2CppSharedGenericObject* ___1_currentValue, bool ___2_contextChanged, const RuntimeMethod* method)
{
	AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95>(__this);
	AsyncLocalValueChangedArgs_1__ctor_mCD46AE17C8F65750A0FCD16854B467184DBB7517(_thisAdjusted, ___0_previousValue, ___1_currentValue, ___2_contextChanged, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 4619
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocalValueChangedArgs_1__ctor_m8FC80AC8E561902AB0B4888598E9F43818996132_gshared (AsyncLocalValueChangedArgs_1_t7A62C5604064A762FE6998F0A39E23222FFE8429* __this, Il2CppFullySharedGenericAny ___0_previousValue, Il2CppFullySharedGenericAny ___1_currentValue, bool ___2_contextChanged, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_AsyncLocalValueChangedArgs_1_t22D023561F69794CACFB099BD79CB356229ABDE5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T_tCC831585AE4ED144160E317A3A8F51E92FBDAE17 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tCC831585AE4ED144160E317A3A8F51E92FBDAE17);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tCC831585AE4ED144160E317A3A8F51E92FBDAE17);
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj(__this, SizeOf_AsyncLocalValueChangedArgs_1_t22D023561F69794CACFB099BD79CB356229ABDE5);
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)) ? ___0_previousValue : &___0_previousValue), SizeOf_T_tCC831585AE4ED144160E317A3A8F51E92FBDAE17);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_0, SizeOf_T_tCC831585AE4ED144160E317A3A8F51E92FBDAE17);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)) ? ___1_currentValue : &___1_currentValue), SizeOf_T_tCC831585AE4ED144160E317A3A8F51E92FBDAE17);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1), L_1, SizeOf_T_tCC831585AE4ED144160E317A3A8F51E92FBDAE17);
		bool L_2 = ___2_contextChanged;
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2), L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncLocalValueChangedArgs_1__ctor_m8FC80AC8E561902AB0B4888598E9F43818996132_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny ___0_previousValue, Il2CppFullySharedGenericAny ___1_currentValue, bool ___2_contextChanged, const RuntimeMethod* method)
{
	AsyncLocalValueChangedArgs_1_t7A62C5604064A762FE6998F0A39E23222FFE8429* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncLocalValueChangedArgs_1_t7A62C5604064A762FE6998F0A39E23222FFE8429>(__this);
	AsyncLocalValueChangedArgs_1__ctor_m8FC80AC8E561902AB0B4888598E9F43818996132(_thisAdjusted, ___0_previousValue, ___1_currentValue, ___2_contextChanged, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 4614
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocal_1__ctor_m3BFB5D48E3DF34181B6E5CE13CEFCE02321CA411_gshared (AsyncLocal_1_t84A5EBAACAF2A906D91794D4121189156DAE7639* __this, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// Method Definition Index: 4615
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncLocal_1_get_Value_m296E3EA2D38BEADA0D4B0B25477E5ACDC7AE30BC_gshared (AsyncLocal_1_t84A5EBAACAF2A906D91794D4121189156DAE7639* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ExecutionContext_GetLocalValue_mD7817BA06511586607DB09BC0B147294D11961ED((RuntimeObject*)__this, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		return ((*(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
	}

IL_0011:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_3 = V_1;
		return L_3;
	}
}
// Method Definition Index: 4616
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocal_1_set_Value_m78D1DE32F58BA21F7D7FC7596E5CEB5134D5BBE1_gshared (AsyncLocal_1_t84A5EBAACAF2A906D91794D4121189156DAE7639* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_1);
		Action_1_t69E611F01CC2051A51509BEA84FA829EA4D7C643* L_3 = __this->___m_valueChangedHandler;
		il2cpp_codegen_runtime_class_init_inline(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		ExecutionContext_SetLocalValue_m47C23A6C729166E0F87ED79D268F7043AD58E1A5((RuntimeObject*)__this, L_2, (bool)((!(((RuntimeObject*)(Action_1_t69E611F01CC2051A51509BEA84FA829EA4D7C643*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		return;
	}
}
// Method Definition Index: 4617
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocal_1_System_Threading_IAsyncLocal_OnValueChanged_mE5873E6CBA01755AD884C25DC5EF6C0641CB8E98_gshared (AsyncLocal_1_t84A5EBAACAF2A906D91794D4121189156DAE7639* __this, RuntimeObject* ___0_previousValueObj, RuntimeObject* ___1_currentValueObj, bool ___2_contextChanged, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		RuntimeObject* L_0 = ___0_previousValueObj;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_previousValueObj;
		G_B3_0 = ((*(int32_t*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		goto IL_0014;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		int32_t L_2 = V_2;
		G_B3_0 = L_2;
	}

IL_0014:
	{
		V_0 = G_B3_0;
		RuntimeObject* L_3 = ___1_currentValueObj;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = ___1_currentValueObj;
		G_B6_0 = ((*(int32_t*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		goto IL_0029;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		int32_t L_5 = V_2;
		G_B6_0 = L_5;
	}

IL_0029:
	{
		V_1 = G_B6_0;
		Action_1_t69E611F01CC2051A51509BEA84FA829EA4D7C643* L_6 = __this->___m_valueChangedHandler;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		bool L_9 = ___2_contextChanged;
		AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30 L_10;
		memset((&L_10), 0, sizeof(L_10));
		AsyncLocalValueChangedArgs_1__ctor_mE42A8DCCEF1217FD021FBD189C2BEDAD7FAE52F0((&L_10), L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_6);
		Action_1_Invoke_mBCE58B67D7100D1DFF3F431F7DF460E9C688745B_inline(L_6, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
// Method Definition Index: 4614
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocal_1__ctor_mBA9C1B13BE2BF5949754AE4A33C14602CF773BD5_gshared (AsyncLocal_1_tC1B081876A75186A0139ACF15A78BBAA2AEB9482* __this, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// Method Definition Index: 4615
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AsyncLocal_1_get_Value_mC3DC799A03B6A3347390F9AFD9515DA96054B64B_gshared (AsyncLocal_1_tC1B081876A75186A0139ACF15A78BBAA2AEB9482* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Il2CppSharedGenericObject* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ExecutionContext_GetLocalValue_mD7817BA06511586607DB09BC0B147294D11961ED((RuntimeObject*)__this, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
	}

IL_0011:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_3 = V_1;
		return L_3;
	}
}
// Method Definition Index: 4616
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocal_1_set_Value_mF6DB69356350264F4ABC8D6A1F9BD85A451844CB_gshared (AsyncLocal_1_tC1B081876A75186A0139ACF15A78BBAA2AEB9482* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppSharedGenericObject* L_0 = ___0_value;
		Action_1_tB137F0A79CAAF9953E6A15AB8139E511ACF2041D* L_1 = __this->___m_valueChangedHandler;
		il2cpp_codegen_runtime_class_init_inline(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		ExecutionContext_SetLocalValue_m47C23A6C729166E0F87ED79D268F7043AD58E1A5((RuntimeObject*)__this, (RuntimeObject*)L_0, (bool)((!(((RuntimeObject*)(Action_1_tB137F0A79CAAF9953E6A15AB8139E511ACF2041D*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		return;
	}
}
// Method Definition Index: 4617
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocal_1_System_Threading_IAsyncLocal_OnValueChanged_m60708CA7F6D822B4DDF0DF0D623C5CD44C5659B6_gshared (AsyncLocal_1_tC1B081876A75186A0139ACF15A78BBAA2AEB9482* __this, RuntimeObject* ___0_previousValueObj, RuntimeObject* ___1_currentValueObj, bool ___2_contextChanged, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	Il2CppSharedGenericObject* V_1 = NULL;
	Il2CppSharedGenericObject* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Il2CppSharedGenericObject* G_B3_0 = NULL;
	Il2CppSharedGenericObject* G_B6_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_previousValueObj;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_previousValueObj;
		G_B3_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		goto IL_0014;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_2 = V_2;
		G_B3_0 = L_2;
	}

IL_0014:
	{
		V_0 = G_B3_0;
		RuntimeObject* L_3 = ___1_currentValueObj;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = ___1_currentValueObj;
		G_B6_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		goto IL_0029;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_5 = V_2;
		G_B6_0 = L_5;
	}

IL_0029:
	{
		V_1 = G_B6_0;
		Action_1_tB137F0A79CAAF9953E6A15AB8139E511ACF2041D* L_6 = __this->___m_valueChangedHandler;
		Il2CppSharedGenericObject* L_7 = V_0;
		Il2CppSharedGenericObject* L_8 = V_1;
		bool L_9 = ___2_contextChanged;
		AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95 L_10;
		memset((&L_10), 0, sizeof(L_10));
		AsyncLocalValueChangedArgs_1__ctor_mCD46AE17C8F65750A0FCD16854B467184DBB7517((&L_10), L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_6);
		Action_1_Invoke_m15B09A14760255FA046745C030377D21CE4BE793_inline(L_6, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
// Method Definition Index: 4614
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocal_1__ctor_m4EBB4D0249B7ABD002E3C59CF86A70EB59838D85_gshared (AsyncLocal_1_t6FE3AE7F9BEDEDFAF5962FF8DBC977B4D007C150* __this, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// Method Definition Index: 4615
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocal_1_get_Value_mC9B5CC8D84B3E701C4C093D9C8BEAE254EC5BDD2_gshared (AsyncLocal_1_t6FE3AE7F9BEDEDFAF5962FF8DBC977B4D007C150* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	memset(V_1, 0, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ExecutionContext_GetLocalValue_mD7817BA06511586607DB09BC0B147294D11961ED((RuntimeObject*)__this, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		return;
	}

IL_0011:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		il2cpp_codegen_memcpy(L_5, V_1, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		return;
	}
}
// Method Definition Index: 4616
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocal_1_set_Value_m53DABBFFE8E46AD6BDFB2724AB2A465FB7A8F6C7_gshared (AsyncLocal_1_t6FE3AE7F9BEDEDFAF5962FF8DBC977B4D007C150* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_value : &___0_value), SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_0);
		Action_1_t0D3FDEB853658AAA91C8797C0476DDF845D5BBFF* L_2 = __this->___m_valueChangedHandler;
		il2cpp_codegen_runtime_class_init_inline(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		ExecutionContext_SetLocalValue_m47C23A6C729166E0F87ED79D268F7043AD58E1A5((RuntimeObject*)__this, L_1, (bool)((!(((RuntimeObject*)(Action_1_t0D3FDEB853658AAA91C8797C0476DDF845D5BBFF*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		return;
	}
}
// Method Definition Index: 4617
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocal_1_System_Threading_IAsyncLocal_OnValueChanged_m920A4EAD693C48D35985DBECCD3F4A764D1DB633_gshared (AsyncLocal_1_t6FE3AE7F9BEDEDFAF5962FF8DBC977B4D007C150* __this, RuntimeObject* ___0_previousValueObj, RuntimeObject* ___1_currentValueObj, bool ___2_contextChanged, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const uint32_t SizeOf_AsyncLocalValueChangedArgs_1_t0361F7CFF09592504B84AB98E4932FC5CFC8B27F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	const Il2CppFullySharedGenericAny L_4 = L_2;
	const Il2CppFullySharedGenericAny L_7 = L_2;
	const Il2CppFullySharedGenericAny L_9 = L_2;
	const Il2CppFullySharedGenericAny L_11 = L_2;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	const AsyncLocalValueChangedArgs_1_t7A62C5604064A762FE6998F0A39E23222FFE8429 L_16 = alloca(SizeOf_AsyncLocalValueChangedArgs_1_t0361F7CFF09592504B84AB98E4932FC5CFC8B27F);
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	memset(V_0, 0, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	memset(V_1, 0, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	memset(V_2, 0, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	memset(G_B3_0, 0, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	memset(G_B6_0, 0, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	{
		RuntimeObject* L_0 = ___0_previousValueObj;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_previousValueObj;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2);
		il2cpp_codegen_memcpy(G_B3_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)), SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		goto IL_0014;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		il2cpp_codegen_memcpy(L_4, V_2, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		il2cpp_codegen_memcpy(G_B3_0, L_4, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	}

IL_0014:
	{
		il2cpp_codegen_memcpy(V_0, G_B3_0, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		RuntimeObject* L_5 = ___1_currentValueObj;
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_6 = ___1_currentValueObj;
		void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_7);
		il2cpp_codegen_memcpy(G_B6_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8)), SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		goto IL_0029;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		il2cpp_codegen_memcpy(L_9, V_2, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		il2cpp_codegen_memcpy(G_B6_0, L_9, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	}

IL_0029:
	{
		il2cpp_codegen_memcpy(V_1, G_B6_0, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		Action_1_t0D3FDEB853658AAA91C8797C0476DDF845D5BBFF* L_10 = __this->___m_valueChangedHandler;
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		il2cpp_codegen_memcpy(L_12, V_1, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		bool L_13 = ___2_contextChanged;
		memset(L_16, 0, SizeOf_AsyncLocalValueChangedArgs_1_t0361F7CFF09592504B84AB98E4932FC5CFC8B27F);
		AsyncLocalValueChangedArgs_1__ctor_m8FC80AC8E561902AB0B4888598E9F43818996132((AsyncLocalValueChangedArgs_1_t7A62C5604064A762FE6998F0A39E23222FFE8429*)L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_14, L_11, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_15, L_12, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9): *(void**)L_12), L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_10);
		InvokerActionInvoker1< AsyncLocalValueChangedArgs_1_t7A62C5604064A762FE6998F0A39E23222FFE8429 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_10, L_16);
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
// Method Definition Index: 8878
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3 AsyncTaskMethodBuilder_1_Create_mD8DE731EB19BE9356E17DE676D31AB1F8FDE0468_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3));
		AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 8880
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mC468FEBA35E9688F98709D52A7539B2C1C4C8C15_gshared (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncMethodBuilderCore_SetStateMachine_m156C470618D0E6B9E018904A491BBD44466EBFDA(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetStateMachine_mC468FEBA35E9688F98709D52A7539B2C1C4C8C15_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3>(__this);
	AsyncTaskMethodBuilder_1_SetStateMachine_mC468FEBA35E9688F98709D52A7539B2C1C4C8C15(_thisAdjusted, ___0_stateMachine, method);
}
// Method Definition Index: 8883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* AsyncTaskMethodBuilder_1_get_Task_m7240951B6E9A5DB275CDFCA78339FFEE26BA8802_gshared (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* __this, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_2 = (Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Task_1__ctor_m6FD25DABCE184917175389E391C873409261DDB0(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* AsyncTaskMethodBuilder_1_get_Task_m7240951B6E9A5DB275CDFCA78339FFEE26BA8802_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3>(__this);
	Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* _returnValue;
	_returnValue = AsyncTaskMethodBuilder_1_get_Task_m7240951B6E9A5DB275CDFCA78339FFEE26BA8802(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 8884
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0582B44433D671C064F3AE9A809A3EA5FE256781_gshared (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_2 = ___0_result;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_m77E79732C249B6B4254DF543FA0A2FAE26803011(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_5 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335((int32_t)0, L_6, (int32_t)1, NULL);
	}

IL_002b:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_8 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_10 = V_0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_m0E1289A1CCF695E50715221524D7B407E43BE28C(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetResult_m0582B44433D671C064F3AE9A809A3EA5FE256781_AdjustorThunk (RuntimeObject* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3>(__this);
	AsyncTaskMethodBuilder_1_SetResult_m0582B44433D671C064F3AE9A809A3EA5FE256781(_thisAdjusted, ___0_result, method);
}
// Method Definition Index: 8885
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m42172F6932E531FBEEFE4AED72241320EF927434_gshared (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* __this, Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* ___0_completedTask, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		AsyncTaskMethodBuilder_1_SetResult_m0582B44433D671C064F3AE9A809A3EA5FE256781(__this, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetResult_m42172F6932E531FBEEFE4AED72241320EF927434_AdjustorThunk (RuntimeObject* __this, Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* ___0_completedTask, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3>(__this);
	AsyncTaskMethodBuilder_1_SetResult_m42172F6932E531FBEEFE4AED72241320EF927434(_thisAdjusted, ___0_completedTask, method);
}
// Method Definition Index: 8886
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m65D6A428A99A2074CE9E23A65EFE474879ADC095_gshared (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m7240951B6E9A5DB275CDFCA78339FFEE26BA8802(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7, (RuntimeObject*)L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10, L_12, (RuntimeObject*)L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetException_m65D6A428A99A2074CE9E23A65EFE474879ADC095_AdjustorThunk (RuntimeObject* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3>(__this);
	AsyncTaskMethodBuilder_1_SetException_m65D6A428A99A2074CE9E23A65EFE474879ADC095(_thisAdjusted, ___0_exception, method);
}
// Method Definition Index: 8887
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* AsyncTaskMethodBuilder_1_GetTaskForResult_m77E79732C249B6B4254DF543FA0A2FAE26803011_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = V_0;
		if (!L_0.___hasValue)
		{
			goto IL_024b;
		}
	}
	{
		goto IL_004d;
	}

IL_004d:
	{
		goto IL_0092;
	}

IL_0092:
	{
		goto IL_00bd;
	}

IL_00bd:
	{
		goto IL_00e8;
	}

IL_00e8:
	{
		goto IL_0113;
	}

IL_0113:
	{
		goto IL_013e;
	}

IL_013e:
	{
		goto IL_0169;
	}

IL_0169:
	{
		goto IL_0194;
	}

IL_0194:
	{
		goto IL_01bf;
	}

IL_01bf:
	{
		goto IL_01e7;
	}

IL_01e7:
	{
		goto IL_0216;
	}

IL_0216:
	{
		goto IL_0259;
	}

IL_024b:
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1 = ___0_result;
		if (L_1.___hasValue)
		{
			goto IL_0259;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_2 = ((AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask;
		return L_2;
	}

IL_0259:
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_3 = ___0_result;
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_4 = (Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Task_1__ctor_mF447742220AD60B921E950DB392B44F553021674(L_4, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_4;
	}
}
// Method Definition Index: 8888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_m9F1ED1ED56BA508292AC9D988C357DE7E23F1E2A_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_m96AB4AB175E7A53B8211E82B7CC642AD7E340637(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		((AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask), (void*)L_1);
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
// Method Definition Index: 8878
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E AsyncTaskMethodBuilder_1_Create_m6F81F92C4390A6745EC21F053477DE7DF0FEE4F9_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E));
		AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 8880
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m63FF5F72B43D370B1069C9079A541A6E8AC2CE1B_gshared (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncMethodBuilderCore_SetStateMachine_m156C470618D0E6B9E018904A491BBD44466EBFDA(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetStateMachine_m63FF5F72B43D370B1069C9079A541A6E8AC2CE1B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E>(__this);
	AsyncTaskMethodBuilder_1_SetStateMachine_m63FF5F72B43D370B1069C9079A541A6E8AC2CE1B(_thisAdjusted, ___0_stateMachine, method);
}
// Method Definition Index: 8883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* AsyncTaskMethodBuilder_1_get_Task_mC10888726AB1CF669A543F39EC82C1B8B296C524_gshared (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* __this, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_2 = (Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Task_1__ctor_mD3FC7E2EF363236809F13343A64FC880CA6C74FA(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* AsyncTaskMethodBuilder_1_get_Task_mC10888726AB1CF669A543F39EC82C1B8B296C524_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E>(__this);
	Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* _returnValue;
	_returnValue = AsyncTaskMethodBuilder_1_get_Task_mC10888726AB1CF669A543F39EC82C1B8B296C524(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 8884
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m4A9FF4B718DBEE05F481602FC54B269D0A99F2FD_gshared (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_2 = ___0_result;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_m6B3189831D5E29F5299A08939FE67EE7D6A55CF6(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_5 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335((int32_t)0, L_6, (int32_t)1, NULL);
	}

IL_002b:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_8 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_10 = V_0;
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_m45CC6CDCCB981248C56909C9D64A2995260A2621(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetResult_m4A9FF4B718DBEE05F481602FC54B269D0A99F2FD_AdjustorThunk (RuntimeObject* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E>(__this);
	AsyncTaskMethodBuilder_1_SetResult_m4A9FF4B718DBEE05F481602FC54B269D0A99F2FD(_thisAdjusted, ___0_result, method);
}
// Method Definition Index: 8885
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m6746E4B742BF588934A5B6DEC219B8620E218FC7_gshared (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* __this, Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* ___0_completedTask, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC));
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		AsyncTaskMethodBuilder_1_SetResult_m4A9FF4B718DBEE05F481602FC54B269D0A99F2FD(__this, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetResult_m6746E4B742BF588934A5B6DEC219B8620E218FC7_AdjustorThunk (RuntimeObject* __this, Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* ___0_completedTask, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E>(__this);
	AsyncTaskMethodBuilder_1_SetResult_m6746E4B742BF588934A5B6DEC219B8620E218FC7(_thisAdjusted, ___0_completedTask, method);
}
// Method Definition Index: 8886
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m20A87382A7B6D6EFFFCABB906FA5E385D976715E_gshared (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_mC10888726AB1CF669A543F39EC82C1B8B296C524(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7, (RuntimeObject*)L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10, L_12, (RuntimeObject*)L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetException_m20A87382A7B6D6EFFFCABB906FA5E385D976715E_AdjustorThunk (RuntimeObject* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E>(__this);
	AsyncTaskMethodBuilder_1_SetException_m20A87382A7B6D6EFFFCABB906FA5E385D976715E(_thisAdjusted, ___0_exception, method);
}
// Method Definition Index: 8887
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* AsyncTaskMethodBuilder_1_GetTaskForResult_m6B3189831D5E29F5299A08939FE67EE7D6A55CF6_gshared (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC));
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = V_0;
		if (!L_0.___hasValue)
		{
			goto IL_024b;
		}
	}
	{
		goto IL_004d;
	}

IL_004d:
	{
		goto IL_0092;
	}

IL_0092:
	{
		goto IL_00bd;
	}

IL_00bd:
	{
		goto IL_00e8;
	}

IL_00e8:
	{
		goto IL_0113;
	}

IL_0113:
	{
		goto IL_013e;
	}

IL_013e:
	{
		goto IL_0169;
	}

IL_0169:
	{
		goto IL_0194;
	}

IL_0194:
	{
		goto IL_01bf;
	}

IL_01bf:
	{
		goto IL_01e7;
	}

IL_01e7:
	{
		goto IL_0216;
	}

IL_0216:
	{
		goto IL_0259;
	}

IL_024b:
	{
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_1 = ___0_result;
		if (L_1.___hasValue)
		{
			goto IL_0259;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_2 = ((AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask;
		return L_2;
	}

IL_0259:
	{
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_3 = ___0_result;
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_4 = (Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Task_1__ctor_m8D3E36AB4BDE6C83EAEBA04A2495EDF3D5F17E7E(L_4, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_4;
	}
}
// Method Definition Index: 8888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_m852330017C3E169A88626F9AB245E4B7658319BC_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC));
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisNullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_m5C538BE589257259BE446E11D4BF68C8B5C2B2E9(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		((AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask), (void*)L_1);
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
// Method Definition Index: 8878
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6 AsyncTaskMethodBuilder_1_Create_mB3466279632154890A965C0AA3606971CB30C857_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6));
		AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 8880
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mE0D6C0F35D575B78671BF90F206948F638430F50_gshared (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncMethodBuilderCore_SetStateMachine_m156C470618D0E6B9E018904A491BBD44466EBFDA(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetStateMachine_mE0D6C0F35D575B78671BF90F206948F638430F50_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6>(__this);
	AsyncTaskMethodBuilder_1_SetStateMachine_mE0D6C0F35D575B78671BF90F206948F638430F50(_thisAdjusted, ___0_stateMachine, method);
}
// Method Definition Index: 8883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* AsyncTaskMethodBuilder_1_get_Task_mFF107A582F8CB464DC795B93946486F5CB72C967_gshared (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* __this, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_2 = (Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Task_1__ctor_mC8EFB6F199A7B074BA039A2B4CEB2DAA776F959D(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* AsyncTaskMethodBuilder_1_get_Task_mFF107A582F8CB464DC795B93946486F5CB72C967_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6>(__this);
	Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* _returnValue;
	_returnValue = AsyncTaskMethodBuilder_1_get_Task_mFF107A582F8CB464DC795B93946486F5CB72C967(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 8884
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m354CAA69E85D02ECDA58F4E3ED331615B9B286D9_gshared (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* __this, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_2 = ___0_result;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_m56752E94BB4DD52A5AEAC4F698DFEEDF9275A857(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_5 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335((int32_t)0, L_6, (int32_t)1, NULL);
	}

IL_002b:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_8 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_10 = V_0;
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_m7BBE50D093A6F0F6CD80D0AEF961E9B1F489EB15(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetResult_m354CAA69E85D02ECDA58F4E3ED331615B9B286D9_AdjustorThunk (RuntimeObject* __this, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6>(__this);
	AsyncTaskMethodBuilder_1_SetResult_m354CAA69E85D02ECDA58F4E3ED331615B9B286D9(_thisAdjusted, ___0_result, method);
}
// Method Definition Index: 8885
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0A2FD7A765CABE5B08E6F7C5B44B0D346063B6FE_gshared (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* __this, Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* ___0_completedTask, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B));
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		AsyncTaskMethodBuilder_1_SetResult_m354CAA69E85D02ECDA58F4E3ED331615B9B286D9(__this, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetResult_m0A2FD7A765CABE5B08E6F7C5B44B0D346063B6FE_AdjustorThunk (RuntimeObject* __this, Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* ___0_completedTask, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6>(__this);
	AsyncTaskMethodBuilder_1_SetResult_m0A2FD7A765CABE5B08E6F7C5B44B0D346063B6FE(_thisAdjusted, ___0_completedTask, method);
}
// Method Definition Index: 8886
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mEA9A1250CD59EB926FE49E9557A3680DF0FE336D_gshared (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_mFF107A582F8CB464DC795B93946486F5CB72C967(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7, (RuntimeObject*)L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10, L_12, (RuntimeObject*)L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetException_mEA9A1250CD59EB926FE49E9557A3680DF0FE336D_AdjustorThunk (RuntimeObject* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6>(__this);
	AsyncTaskMethodBuilder_1_SetException_mEA9A1250CD59EB926FE49E9557A3680DF0FE336D(_thisAdjusted, ___0_exception, method);
}
// Method Definition Index: 8887
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* AsyncTaskMethodBuilder_1_GetTaskForResult_m56752E94BB4DD52A5AEAC4F698DFEEDF9275A857_gshared (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B));
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_0 = V_0;
		if (!L_0.___hasValue)
		{
			goto IL_024b;
		}
	}
	{
		goto IL_004d;
	}

IL_004d:
	{
		goto IL_0092;
	}

IL_0092:
	{
		goto IL_00bd;
	}

IL_00bd:
	{
		goto IL_00e8;
	}

IL_00e8:
	{
		goto IL_0113;
	}

IL_0113:
	{
		goto IL_013e;
	}

IL_013e:
	{
		goto IL_0169;
	}

IL_0169:
	{
		goto IL_0194;
	}

IL_0194:
	{
		goto IL_01bf;
	}

IL_01bf:
	{
		goto IL_01e7;
	}

IL_01e7:
	{
		goto IL_0216;
	}

IL_0216:
	{
		goto IL_0259;
	}

IL_024b:
	{
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_1 = ___0_result;
		if (L_1.___hasValue)
		{
			goto IL_0259;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_2 = ((AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask;
		return L_2;
	}

IL_0259:
	{
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_3 = ___0_result;
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_4 = (Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Task_1__ctor_mAC82BD4DDEA1A5100605394F9936B0F565FCC507(L_4, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_4;
	}
}
// Method Definition Index: 8888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_m9CD0C555C5DBC1E5F246FA9E155AA4504259A644_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B));
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisNullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_m5C1E3DE59946A59843B982943FCCD902F176696E(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		((AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask), (void*)L_1);
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
// Method Definition Index: 8878
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36 AsyncTaskMethodBuilder_1_Create_mA67BFC751F0AF051A8679FDC002AF29041C5E861_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36));
		AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 8880
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m41A9EFE80569D0ED18656151ACD1E3563B288BBA_gshared (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncMethodBuilderCore_SetStateMachine_m156C470618D0E6B9E018904A491BBD44466EBFDA(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetStateMachine_m41A9EFE80569D0ED18656151ACD1E3563B288BBA_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36>(__this);
	AsyncTaskMethodBuilder_1_SetStateMachine_m41A9EFE80569D0ED18656151ACD1E3563B288BBA(_thisAdjusted, ___0_stateMachine, method);
}
// Method Definition Index: 8883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* AsyncTaskMethodBuilder_1_get_Task_m1BFEC2D85643659CCFCB0055986B849F09DB6DE2_gshared (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* __this, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_2 = (Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Task_1__ctor_m2A24686E3CD6ADE147BFEB3CD25DDEB30D830AE5(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* AsyncTaskMethodBuilder_1_get_Task_m1BFEC2D85643659CCFCB0055986B849F09DB6DE2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36>(__this);
	Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* _returnValue;
	_returnValue = AsyncTaskMethodBuilder_1_get_Task_m1BFEC2D85643659CCFCB0055986B849F09DB6DE2(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 8884
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m8FD5A31BDA892931A44F70190116C626F5FE76CF_gshared (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_2 = ___0_result;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_m7C0AB57139BF368AC6D19E94BA17FAF38EE26F37(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_5 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335((int32_t)0, L_6, (int32_t)1, NULL);
	}

IL_002b:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_8 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_10 = V_0;
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_mECC96B0C1F0FF06B9F41396F42346083FBF52CA7(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetResult_m8FD5A31BDA892931A44F70190116C626F5FE76CF_AdjustorThunk (RuntimeObject* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36>(__this);
	AsyncTaskMethodBuilder_1_SetResult_m8FD5A31BDA892931A44F70190116C626F5FE76CF(_thisAdjusted, ___0_result, method);
}
// Method Definition Index: 8885
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mE337A2D1B8EBE2EA7BEC9B0C7771E9C57BE37356_gshared (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* __this, Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* ___0_completedTask, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		AsyncTaskMethodBuilder_1_SetResult_m8FD5A31BDA892931A44F70190116C626F5FE76CF(__this, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetResult_mE337A2D1B8EBE2EA7BEC9B0C7771E9C57BE37356_AdjustorThunk (RuntimeObject* __this, Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* ___0_completedTask, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36>(__this);
	AsyncTaskMethodBuilder_1_SetResult_mE337A2D1B8EBE2EA7BEC9B0C7771E9C57BE37356(_thisAdjusted, ___0_completedTask, method);
}
// Method Definition Index: 8886
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mB6B23BD3B309A05B4215C83F5C5AB68AEBDD470D_gshared (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m1BFEC2D85643659CCFCB0055986B849F09DB6DE2(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7, (RuntimeObject*)L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10, L_12, (RuntimeObject*)L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetException_mB6B23BD3B309A05B4215C83F5C5AB68AEBDD470D_AdjustorThunk (RuntimeObject* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36>(__this);
	AsyncTaskMethodBuilder_1_SetException_mB6B23BD3B309A05B4215C83F5C5AB68AEBDD470D(_thisAdjusted, ___0_exception, method);
}
// Method Definition Index: 8887
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* AsyncTaskMethodBuilder_1_GetTaskForResult_m7C0AB57139BF368AC6D19E94BA17FAF38EE26F37_gshared (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_0 = V_0;
		if (!L_0.___hasValue)
		{
			goto IL_024b;
		}
	}
	{
		goto IL_004d;
	}

IL_004d:
	{
		goto IL_0092;
	}

IL_0092:
	{
		goto IL_00bd;
	}

IL_00bd:
	{
		goto IL_00e8;
	}

IL_00e8:
	{
		goto IL_0113;
	}

IL_0113:
	{
		goto IL_013e;
	}

IL_013e:
	{
		goto IL_0169;
	}

IL_0169:
	{
		goto IL_0194;
	}

IL_0194:
	{
		goto IL_01bf;
	}

IL_01bf:
	{
		goto IL_01e7;
	}

IL_01e7:
	{
		goto IL_0216;
	}

IL_0216:
	{
		goto IL_0259;
	}

IL_024b:
	{
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_1 = ___0_result;
		if (L_1.___hasValue)
		{
			goto IL_0259;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_2 = ((AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask;
		return L_2;
	}

IL_0259:
	{
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_3 = ___0_result;
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_4 = (Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Task_1__ctor_m4BFE73FA4ECA4AE630CE7CBD188EAC1FE9722429(L_4, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_4;
	}
}
// Method Definition Index: 8888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_mEE5230B5E85B93D681701B322AFA72E844783C44_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisNullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_m4C2678F8646CE15535AA9FF141054C5D350E6E84(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		((AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask), (void*)L_1);
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
// Method Definition Index: 8878
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7 AsyncTaskMethodBuilder_1_Create_mEA28C2928CA7FFDC6CDE71203901E0FC83FFCB50_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7));
		AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 8880
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mBECC7576674C907A0494A52697C163704277A86D_gshared (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncMethodBuilderCore_SetStateMachine_m156C470618D0E6B9E018904A491BBD44466EBFDA(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetStateMachine_mBECC7576674C907A0494A52697C163704277A86D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7>(__this);
	AsyncTaskMethodBuilder_1_SetStateMachine_mBECC7576674C907A0494A52697C163704277A86D(_thisAdjusted, ___0_stateMachine, method);
}
// Method Definition Index: 8883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* AsyncTaskMethodBuilder_1_get_Task_m7164E00326DC7BC82FE12A781478471DD7A1CE69_gshared (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* __this, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_2 = (Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Task_1__ctor_m345E75D3154D6F145F3BC063812295BC72297854(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* AsyncTaskMethodBuilder_1_get_Task_m7164E00326DC7BC82FE12A781478471DD7A1CE69_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7>(__this);
	Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* _returnValue;
	_returnValue = AsyncTaskMethodBuilder_1_get_Task_m7164E00326DC7BC82FE12A781478471DD7A1CE69(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 8884
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m8B35722630A089A6AE51C45F0B6A16B21AE914A0_gshared (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_2 = ___0_result;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_m20835BD24CC7D28A02C3240F74B31E4DB2D2EE6B(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_5 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335((int32_t)0, L_6, (int32_t)1, NULL);
	}

IL_002b:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_8 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_10 = V_0;
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_m63A166803A98E96536A3D21D7E9E8F8FFF5761D0(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetResult_m8B35722630A089A6AE51C45F0B6A16B21AE914A0_AdjustorThunk (RuntimeObject* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7>(__this);
	AsyncTaskMethodBuilder_1_SetResult_m8B35722630A089A6AE51C45F0B6A16B21AE914A0(_thisAdjusted, ___0_result, method);
}
// Method Definition Index: 8885
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m431A98AD6F85C66715CA4EC9A884D3486625CAC3_gshared (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* __this, Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* ___0_completedTask, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		AsyncTaskMethodBuilder_1_SetResult_m8B35722630A089A6AE51C45F0B6A16B21AE914A0(__this, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetResult_m431A98AD6F85C66715CA4EC9A884D3486625CAC3_AdjustorThunk (RuntimeObject* __this, Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* ___0_completedTask, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7>(__this);
	AsyncTaskMethodBuilder_1_SetResult_m431A98AD6F85C66715CA4EC9A884D3486625CAC3(_thisAdjusted, ___0_completedTask, method);
}
// Method Definition Index: 8886
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mB2E9A1B7DBB59C420CDB96A04A128F745DE63AB4_gshared (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m7164E00326DC7BC82FE12A781478471DD7A1CE69(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7, (RuntimeObject*)L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10, L_12, (RuntimeObject*)L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetException_mB2E9A1B7DBB59C420CDB96A04A128F745DE63AB4_AdjustorThunk (RuntimeObject* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7>(__this);
	AsyncTaskMethodBuilder_1_SetException_mB2E9A1B7DBB59C420CDB96A04A128F745DE63AB4(_thisAdjusted, ___0_exception, method);
}
// Method Definition Index: 8887
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* AsyncTaskMethodBuilder_1_GetTaskForResult_m20835BD24CC7D28A02C3240F74B31E4DB2D2EE6B_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = V_0;
		if (!L_0.___hasValue)
		{
			goto IL_024b;
		}
	}
	{
		goto IL_004d;
	}

IL_004d:
	{
		goto IL_0092;
	}

IL_0092:
	{
		goto IL_00bd;
	}

IL_00bd:
	{
		goto IL_00e8;
	}

IL_00e8:
	{
		goto IL_0113;
	}

IL_0113:
	{
		goto IL_013e;
	}

IL_013e:
	{
		goto IL_0169;
	}

IL_0169:
	{
		goto IL_0194;
	}

IL_0194:
	{
		goto IL_01bf;
	}

IL_01bf:
	{
		goto IL_01e7;
	}

IL_01e7:
	{
		goto IL_0216;
	}

IL_0216:
	{
		goto IL_0259;
	}

IL_024b:
	{
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_1 = ___0_result;
		if (L_1.___hasValue)
		{
			goto IL_0259;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_2 = ((AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask;
		return L_2;
	}

IL_0259:
	{
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_3 = ___0_result;
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_4 = (Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Task_1__ctor_mC20EE5CCB1CCB1C6150DA69D0756E83E1547BE6A(L_4, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_4;
	}
}
// Method Definition Index: 8888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_mE460D335DF4586B53AB88A77C6FF674A823F3FC7_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_mD2FD1BA37CD7BC9F997D797EF6CBD0208F55D7E2(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		((AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask), (void*)L_1);
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
// Method Definition Index: 8878
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7 AsyncTaskMethodBuilder_1_Create_m019429C93E0EFE15C01092A3FF90B3F3B153495A_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7));
		AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 8880
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m202DAC650B3B8EFE6A02ED46F243B399A3308879_gshared (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncMethodBuilderCore_SetStateMachine_m156C470618D0E6B9E018904A491BBD44466EBFDA(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetStateMachine_m202DAC650B3B8EFE6A02ED46F243B399A3308879_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7>(__this);
	AsyncTaskMethodBuilder_1_SetStateMachine_m202DAC650B3B8EFE6A02ED46F243B399A3308879(_thisAdjusted, ___0_stateMachine, method);
}
// Method Definition Index: 8883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* AsyncTaskMethodBuilder_1_get_Task_mB36BC37F05CC1BD3EDB9EC66B9BBEA7DE33F3D03_gshared (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* __this, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_2 = (Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Task_1__ctor_m9AD5FE1A0F48B1C1AD8614F87739B31DD3DE3568(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* AsyncTaskMethodBuilder_1_get_Task_mB36BC37F05CC1BD3EDB9EC66B9BBEA7DE33F3D03_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7>(__this);
	Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* _returnValue;
	_returnValue = AsyncTaskMethodBuilder_1_get_Task_mB36BC37F05CC1BD3EDB9EC66B9BBEA7DE33F3D03(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 8884
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m7814370659E8E3550E3A679C1F2F516592198487_gshared (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_2 = ___0_result;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_m81DB6DAED4F1821904FA836D73BB5CE8FBE778EE(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_5 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335((int32_t)0, L_6, (int32_t)1, NULL);
	}

IL_002b:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_8 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_10 = V_0;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_m48D840CA62136D390874D338ED6E57849E33490B(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetResult_m7814370659E8E3550E3A679C1F2F516592198487_AdjustorThunk (RuntimeObject* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7>(__this);
	AsyncTaskMethodBuilder_1_SetResult_m7814370659E8E3550E3A679C1F2F516592198487(_thisAdjusted, ___0_result, method);
}
// Method Definition Index: 8885
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m628CA4F28FE2878774E97C22597DDFC877801B1D_gshared (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* __this, Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* ___0_completedTask, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		AsyncTaskMethodBuilder_1_SetResult_m7814370659E8E3550E3A679C1F2F516592198487(__this, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetResult_m628CA4F28FE2878774E97C22597DDFC877801B1D_AdjustorThunk (RuntimeObject* __this, Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* ___0_completedTask, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7>(__this);
	AsyncTaskMethodBuilder_1_SetResult_m628CA4F28FE2878774E97C22597DDFC877801B1D(_thisAdjusted, ___0_completedTask, method);
}
// Method Definition Index: 8886
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m76968B53E22BA2AD3C6102934BDC2C9013F74A95_gshared (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_mB36BC37F05CC1BD3EDB9EC66B9BBEA7DE33F3D03(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7, (RuntimeObject*)L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10, L_12, (RuntimeObject*)L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetException_m76968B53E22BA2AD3C6102934BDC2C9013F74A95_AdjustorThunk (RuntimeObject* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7>(__this);
	AsyncTaskMethodBuilder_1_SetException_m76968B53E22BA2AD3C6102934BDC2C9013F74A95(_thisAdjusted, ___0_exception, method);
}
// Method Definition Index: 8887
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* AsyncTaskMethodBuilder_1_GetTaskForResult_m81DB6DAED4F1821904FA836D73BB5CE8FBE778EE_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = V_0;
		if (!L_0.___hasValue)
		{
			goto IL_024b;
		}
	}
	{
		goto IL_004d;
	}

IL_004d:
	{
		goto IL_0092;
	}

IL_0092:
	{
		goto IL_00bd;
	}

IL_00bd:
	{
		goto IL_00e8;
	}

IL_00e8:
	{
		goto IL_0113;
	}

IL_0113:
	{
		goto IL_013e;
	}

IL_013e:
	{
		goto IL_0169;
	}

IL_0169:
	{
		goto IL_0194;
	}

IL_0194:
	{
		goto IL_01bf;
	}

IL_01bf:
	{
		goto IL_01e7;
	}

IL_01e7:
	{
		goto IL_0216;
	}

IL_0216:
	{
		goto IL_0259;
	}

IL_024b:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_1 = ___0_result;
		if (L_1.___hasValue)
		{
			goto IL_0259;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_2 = ((AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask;
		return L_2;
	}

IL_0259:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_3 = ___0_result;
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_4 = (Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Task_1__ctor_m0A2664C4950556338199629BD2C98586D70A0813(L_4, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_4;
	}
}
// Method Definition Index: 8888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_mAAD51742E2597409FFC57166E486D2DA186186B9_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m443D01DF96CD3252CAFF048A991441D94DE3B66B(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		((AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask), (void*)L_1);
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
// Method Definition Index: 8878
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797 AsyncTaskMethodBuilder_1_Create_m478620C17DE7B646CC3F292E4A35E1DCDC03E0F9_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797));
		AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 8880
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m8F0334A0C9907253ABE4E56C7A7418B623694DCD_gshared (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncMethodBuilderCore_SetStateMachine_m156C470618D0E6B9E018904A491BBD44466EBFDA(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetStateMachine_m8F0334A0C9907253ABE4E56C7A7418B623694DCD_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797>(__this);
	AsyncTaskMethodBuilder_1_SetStateMachine_m8F0334A0C9907253ABE4E56C7A7418B623694DCD(_thisAdjusted, ___0_stateMachine, method);
}
// Method Definition Index: 8883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* AsyncTaskMethodBuilder_1_get_Task_m48238D6774C93E57C332776A6554A23FDB5F96DA_gshared (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* __this, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_2 = (Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Task_1__ctor_mB69E08DDFCF368BC5ACC43CC245DF9583AB4E038(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* AsyncTaskMethodBuilder_1_get_Task_m48238D6774C93E57C332776A6554A23FDB5F96DA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797>(__this);
	Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* _returnValue;
	_returnValue = AsyncTaskMethodBuilder_1_get_Task_m48238D6774C93E57C332776A6554A23FDB5F96DA(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 8884
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m359B80F1DDD3F620C7468C447D5348089529F181_gshared (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_2 = ___0_result;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_m67F6A4AD611FF3FB5A9FF21B8F6AF483DAC09C6C(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_5 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335((int32_t)0, L_6, (int32_t)1, NULL);
	}

IL_002b:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_8 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_10 = V_0;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_mB50D5AA503E72529C566F4EE0137B963F3FE5673(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetResult_m359B80F1DDD3F620C7468C447D5348089529F181_AdjustorThunk (RuntimeObject* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797>(__this);
	AsyncTaskMethodBuilder_1_SetResult_m359B80F1DDD3F620C7468C447D5348089529F181(_thisAdjusted, ___0_result, method);
}
// Method Definition Index: 8885
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mABA76C3ED04D3C65BAA79DDCE103FAB05EC40C33_gshared (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* __this, Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* ___0_completedTask, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9));
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		AsyncTaskMethodBuilder_1_SetResult_m359B80F1DDD3F620C7468C447D5348089529F181(__this, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetResult_mABA76C3ED04D3C65BAA79DDCE103FAB05EC40C33_AdjustorThunk (RuntimeObject* __this, Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* ___0_completedTask, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797>(__this);
	AsyncTaskMethodBuilder_1_SetResult_mABA76C3ED04D3C65BAA79DDCE103FAB05EC40C33(_thisAdjusted, ___0_completedTask, method);
}
// Method Definition Index: 8886
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m0FA6E3BCDEFBE9E3ED255A939D64874D3F875C1F_gshared (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m48238D6774C93E57C332776A6554A23FDB5F96DA(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7, (RuntimeObject*)L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10, L_12, (RuntimeObject*)L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetException_m0FA6E3BCDEFBE9E3ED255A939D64874D3F875C1F_AdjustorThunk (RuntimeObject* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797>(__this);
	AsyncTaskMethodBuilder_1_SetException_m0FA6E3BCDEFBE9E3ED255A939D64874D3F875C1F(_thisAdjusted, ___0_exception, method);
}
// Method Definition Index: 8887
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* AsyncTaskMethodBuilder_1_GetTaskForResult_m67F6A4AD611FF3FB5A9FF21B8F6AF483DAC09C6C_gshared (OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* G_B5_0 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9));
	}
	{
		bool L_1 = (il2cpp_defaults.boolean_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_2 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_3 = L_2;
		bool L_4;
		il2cpp_codegen_box_unbox((&L_3), (&L_4), sizeof(bool), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.boolean_class);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___FalseTask;
		G_B5_0 = L_5;
		goto IL_0047;
	}

IL_0042:
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___TrueTask;
		G_B5_0 = L_6;
	}

IL_0047:
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_7;
		L_7 = JitHelpers_UnsafeCast_TisTask_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F_mE080E821ED209DAF60F6AB8C9A449191B4F9C6CC((RuntimeObject*)G_B5_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_7;
	}

IL_004d:
	{
		bool L_8 = (il2cpp_defaults.int32_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_8)
		{
			goto IL_0092;
		}
	}
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_9 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_10 = L_9;
		int32_t L_11;
		il2cpp_codegen_box_unbox((&L_10), (&L_11), sizeof(int32_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.int32_class);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)9))))
		{
			goto IL_0259;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) < ((int32_t)(-1))))
		{
			goto IL_0259;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8* L_14 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___Int32Tasks;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, (-1)));
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_18;
		L_18 = JitHelpers_UnsafeCast_TisTask_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F_mE080E821ED209DAF60F6AB8C9A449191B4F9C6CC((RuntimeObject*)L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_18;
	}

IL_0092:
	{
		bool L_19 = (il2cpp_defaults.uint32_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_19)
		{
			goto IL_00bd;
		}
	}
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_20 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_21 = L_20;
		uint32_t L_22;
		il2cpp_codegen_box_unbox((&L_21), (&L_22), sizeof(uint32_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.uint32_class);
		if (!L_22)
		{
			goto IL_0245;
		}
	}

IL_00bd:
	{
		bool L_23 = (il2cpp_defaults.byte_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_23)
		{
			goto IL_00e8;
		}
	}
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_24 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_25 = L_24;
		uint8_t L_26;
		il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(uint8_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.byte_class);
		if (!L_26)
		{
			goto IL_0245;
		}
	}

IL_00e8:
	{
		bool L_27 = (il2cpp_defaults.sbyte_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_27)
		{
			goto IL_0113;
		}
	}
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_28 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_29 = L_28;
		int8_t L_30;
		il2cpp_codegen_box_unbox((&L_29), (&L_30), sizeof(int8_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.sbyte_class);
		if (!L_30)
		{
			goto IL_0245;
		}
	}

IL_0113:
	{
		bool L_31 = (il2cpp_defaults.char_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_31)
		{
			goto IL_013e;
		}
	}
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_32 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_33 = L_32;
		Il2CppChar L_34;
		il2cpp_codegen_box_unbox((&L_33), (&L_34), sizeof(Il2CppChar), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.char_class);
		if (!L_34)
		{
			goto IL_0245;
		}
	}

IL_013e:
	{
		bool L_35 = (il2cpp_defaults.int64_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_35)
		{
			goto IL_0169;
		}
	}
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_36 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_37 = L_36;
		int64_t L_38;
		il2cpp_codegen_box_unbox((&L_37), (&L_38), sizeof(int64_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.int64_class);
		if (!L_38)
		{
			goto IL_0245;
		}
	}

IL_0169:
	{
		bool L_39 = (il2cpp_defaults.uint64_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_39)
		{
			goto IL_0194;
		}
	}
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_40 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_41 = L_40;
		uint64_t L_42;
		il2cpp_codegen_box_unbox((&L_41), (&L_42), sizeof(uint64_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.uint64_class);
		if (!L_42)
		{
			goto IL_0245;
		}
	}

IL_0194:
	{
		bool L_43 = (il2cpp_defaults.int16_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_43)
		{
			goto IL_01bf;
		}
	}
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_44 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_45 = L_44;
		int16_t L_46;
		il2cpp_codegen_box_unbox((&L_45), (&L_46), sizeof(int16_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.int16_class);
		if (!L_46)
		{
			goto IL_0245;
		}
	}

IL_01bf:
	{
		bool L_47 = (il2cpp_defaults.uint16_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_47)
		{
			goto IL_01e7;
		}
	}
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_48 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_49 = L_48;
		uint16_t L_50;
		il2cpp_codegen_box_unbox((&L_49), (&L_50), sizeof(uint16_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.uint16_class);
		if (!L_50)
		{
			goto IL_0245;
		}
	}

IL_01e7:
	{
		bool L_51 = (il2cpp_defaults.int_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_51)
		{
			goto IL_0216;
		}
	}
	{
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_53 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_54 = L_53;
		intptr_t L_55;
		il2cpp_codegen_box_unbox((&L_54), (&L_55), sizeof(intptr_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.int_class);
		bool L_56;
		L_56 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_52, L_55, NULL);
		if (L_56)
		{
			goto IL_0245;
		}
	}

IL_0216:
	{
		bool L_57 = (il2cpp_defaults.uint_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_57)
		{
			goto IL_0259;
		}
	}
	{
		uintptr_t L_58 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_59 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_60 = L_59;
		uintptr_t L_61;
		il2cpp_codegen_box_unbox((&L_60), (&L_61), sizeof(uintptr_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.uint_class);
		bool L_62;
		L_62 = UIntPtr_op_Equality_m6854CBDA705729A896265CF7D2BD522E3460DCFB(L_58, L_61, NULL);
		if (!L_62)
		{
			goto IL_0259;
		}
	}

IL_0245:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_63 = ((AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask;
		return L_63;
	}

IL_0259:
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_64 = ___0_result;
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_65 = (Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Task_1__ctor_m4D4BD509ECDCE011E9B576253B3A653E552612B9(L_65, L_64, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_65;
	}
}
// Method Definition Index: 8888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_m641764735B59508622049C9E3730F078E19C5CCD_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9));
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisOVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9_m3753A58FAA7436486AA441B6A740C0FB1F81DADA(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		((AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask), (void*)L_1);
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
// Method Definition Index: 8878
// Method Definition Index: 8880
// Method Definition Index: 8883
// Method Definition Index: 8884
// Method Definition Index: 8885
// Method Definition Index: 8886
// Method Definition Index: 8887
// Method Definition Index: 8888
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8878
// Method Definition Index: 8880
// Method Definition Index: 8883
// Method Definition Index: 8884
// Method Definition Index: 8885
// Method Definition Index: 8886
// Method Definition Index: 8887
// Method Definition Index: 8888
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8878
// Method Definition Index: 8880
// Method Definition Index: 8883
// Method Definition Index: 8884
// Method Definition Index: 8885
// Method Definition Index: 8886
// Method Definition Index: 8887
// Method Definition Index: 8888
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8878
// Method Definition Index: 8880
// Method Definition Index: 8883
// Method Definition Index: 8884
// Method Definition Index: 8885
// Method Definition Index: 8886
// Method Definition Index: 8887
// Method Definition Index: 8888
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8878
// Method Definition Index: 8880
// Method Definition Index: 8883
// Method Definition Index: 8884
// Method Definition Index: 8885
// Method Definition Index: 8886
// Method Definition Index: 8887
// Method Definition Index: 8888
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8878
// Method Definition Index: 8880
// Method Definition Index: 8883
// Method Definition Index: 8884
// Method Definition Index: 8885
// Method Definition Index: 8886
// Method Definition Index: 8887
// Method Definition Index: 8888
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8878
// Method Definition Index: 8880
// Method Definition Index: 8883
// Method Definition Index: 8884
// Method Definition Index: 8885
// Method Definition Index: 8886
// Method Definition Index: 8887
// Method Definition Index: 8888
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8878
// Method Definition Index: 8880
// Method Definition Index: 8883
// Method Definition Index: 8884
// Method Definition Index: 8885
// Method Definition Index: 8886
// Method Definition Index: 8887
// Method Definition Index: 8888
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8878
// Method Definition Index: 8880
// Method Definition Index: 8883
// Method Definition Index: 8884
// Method Definition Index: 8885
// Method Definition Index: 8886
// Method Definition Index: 8887
// Method Definition Index: 8888
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8878
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A AsyncTaskMethodBuilder_1_Create_mE1FBB928A6156FDA739DCE107B49A57209764E03_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A));
		AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 8880
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mC2B0A2D78E1927E162A724135D91C957FFCC5651_gshared (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncMethodBuilderCore_SetStateMachine_m156C470618D0E6B9E018904A491BBD44466EBFDA(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetStateMachine_mC2B0A2D78E1927E162A724135D91C957FFCC5651_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A>(__this);
	AsyncTaskMethodBuilder_1_SetStateMachine_mC2B0A2D78E1927E162A724135D91C957FFCC5651(_thisAdjusted, ___0_stateMachine, method);
}
// Method Definition Index: 8883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* AsyncTaskMethodBuilder_1_get_Task_m49E13587633B83D706E7F85D3122B6583813C2D9_gshared (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* __this, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_2 = (Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Task_1__ctor_m9AF80B7E21D4365B610C21031E29FCB83CD32D27(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* AsyncTaskMethodBuilder_1_get_Task_m49E13587633B83D706E7F85D3122B6583813C2D9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A>(__this);
	Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* _returnValue;
	_returnValue = AsyncTaskMethodBuilder_1_get_Task_m49E13587633B83D706E7F85D3122B6583813C2D9(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 8884
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mD18342A940803A50A2B8530196601B5A54707F8D_gshared (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* __this, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_2 = ___0_result;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_mE32CD0E7E25478FB00E104356F76E6629CA92A38(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_5 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335((int32_t)0, L_6, (int32_t)1, NULL);
	}

IL_002b:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_8 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_10 = V_0;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_m0CB92709B2014A703FB57915E6ECB17C24789664(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetResult_mD18342A940803A50A2B8530196601B5A54707F8D_AdjustorThunk (RuntimeObject* __this, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A>(__this);
	AsyncTaskMethodBuilder_1_SetResult_mD18342A940803A50A2B8530196601B5A54707F8D(_thisAdjusted, ___0_result, method);
}
// Method Definition Index: 8885
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mCCDB51B3AF567DC9F791B29E74A11E1B7CE99D99_gshared (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* __this, Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* ___0_completedTask, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387));
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		AsyncTaskMethodBuilder_1_SetResult_mD18342A940803A50A2B8530196601B5A54707F8D(__this, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetResult_mCCDB51B3AF567DC9F791B29E74A11E1B7CE99D99_AdjustorThunk (RuntimeObject* __this, Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* ___0_completedTask, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A>(__this);
	AsyncTaskMethodBuilder_1_SetResult_mCCDB51B3AF567DC9F791B29E74A11E1B7CE99D99(_thisAdjusted, ___0_completedTask, method);
}
// Method Definition Index: 8886
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m8553CC1B427969FE40F44B34DB84F9C76785B4B6_gshared (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m49E13587633B83D706E7F85D3122B6583813C2D9(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7, (RuntimeObject*)L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10, L_12, (RuntimeObject*)L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetException_m8553CC1B427969FE40F44B34DB84F9C76785B4B6_AdjustorThunk (RuntimeObject* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A>(__this);
	AsyncTaskMethodBuilder_1_SetException_m8553CC1B427969FE40F44B34DB84F9C76785B4B6(_thisAdjusted, ___0_exception, method);
}
// Method Definition Index: 8887
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* AsyncTaskMethodBuilder_1_GetTaskForResult_mE32CD0E7E25478FB00E104356F76E6629CA92A38_gshared (OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* G_B5_0 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387));
	}
	{
		bool L_1 = (il2cpp_defaults.boolean_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_2 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_3 = L_2;
		bool L_4;
		il2cpp_codegen_box_unbox((&L_3), (&L_4), sizeof(bool), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.boolean_class);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___FalseTask;
		G_B5_0 = L_5;
		goto IL_0047;
	}

IL_0042:
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___TrueTask;
		G_B5_0 = L_6;
	}

IL_0047:
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_7;
		L_7 = JitHelpers_UnsafeCast_TisTask_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7_m5961D8081C19D6877260F9C7EFFF6C6EBF9365D3((RuntimeObject*)G_B5_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_7;
	}

IL_004d:
	{
		bool L_8 = (il2cpp_defaults.int32_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_8)
		{
			goto IL_0092;
		}
	}
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_9 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_10 = L_9;
		int32_t L_11;
		il2cpp_codegen_box_unbox((&L_10), (&L_11), sizeof(int32_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.int32_class);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)9))))
		{
			goto IL_0259;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) < ((int32_t)(-1))))
		{
			goto IL_0259;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8* L_14 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___Int32Tasks;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, (-1)));
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_18;
		L_18 = JitHelpers_UnsafeCast_TisTask_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7_m5961D8081C19D6877260F9C7EFFF6C6EBF9365D3((RuntimeObject*)L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_18;
	}

IL_0092:
	{
		bool L_19 = (il2cpp_defaults.uint32_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_19)
		{
			goto IL_00bd;
		}
	}
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_20 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_21 = L_20;
		uint32_t L_22;
		il2cpp_codegen_box_unbox((&L_21), (&L_22), sizeof(uint32_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.uint32_class);
		if (!L_22)
		{
			goto IL_0245;
		}
	}

IL_00bd:
	{
		bool L_23 = (il2cpp_defaults.byte_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_23)
		{
			goto IL_00e8;
		}
	}
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_24 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_25 = L_24;
		uint8_t L_26;
		il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(uint8_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.byte_class);
		if (!L_26)
		{
			goto IL_0245;
		}
	}

IL_00e8:
	{
		bool L_27 = (il2cpp_defaults.sbyte_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_27)
		{
			goto IL_0113;
		}
	}
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_28 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_29 = L_28;
		int8_t L_30;
		il2cpp_codegen_box_unbox((&L_29), (&L_30), sizeof(int8_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.sbyte_class);
		if (!L_30)
		{
			goto IL_0245;
		}
	}

IL_0113:
	{
		bool L_31 = (il2cpp_defaults.char_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_31)
		{
			goto IL_013e;
		}
	}
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_32 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_33 = L_32;
		Il2CppChar L_34;
		il2cpp_codegen_box_unbox((&L_33), (&L_34), sizeof(Il2CppChar), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.char_class);
		if (!L_34)
		{
			goto IL_0245;
		}
	}

IL_013e:
	{
		bool L_35 = (il2cpp_defaults.int64_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_35)
		{
			goto IL_0169;
		}
	}
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_36 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_37 = L_36;
		int64_t L_38;
		il2cpp_codegen_box_unbox((&L_37), (&L_38), sizeof(int64_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.int64_class);
		if (!L_38)
		{
			goto IL_0245;
		}
	}

IL_0169:
	{
		bool L_39 = (il2cpp_defaults.uint64_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_39)
		{
			goto IL_0194;
		}
	}
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_40 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_41 = L_40;
		uint64_t L_42;
		il2cpp_codegen_box_unbox((&L_41), (&L_42), sizeof(uint64_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.uint64_class);
		if (!L_42)
		{
			goto IL_0245;
		}
	}

IL_0194:
	{
		bool L_43 = (il2cpp_defaults.int16_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_43)
		{
			goto IL_01bf;
		}
	}
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_44 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_45 = L_44;
		int16_t L_46;
		il2cpp_codegen_box_unbox((&L_45), (&L_46), sizeof(int16_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.int16_class);
		if (!L_46)
		{
			goto IL_0245;
		}
	}

IL_01bf:
	{
		bool L_47 = (il2cpp_defaults.uint16_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_47)
		{
			goto IL_01e7;
		}
	}
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_48 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_49 = L_48;
		uint16_t L_50;
		il2cpp_codegen_box_unbox((&L_49), (&L_50), sizeof(uint16_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.uint16_class);
		if (!L_50)
		{
			goto IL_0245;
		}
	}

IL_01e7:
	{
		bool L_51 = (il2cpp_defaults.int_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_51)
		{
			goto IL_0216;
		}
	}
	{
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_53 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_54 = L_53;
		intptr_t L_55;
		il2cpp_codegen_box_unbox((&L_54), (&L_55), sizeof(intptr_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.int_class);
		bool L_56;
		L_56 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_52, L_55, NULL);
		if (L_56)
		{
			goto IL_0245;
		}
	}

IL_0216:
	{
		bool L_57 = (il2cpp_defaults.uint_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_57)
		{
			goto IL_0259;
		}
	}
	{
		uintptr_t L_58 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_59 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_60 = L_59;
		uintptr_t L_61;
		il2cpp_codegen_box_unbox((&L_60), (&L_61), sizeof(uintptr_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.uint_class);
		bool L_62;
		L_62 = UIntPtr_op_Equality_m6854CBDA705729A896265CF7D2BD522E3460DCFB(L_58, L_61, NULL);
		if (!L_62)
		{
			goto IL_0259;
		}
	}

IL_0245:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_63 = ((AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask;
		return L_63;
	}

IL_0259:
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_64 = ___0_result;
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_65 = (Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Task_1__ctor_m541BFC0D49AFB557E47F03FEE5C368C138FA8128(L_65, L_64, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_65;
	}
}
// Method Definition Index: 8888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_m2C34B8688B86D6F7E76D15906BF8153781622677_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387));
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387_mA8F3E545AE2A2D8B0D14213741CF6F3FCAC71F0F(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		((AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask), (void*)L_1);
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
// Method Definition Index: 8878
// Method Definition Index: 8880
// Method Definition Index: 8883
// Method Definition Index: 8884
// Method Definition Index: 8885
// Method Definition Index: 8886
// Method Definition Index: 8887
// Method Definition Index: 8888
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8878
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B AsyncTaskMethodBuilder_1_Create_m0348DECF8D296DA7A374CCAF88E42379B41B7171_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B));
		AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 8880
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m01C859B5FB9F1692FBC1C3CAC2CE1B821FECE3FF_gshared (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncMethodBuilderCore_SetStateMachine_m156C470618D0E6B9E018904A491BBD44466EBFDA(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetStateMachine_m01C859B5FB9F1692FBC1C3CAC2CE1B821FECE3FF_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B>(__this);
	AsyncTaskMethodBuilder_1_SetStateMachine_m01C859B5FB9F1692FBC1C3CAC2CE1B821FECE3FF(_thisAdjusted, ___0_stateMachine, method);
}
// Method Definition Index: 8883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* AsyncTaskMethodBuilder_1_get_Task_m92E592769E741DEDCDD787CC7ADBD08C06A32314_gshared (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* __this, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_2 = (Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Task_1__ctor_m75C1D611CBE6A149C79A322EA8F1CF2E65865149(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* AsyncTaskMethodBuilder_1_get_Task_m92E592769E741DEDCDD787CC7ADBD08C06A32314_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B>(__this);
	Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* _returnValue;
	_returnValue = AsyncTaskMethodBuilder_1_get_Task_m92E592769E741DEDCDD787CC7ADBD08C06A32314(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 8884
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mA36BEF799A8E58526F3FC16F10E1FA407B903FE4_gshared (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* __this, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_2 = ___0_result;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_m067DB75F372431CFB5C8A8F9427357714414B5BF(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_5 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335((int32_t)0, L_6, (int32_t)1, NULL);
	}

IL_002b:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_8 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_10 = V_0;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_m9203F629B87AA23B46F58CBDDBAD8CD60184C8B9(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetResult_mA36BEF799A8E58526F3FC16F10E1FA407B903FE4_AdjustorThunk (RuntimeObject* __this, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B>(__this);
	AsyncTaskMethodBuilder_1_SetResult_mA36BEF799A8E58526F3FC16F10E1FA407B903FE4(_thisAdjusted, ___0_result, method);
}
// Method Definition Index: 8885
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m508B0A955AAB580845391FC5F547916629D25057_gshared (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* __this, Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* ___0_completedTask, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8));
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		AsyncTaskMethodBuilder_1_SetResult_mA36BEF799A8E58526F3FC16F10E1FA407B903FE4(__this, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetResult_m508B0A955AAB580845391FC5F547916629D25057_AdjustorThunk (RuntimeObject* __this, Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* ___0_completedTask, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B>(__this);
	AsyncTaskMethodBuilder_1_SetResult_m508B0A955AAB580845391FC5F547916629D25057(_thisAdjusted, ___0_completedTask, method);
}
// Method Definition Index: 8886
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m7B12174F42A526861DF8EF8CB8F21EB99A529266_gshared (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m92E592769E741DEDCDD787CC7ADBD08C06A32314(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7, (RuntimeObject*)L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10, L_12, (RuntimeObject*)L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetException_m7B12174F42A526861DF8EF8CB8F21EB99A529266_AdjustorThunk (RuntimeObject* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B>(__this);
	AsyncTaskMethodBuilder_1_SetException_m7B12174F42A526861DF8EF8CB8F21EB99A529266(_thisAdjusted, ___0_exception, method);
}
// Method Definition Index: 8887
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* AsyncTaskMethodBuilder_1_GetTaskForResult_m067DB75F372431CFB5C8A8F9427357714414B5BF_gshared (OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* G_B5_0 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8));
	}
	{
		bool L_1 = (il2cpp_defaults.boolean_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_2 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_3 = L_2;
		bool L_4;
		il2cpp_codegen_box_unbox((&L_3), (&L_4), sizeof(bool), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.boolean_class);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___FalseTask;
		G_B5_0 = L_5;
		goto IL_0047;
	}

IL_0042:
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___TrueTask;
		G_B5_0 = L_6;
	}

IL_0047:
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_7;
		L_7 = JitHelpers_UnsafeCast_TisTask_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C_m9166DCF087B082FD222A55A6B16A55E31E5C8259((RuntimeObject*)G_B5_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_7;
	}

IL_004d:
	{
		bool L_8 = (il2cpp_defaults.int32_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_8)
		{
			goto IL_0092;
		}
	}
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_9 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_10 = L_9;
		int32_t L_11;
		il2cpp_codegen_box_unbox((&L_10), (&L_11), sizeof(int32_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.int32_class);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)9))))
		{
			goto IL_0259;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) < ((int32_t)(-1))))
		{
			goto IL_0259;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8* L_14 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___Int32Tasks;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, (-1)));
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_18;
		L_18 = JitHelpers_UnsafeCast_TisTask_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C_m9166DCF087B082FD222A55A6B16A55E31E5C8259((RuntimeObject*)L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_18;
	}

IL_0092:
	{
		bool L_19 = (il2cpp_defaults.uint32_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_19)
		{
			goto IL_00bd;
		}
	}
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_20 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_21 = L_20;
		uint32_t L_22;
		il2cpp_codegen_box_unbox((&L_21), (&L_22), sizeof(uint32_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.uint32_class);
		if (!L_22)
		{
			goto IL_0245;
		}
	}

IL_00bd:
	{
		bool L_23 = (il2cpp_defaults.byte_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_23)
		{
			goto IL_00e8;
		}
	}
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_24 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_25 = L_24;
		uint8_t L_26;
		il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(uint8_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.byte_class);
		if (!L_26)
		{
			goto IL_0245;
		}
	}

IL_00e8:
	{
		bool L_27 = (il2cpp_defaults.sbyte_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_27)
		{
			goto IL_0113;
		}
	}
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_28 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_29 = L_28;
		int8_t L_30;
		il2cpp_codegen_box_unbox((&L_29), (&L_30), sizeof(int8_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.sbyte_class);
		if (!L_30)
		{
			goto IL_0245;
		}
	}

IL_0113:
	{
		bool L_31 = (il2cpp_defaults.char_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_31)
		{
			goto IL_013e;
		}
	}
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_32 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_33 = L_32;
		Il2CppChar L_34;
		il2cpp_codegen_box_unbox((&L_33), (&L_34), sizeof(Il2CppChar), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.char_class);
		if (!L_34)
		{
			goto IL_0245;
		}
	}

IL_013e:
	{
		bool L_35 = (il2cpp_defaults.int64_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_35)
		{
			goto IL_0169;
		}
	}
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_36 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_37 = L_36;
		int64_t L_38;
		il2cpp_codegen_box_unbox((&L_37), (&L_38), sizeof(int64_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.int64_class);
		if (!L_38)
		{
			goto IL_0245;
		}
	}

IL_0169:
	{
		bool L_39 = (il2cpp_defaults.uint64_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_39)
		{
			goto IL_0194;
		}
	}
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_40 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_41 = L_40;
		uint64_t L_42;
		il2cpp_codegen_box_unbox((&L_41), (&L_42), sizeof(uint64_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.uint64_class);
		if (!L_42)
		{
			goto IL_0245;
		}
	}

IL_0194:
	{
		bool L_43 = (il2cpp_defaults.int16_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_43)
		{
			goto IL_01bf;
		}
	}
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_44 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_45 = L_44;
		int16_t L_46;
		il2cpp_codegen_box_unbox((&L_45), (&L_46), sizeof(int16_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.int16_class);
		if (!L_46)
		{
			goto IL_0245;
		}
	}

IL_01bf:
	{
		bool L_47 = (il2cpp_defaults.uint16_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_47)
		{
			goto IL_01e7;
		}
	}
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_48 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_49 = L_48;
		uint16_t L_50;
		il2cpp_codegen_box_unbox((&L_49), (&L_50), sizeof(uint16_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.uint16_class);
		if (!L_50)
		{
			goto IL_0245;
		}
	}

IL_01e7:
	{
		bool L_51 = (il2cpp_defaults.int_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_51)
		{
			goto IL_0216;
		}
	}
	{
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_53 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_54 = L_53;
		intptr_t L_55;
		il2cpp_codegen_box_unbox((&L_54), (&L_55), sizeof(intptr_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.int_class);
		bool L_56;
		L_56 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_52, L_55, NULL);
		if (L_56)
		{
			goto IL_0245;
		}
	}

IL_0216:
	{
		bool L_57 = (il2cpp_defaults.uint_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_57)
		{
			goto IL_0259;
		}
	}
	{
		uintptr_t L_58 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_59 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_60 = L_59;
		uintptr_t L_61;
		il2cpp_codegen_box_unbox((&L_60), (&L_61), sizeof(uintptr_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.uint_class);
		bool L_62;
		L_62 = UIntPtr_op_Equality_m6854CBDA705729A896265CF7D2BD522E3460DCFB(L_58, L_61, NULL);
		if (!L_62)
		{
			goto IL_0259;
		}
	}

IL_0245:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_63 = ((AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask;
		return L_63;
	}

IL_0259:
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_64 = ___0_result;
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_65 = (Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Task_1__ctor_m19D57D02F2C0DEE7393502186931AB78CEF41EEE(L_65, L_64, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_65;
	}
}
// Method Definition Index: 8888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_mAED34C8868DFBAC35AA8773A6D8B7EAA1A14AEC5_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8));
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8_mC640EA46869E11911ABB7A864919549B88CFF94C(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		((AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask), (void*)L_1);
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
// Method Definition Index: 8878
// Method Definition Index: 8880
// Method Definition Index: 8883
// Method Definition Index: 8884
// Method Definition Index: 8885
// Method Definition Index: 8886
// Method Definition Index: 8887
// Method Definition Index: 8888
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8878
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5 AsyncTaskMethodBuilder_1_Create_m8CF67DF2F2C7C37E6CA46168F828074AFBE4D21D_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5));
		AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 8880
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m2C1E7220C803A3E07795628C521525E8398E9EB5_gshared (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncMethodBuilderCore_SetStateMachine_m156C470618D0E6B9E018904A491BBD44466EBFDA(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetStateMachine_m2C1E7220C803A3E07795628C521525E8398E9EB5_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5>(__this);
	AsyncTaskMethodBuilder_1_SetStateMachine_m2C1E7220C803A3E07795628C521525E8398E9EB5(_thisAdjusted, ___0_stateMachine, method);
}
// Method Definition Index: 8883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* AsyncTaskMethodBuilder_1_get_Task_m39CA24472D2EEFF162623CFA59CE7431A2715B56_gshared (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* __this, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_2 = (Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Task_1__ctor_m2D1462857395F1C85B4A7E79CDD63B5BB391A0FC(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* AsyncTaskMethodBuilder_1_get_Task_m39CA24472D2EEFF162623CFA59CE7431A2715B56_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5>(__this);
	Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* _returnValue;
	_returnValue = AsyncTaskMethodBuilder_1_get_Task_m39CA24472D2EEFF162623CFA59CE7431A2715B56(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 8884
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mBE3A4804C5B8834205E6DB359356A74C4CE559D7_gshared (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* __this, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_2 = ___0_result;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_mF084BE519715FD8045AB1BC65E80A349906F2073(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_5 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335((int32_t)0, L_6, (int32_t)1, NULL);
	}

IL_002b:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_8 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_10 = V_0;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_m2B77B5733D9DF23D82119B8392391F2E530C1435(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetResult_mBE3A4804C5B8834205E6DB359356A74C4CE559D7_AdjustorThunk (RuntimeObject* __this, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5>(__this);
	AsyncTaskMethodBuilder_1_SetResult_mBE3A4804C5B8834205E6DB359356A74C4CE559D7(_thisAdjusted, ___0_result, method);
}
// Method Definition Index: 8885
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mAE09C9555C653EBF9DD13CFBFBAEAAA356E2AD0D_gshared (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* __this, Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* ___0_completedTask, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D));
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		AsyncTaskMethodBuilder_1_SetResult_mBE3A4804C5B8834205E6DB359356A74C4CE559D7(__this, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetResult_mAE09C9555C653EBF9DD13CFBFBAEAAA356E2AD0D_AdjustorThunk (RuntimeObject* __this, Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* ___0_completedTask, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5>(__this);
	AsyncTaskMethodBuilder_1_SetResult_mAE09C9555C653EBF9DD13CFBFBAEAAA356E2AD0D(_thisAdjusted, ___0_completedTask, method);
}
// Method Definition Index: 8886
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m366B07CBB616AF29432B456A6D01739F0872D48C_gshared (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m39CA24472D2EEFF162623CFA59CE7431A2715B56(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7, (RuntimeObject*)L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10, L_12, (RuntimeObject*)L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetException_m366B07CBB616AF29432B456A6D01739F0872D48C_AdjustorThunk (RuntimeObject* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5>(__this);
	AsyncTaskMethodBuilder_1_SetException_m366B07CBB616AF29432B456A6D01739F0872D48C(_thisAdjusted, ___0_exception, method);
}
// Method Definition Index: 8887
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* AsyncTaskMethodBuilder_1_GetTaskForResult_mF084BE519715FD8045AB1BC65E80A349906F2073_gshared (OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* G_B5_0 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D));
	}
	{
		bool L_1 = (il2cpp_defaults.boolean_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_2 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_3 = L_2;
		bool L_4;
		il2cpp_codegen_box_unbox((&L_3), (&L_4), sizeof(bool), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.boolean_class);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___FalseTask;
		G_B5_0 = L_5;
		goto IL_0047;
	}

IL_0042:
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___TrueTask;
		G_B5_0 = L_6;
	}

IL_0047:
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_7;
		L_7 = JitHelpers_UnsafeCast_TisTask_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4_mCF03DE27861770061661F941FD86938EB0EAB19B((RuntimeObject*)G_B5_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_7;
	}

IL_004d:
	{
		bool L_8 = (il2cpp_defaults.int32_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_8)
		{
			goto IL_0092;
		}
	}
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_9 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_10 = L_9;
		int32_t L_11;
		il2cpp_codegen_box_unbox((&L_10), (&L_11), sizeof(int32_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.int32_class);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)9))))
		{
			goto IL_0259;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) < ((int32_t)(-1))))
		{
			goto IL_0259;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8* L_14 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___Int32Tasks;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, (-1)));
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_18;
		L_18 = JitHelpers_UnsafeCast_TisTask_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4_mCF03DE27861770061661F941FD86938EB0EAB19B((RuntimeObject*)L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_18;
	}

IL_0092:
	{
		bool L_19 = (il2cpp_defaults.uint32_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_19)
		{
			goto IL_00bd;
		}
	}
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_20 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_21 = L_20;
		uint32_t L_22;
		il2cpp_codegen_box_unbox((&L_21), (&L_22), sizeof(uint32_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.uint32_class);
		if (!L_22)
		{
			goto IL_0245;
		}
	}

IL_00bd:
	{
		bool L_23 = (il2cpp_defaults.byte_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_23)
		{
			goto IL_00e8;
		}
	}
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_24 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_25 = L_24;
		uint8_t L_26;
		il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(uint8_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.byte_class);
		if (!L_26)
		{
			goto IL_0245;
		}
	}

IL_00e8:
	{
		bool L_27 = (il2cpp_defaults.sbyte_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_27)
		{
			goto IL_0113;
		}
	}
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_28 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_29 = L_28;
		int8_t L_30;
		il2cpp_codegen_box_unbox((&L_29), (&L_30), sizeof(int8_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.sbyte_class);
		if (!L_30)
		{
			goto IL_0245;
		}
	}

IL_0113:
	{
		bool L_31 = (il2cpp_defaults.char_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_31)
		{
			goto IL_013e;
		}
	}
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_32 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_33 = L_32;
		Il2CppChar L_34;
		il2cpp_codegen_box_unbox((&L_33), (&L_34), sizeof(Il2CppChar), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.char_class);
		if (!L_34)
		{
			goto IL_0245;
		}
	}

IL_013e:
	{
		bool L_35 = (il2cpp_defaults.int64_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_35)
		{
			goto IL_0169;
		}
	}
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_36 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_37 = L_36;
		int64_t L_38;
		il2cpp_codegen_box_unbox((&L_37), (&L_38), sizeof(int64_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.int64_class);
		if (!L_38)
		{
			goto IL_0245;
		}
	}

IL_0169:
	{
		bool L_39 = (il2cpp_defaults.uint64_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_39)
		{
			goto IL_0194;
		}
	}
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_40 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_41 = L_40;
		uint64_t L_42;
		il2cpp_codegen_box_unbox((&L_41), (&L_42), sizeof(uint64_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.uint64_class);
		if (!L_42)
		{
			goto IL_0245;
		}
	}

IL_0194:
	{
		bool L_43 = (il2cpp_defaults.int16_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_43)
		{
			goto IL_01bf;
		}
	}
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_44 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_45 = L_44;
		int16_t L_46;
		il2cpp_codegen_box_unbox((&L_45), (&L_46), sizeof(int16_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.int16_class);
		if (!L_46)
		{
			goto IL_0245;
		}
	}

IL_01bf:
	{
		bool L_47 = (il2cpp_defaults.uint16_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_47)
		{
			goto IL_01e7;
		}
	}
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_48 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_49 = L_48;
		uint16_t L_50;
		il2cpp_codegen_box_unbox((&L_49), (&L_50), sizeof(uint16_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.uint16_class);
		if (!L_50)
		{
			goto IL_0245;
		}
	}

IL_01e7:
	{
		bool L_51 = (il2cpp_defaults.int_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_51)
		{
			goto IL_0216;
		}
	}
	{
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_53 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_54 = L_53;
		intptr_t L_55;
		il2cpp_codegen_box_unbox((&L_54), (&L_55), sizeof(intptr_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.int_class);
		bool L_56;
		L_56 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_52, L_55, NULL);
		if (L_56)
		{
			goto IL_0245;
		}
	}

IL_0216:
	{
		bool L_57 = (il2cpp_defaults.uint_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_57)
		{
			goto IL_0259;
		}
	}
	{
		uintptr_t L_58 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_59 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_60 = L_59;
		uintptr_t L_61;
		il2cpp_codegen_box_unbox((&L_60), (&L_61), sizeof(uintptr_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.uint_class);
		bool L_62;
		L_62 = UIntPtr_op_Equality_m6854CBDA705729A896265CF7D2BD522E3460DCFB(L_58, L_61, NULL);
		if (!L_62)
		{
			goto IL_0259;
		}
	}

IL_0245:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_63 = ((AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask;
		return L_63;
	}

IL_0259:
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_64 = ___0_result;
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_65 = (Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Task_1__ctor_m2A47910E1599CEE2DB645BACAB80F9248911C45F(L_65, L_64, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_65;
	}
}
// Method Definition Index: 8888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_m64380F6FC62F0F63DE32EED1A47036BBCA1BA08E_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D));
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D_m49ACC1E311C97A79F7CCC1D8DB7BBDB1142D37ED(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		((AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask), (void*)L_1);
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
// Method Definition Index: 8878
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F AsyncTaskMethodBuilder_1_Create_m0707577EBD4FEA3C68DF5D5BD14C6B8EC8CBA65C_gshared (const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F));
		AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 8880
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mA9C9531F33E5C468F3C992F3259CA27903FFE633_gshared (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncMethodBuilderCore_SetStateMachine_m156C470618D0E6B9E018904A491BBD44466EBFDA(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetStateMachine_mA9C9531F33E5C468F3C992F3259CA27903FFE633_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F>(__this);
	AsyncTaskMethodBuilder_1_SetStateMachine_mA9C9531F33E5C468F3C992F3259CA27903FFE633(_thisAdjusted, ___0_stateMachine, method);
}
// Method Definition Index: 8883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* AsyncTaskMethodBuilder_1_get_Task_mE609D90E26A71ADDE2ADBB19849044C7CA4C4D4B_gshared (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* __this, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_2 = (Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Task_1__ctor_m773E32A0278D4184509216516F51E633D556249D(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* AsyncTaskMethodBuilder_1_get_Task_mE609D90E26A71ADDE2ADBB19849044C7CA4C4D4B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F>(__this);
	Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* _returnValue;
	_returnValue = AsyncTaskMethodBuilder_1_get_Task_mE609D90E26A71ADDE2ADBB19849044C7CA4C4D4B(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 8884
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mAE4006FB62DEEE49C59A099D0AF0262DC87FD274_gshared (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* __this, ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_2 = ___0_result;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_m46974E7C50DB99B6F03020A87DB2DEDF4334862A(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_5 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335((int32_t)0, L_6, (int32_t)1, NULL);
	}

IL_002b:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_8 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_10 = V_0;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_m35667C7E8DFA2602F26A7302980F2450EDBD28FA(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetResult_mAE4006FB62DEEE49C59A099D0AF0262DC87FD274_AdjustorThunk (RuntimeObject* __this, ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F>(__this);
	AsyncTaskMethodBuilder_1_SetResult_mAE4006FB62DEEE49C59A099D0AF0262DC87FD274(_thisAdjusted, ___0_result, method);
}
// Method Definition Index: 8885
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m3A9C5949460ED87484B817BE59DFCB8F122C31B2_gshared (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* __this, Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* ___0_completedTask, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F));
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		AsyncTaskMethodBuilder_1_SetResult_mAE4006FB62DEEE49C59A099D0AF0262DC87FD274(__this, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetResult_m3A9C5949460ED87484B817BE59DFCB8F122C31B2_AdjustorThunk (RuntimeObject* __this, Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* ___0_completedTask, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F>(__this);
	AsyncTaskMethodBuilder_1_SetResult_m3A9C5949460ED87484B817BE59DFCB8F122C31B2(_thisAdjusted, ___0_completedTask, method);
}
// Method Definition Index: 8886
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m877EAFFD76B7C235F9DCBE854DC10E9D71F691CE_gshared (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_mE609D90E26A71ADDE2ADBB19849044C7CA4C4D4B(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7, (RuntimeObject*)L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10, L_12, (RuntimeObject*)L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_SetException_m877EAFFD76B7C235F9DCBE854DC10E9D71F691CE_AdjustorThunk (RuntimeObject* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F>(__this);
	AsyncTaskMethodBuilder_1_SetException_m877EAFFD76B7C235F9DCBE854DC10E9D71F691CE(_thisAdjusted, ___0_exception, method);
}
// Method Definition Index: 8887
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* AsyncTaskMethodBuilder_1_GetTaskForResult_m46974E7C50DB99B6F03020A87DB2DEDF4334862A_gshared (ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* G_B5_0 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F));
	}
	{
		bool L_1 = (il2cpp_defaults.boolean_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_2 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_3 = L_2;
		bool L_4;
		il2cpp_codegen_box_unbox((&L_3), (&L_4), sizeof(bool), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.boolean_class);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___FalseTask;
		G_B5_0 = L_5;
		goto IL_0047;
	}

IL_0042:
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___TrueTask;
		G_B5_0 = L_6;
	}

IL_0047:
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_7;
		L_7 = JitHelpers_UnsafeCast_TisTask_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1_m7286BF58224B81BDD4C8B670A0756D3D47C9EB85((RuntimeObject*)G_B5_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_7;
	}

IL_004d:
	{
		bool L_8 = (il2cpp_defaults.int32_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_8)
		{
			goto IL_0092;
		}
	}
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_9 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_10 = L_9;
		int32_t L_11;
		il2cpp_codegen_box_unbox((&L_10), (&L_11), sizeof(int32_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.int32_class);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)9))))
		{
			goto IL_0259;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) < ((int32_t)(-1))))
		{
			goto IL_0259;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8* L_14 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___Int32Tasks;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, (-1)));
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_18;
		L_18 = JitHelpers_UnsafeCast_TisTask_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1_m7286BF58224B81BDD4C8B670A0756D3D47C9EB85((RuntimeObject*)L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_18;
	}

IL_0092:
	{
		bool L_19 = (il2cpp_defaults.uint32_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_19)
		{
			goto IL_00bd;
		}
	}
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_20 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_21 = L_20;
		uint32_t L_22;
		il2cpp_codegen_box_unbox((&L_21), (&L_22), sizeof(uint32_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.uint32_class);
		if (!L_22)
		{
			goto IL_0245;
		}
	}

IL_00bd:
	{
		bool L_23 = (il2cpp_defaults.byte_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_23)
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_24 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_25 = L_24;
		uint8_t L_26;
		il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(uint8_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.byte_class);
		if (!L_26)
		{
			goto IL_0245;
		}
	}

IL_00e8:
	{
		bool L_27 = (il2cpp_defaults.sbyte_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_27)
		{
			goto IL_0113;
		}
	}
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_28 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_29 = L_28;
		int8_t L_30;
		il2cpp_codegen_box_unbox((&L_29), (&L_30), sizeof(int8_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.sbyte_class);
		if (!L_30)
		{
			goto IL_0245;
		}
	}

IL_0113:
	{
		bool L_31 = (il2cpp_defaults.char_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_31)
		{
			goto IL_013e;
		}
	}
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_32 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_33 = L_32;
		Il2CppChar L_34;
		il2cpp_codegen_box_unbox((&L_33), (&L_34), sizeof(Il2CppChar), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.char_class);
		if (!L_34)
		{
			goto IL_0245;
		}
	}

IL_013e:
	{
		bool L_35 = (il2cpp_defaults.int64_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_35)
		{
			goto IL_0169;
		}
	}
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_36 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_37 = L_36;
		int64_t L_38;
		il2cpp_codegen_box_unbox((&L_37), (&L_38), sizeof(int64_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.int64_class);
		if (!L_38)
		{
			goto IL_0245;
		}
	}

IL_0169:
	{
		bool L_39 = (il2cpp_defaults.uint64_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_39)
		{
			goto IL_0194;
		}
	}
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_40 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_41 = L_40;
		uint64_t L_42;
		il2cpp_codegen_box_unbox((&L_41), (&L_42), sizeof(uint64_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.uint64_class);
		if (!L_42)
		{
			goto IL_0245;
		}
	}

IL_0194:
	{
		bool L_43 = (il2cpp_defaults.int16_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_43)
		{
			goto IL_01bf;
		}
	}
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_44 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_45 = L_44;
		int16_t L_46;
		il2cpp_codegen_box_unbox((&L_45), (&L_46), sizeof(int16_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.int16_class);
		if (!L_46)
		{
			goto IL_0245;
		}
	}

IL_01bf:
	{
		bool L_47 = (il2cpp_defaults.uint16_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_47)
		{
			goto IL_01e7;
		}
	}
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_48 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_49 = L_48;
		uint16_t L_50;
		il2cpp_codegen_box_unbox((&L_49), (&L_50), sizeof(uint16_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.uint16_class);
		if (!L_50)
		{
			goto IL_0245;
		}
	}

IL_01e7:
	{
		bool L_51 = (il2cpp_defaults.int_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_51)
		{
			goto IL_0216;
		}
	}
	{
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_53 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_54 = L_53;
		intptr_t L_55;
		il2cpp_codegen_box_unbox((&L_54), (&L_55), sizeof(intptr_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.int_class);
		bool L_56;
		L_56 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_52, L_55, NULL);
		if (L_56)
		{
			goto IL_0245;
		}
	}

IL_0216:
	{
		bool L_57 = (il2cpp_defaults.uint_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_57)
		{
			goto IL_0259;
		}
	}
	{
		uintptr_t L_58 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_59 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_60 = L_59;
		uintptr_t L_61;
		il2cpp_codegen_box_unbox((&L_60), (&L_61), sizeof(uintptr_t), il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_defaults.uint_class);
		bool L_62;
		L_62 = UIntPtr_op_Equality_m6854CBDA705729A896265CF7D2BD522E3460DCFB(L_58, L_61, NULL);
		if (!L_62)
		{
			goto IL_0259;
		}
	}

IL_0245:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_63 = ((AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask;
		return L_63;
	}

IL_0259:
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_64 = ___0_result;
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_65 = (Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Task_1__ctor_m850623421A0EDC334FF9766142F6A0EB81E94F31(L_65, L_64, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_65;
	}
}
// Method Definition Index: 8888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_m76F9917F167E1B5DCAC3C6A29C2E1359F003A40A_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	//<source_info:<no-source>:1>
	ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F));
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F_m50D5F3901C4DD732985EF18C8178CF77A93AB0F6(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		((AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___s_defaultResultTask), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 2454
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = __this->____cancellationToken;
		return L_0;
	}
}
// Method Definition Index: 4170
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
// Method Definition Index: 961
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m68AD1C3D3189530752991F04C1ACBEA52B47F8B6_gshared_inline (Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129* __this, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___0_x, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___1_y, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_x, ___1_y, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 961
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m3D0BD99863A18604C8E21A32D41D56217B26A9A4_gshared_inline (Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_x, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___1_y, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_x, ___1_y, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 961
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_mEA9A6C71B80C9370449DC9B10920F7B713E858F9_gshared_inline (Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333* __this, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___0_x, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___1_y, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_x, ___1_y, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 927
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBCE58B67D7100D1DFF3F431F7DF460E9C688745B_gshared_inline (Action_1_t69E611F01CC2051A51509BEA84FA829EA4D7C643* __this, AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30 ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef void (*FunctionPointerType) (RuntimeObject*, AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 927
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m15B09A14760255FA046745C030377D21CE4BE793_gshared_inline (Action_1_tB137F0A79CAAF9953E6A15AB8139E511ACF2041D* __this, AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95 ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef void (*FunctionPointerType) (RuntimeObject*, AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
