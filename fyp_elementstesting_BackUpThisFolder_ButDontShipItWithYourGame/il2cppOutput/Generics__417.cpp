#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
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
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct U3CU3Ec__DisplayClass14_0_t89A5A60117B7129B9ACC9A54255A62F8A1CEB2D9;
struct U3CU3Ec__DisplayClass14_0_tD635FE88F777EDF2A091F5E6BF573FBB8CBF69AC;
struct U3CU3Ec__DisplayClass14_0_tCA7ED17D26299D6937FD79C96DF871D31631463A;
struct U3CU3Ec__DisplayClass14_0_t5D4C23D14B87D94C0CC0921986B60DAF5DAC6D47;
struct U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47;
struct U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D;
struct U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB;
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137;
struct Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024;
struct Dictionary_2_tFB050FB91677DA51BF54AE7DAB9B3CEB02ED2AF6;
struct Dictionary_2_t29FB78C9E5DF443E2A5880E4E9B7C86E516670E0;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081;
struct Func_1_t8C5E17524CD4BD918CD05D6B159DE24957E6BC57;
struct Func_1_t1A2695781E82136CD487B3651F10C39AFFB20160;
struct Func_1_t4E40962A63D4F89E5895ED02E5565769CDAF69F2;
struct Func_1_t7382A5BFAECE2AC31A9BC40C1AD390DEFC04788C;
struct Func_1_t1ACCEB1BA30FC7EFE300C2C364EADE4AC38AC377;
struct Func_1_t80779C57AE159E6046EB1F069BAED1DCF063CB72;
struct Func_1_t8595E9DBFD03EAC6C0432DF9BB6F8D396D962400;
struct Func_1_t7F62161D516367707FC9A813746DA15F0C9F92E3;
struct Func_1_tB8D48550F0C370F5E3AAE4622412E5E5E5C69ECD;
struct Func_1_t939C76786560C28553DF1C31E4C4D15547FD99CF;
struct Func_1_tA9F0E9F0E0602093EB7420D536C9BC37CE96061C;
struct Func_1_t302F655F73122FE6BD75CE4CE4F571B545AAF171;
struct Func_1_t00739CCE4446985105AD10E884B0CC0B0B3F2685;
struct Func_1_t332F5DDA0884E441C5E4FBF8F424A7521A2D91F1;
struct Func_1_t2C7AB8C5D41366DA6920A7F404DFC92A24AFB15E;
struct Func_1_tC281455DA2DAFD6724BA91D2E8CAC67AC8F6DA65;
struct Func_1_t7CF9F5AD2251AF4C37E4EFBC5F79036331D84828;
struct Func_1_t2EBBE229235194C5474E250BDF76625FBE708DD1;
struct Func_1_t1EACF0FF78186D8AAD4E1CE5681EF33515EF5321;
struct Func_1_tB63FA76122F39A8574BBAD9B4AC1A5908CE39FD9;
struct Func_1_tD15BD1BBFCFF947D6A7DEA2673CAB316E1519F44;
struct Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3;
struct Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560;
struct Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C;
struct Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4;
struct Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6;
struct Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB;
struct Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659;
struct Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F;
struct Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6;
struct Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5;
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
struct Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2;
struct Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B;
struct Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD;
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7;
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
struct Func_2_t49E998685259ADE759F9329BF66F20DE8667006E;
struct Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9;
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2;
struct Func_2_tB5CF618947FC5173B54165B5CE46CAFC16D59714;
struct Func_4_t6B552DD029418AAC69B05335C9089B9B37E0C343;
struct Func_4_t6A859C6EE14C8D76A55D1500E9B04BC21C5194D3;
struct Func_4_t14DFDA9E85C76FDE067B3F2999C8107AFA671A64;
struct Func_4_t6DC62F76192ECD13986365A34FAD950A35AF225F;
struct Func_4_t28BFDA9BC4AB12540F2BE70B4FC23CD6FF5EB6F4;
struct Func_4_t2D728D40D290F8C65346C870D314F893B5896872;
struct Func_4_t2541034AEE4404468532C27DBC715DF62BDAE7F3;
struct IConstructor_1_t930621BC4EAA12FEB41FC2B594D13E4343E2618D;
struct IConstructor_1_t47BF822E241693DAECC4ECCAE299ADDA44CFC4C0;
struct IConstructor_1_t411A5B8EF19EC461DA4BC7BA6E5079CCEE6D62B2;
struct IConstructor_1_t8EB10577432A770766B16D8B92A40940DFB11E82;
struct IConstructor_1_t54F4F7648838AEA450736B43973635CB75783D91;
struct IConstructor_1_t300FDB711D1BC0C69B0B0E4AAAE0B6A647345B42;
struct IConstructor_1_tCCC70297AF4FE980FDC2AE0B96E147AC14599A3D;
struct IConstructor_1_tB1CEFFAE1CE6022168805E328A5CEABBE836716A;
struct IConstructor_1_tE34B96BC40F13146D7C2438B1CA0E4D1E47B1FED;
struct IConstructor_1_t95AC4FC1EA5E833F6A11E6EB5ADA01811A558279;
struct IConstructor_1_t28A8380765092C5D4291F5EDC06C99342EB825FB;
struct IConstructor_1_tB52973DDA944E82C16EE1B40EE3B0B77C3A1AA4D;
struct IConstructor_1_tDB1CE5779EED69233DDD6868F9CE38E960F8AC94;
struct IConstructor_1_t8524B017A05D85D47528F71F5E85596E7A503F9E;
struct IConstructor_1_t391A251ECF03B0C64D3671C41D00CBDFEC3FA357;
struct IConstructor_1_t0EB4E64ACB720943AF49F451A0D4359D442999FD;
struct IConstructor_1_t4B7C7EA4746B1E5758FDEF9AAE982D0BF8ACD539;
struct IConstructor_1_t1E8D6866DB6F30C638EE8ADE11DA73150187CE44;
struct IConstructor_1_tFA4915349F3839A9891E8602A2ED6786740ECD7D;
struct IConstructor_1_t459295021B8FCB54CA76176BD223C9BA51557E32;
struct IConstructor_1_t9E5C643DA9C5622B68D840EDFF390A70ECF2AEA2;
struct IConstructor_1_tD2F0204B018332308BBFE26F5F8B8042F4D3D059;
struct IConstructor_1_tE51AA760737252530326DC43276D34FA2CEE0F9A;
struct IConstructor_1_t796EE1140793AFF116FA892025F4E9DC1EE01995;
struct IConstructor_1_t6ED67945DAFBA6E7912283FDDA2347783F44FB5D;
struct IConstructor_1_t5F014F2823FA5977FD2248DA641BFA7ACC19B72E;
struct IConstructor_1_t49F74C6B918F55A7E99A10D938EF2B58FFCEDBA1;
struct IConstructor_1_t5AD3C56A5054DF1BFCEA9954D4AB6E6CFB76B7CA;
struct IConstructor_1_t2522DB3785B984B4627CA8176690F60C47D1BAD3;
struct IConstructor_1_t45B3820CA05F1B9B9E49A3CACF573C4E2FB8C199;
struct IConstructor_1_t0BEAEB22F43824D35B4CDE12AAABB4B7FB0FD543;
struct IConstructor_1_t943F43022B5DD77D92BF54CCD22377BDC30F631E;
struct IConstructor_1_tB4817FCBFD3A44F10C3F86B2C4E1B216E1FCEDB5;
struct IPropertyBag_1_tFBCE7A7420E0A61651C8A11A7451DC0876AC3988;
struct IPropertyBag_1_t34647E6DBA2B3FBAF772A30AB58389B957EB2353;
struct IPropertyBag_1_tE29BEC42A2C3E7DF88983A6F59E88D596AEC9E43;
struct IPropertyBag_1_t4503949B37B2AF7B859307C5B9FC0D205FBBB58C;
struct IPropertyBag_1_t0C3656FAD043E643AE0AF2CE556A8B0EFC08BAF0;
struct IPropertyBag_1_t12476CBFA03E553669FC0F78B8B392643D0EA98D;
struct IPropertyBag_1_tC89C7D801308BB118F51FC38D2EDF9150099CD87;
struct IPropertyBag_1_tA5F5E06CD7B6D9DA44B0C96DD751E125A2838965;
struct IPropertyBag_1_tB4F574342A3326282E305E935876E09BA8AC2A2E;
struct IPropertyBag_1_t0F569CB3E3DD679044B9F9E594B94E991D876F55;
struct IPropertyBag_1_tD0AC48FB723053E10D50C4F4ACA187049C60A52A;
struct IPropertyBag_1_tA86B0AA7564B969B39432363A3CC153860369CF8;
struct List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B;
struct List_1_tBD2E4781BB0BD1FCD30E6D3586CA13AFD0ABE6F7;
struct List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268;
struct List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF;
struct Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32;
struct Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F;
struct Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8;
struct Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764;
struct Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141;
struct Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8;
struct Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937;
struct Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25;
struct Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05;
struct Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513;
struct Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB;
struct Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36;
struct Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9;
struct Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF;
struct Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5;
struct Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4;
struct Tweak_1_t16C50EEF219B75A7CE4BFC21A45B2F1191A302BE;
struct Tweak_1_tC28659AB7E0129514103A094E59AB0B5D0979306;
struct Tweak_1_t1087E2982CC0C10E5E00C12F5211E1E0AFBD749C;
struct Tweak_1_t2634F39F5E3B3C0C215C1E8A18FFF142CD61F1D1;
struct TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E;
struct TweenRunner_1_t506331CFBEF4B7DD78419718F858F743187D08F0;
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
struct TweenRunner_1_tA3E6EB0834EDD64BCDE6943EAFE03D0522926859;
struct TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE;
struct TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058;
struct TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA;
struct TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97;
struct TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F;
struct TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A;
struct TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C;
struct TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F;
struct TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068;
struct TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F;
struct TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695;
struct TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
struct DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MemberInfo_t;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct StringBuilder_t;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Tweak_t4CDB122769009EF11EC6604D9A27E8C56B4E3574;
struct Type_t;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ColorTweenCallback_tBE6685495BFEE2763BED5BF7EFC9571F7F1D724E;
struct FloatTweenCallback_t5348AE7D6567149477FA6C0B7A70DBCEA1E73C7E;
struct FloatTweenCallback_tF3159C7BD29B10629506C32DBDC426B076A308CC;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96;
IL2CPP_EXTERN_C String_t* _stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4;
IL2CPP_EXTERN_C String_t* _stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;

struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F  : public RuntimeObject
{
};
struct U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433  : public RuntimeObject
{
};
struct U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025  : public RuntimeObject
{
};
struct U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762  : public RuntimeObject
{
};
struct U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992  : public RuntimeObject
{
};
struct U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021  : public RuntimeObject
{
};
struct U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE  : public RuntimeObject
{
};
struct U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2  : public RuntimeObject
{
};
struct U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC  : public RuntimeObject
{
};
struct U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E  : public RuntimeObject
{
};
struct U3CU3EO_tDAC805319825F8349602AD57EDACE499355FC181  : public RuntimeObject
{
};
struct U3CU3EO_t22C4A52306A9B63C8E26F72B6932849196CFA637  : public RuntimeObject
{
};
struct U3CU3Ec__DisplayClass14_0_t89A5A60117B7129B9ACC9A54255A62F8A1CEB2D9  : public RuntimeObject
{
	MemberInfo_t* ___memberInfo;
	Tweak_1_t16C50EEF219B75A7CE4BFC21A45B2F1191A302BE* ___U3CU3E4__this;
};
struct U3CU3Ec__DisplayClass14_0_tD635FE88F777EDF2A091F5E6BF573FBB8CBF69AC  : public RuntimeObject
{
	MemberInfo_t* ___memberInfo;
	Tweak_1_tC28659AB7E0129514103A094E59AB0B5D0979306* ___U3CU3E4__this;
};
struct U3CU3Ec__DisplayClass14_0_tCA7ED17D26299D6937FD79C96DF871D31631463A  : public RuntimeObject
{
	MemberInfo_t* ___memberInfo;
	Tweak_1_t1087E2982CC0C10E5E00C12F5211E1E0AFBD749C* ___U3CU3E4__this;
};
struct U3CU3Ec__DisplayClass14_0_t5D4C23D14B87D94C0CC0921986B60DAF5DAC6D47  : public RuntimeObject
{
	MemberInfo_t* ___memberInfo;
	Tweak_1_t2634F39F5E3B3C0C215C1E8A18FFF142CD61F1D1* ___U3CU3E4__this;
};
struct U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685 : public RuntimeObject {};
struct U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942 : public RuntimeObject {};
struct Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137  : public RuntimeObject
{
};
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5  : public RuntimeObject
{
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081  : public RuntimeObject
{
};
struct Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764  : public RuntimeObject
{
	Il2CppSharedGenericObject* ___m_Item1;
	Il2CppChar ___m_Item2;
};
struct Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141  : public RuntimeObject
{
	Il2CppSharedGenericObject* ___m_Item1;
	Il2CppSharedGenericObject* ___m_Item2;
};
struct Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8 : public RuntimeObject {};
struct Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937  : public RuntimeObject
{
	int32_t ___m_Item1;
	int32_t ___m_Item2;
};
struct Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513  : public RuntimeObject
{
	Il2CppSharedGenericObject* ___m_Item1;
	Il2CppSharedGenericObject* ___m_Item2;
	Il2CppSharedGenericObject* ___m_Item3;
};
struct Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB : public RuntimeObject {};
struct Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36  : public RuntimeObject
{
	bool ___m_Item1;
	bool ___m_Item2;
	bool ___m_Item3;
	bool ___m_Item4;
};
struct Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9  : public RuntimeObject
{
	int32_t ___m_Item1;
	int32_t ___m_Item2;
	int32_t ___m_Item3;
	bool ___m_Item4;
};
struct Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5  : public RuntimeObject
{
	Il2CppSharedGenericObject* ___m_Item1;
	Il2CppSharedGenericObject* ___m_Item2;
	int32_t ___m_Item3;
	int32_t ___m_Item4;
};
struct Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4 : public RuntimeObject {};
struct TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E  : public RuntimeObject
{
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___m_CoroutineContainer;
	RuntimeObject* ___m_Tween;
};
struct TweenRunner_1_t506331CFBEF4B7DD78419718F858F743187D08F0  : public RuntimeObject
{
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___m_CoroutineContainer;
	RuntimeObject* ___m_Tween;
};
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4  : public RuntimeObject
{
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___m_CoroutineContainer;
	RuntimeObject* ___m_Tween;
};
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B  : public RuntimeObject
{
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___m_CoroutineContainer;
	RuntimeObject* ___m_Tween;
};
struct TweenRunner_1_tA3E6EB0834EDD64BCDE6943EAFE03D0522926859  : public RuntimeObject
{
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___m_CoroutineContainer;
	RuntimeObject* ___m_Tween;
};
struct TypeConstructor_1_tD1D466F09E7C13EBC5D186052464A64849D5E745  : public RuntimeObject
{
	Func_1_t8C5E17524CD4BD918CD05D6B159DE24957E6BC57* ___m_ExplicitConstructor;
	Func_1_t8C5E17524CD4BD918CD05D6B159DE24957E6BC57* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t22427474AA8A92692B369C6DAE953F4091BDA636  : public RuntimeObject
{
	Func_1_t1A2695781E82136CD487B3651F10C39AFFB20160* ___m_ExplicitConstructor;
	Func_1_t1A2695781E82136CD487B3651F10C39AFFB20160* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tDE37B8BA965DC6EB5E86CEA76AE5030D16DD1A23  : public RuntimeObject
{
	Func_1_t4E40962A63D4F89E5895ED02E5565769CDAF69F2* ___m_ExplicitConstructor;
	Func_1_t4E40962A63D4F89E5895ED02E5565769CDAF69F2* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tB58B048E1D1EAB7AF4D35634637E1273AFD0AC4C  : public RuntimeObject
{
	Func_1_t7382A5BFAECE2AC31A9BC40C1AD390DEFC04788C* ___m_ExplicitConstructor;
	Func_1_t7382A5BFAECE2AC31A9BC40C1AD390DEFC04788C* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t653814B7B545D0AB3126B1EECABF7CEEE2012104  : public RuntimeObject
{
	Func_1_t1ACCEB1BA30FC7EFE300C2C364EADE4AC38AC377* ___m_ExplicitConstructor;
	Func_1_t1ACCEB1BA30FC7EFE300C2C364EADE4AC38AC377* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t7F386E4452494C6A853A99985CA15ADC8395CD4E  : public RuntimeObject
{
	Func_1_t80779C57AE159E6046EB1F069BAED1DCF063CB72* ___m_ExplicitConstructor;
	Func_1_t80779C57AE159E6046EB1F069BAED1DCF063CB72* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t4108DA4A9676E4D26F7CF3673FA36297050C0C7A  : public RuntimeObject
{
	Func_1_t8595E9DBFD03EAC6C0432DF9BB6F8D396D962400* ___m_ExplicitConstructor;
	Func_1_t8595E9DBFD03EAC6C0432DF9BB6F8D396D962400* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t0FFC02AC4715C3F3BE68ABC4C81287D6DEA82F4A  : public RuntimeObject
{
	Func_1_t7F62161D516367707FC9A813746DA15F0C9F92E3* ___m_ExplicitConstructor;
	Func_1_t7F62161D516367707FC9A813746DA15F0C9F92E3* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t0E0CB7D858DB4D18B7C2EC88BDFE37B456E7C861  : public RuntimeObject
{
	Func_1_tB8D48550F0C370F5E3AAE4622412E5E5E5C69ECD* ___m_ExplicitConstructor;
	Func_1_tB8D48550F0C370F5E3AAE4622412E5E5E5C69ECD* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t70A036B1B15B90FBC9F02AF8F6E48E032D5D6540  : public RuntimeObject
{
	Func_1_t939C76786560C28553DF1C31E4C4D15547FD99CF* ___m_ExplicitConstructor;
	Func_1_t939C76786560C28553DF1C31E4C4D15547FD99CF* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tAAE70FE3B0EF5E0FA22EF6FC8FE75F57F18E06BE  : public RuntimeObject
{
	Func_1_tA9F0E9F0E0602093EB7420D536C9BC37CE96061C* ___m_ExplicitConstructor;
	Func_1_tA9F0E9F0E0602093EB7420D536C9BC37CE96061C* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t599F43EE520A42D957067198D3A0718370443163  : public RuntimeObject
{
	Func_1_t302F655F73122FE6BD75CE4CE4F571B545AAF171* ___m_ExplicitConstructor;
	Func_1_t302F655F73122FE6BD75CE4CE4F571B545AAF171* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t94E13CBEFAC3E196D333F68F69C9ABBE4F156800  : public RuntimeObject
{
	Func_1_t00739CCE4446985105AD10E884B0CC0B0B3F2685* ___m_ExplicitConstructor;
	Func_1_t00739CCE4446985105AD10E884B0CC0B0B3F2685* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t588B0FD4F6C65C0F6BB42D167F9B60C2D293B204  : public RuntimeObject
{
	Func_1_t332F5DDA0884E441C5E4FBF8F424A7521A2D91F1* ___m_ExplicitConstructor;
	Func_1_t332F5DDA0884E441C5E4FBF8F424A7521A2D91F1* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tDB18592D861B6EFEAAF1AEEB85C0B25202F67949  : public RuntimeObject
{
	Func_1_t2C7AB8C5D41366DA6920A7F404DFC92A24AFB15E* ___m_ExplicitConstructor;
	Func_1_t2C7AB8C5D41366DA6920A7F404DFC92A24AFB15E* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tDCF155BFEA2707044BB463553DC107540C2A3D5A  : public RuntimeObject
{
	Func_1_tC281455DA2DAFD6724BA91D2E8CAC67AC8F6DA65* ___m_ExplicitConstructor;
	Func_1_tC281455DA2DAFD6724BA91D2E8CAC67AC8F6DA65* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tD167C93E2862C4349CA1F20A32FAA91160F337DA  : public RuntimeObject
{
	Func_1_t7CF9F5AD2251AF4C37E4EFBC5F79036331D84828* ___m_ExplicitConstructor;
	Func_1_t7CF9F5AD2251AF4C37E4EFBC5F79036331D84828* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t081EF6BF602C3F2475067C39C365BF669AB40C3B  : public RuntimeObject
{
	Func_1_t2EBBE229235194C5474E250BDF76625FBE708DD1* ___m_ExplicitConstructor;
	Func_1_t2EBBE229235194C5474E250BDF76625FBE708DD1* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tB5A35333AE4AA1157ADBDB0B4A724C76354C2D8D  : public RuntimeObject
{
	Func_1_t1EACF0FF78186D8AAD4E1CE5681EF33515EF5321* ___m_ExplicitConstructor;
	Func_1_t1EACF0FF78186D8AAD4E1CE5681EF33515EF5321* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tB1CA34A9151868105648EC810DD8EC97702EFDFE  : public RuntimeObject
{
	Func_1_tB63FA76122F39A8574BBAD9B4AC1A5908CE39FD9* ___m_ExplicitConstructor;
	Func_1_tB63FA76122F39A8574BBAD9B4AC1A5908CE39FD9* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t59DD2A4C7ECC1C218E27BFA55E8FEBB72F772E48  : public RuntimeObject
{
	Func_1_tD15BD1BBFCFF947D6A7DEA2673CAB316E1519F44* ___m_ExplicitConstructor;
	Func_1_tD15BD1BBFCFF947D6A7DEA2673CAB316E1519F44* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE  : public RuntimeObject
{
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* ___m_ExplicitConstructor;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058  : public RuntimeObject
{
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* ___m_ExplicitConstructor;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA  : public RuntimeObject
{
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* ___m_ExplicitConstructor;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97  : public RuntimeObject
{
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* ___m_ExplicitConstructor;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F  : public RuntimeObject
{
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* ___m_ExplicitConstructor;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A  : public RuntimeObject
{
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* ___m_ExplicitConstructor;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C  : public RuntimeObject
{
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* ___m_ExplicitConstructor;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F  : public RuntimeObject
{
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* ___m_ExplicitConstructor;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068  : public RuntimeObject
{
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* ___m_ExplicitConstructor;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F  : public RuntimeObject
{
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* ___m_ExplicitConstructor;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695  : public RuntimeObject
{
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* ___m_ExplicitConstructor;
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B  : public RuntimeObject
{
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* ___m_ExplicitConstructor;
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
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
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
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
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Memory_1_t48D1B1093D181D6F37155EB644659FD7D1DF616E 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
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
struct FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE 
{
	FloatTweenCallback_t5348AE7D6567149477FA6C0B7A70DBCEA1E73C7E* ___m_Target;
	float ___m_StartValue;
	float ___m_TargetValue;
	float ___m_Duration;
	bool ___m_IgnoreTimeScale;
};
struct FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE_marshaled_pinvoke
{
	FloatTweenCallback_t5348AE7D6567149477FA6C0B7A70DBCEA1E73C7E* ___m_Target;
	float ___m_StartValue;
	float ___m_TargetValue;
	float ___m_Duration;
	int32_t ___m_IgnoreTimeScale;
};
struct FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE_marshaled_com
{
	FloatTweenCallback_t5348AE7D6567149477FA6C0B7A70DBCEA1E73C7E* ___m_Target;
	float ___m_StartValue;
	float ___m_TargetValue;
	float ___m_Duration;
	int32_t ___m_IgnoreTimeScale;
};
struct FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A 
{
	FloatTweenCallback_tF3159C7BD29B10629506C32DBDC426B076A308CC* ___m_Target;
	float ___m_StartValue;
	float ___m_TargetValue;
	float ___m_Duration;
	bool ___m_IgnoreTimeScale;
};
struct FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshaled_pinvoke
{
	FloatTweenCallback_tF3159C7BD29B10629506C32DBDC426B076A308CC* ___m_Target;
	float ___m_StartValue;
	float ___m_TargetValue;
	float ___m_Duration;
	int32_t ___m_IgnoreTimeScale;
};
struct FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshaled_com
{
	FloatTweenCallback_tF3159C7BD29B10629506C32DBDC426B076A308CC* ___m_Target;
	float ___m_StartValue;
	float ___m_TargetValue;
	float ___m_Duration;
	int32_t ___m_IgnoreTimeScale;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct MethodBase_t  : public MemberInfo_t
{
};
struct PreserveAttribute_tC8A093D4D8CAF77A86CFE347DE23C3C94DD35B89  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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
struct U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE ___tweenInfo;
	float ___U3CelapsedTimeU3E5__2;
};
struct U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A ___tweenInfo;
	float ___U3CelapsedTimeU3E5__2;
};
struct Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32  : public RuntimeObject
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Item1;
	float ___m_Item2;
};
struct Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F  : public RuntimeObject
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Item1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Item2;
};
struct Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8  : public RuntimeObject
{
	Il2CppSharedGenericObject* ___m_Item1;
	Memory_1_t48D1B1093D181D6F37155EB644659FD7D1DF616E ___m_Item2;
};
struct Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05  : public RuntimeObject
{
	Il2CppSharedGenericObject* ___m_Item1;
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___m_Item2;
	Il2CppSharedGenericObject* ___m_Item3;
};
struct BackgroundPositionKeyword_tE680A05B983D256AADC8E2CF1CA169D004B8641B 
{
	int32_t ___value__;
};
struct BackgroundSizeType_tD194B20FF5086D494ABF8D799124D2FC4FFCC674 
{
	int32_t ___value__;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Size;
};
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB  : public MethodBase_t
{
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct DebugGizmoType_tB18946982B1E6CA3D84DA2DB7E5AB84C28E787AF 
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
struct HumanBodyBones_tA2A904890A05ABCFFAB7E119244E97C5EA9807E6 
{
	int32_t ___value__;
};
struct InstantiationKind_t9B77929786BCA193B4A916F2F25793598CF0DF7D 
{
	int32_t ___value__;
};
struct LayoutUnit_tF18EC17FE8588A01C72784546410EA0D9B1D2F22 
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
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
};
struct Repeat_tC0330B75B12D24B063BA5151AF3BB73B85D8B840 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct Unit_t21DCD5C095F7DC1A0B9A47CAF8CAD3E7776CD3DB 
{
	int32_t ___value__;
};
struct ColorTweenMode_t8A612404D746B1FDD36D22C97D87E7C839C3D7A8 
{
	int32_t ___value__;
};
struct ThumbstickDirection_tAB667516C981779B9256DC66B09813999EF73D60 
{
	int32_t ___value__;
};
struct BoneId_tA8A577FFBDF8D0A78A8B3FE279CD6597EF55FC7A 
{
	int32_t ___value__;
};
struct StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F 
{
	int32_t ___m_Keyword;
	List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* ___m_Value;
};
struct StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 
{
	int32_t ___m_Keyword;
	List_1_tBD2E4781BB0BD1FCD30E6D3586CA13AFD0ABE6F7* ___m_Value;
};
struct StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C 
{
	int32_t ___m_Keyword;
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ___m_Value;
};
struct StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 
{
	int32_t ___m_Keyword;
	List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___m_Value;
};
struct Tuple_2_t6365127A055FB4B674C504D53086963A6CC66105  : public RuntimeObject
{
	int32_t ___m_Item1;
	int32_t ___m_Item2;
};
struct Tuple_2_t37A44AF346664FBA9B4356B05068B7FF8024584D  : public RuntimeObject
{
	int32_t ___m_Item1;
	int32_t ___m_Item2;
};
struct Tuple_2_tBC2C4FA386330A191EBEB56C38790ADD1CD1B56D  : public RuntimeObject
{
	int32_t ___m_Item1;
	int32_t ___m_Item2;
};
struct Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25  : public RuntimeObject
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Item1;
	float ___m_Item2;
	float ___m_Item3;
};
struct Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF  : public RuntimeObject
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Item1;
	float ___m_Item2;
	float ___m_Item3;
	float ___m_Item4;
};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x;
	int32_t ___y;
};
struct ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7 
{
	ColorTweenCallback_tBE6685495BFEE2763BED5BF7EFC9571F7F1D724E* ___m_Target;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_StartColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_TargetColor;
	int32_t ___m_TweenMode;
	float ___m_Duration;
	bool ___m_IgnoreTimeScale;
};
struct ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshaled_pinvoke
{
	ColorTweenCallback_tBE6685495BFEE2763BED5BF7EFC9571F7F1D724E* ___m_Target;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_StartColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_TargetColor;
	int32_t ___m_TweenMode;
	float ___m_Duration;
	int32_t ___m_IgnoreTimeScale;
};
struct ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshaled_com
{
	ColorTweenCallback_tBE6685495BFEE2763BED5BF7EFC9571F7F1D724E* ___m_Target;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_StartColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_TargetColor;
	int32_t ___m_TweenMode;
	float ___m_Duration;
	int32_t ___m_IgnoreTimeScale;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A  : public PreserveAttribute_tC8A093D4D8CAF77A86CFE347DE23C3C94DD35B89
{
	int32_t ___GizmoType;
	bool ___ShowGizmoByDefault;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color;
	bool ___Tweakable;
	float ___Min;
	float ___Max;
	String_t* ___Category;
	String_t* ___Description;
	String_t* ___DisplayName;
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct InstanceHandle_tE6B8E29890FB27E3E1824A634157E596584E0CFA 
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___U3CInstanceU3Ek__BackingField;
	Type_t* ___U3CTypeU3Ek__BackingField;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___U3CInstanceIdU3Ek__BackingField;
};
struct InstanceHandle_tE6B8E29890FB27E3E1824A634157E596584E0CFA_marshaled_pinvoke
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___U3CInstanceU3Ek__BackingField;
	Type_t* ___U3CTypeU3Ek__BackingField;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___U3CInstanceIdU3Ek__BackingField;
};
struct InstanceHandle_tE6B8E29890FB27E3E1824A634157E596584E0CFA_marshaled_com
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___U3CInstanceU3Ek__BackingField;
	Type_t* ___U3CTypeU3Ek__BackingField;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___U3CInstanceIdU3Ek__BackingField;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
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
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7 ___tweenInfo;
	float ___U3CelapsedTimeU3E5__2;
};
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A  : public MulticastDelegate_t
{
};
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};
struct Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3  : public MulticastDelegate_t
{
};
struct Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560  : public MulticastDelegate_t
{
};
struct Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C  : public MulticastDelegate_t
{
};
struct Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4  : public MulticastDelegate_t
{
};
struct Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6  : public MulticastDelegate_t
{
};
struct Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB  : public MulticastDelegate_t
{
};
struct Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659  : public MulticastDelegate_t
{
};
struct Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6  : public MulticastDelegate_t
{
};
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};
struct Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2  : public MulticastDelegate_t
{
};
struct Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B  : public MulticastDelegate_t
{
};
struct Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD  : public MulticastDelegate_t
{
};
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7  : public MulticastDelegate_t
{
};
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431  : public MulticastDelegate_t
{
};
struct Func_2_t49E998685259ADE759F9329BF66F20DE8667006E  : public MulticastDelegate_t
{
};
struct Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9  : public MulticastDelegate_t
{
};
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2  : public MulticastDelegate_t
{
};
struct Func_2_tB5CF618947FC5173B54165B5CE46CAFC16D59714  : public MulticastDelegate_t
{
};
struct Func_4_t6B552DD029418AAC69B05335C9089B9B37E0C343  : public MulticastDelegate_t
{
};
struct Func_4_t6A859C6EE14C8D76A55D1500E9B04BC21C5194D3  : public MulticastDelegate_t
{
};
struct Func_4_t14DFDA9E85C76FDE067B3F2999C8107AFA671A64  : public MulticastDelegate_t
{
};
struct Func_4_t6DC62F76192ECD13986365A34FAD950A35AF225F  : public MulticastDelegate_t
{
};
struct Func_4_t28BFDA9BC4AB12540F2BE70B4FC23CD6FF5EB6F4  : public MulticastDelegate_t
{
};
struct Func_4_t2D728D40D290F8C65346C870D314F893B5896872  : public MulticastDelegate_t
{
};
struct Func_4_t2541034AEE4404468532C27DBC715DF62BDAE7F3  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 
{
	int32_t ___keyword;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___offset;
};
struct BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 
{
	int32_t ___m_SizeType;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct Hook_t594A5EDA9F346C9861C3F6FCFD55FD5558101052  : public RuntimeObject
{
	InstanceHandle_tE6B8E29890FB27E3E1824A634157E596584E0CFA ____instanceHandle;
	DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A* ____attribute;
	MemberInfo_t* ____memberInfo;
	RuntimeObject* ____instance;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F  : public MulticastDelegate_t
{
};
struct Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5  : public MulticastDelegate_t
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct Tweak_t4CDB122769009EF11EC6604D9A27E8C56B4E3574  : public Hook_t594A5EDA9F346C9861C3F6FCFD55FD5558101052
{
};
struct Tweak_1_t16C50EEF219B75A7CE4BFC21A45B2F1191A302BE  : public Tweak_t4CDB122769009EF11EC6604D9A27E8C56B4E3574
{
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ____getter;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ____setter;
	bool ____min;
	bool ____max;
};
struct Tweak_1_tC28659AB7E0129514103A094E59AB0B5D0979306  : public Tweak_t4CDB122769009EF11EC6604D9A27E8C56B4E3574
{
	Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* ____getter;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ____setter;
	int32_t ____min;
	int32_t ____max;
};
struct Tweak_1_t1087E2982CC0C10E5E00C12F5211E1E0AFBD749C  : public Tweak_t4CDB122769009EF11EC6604D9A27E8C56B4E3574
{
	Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ____getter;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ____setter;
	float ____min;
	float ____max;
};
struct Tweak_1_t2634F39F5E3B3C0C215C1E8A18FFF142CD61F1D1 : public Tweak_t4CDB122769009EF11EC6604D9A27E8C56B4E3574 {};
struct U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields
{
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields
{
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields
{
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields
{
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields
{
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields
{
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields
{
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields
{
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields
{
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields
{
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_tDAC805319825F8349602AD57EDACE499355FC181_StaticFields
{
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_t22C4A52306A9B63C8E26F72B6932849196CFA637_StaticFields
{
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* ___U3C2U3E__CreateClassInstance;
};
struct Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137_StaticFields
{
	Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* ___defaultComparer;
};
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___Value;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields
{
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* ___defaultComparer;
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
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
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
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticFields
{
	String_t* ___ConstructorName;
	String_t* ___TypeConstructorName;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity;
};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_StaticFields
{
	Dictionary_2_t29FB78C9E5DF443E2A5880E4E9B7C86E516670E0* ___s_AngleUnitLookup;
};
struct DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A_StaticFields
{
	Dictionary_2_tFB050FB91677DA51BF54AE7DAB9B3CEB02ED2AF6* ___ParsedColors;
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
struct Tweak_1_t16C50EEF219B75A7CE4BFC21A45B2F1191A302BE_StaticFields
{
	Func_4_t6B552DD029418AAC69B05335C9089B9B37E0C343* ___InverseLerp;
	Func_4_t6A859C6EE14C8D76A55D1500E9B04BC21C5194D3* ___Lerp;
	Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___FromFloat;
};
struct Tweak_1_tC28659AB7E0129514103A094E59AB0B5D0979306_StaticFields
{
	Func_4_t14DFDA9E85C76FDE067B3F2999C8107AFA671A64* ___InverseLerp;
	Func_4_t6DC62F76192ECD13986365A34FAD950A35AF225F* ___Lerp;
	Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* ___FromFloat;
};
struct Tweak_1_t1087E2982CC0C10E5E00C12F5211E1E0AFBD749C_StaticFields
{
	Func_4_t28BFDA9BC4AB12540F2BE70B4FC23CD6FF5EB6F4* ___InverseLerp;
	Func_4_t28BFDA9BC4AB12540F2BE70B4FC23CD6FF5EB6F4* ___Lerp;
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___FromFloat;
};
struct Tweak_1_t2634F39F5E3B3C0C215C1E8A18FFF142CD61F1D1_StaticFields
{
	Func_4_t2541034AEE4404468532C27DBC715DF62BDAE7F3* ___InverseLerp;
	Func_4_t2D728D40D290F8C65346C870D314F893B5896872* ___Lerp;
	Func_2_tB5CF618947FC5173B54165B5CE46CAFC16D59714* ___FromFloat;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* Comparer_1_get_Default_m9D7E1E21FFEE2C32B345D0E5C835BA713DA80B2C_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_4_Invoke_mFC6BE1FCDEDBE8C30D21E122A6F45E53651CC8FF_gshared_inline (Func_4_t6B552DD029418AAC69B05335C9089B9B37E0C343* __this, bool ___0_arg1, bool ___1_arg2, bool ___2_arg3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_4_Invoke_m5866D67F8D718A89A2DC2DA89B852DA3F9F12C32_gshared_inline (Func_4_t6A859C6EE14C8D76A55D1500E9B04BC21C5194D3* __this, bool ___0_arg1, bool ___1_arg2, float ___2_arg3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m4FE15D011557F73566509B7E443E6CD511A4B349_gshared (U3CU3Ec__DisplayClass14_0_t89A5A60117B7129B9ACC9A54255A62F8A1CEB2D9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_gshared_inline (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* __this, float ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_1_Invoke_mA967B67675F9F5475EF2DA67722E3876436BF72E_gshared_inline (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_4_Invoke_m3697296E54AA5F2F950FC50A25892236C0456D78_gshared_inline (Func_4_t14DFDA9E85C76FDE067B3F2999C8107AFA671A64* __this, int32_t ___0_arg1, int32_t ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_4_Invoke_mA248C7D454B998CBF66485D9630A73A2FEBB1FE2_gshared_inline (Func_4_t6DC62F76192ECD13986365A34FAD950A35AF225F* __this, int32_t ___0_arg1, int32_t ___1_arg2, float ___2_arg3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m9942EFC06E11DCAFEF842773A4171AC20CF69504_gshared (U3CU3Ec__DisplayClass14_0_tD635FE88F777EDF2A091F5E6BF573FBB8CBF69AC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5F59DB7D65A544574E0D53BFB58E1475EC5D704F_gshared_inline (Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* __this, float ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m475512287B9508E6D4721B3022635FED517234D1_gshared (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87_gshared (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_4_Invoke_m937DB0BDE1B712223FA52DF3DB87B0CD19DEC276_gshared_inline (Func_4_t28BFDA9BC4AB12540F2BE70B4FC23CD6FF5EB6F4* __this, float ___0_arg1, float ___1_arg2, float ___2_arg3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m1BF31C0BCB8BE1D61AE6C4AC7DB000ED367DA967_gshared (U3CU3Ec__DisplayClass14_0_tCA7ED17D26299D6937FD79C96DF871D31631463A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_gshared_inline (Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* __this, float ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71_gshared (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859_gshared (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_m204C7F34151276EE628D17B5C5DECF463BFE649C_gshared (U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m6C1159C7A8EDF8A363CD82CBA503E234870826F0_gshared (TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m8F517B7356D09DB3B885AC627C1B11853F0F4E3B_gshared (FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE ___0_tweenInfo, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_m0F5A38D7B55D76D7DD1A22C7D2346C87C12C2BC7_gshared (U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m1807F7EC3FF55749912B8EBE4951AEC367ED799D_gshared (TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_mB20C8AE701784E49515475A471050D8440D444CF_gshared (ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7 ___0_tweenInfo, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_mD1B548DCCF5485603C6FB4E9EB5431232DD5B8D0_gshared (U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m013CE2AC05F13597F080CDEA23E87CD3FBE422C9_gshared (TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m4F400F2F86055B01EF66839CA607B07908E4FC7D_gshared (FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A ___0_tweenInfo, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m9BDE5E9B9E0EE309570C0E1BEEFF1D970E301057_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m567724D44415F983B593F79A65DF98D0B49A7586_gshared (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m1CF94999885A2AB1DEDC3C4D08360632327809FC_gshared (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 Activator_CreateInstance_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mB73A28B81E6D6D5CEA36624398A83B517613B668_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 Func_1_Invoke_mD023E4BE9F2AC4DDAB5BC6865F64444F25EBA15C_gshared_inline (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m371FB7DB718EACB453900456810E9A5E7C4560FC_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mB3A3166BECF17AF72ECD9CB45352121E79693D1D_gshared (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mA471FC63ABD240998521909693B8E1F0E226F4C7_gshared (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F Activator_CreateInstance_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mB01EF8A1953AD6AC7F3EA56DC0CA6C9353BFD778_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F Func_1_Invoke_mEFCC6E276B7F9541F583BF1DD7C2D4B88A5C9CED_gshared_inline (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m62FD638362BFCB156A7F8AC98F87BB9DA45A686C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m962EFB2F614BF82E3DFE0A548F875ED7EC21B705_gshared (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m39E4205D276C3545517E8CBC0AAA109AED598253_gshared (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 Activator_CreateInstance_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mE1EF4F1754910E076C909536D2A4427F01104233_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 Func_1_Invoke_mF38ACE8EE747FDAB603827786CAA57779D125644_gshared_inline (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m3B7D84997A9B8DF8F81AA85C2C9FA88D48A5399A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m44F12955763EFCCB75A37E92EC25D46B88D288B8_gshared (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m06C3E157C1C7C2FAB7AC8777BB674C9D951702CB_gshared (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C Activator_CreateInstance_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m873909B6AA229BD59E90731F4D6FBF4CC87F5602_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C Func_1_Invoke_m14C121BADC1DA0C563A54E906949398ADE4E510D_gshared_inline (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m90943EC8A95BEF0B7653A90C89F26FC8ADD09FB8_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m0187BB447B4788E880EAB9921A60ECB42609286C_gshared (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mA4955FA382BBC4CBD82690DCA4DBB23EFFB5B379_gshared (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 Activator_CreateInstance_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mEE0F7CDAD8C0B99BA86771065E4EE2D71690474C_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 Func_1_Invoke_m3C0C15EA65260B3A2D23C645DE9908F470E1D6EB_gshared_inline (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m82B5917AD86A0775E7DD8F172FEAE0453CF832CE_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m51B797D10A3B0912B091FA941851F9CA25028CD7_gshared (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mCA44589EC746F7662FC5375FE18EC12DC9E057C5_gshared (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC Activator_CreateInstance_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m112E07EE82B221E3263040A368D5DD9FA4581E7A_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC Func_1_Invoke_m72E1B2AB7AB84681AB456966658AB4AA2262172E_gshared_inline (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m12EA9186899E84F2F4C3FC7EE5E9BA1EF4A87CE9_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m2D39DE69B79401A5162CC3AE92B414DA350B427E_gshared (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mBF9DBF4E06C4D61E55687EABBAC4550B432E6D9A_gshared (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 Activator_CreateInstance_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m68F946E397E45AC0C461ABC3CB223C420569B8C5_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 Func_1_Invoke_m431E4DC7CE52538C527FFFA27B672C9172B9FA5D_gshared_inline (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m49C3C2D5C8CE19D771AC6E44664479AB1A300582_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mC649308AA476E656E8EDFEB064E80C613E329208_gshared (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m7DAE2F89A23101179BB5B56E3773CE03C3287F94_gshared (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 Activator_CreateInstance_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mE7341C88FD622F8CC6463B0990DECFDEC77CE513_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 Func_1_Invoke_m22D302915F20EEF62D9C1666172BBE063F7D795A_gshared_inline (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m889D9CDB4925D6CEA1E008BD11C74F4C4B526CD7_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mF8ACDEC4A418A3DC5EB0F27E4682223125B50B29_gshared (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2749E8A77FD25617A4ECDB5CEEEDE39F9D1EE456_gshared (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F Activator_CreateInstance_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m93B83A4B46F4D2E164D1604B782F208D26E12267_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F Func_1_Invoke_m46E31998378DE2BA4DF293634298EF5AA1E6520B_gshared_inline (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mA41D4EADD69077FA3D6860DDBF38E73AC193A3C8_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mA88560F0713BBFA2C37745AF9D6C52629ED1DF7E_gshared (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m5DE18B6F84B0E4095B7DACFC9C7006775018056A_gshared (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 Activator_CreateInstance_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m03ECCA81585078D9FEB71559619D15E1512A86A5_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 Func_1_Invoke_m387E8C6D589CA66F72630F311D4CA283A6771829_gshared_inline (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mE320B134EF716E35A5CA75A177D0ABB88DA281C0_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m2092EB1058CE691B86BD2DA94035F4A18D28CE99_gshared (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m40600DEE70082D8157F0AAB3AC1E531E4A48DA6E_gshared (Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Activator_CreateInstance_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mA5589FEB1272F05337DDA4D3300BE9B8D9700A35_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Func_1_Invoke_m0550CD624A6760EE6C25CDCB1F5E159B527857F5_gshared_inline (Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8085A1891CE7A1165DDEC25CAE6AAFE21B594DAF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m22E8E1250F27BF4E34A150C25414F7026014918C_gshared (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mBED93A7595F38D64DCA95CA0388AD8A054FDBF7A_gshared (Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 Activator_CreateInstance_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m352B21AA96F81D3AAFEC94237A3D01038A0C61D8_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 Func_1_Invoke_m16CD92EAF9608CEFEDBB2F540D76F5BAEFBC1FB9_gshared_inline (Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline)(method);
}
inline Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F (const RuntimeMethod* method)
{
	return ((  Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* (*) (const RuntimeMethod*))Comparer_1_get_Default_m9D7E1E21FFEE2C32B345D0E5C835BA713DA80B2C_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_CombineHashCodes_m823D7EC829A9D4FE48FA8B40FBFE6F9DC0092F3C (int32_t ___0_h1, int32_t ___1_h2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_CombineHashCodes_mE2699A82EC949B2BDC6E5F34C1B73BAF6C613E50 (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_CombineHashCodes_m5E17356230416E2397A57B3346E74D6D579B14BA (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, int32_t ___3_h4, const RuntimeMethod* method) ;
inline bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline)(__this, method);
}
inline float Func_4_Invoke_mFC6BE1FCDEDBE8C30D21E122A6F45E53651CC8FF_inline (Func_4_t6B552DD029418AAC69B05335C9089B9B37E0C343* __this, bool ___0_arg1, bool ___1_arg2, bool ___2_arg3, const RuntimeMethod* method)
{
	return ((  float (*) (Func_4_t6B552DD029418AAC69B05335C9089B9B37E0C343*, bool, bool, bool, const RuntimeMethod*))Func_4_Invoke_mFC6BE1FCDEDBE8C30D21E122A6F45E53651CC8FF_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
inline bool Func_4_Invoke_m5866D67F8D718A89A2DC2DA89B852DA3F9F12C32_inline (Func_4_t6A859C6EE14C8D76A55D1500E9B04BC21C5194D3* __this, bool ___0_arg1, bool ___1_arg2, float ___2_arg3, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_4_t6A859C6EE14C8D76A55D1500E9B04BC21C5194D3*, bool, bool, float, const RuntimeMethod*))Func_4_Invoke_m5866D67F8D718A89A2DC2DA89B852DA3F9F12C32_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___0_obj, method);
}
inline void U3CU3Ec__DisplayClass14_0__ctor_m4FE15D011557F73566509B7E443E6CD511A4B349 (U3CU3Ec__DisplayClass14_0_t89A5A60117B7129B9ACC9A54255A62F8A1CEB2D9* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ec__DisplayClass14_0_t89A5A60117B7129B9ACC9A54255A62F8A1CEB2D9*, const RuntimeMethod*))U3CU3Ec__DisplayClass14_0__ctor_m4FE15D011557F73566509B7E443E6CD511A4B349_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweak__ctor_m4D600E4814BF4989E1A90EB653CCA2BD1FE2DA11 (Tweak_t4CDB122769009EF11EC6604D9A27E8C56B4E3574* __this, MemberInfo_t* ___0_memberInfo, InstanceHandle_tE6B8E29890FB27E3E1824A634157E596584E0CFA ___1_instanceHandle, DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A* ___2_attribute, const RuntimeMethod* method) ;
inline bool Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_inline (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* __this, float ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, float, const RuntimeMethod*))Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_gshared_inline)(__this, ___0_arg, method);
}
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___0_object, ___1_method, method);
}
inline void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared)(__this, ___0_object, ___1_method, method);
}
inline int32_t Func_1_Invoke_mA967B67675F9F5475EF2DA67722E3876436BF72E_inline (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD*, const RuntimeMethod*))Func_1_Invoke_mA967B67675F9F5475EF2DA67722E3876436BF72E_gshared_inline)(__this, method);
}
inline float Func_4_Invoke_m3697296E54AA5F2F950FC50A25892236C0456D78_inline (Func_4_t14DFDA9E85C76FDE067B3F2999C8107AFA671A64* __this, int32_t ___0_arg1, int32_t ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method)
{
	return ((  float (*) (Func_4_t14DFDA9E85C76FDE067B3F2999C8107AFA671A64*, int32_t, int32_t, int32_t, const RuntimeMethod*))Func_4_Invoke_m3697296E54AA5F2F950FC50A25892236C0456D78_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
inline int32_t Func_4_Invoke_mA248C7D454B998CBF66485D9630A73A2FEBB1FE2_inline (Func_4_t6DC62F76192ECD13986365A34FAD950A35AF225F* __this, int32_t ___0_arg1, int32_t ___1_arg2, float ___2_arg3, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_4_t6DC62F76192ECD13986365A34FAD950A35AF225F*, int32_t, int32_t, float, const RuntimeMethod*))Func_4_Invoke_mA248C7D454B998CBF66485D9630A73A2FEBB1FE2_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
inline void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, int32_t, const RuntimeMethod*))Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline)(__this, ___0_obj, method);
}
inline void U3CU3Ec__DisplayClass14_0__ctor_m9942EFC06E11DCAFEF842773A4171AC20CF69504 (U3CU3Ec__DisplayClass14_0_tD635FE88F777EDF2A091F5E6BF573FBB8CBF69AC* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ec__DisplayClass14_0_tD635FE88F777EDF2A091F5E6BF573FBB8CBF69AC*, const RuntimeMethod*))U3CU3Ec__DisplayClass14_0__ctor_m9942EFC06E11DCAFEF842773A4171AC20CF69504_gshared)(__this, method);
}
inline int32_t Func_2_Invoke_m5F59DB7D65A544574E0D53BFB58E1475EC5D704F_inline (Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* __this, float ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9*, float, const RuntimeMethod*))Func_2_Invoke_m5F59DB7D65A544574E0D53BFB58E1475EC5D704F_gshared_inline)(__this, ___0_arg, method);
}
inline void Func_1__ctor_m475512287B9508E6D4721B3022635FED517234D1 (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m475512287B9508E6D4721B3022635FED517234D1_gshared)(__this, ___0_object, ___1_method, method);
}
inline void Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87 (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87_gshared)(__this, ___0_object, ___1_method, method);
}
inline float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*, const RuntimeMethod*))Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline)(__this, method);
}
inline float Func_4_Invoke_m937DB0BDE1B712223FA52DF3DB87B0CD19DEC276_inline (Func_4_t28BFDA9BC4AB12540F2BE70B4FC23CD6FF5EB6F4* __this, float ___0_arg1, float ___1_arg2, float ___2_arg3, const RuntimeMethod* method)
{
	return ((  float (*) (Func_4_t28BFDA9BC4AB12540F2BE70B4FC23CD6FF5EB6F4*, float, float, float, const RuntimeMethod*))Func_4_Invoke_m937DB0BDE1B712223FA52DF3DB87B0CD19DEC276_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
inline void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, float, const RuntimeMethod*))Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline)(__this, ___0_obj, method);
}
inline void U3CU3Ec__DisplayClass14_0__ctor_m1BF31C0BCB8BE1D61AE6C4AC7DB000ED367DA967 (U3CU3Ec__DisplayClass14_0_tCA7ED17D26299D6937FD79C96DF871D31631463A* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ec__DisplayClass14_0_tCA7ED17D26299D6937FD79C96DF871D31631463A*, const RuntimeMethod*))U3CU3Ec__DisplayClass14_0__ctor_m1BF31C0BCB8BE1D61AE6C4AC7DB000ED367DA967_gshared)(__this, method);
}
inline float Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_inline (Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* __this, float ___0_arg, const RuntimeMethod* method)
{
	return ((  float (*) (Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2*, float, const RuntimeMethod*))Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_gshared_inline)(__this, ___0_arg, method);
}
inline void Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71 (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71_gshared)(__this, ___0_object, ___1_method, method);
}
inline void Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859 (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859_gshared)(__this, ___0_object, ___1_method, method);
}
inline void U3CStartU3Ed__2__ctor_m204C7F34151276EE628D17B5C5DECF463BFE649C (U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D*, int32_t, const RuntimeMethod*))U3CStartU3Ed__2__ctor_m204C7F34151276EE628D17B5C5DECF463BFE649C_gshared)(__this, ___0_U3CU3E1__state, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
inline void TweenRunner_1_StopTween_m6C1159C7A8EDF8A363CD82CBA503E234870826F0 (TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E* __this, const RuntimeMethod* method)
{
	((  void (*) (TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E*, const RuntimeMethod*))TweenRunner_1_StopTween_m6C1159C7A8EDF8A363CD82CBA503E234870826F0_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_TweenValue_m022D385B013439E2FB8020F6A6BD329CECA81E89 (FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE* __this, float ___0_floatPercentage, const RuntimeMethod* method) ;
inline RuntimeObject* TweenRunner_1_Start_m8F517B7356D09DB3B885AC627C1B11853F0F4E3B (FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE ___0_tweenInfo, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE, const RuntimeMethod*))TweenRunner_1_Start_m8F517B7356D09DB3B885AC627C1B11853F0F4E3B_gshared)(___0_tweenInfo, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
inline void U3CStartU3Ed__2__ctor_m0F5A38D7B55D76D7DD1A22C7D2346C87C12C2BC7 (U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47*, int32_t, const RuntimeMethod*))U3CStartU3Ed__2__ctor_m0F5A38D7B55D76D7DD1A22C7D2346C87C12C2BC7_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline void TweenRunner_1_StopTween_m1807F7EC3FF55749912B8EBE4951AEC367ED799D (TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* __this, const RuntimeMethod* method)
{
	((  void (*) (TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4*, const RuntimeMethod*))TweenRunner_1_StopTween_m1807F7EC3FF55749912B8EBE4951AEC367ED799D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorTween_TweenValue_mF5CBA9BDE7F73E47F9CF26DC4EC2419694049860 (ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7* __this, float ___0_floatPercentage, const RuntimeMethod* method) ;
inline RuntimeObject* TweenRunner_1_Start_mB20C8AE701784E49515475A471050D8440D444CF (ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7 ___0_tweenInfo, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7, const RuntimeMethod*))TweenRunner_1_Start_mB20C8AE701784E49515475A471050D8440D444CF_gshared)(___0_tweenInfo, method);
}
inline void U3CStartU3Ed__2__ctor_mD1B548DCCF5485603C6FB4E9EB5431232DD5B8D0 (U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB*, int32_t, const RuntimeMethod*))U3CStartU3Ed__2__ctor_mD1B548DCCF5485603C6FB4E9EB5431232DD5B8D0_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline void TweenRunner_1_StopTween_m013CE2AC05F13597F080CDEA23E87CD3FBE422C9 (TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* __this, const RuntimeMethod* method)
{
	((  void (*) (TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B*, const RuntimeMethod*))TweenRunner_1_StopTween_m013CE2AC05F13597F080CDEA23E87CD3FBE422C9_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_TweenValue_mE51344369BDDA58E9C3AEC62E1B1C1AC0349278E (FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A* __this, float ___0_floatPercentage, const RuntimeMethod* method) ;
inline RuntimeObject* TweenRunner_1_Start_m4F400F2F86055B01EF66839CA607B07908E4FC7D (FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A ___0_tweenInfo, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A, const RuntimeMethod*))TweenRunner_1_Start_m4F400F2F86055B01EF66839CA607B07908E4FC7D_gshared)(___0_tweenInfo, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m9BDE5E9B9E0EE309570C0E1BEEFF1D970E301057 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m9BDE5E9B9E0EE309570C0E1BEEFF1D970E301057_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m567724D44415F983B593F79A65DF98D0B49A7586 (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m567724D44415F983B593F79A65DF98D0B49A7586_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
inline void Func_1__ctor_m1CF94999885A2AB1DEDC3C4D08360632327809FC (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m1CF94999885A2AB1DEDC3C4D08360632327809FC_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5 (Type_t* __this, const RuntimeMethod* method) ;
inline TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline (const RuntimeMethod* method)
{
	return ((  TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554 (Type_t* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___0_types, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4 (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___0_left, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24 (Type_t* ___0_type, const RuntimeMethod* method) ;
inline StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 Activator_CreateInstance_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mB73A28B81E6D6D5CEA36624398A83B517613B668 (const RuntimeMethod* method)
{
	return ((  StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 (*) (const RuntimeMethod*))Activator_CreateInstance_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mB73A28B81E6D6D5CEA36624398A83B517613B668_gshared)(method);
}
inline StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 Func_1_Invoke_mD023E4BE9F2AC4DDAB5BC6865F64444F25EBA15C_inline (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* __this, const RuntimeMethod* method)
{
	return ((  StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 (*) (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3*, const RuntimeMethod*))Func_1_Invoke_mD023E4BE9F2AC4DDAB5BC6865F64444F25EBA15C_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m371FB7DB718EACB453900456810E9A5E7C4560FC (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m371FB7DB718EACB453900456810E9A5E7C4560FC_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_mB3A3166BECF17AF72ECD9CB45352121E79693D1D (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_mB3A3166BECF17AF72ECD9CB45352121E79693D1D_gshared)(__this, method);
}
inline void Func_1__ctor_mA471FC63ABD240998521909693B8E1F0E226F4C7 (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mA471FC63ABD240998521909693B8E1F0E226F4C7_gshared)(__this, ___0_object, ___1_method, method);
}
inline StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F Activator_CreateInstance_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mB01EF8A1953AD6AC7F3EA56DC0CA6C9353BFD778 (const RuntimeMethod* method)
{
	return ((  StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F (*) (const RuntimeMethod*))Activator_CreateInstance_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mB01EF8A1953AD6AC7F3EA56DC0CA6C9353BFD778_gshared)(method);
}
inline StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F Func_1_Invoke_mEFCC6E276B7F9541F583BF1DD7C2D4B88A5C9CED_inline (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* __this, const RuntimeMethod* method)
{
	return ((  StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F (*) (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560*, const RuntimeMethod*))Func_1_Invoke_mEFCC6E276B7F9541F583BF1DD7C2D4B88A5C9CED_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m62FD638362BFCB156A7F8AC98F87BB9DA45A686C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m62FD638362BFCB156A7F8AC98F87BB9DA45A686C_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m962EFB2F614BF82E3DFE0A548F875ED7EC21B705 (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m962EFB2F614BF82E3DFE0A548F875ED7EC21B705_gshared)(__this, method);
}
inline void Func_1__ctor_m39E4205D276C3545517E8CBC0AAA109AED598253 (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m39E4205D276C3545517E8CBC0AAA109AED598253_gshared)(__this, ___0_object, ___1_method, method);
}
inline StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 Activator_CreateInstance_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mE1EF4F1754910E076C909536D2A4427F01104233 (const RuntimeMethod* method)
{
	return ((  StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 (*) (const RuntimeMethod*))Activator_CreateInstance_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mE1EF4F1754910E076C909536D2A4427F01104233_gshared)(method);
}
inline StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 Func_1_Invoke_mF38ACE8EE747FDAB603827786CAA57779D125644_inline (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* __this, const RuntimeMethod* method)
{
	return ((  StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 (*) (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C*, const RuntimeMethod*))Func_1_Invoke_mF38ACE8EE747FDAB603827786CAA57779D125644_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m3B7D84997A9B8DF8F81AA85C2C9FA88D48A5399A (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m3B7D84997A9B8DF8F81AA85C2C9FA88D48A5399A_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m44F12955763EFCCB75A37E92EC25D46B88D288B8 (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m44F12955763EFCCB75A37E92EC25D46B88D288B8_gshared)(__this, method);
}
inline void Func_1__ctor_m06C3E157C1C7C2FAB7AC8777BB674C9D951702CB (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m06C3E157C1C7C2FAB7AC8777BB674C9D951702CB_gshared)(__this, ___0_object, ___1_method, method);
}
inline StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C Activator_CreateInstance_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m873909B6AA229BD59E90731F4D6FBF4CC87F5602 (const RuntimeMethod* method)
{
	return ((  StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C (*) (const RuntimeMethod*))Activator_CreateInstance_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m873909B6AA229BD59E90731F4D6FBF4CC87F5602_gshared)(method);
}
inline StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C Func_1_Invoke_m14C121BADC1DA0C563A54E906949398ADE4E510D_inline (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* __this, const RuntimeMethod* method)
{
	return ((  StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C (*) (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4*, const RuntimeMethod*))Func_1_Invoke_m14C121BADC1DA0C563A54E906949398ADE4E510D_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m90943EC8A95BEF0B7653A90C89F26FC8ADD09FB8 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m90943EC8A95BEF0B7653A90C89F26FC8ADD09FB8_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m0187BB447B4788E880EAB9921A60ECB42609286C (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m0187BB447B4788E880EAB9921A60ECB42609286C_gshared)(__this, method);
}
inline void Func_1__ctor_mA4955FA382BBC4CBD82690DCA4DBB23EFFB5B379 (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mA4955FA382BBC4CBD82690DCA4DBB23EFFB5B379_gshared)(__this, ___0_object, ___1_method, method);
}
inline StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 Activator_CreateInstance_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mEE0F7CDAD8C0B99BA86771065E4EE2D71690474C (const RuntimeMethod* method)
{
	return ((  StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 (*) (const RuntimeMethod*))Activator_CreateInstance_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mEE0F7CDAD8C0B99BA86771065E4EE2D71690474C_gshared)(method);
}
inline StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 Func_1_Invoke_m3C0C15EA65260B3A2D23C645DE9908F470E1D6EB_inline (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* __this, const RuntimeMethod* method)
{
	return ((  StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 (*) (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6*, const RuntimeMethod*))Func_1_Invoke_m3C0C15EA65260B3A2D23C645DE9908F470E1D6EB_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m82B5917AD86A0775E7DD8F172FEAE0453CF832CE (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m82B5917AD86A0775E7DD8F172FEAE0453CF832CE_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m51B797D10A3B0912B091FA941851F9CA25028CD7 (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m51B797D10A3B0912B091FA941851F9CA25028CD7_gshared)(__this, method);
}
inline void Func_1__ctor_mCA44589EC746F7662FC5375FE18EC12DC9E057C5 (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mCA44589EC746F7662FC5375FE18EC12DC9E057C5_gshared)(__this, ___0_object, ___1_method, method);
}
inline Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC Activator_CreateInstance_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m112E07EE82B221E3263040A368D5DD9FA4581E7A (const RuntimeMethod* method)
{
	return ((  Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC (*) (const RuntimeMethod*))Activator_CreateInstance_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m112E07EE82B221E3263040A368D5DD9FA4581E7A_gshared)(method);
}
inline Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC Func_1_Invoke_m72E1B2AB7AB84681AB456966658AB4AA2262172E_inline (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* __this, const RuntimeMethod* method)
{
	return ((  Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC (*) (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB*, const RuntimeMethod*))Func_1_Invoke_m72E1B2AB7AB84681AB456966658AB4AA2262172E_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m12EA9186899E84F2F4C3FC7EE5E9BA1EF4A87CE9 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m12EA9186899E84F2F4C3FC7EE5E9BA1EF4A87CE9_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m2D39DE69B79401A5162CC3AE92B414DA350B427E (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m2D39DE69B79401A5162CC3AE92B414DA350B427E_gshared)(__this, method);
}
inline void Func_1__ctor_mBF9DBF4E06C4D61E55687EABBAC4550B432E6D9A (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mBF9DBF4E06C4D61E55687EABBAC4550B432E6D9A_gshared)(__this, ___0_object, ___1_method, method);
}
inline Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 Activator_CreateInstance_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m68F946E397E45AC0C461ABC3CB223C420569B8C5 (const RuntimeMethod* method)
{
	return ((  Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 (*) (const RuntimeMethod*))Activator_CreateInstance_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m68F946E397E45AC0C461ABC3CB223C420569B8C5_gshared)(method);
}
inline Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 Func_1_Invoke_m431E4DC7CE52538C527FFFA27B672C9172B9FA5D_inline (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* __this, const RuntimeMethod* method)
{
	return ((  Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 (*) (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659*, const RuntimeMethod*))Func_1_Invoke_m431E4DC7CE52538C527FFFA27B672C9172B9FA5D_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m49C3C2D5C8CE19D771AC6E44664479AB1A300582 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m49C3C2D5C8CE19D771AC6E44664479AB1A300582_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_mC649308AA476E656E8EDFEB064E80C613E329208 (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_mC649308AA476E656E8EDFEB064E80C613E329208_gshared)(__this, method);
}
inline void Func_1__ctor_m7DAE2F89A23101179BB5B56E3773CE03C3287F94 (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m7DAE2F89A23101179BB5B56E3773CE03C3287F94_gshared)(__this, ___0_object, ___1_method, method);
}
inline BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 Activator_CreateInstance_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mE7341C88FD622F8CC6463B0990DECFDEC77CE513 (const RuntimeMethod* method)
{
	return ((  BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 (*) (const RuntimeMethod*))Activator_CreateInstance_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mE7341C88FD622F8CC6463B0990DECFDEC77CE513_gshared)(method);
}
inline BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 Func_1_Invoke_m22D302915F20EEF62D9C1666172BBE063F7D795A_inline (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* __this, const RuntimeMethod* method)
{
	return ((  BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 (*) (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F*, const RuntimeMethod*))Func_1_Invoke_m22D302915F20EEF62D9C1666172BBE063F7D795A_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m889D9CDB4925D6CEA1E008BD11C74F4C4B526CD7 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m889D9CDB4925D6CEA1E008BD11C74F4C4B526CD7_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_mF8ACDEC4A418A3DC5EB0F27E4682223125B50B29 (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_mF8ACDEC4A418A3DC5EB0F27E4682223125B50B29_gshared)(__this, method);
}
inline void Func_1__ctor_m2749E8A77FD25617A4ECDB5CEEEDE39F9D1EE456 (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m2749E8A77FD25617A4ECDB5CEEEDE39F9D1EE456_gshared)(__this, ___0_object, ___1_method, method);
}
inline BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F Activator_CreateInstance_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m93B83A4B46F4D2E164D1604B782F208D26E12267 (const RuntimeMethod* method)
{
	return ((  BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F (*) (const RuntimeMethod*))Activator_CreateInstance_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m93B83A4B46F4D2E164D1604B782F208D26E12267_gshared)(method);
}
inline BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F Func_1_Invoke_m46E31998378DE2BA4DF293634298EF5AA1E6520B_inline (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* __this, const RuntimeMethod* method)
{
	return ((  BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F (*) (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6*, const RuntimeMethod*))Func_1_Invoke_m46E31998378DE2BA4DF293634298EF5AA1E6520B_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mA41D4EADD69077FA3D6860DDBF38E73AC193A3C8 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mA41D4EADD69077FA3D6860DDBF38E73AC193A3C8_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_mA88560F0713BBFA2C37745AF9D6C52629ED1DF7E (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_mA88560F0713BBFA2C37745AF9D6C52629ED1DF7E_gshared)(__this, method);
}
inline void Func_1__ctor_m5DE18B6F84B0E4095B7DACFC9C7006775018056A (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m5DE18B6F84B0E4095B7DACFC9C7006775018056A_gshared)(__this, ___0_object, ___1_method, method);
}
inline BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 Activator_CreateInstance_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m03ECCA81585078D9FEB71559619D15E1512A86A5 (const RuntimeMethod* method)
{
	return ((  BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 (*) (const RuntimeMethod*))Activator_CreateInstance_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m03ECCA81585078D9FEB71559619D15E1512A86A5_gshared)(method);
}
inline BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 Func_1_Invoke_m387E8C6D589CA66F72630F311D4CA283A6771829_inline (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* __this, const RuntimeMethod* method)
{
	return ((  BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 (*) (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5*, const RuntimeMethod*))Func_1_Invoke_m387E8C6D589CA66F72630F311D4CA283A6771829_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mE320B134EF716E35A5CA75A177D0ABB88DA281C0 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mE320B134EF716E35A5CA75A177D0ABB88DA281C0_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m2092EB1058CE691B86BD2DA94035F4A18D28CE99 (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m2092EB1058CE691B86BD2DA94035F4A18D28CE99_gshared)(__this, method);
}
inline void Func_1__ctor_m40600DEE70082D8157F0AAB3AC1E531E4A48DA6E (Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m40600DEE70082D8157F0AAB3AC1E531E4A48DA6E_gshared)(__this, ___0_object, ___1_method, method);
}
inline Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Activator_CreateInstance_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mA5589FEB1272F05337DDA4D3300BE9B8D9700A35 (const RuntimeMethod* method)
{
	return ((  Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 (*) (const RuntimeMethod*))Activator_CreateInstance_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mA5589FEB1272F05337DDA4D3300BE9B8D9700A35_gshared)(method);
}
inline Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Func_1_Invoke_m0550CD624A6760EE6C25CDCB1F5E159B527857F5_inline (Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* __this, const RuntimeMethod* method)
{
	return ((  Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 (*) (Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2*, const RuntimeMethod*))Func_1_Invoke_m0550CD624A6760EE6C25CDCB1F5E159B527857F5_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8085A1891CE7A1165DDEC25CAE6AAFE21B594DAF (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8085A1891CE7A1165DDEC25CAE6AAFE21B594DAF_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m22E8E1250F27BF4E34A150C25414F7026014918C (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m22E8E1250F27BF4E34A150C25414F7026014918C_gshared)(__this, method);
}
inline void Func_1__ctor_mBED93A7595F38D64DCA95CA0388AD8A054FDBF7A (Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mBED93A7595F38D64DCA95CA0388AD8A054FDBF7A_gshared)(__this, ___0_object, ___1_method, method);
}
inline BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 Activator_CreateInstance_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m352B21AA96F81D3AAFEC94237A3D01038A0C61D8 (const RuntimeMethod* method)
{
	return ((  BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 (*) (const RuntimeMethod*))Activator_CreateInstance_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m352B21AA96F81D3AAFEC94237A3D01038A0C61D8_gshared)(method);
}
inline BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 Func_1_Invoke_m16CD92EAF9608CEFEDBB2F540D76F5BAEFBC1FB9_inline (Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* __this, const RuntimeMethod* method)
{
	return ((  BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 (*) (Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B*, const RuntimeMethod*))Func_1_Invoke_m16CD92EAF9608CEFEDBB2F540D76F5BAEFBC1FB9_gshared_inline)(__this, method);
}
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2811
// Method Definition Index: 2812
// Method Definition Index: 2813
// Method Definition Index: 2814
// Method Definition Index: 2815
// Method Definition Index: 2816
// Method Definition Index: 2817
// Method Definition Index: 2818
// Method Definition Index: 2819
// Method Definition Index: 2820
// Method Definition Index: 2821
// Method Definition Index: 2822
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2811
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Tuple_2_get_Item1_m34FAB77702E3F2E8CAAC6C04C0E5C1FCCA2C661F_gshared (Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Item1;
		return L_0;
	}
}
// Method Definition Index: 2812
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tuple_2_get_Item2_m7B46B78BACEC06553F2CA1626EE0DDCE7ACF97E8_gshared (Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = __this->___m_Item2;
		return L_0;
	}
}
// Method Definition Index: 2813
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_mB4C3903C62BA9208B280300A675CD7AFA26F6A73_gshared (Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item1, float ___1_item2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_item1;
		__this->___m_Item1 = L_0;
		float L_1 = ___1_item2;
		__this->___m_Item2 = L_1;
		return;
	}
}
// Method Definition Index: 2814
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_Equals_mB7654C56F822135110D673EF10212CCB0FD96BAB_gshared (Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2815
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_System_Collections_IStructuralEquatable_Equals_mA8A78F68ACC45F7AC3E5346EE356ED43D72FC0B8_gshared (Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___m_Item1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_5);
		Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* L_7 = V_0;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7->___m_Item1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_9);
		NullCheck(L_3);
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_6, L_10);
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_12 = ___1_comparer;
		float L_13 = __this->___m_Item2;
		float L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_14);
		Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* L_16 = V_0;
		NullCheck(L_16);
		float L_17 = L_16->___m_Item2;
		float L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_18);
		NullCheck(L_12);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_12, L_15, L_19);
		return L_20;
	}

IL_004c:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2816
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_IComparable_CompareTo_m7530E67ECB0F6A8A12218731CB78BD3B947A3C2E_gshared (Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* L_1;
		L_1 = Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F(Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_m44C745045F63BE055968F97BC671DF336933EE55_gshared (Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject*)__this);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		NullCheck((RuntimeObject*)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_3);
		String_t* L_5;
		L_5 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject*)L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002f:
	{
		V_1 = 0;
		RuntimeObject* L_7 = ___1_comparer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___m_Item1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_9);
		Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* L_11 = V_0;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11->___m_Item1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_13);
		NullCheck(L_7);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_7, L_10, L_14);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if (!L_16)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_17 = V_1;
		return L_17;
	}

IL_0053:
	{
		RuntimeObject* L_18 = ___1_comparer;
		float L_19 = __this->___m_Item2;
		float L_20 = L_19;
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_20);
		Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* L_22 = V_0;
		NullCheck(L_22);
		float L_23 = L_22->___m_Item2;
		float L_24 = L_23;
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_24);
		NullCheck(L_18);
		int32_t L_26;
		L_26 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_18, L_21, L_25);
		return L_26;
	}
}
// Method Definition Index: 2818
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_GetHashCode_mEF1EB47D1DF0E5A47637E72C17045AE89937BC67_gshared (Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 2819
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_m8366F26C8BC2A096EA058601A9F98785DB42C7AC_gshared (Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___m_Item1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_2);
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_3);
		RuntimeObject* L_5 = ___0_comparer;
		float L_6 = __this->___m_Item2;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_7);
		NullCheck(L_5);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_5, L_8);
		int32_t L_10;
		L_10 = Tuple_CombineHashCodes_m823D7EC829A9D4FE48FA8B40FBFE6F9DC0092F3C(L_4, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2820
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_ToString_m72B420AEC749FE207EC5FADB64FA68E0BE4A2F3A_gshared (Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		StringBuilder_t* L_3 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t* >::Invoke(0, ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_3);
		return L_4;
	}
}
// Method Definition Index: 2821
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_System_ITupleInternal_ToString_m653DFD78E8D5845DF039F5B1D36977B0C31BAFA3_gshared (Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = ___0_sb;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___m_Item1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_2);
		NullCheck(L_0);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_0, L_3, NULL);
		StringBuilder_t* L_5 = ___0_sb;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_7 = ___0_sb;
		float L_8 = __this->___m_Item2;
		float L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_9);
		NullCheck(L_7);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_7, L_10, NULL);
		StringBuilder_t* L_12 = ___0_sb;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_12, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_14 = ___0_sb;
		NullCheck((RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_14);
		return L_15;
	}
}
// Method Definition Index: 2822
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Runtime_CompilerServices_ITuple_get_Length_m1174FA251D2CFF9C0C085A60DDE9EF056B32D10C_gshared (Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return 2;
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
// Method Definition Index: 2811
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Tuple_2_get_Item1_mDC92A4A0F24802B0D0327E22EC63F29B6AD12015_gshared (Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Item1;
		return L_0;
	}
}
// Method Definition Index: 2812
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Tuple_2_get_Item2_m70C64A09699FE750B648C50EA49D5594EFF1F84A_gshared (Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Item2;
		return L_0;
	}
}
// Method Definition Index: 2813
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_m490CF4373D498719CA3FB7A0FD32AF3BFCA71028_gshared (Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_item2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_item1;
		__this->___m_Item1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_item2;
		__this->___m_Item2 = L_1;
		return;
	}
}
// Method Definition Index: 2814
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_Equals_mF956923FAE2548E6E5B813751353D9FD763469BF_gshared (Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2815
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_System_Collections_IStructuralEquatable_Equals_mEBC44F96720A14CC78AF06B601406D2CF512F565_gshared (Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F* L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___m_Item1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_5);
		Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F* L_7 = V_0;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7->___m_Item1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_9);
		NullCheck(L_3);
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_6, L_10);
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_12 = ___1_comparer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___m_Item2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_14);
		Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F* L_16 = V_0;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = L_16->___m_Item2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_18);
		NullCheck(L_12);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_12, L_15, L_19);
		return L_20;
	}

IL_004c:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2816
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_IComparable_CompareTo_m000069400CA6CBA37466F07F592A6E599E60ED3B_gshared (Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* L_1;
		L_1 = Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F(Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_mA79462EE088C36BF48C70DE78C17C82FB1AB8FD0_gshared (Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F* L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject*)__this);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		NullCheck((RuntimeObject*)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_3);
		String_t* L_5;
		L_5 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject*)L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002f:
	{
		V_1 = 0;
		RuntimeObject* L_7 = ___1_comparer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___m_Item1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_9);
		Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F* L_11 = V_0;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11->___m_Item1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_13);
		NullCheck(L_7);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_7, L_10, L_14);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if (!L_16)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_17 = V_1;
		return L_17;
	}

IL_0053:
	{
		RuntimeObject* L_18 = ___1_comparer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->___m_Item2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = L_19;
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_20);
		Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F* L_22 = V_0;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = L_22->___m_Item2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = L_23;
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_24);
		NullCheck(L_18);
		int32_t L_26;
		L_26 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_18, L_21, L_25);
		return L_26;
	}
}
// Method Definition Index: 2818
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_GetHashCode_mB8E6C1B32DA4472B56497BCEDB60A2EA01AEB3F7_gshared (Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 2819
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_m9BA1C51792835EC7199A6EA21626637BF1D58C0B_gshared (Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___m_Item1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_2);
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_3);
		RuntimeObject* L_5 = ___0_comparer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___m_Item2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_7);
		NullCheck(L_5);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_5, L_8);
		int32_t L_10;
		L_10 = Tuple_CombineHashCodes_m823D7EC829A9D4FE48FA8B40FBFE6F9DC0092F3C(L_4, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2820
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_ToString_m3C75C0D7D80D185AC704C6E5694B7398A6B8C14A_gshared (Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		StringBuilder_t* L_3 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t* >::Invoke(0, ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_3);
		return L_4;
	}
}
// Method Definition Index: 2821
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_System_ITupleInternal_ToString_m1049D43DAFB3C51B2D90837E56581FDDF70D5B83_gshared (Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = ___0_sb;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___m_Item1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_2);
		NullCheck(L_0);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_0, L_3, NULL);
		StringBuilder_t* L_5 = ___0_sb;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_7 = ___0_sb;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___m_Item2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_9);
		NullCheck(L_7);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_7, L_10, NULL);
		StringBuilder_t* L_12 = ___0_sb;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_12, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_14 = ___0_sb;
		NullCheck((RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_14);
		return L_15;
	}
}
// Method Definition Index: 2822
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Runtime_CompilerServices_ITuple_get_Length_mB3CA6543D00D5BF429C659A71928649109D1A01E_gshared (Tuple_2_t1031294228C6EDBE7C73F19D2C7E9C5CEB82B29F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return 2;
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
// Method Definition Index: 2811
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Tuple_2_get_Item1_m1FB9095D5F55441A2C120EF161BBE8C4CBE6DCF9_gshared (Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___m_Item1;
		return L_0;
	}
}
// Method Definition Index: 2812
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_t48D1B1093D181D6F37155EB644659FD7D1DF616E Tuple_2_get_Item2_m0D276C0689A9648923FC35BF3EAED8EBD2ACEA88_gshared (Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Memory_1_t48D1B1093D181D6F37155EB644659FD7D1DF616E L_0 = __this->___m_Item2;
		return L_0;
	}
}
// Method Definition Index: 2813
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_m054049C9CCA0286CDED552DB0F2365E0B7AF707E_gshared (Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8* __this, Il2CppSharedGenericObject* ___0_item1, Memory_1_t48D1B1093D181D6F37155EB644659FD7D1DF616E ___1_item2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Il2CppSharedGenericObject* L_0 = ___0_item1;
		__this->___m_Item1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Item1), (void*)L_0);
		Memory_1_t48D1B1093D181D6F37155EB644659FD7D1DF616E L_1 = ___1_item2;
		__this->___m_Item2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_Item2))->____object), (void*)NULL);
		return;
	}
}
// Method Definition Index: 2814
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_Equals_mBD095004C7FBD5AFC10BEF5C42C68566D6E50A9C_gshared (Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2815
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_System_Collections_IStructuralEquatable_Equals_m9FF7B9A86E49310EA0249F6350F18CDE36EA7807_gshared (Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8* L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Il2CppSharedGenericObject* L_4 = __this->___m_Item1;
		Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8* L_5 = V_0;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_6 = L_5->___m_Item1;
		NullCheck(L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, (RuntimeObject*)L_4, (RuntimeObject*)L_6);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_8 = ___1_comparer;
		Memory_1_t48D1B1093D181D6F37155EB644659FD7D1DF616E L_9 = __this->___m_Item2;
		Memory_1_t48D1B1093D181D6F37155EB644659FD7D1DF616E L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_10);
		Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8* L_12 = V_0;
		NullCheck(L_12);
		Memory_1_t48D1B1093D181D6F37155EB644659FD7D1DF616E L_13 = L_12->___m_Item2;
		Memory_1_t48D1B1093D181D6F37155EB644659FD7D1DF616E L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_14);
		NullCheck(L_8);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, L_11, L_15);
		return L_16;
	}

IL_004c:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2816
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_IComparable_CompareTo_m10C8220452BC9FBBB305A74A293F6CEF2ABA3B95_gshared (Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* L_1;
		L_1 = Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F(Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_mBDF154673D0295BFBB7E6200CAEB6A59D16CB153_gshared (Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8* L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject*)__this);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		NullCheck((RuntimeObject*)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_3);
		String_t* L_5;
		L_5 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject*)L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002f:
	{
		V_1 = 0;
		RuntimeObject* L_7 = ___1_comparer;
		Il2CppSharedGenericObject* L_8 = __this->___m_Item1;
		Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8* L_9 = V_0;
		NullCheck(L_9);
		Il2CppSharedGenericObject* L_10 = L_9->___m_Item1;
		NullCheck(L_7);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_7, (RuntimeObject*)L_8, (RuntimeObject*)L_10);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___1_comparer;
		Memory_1_t48D1B1093D181D6F37155EB644659FD7D1DF616E L_15 = __this->___m_Item2;
		Memory_1_t48D1B1093D181D6F37155EB644659FD7D1DF616E L_16 = L_15;
		RuntimeObject* L_17 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_16);
		Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8* L_18 = V_0;
		NullCheck(L_18);
		Memory_1_t48D1B1093D181D6F37155EB644659FD7D1DF616E L_19 = L_18->___m_Item2;
		Memory_1_t48D1B1093D181D6F37155EB644659FD7D1DF616E L_20 = L_19;
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_20);
		NullCheck(L_14);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_14, L_17, L_21);
		return L_22;
	}
}
// Method Definition Index: 2818
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_GetHashCode_m5DD0A34F9A46DDD421BAC527F2C09B6FE057A45E_gshared (Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 2819
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_mDB041F75F174AB51B1B4BDCAC5F69A450AEF8D71_gshared (Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Il2CppSharedGenericObject* L_1 = __this->___m_Item1;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, (RuntimeObject*)L_1);
		RuntimeObject* L_3 = ___0_comparer;
		Memory_1_t48D1B1093D181D6F37155EB644659FD7D1DF616E L_4 = __this->___m_Item2;
		Memory_1_t48D1B1093D181D6F37155EB644659FD7D1DF616E L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_5);
		NullCheck(L_3);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_6);
		int32_t L_8;
		L_8 = Tuple_CombineHashCodes_m823D7EC829A9D4FE48FA8B40FBFE6F9DC0092F3C(L_2, L_7, NULL);
		return L_8;
	}
}
// Method Definition Index: 2820
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_ToString_m7B83E1C30FFA01DBE05A86C0658843B96B348EF7_gshared (Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		StringBuilder_t* L_3 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t* >::Invoke(0, ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_3);
		return L_4;
	}
}
// Method Definition Index: 2821
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_System_ITupleInternal_ToString_m6F767613254B94A6FFB14349D31DFE0FE991FCB1_gshared (Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = ___0_sb;
		Il2CppSharedGenericObject* L_1 = __this->___m_Item1;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_0, (RuntimeObject*)L_1, NULL);
		StringBuilder_t* L_3 = ___0_sb;
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_5 = ___0_sb;
		Memory_1_t48D1B1093D181D6F37155EB644659FD7D1DF616E L_6 = __this->___m_Item2;
		Memory_1_t48D1B1093D181D6F37155EB644659FD7D1DF616E L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_7);
		NullCheck(L_5);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_5, L_8, NULL);
		StringBuilder_t* L_10 = ___0_sb;
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_10, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_12 = ___0_sb;
		NullCheck((RuntimeObject*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_12);
		return L_13;
	}
}
// Method Definition Index: 2822
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Runtime_CompilerServices_ITuple_get_Length_m19EE46BFBAF0543A0F4EF0A9264C6C9F8BD8552F_gshared (Tuple_2_t4828E82D6D4937C893E0D62946C9EBB0FB2E34D8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return 2;
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
// Method Definition Index: 2811
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Tuple_2_get_Item1_m9966CCAC922FEBEAF13030FC88996813619E1328_gshared (Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___m_Item1;
		return L_0;
	}
}
// Method Definition Index: 2812
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Tuple_2_get_Item2_mC73ED77CC5C352B9BCC8A0ED1E8C555014D156DD_gshared (Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppChar L_0 = __this->___m_Item2;
		return L_0;
	}
}
// Method Definition Index: 2813
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_m4AFE064BD6EDF0BA6125DAEE68FE7E99612D5D76_gshared (Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764* __this, Il2CppSharedGenericObject* ___0_item1, Il2CppChar ___1_item2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Il2CppSharedGenericObject* L_0 = ___0_item1;
		__this->___m_Item1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Item1), (void*)L_0);
		Il2CppChar L_1 = ___1_item2;
		__this->___m_Item2 = L_1;
		return;
	}
}
// Method Definition Index: 2814
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_Equals_mC655C9346667EE708BBA83BB1B0BC4D7C373B1E6_gshared (Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2815
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_System_Collections_IStructuralEquatable_Equals_mEF4E07AABF7B5F5EB100B4AA75E6BD5075AB97C1_gshared (Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764* L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Il2CppSharedGenericObject* L_4 = __this->___m_Item1;
		Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764* L_5 = V_0;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_6 = L_5->___m_Item1;
		NullCheck(L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, (RuntimeObject*)L_4, (RuntimeObject*)L_6);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_8 = ___1_comparer;
		Il2CppChar L_9 = __this->___m_Item2;
		Il2CppChar L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_10);
		Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764* L_12 = V_0;
		NullCheck(L_12);
		Il2CppChar L_13 = L_12->___m_Item2;
		Il2CppChar L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_14);
		NullCheck(L_8);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, L_11, L_15);
		return L_16;
	}

IL_004c:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2816
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_IComparable_CompareTo_m2720A8CED2AF3D1BD65F5CD36B378FBBF7FDF2A8_gshared (Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* L_1;
		L_1 = Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F(Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_mFF381CF7A23D720E4220939F933BC0EC282FA90D_gshared (Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764* L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject*)__this);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		NullCheck((RuntimeObject*)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_3);
		String_t* L_5;
		L_5 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject*)L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002f:
	{
		V_1 = 0;
		RuntimeObject* L_7 = ___1_comparer;
		Il2CppSharedGenericObject* L_8 = __this->___m_Item1;
		Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764* L_9 = V_0;
		NullCheck(L_9);
		Il2CppSharedGenericObject* L_10 = L_9->___m_Item1;
		NullCheck(L_7);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_7, (RuntimeObject*)L_8, (RuntimeObject*)L_10);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___1_comparer;
		Il2CppChar L_15 = __this->___m_Item2;
		Il2CppChar L_16 = L_15;
		RuntimeObject* L_17 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_16);
		Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764* L_18 = V_0;
		NullCheck(L_18);
		Il2CppChar L_19 = L_18->___m_Item2;
		Il2CppChar L_20 = L_19;
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_20);
		NullCheck(L_14);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_14, L_17, L_21);
		return L_22;
	}
}
// Method Definition Index: 2818
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_GetHashCode_mA3963182E965B0F0D1D87278C97996EA5F8265A6_gshared (Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 2819
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_m65070793B59B3A0ABA75ED128547BBE6A79E5588_gshared (Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Il2CppSharedGenericObject* L_1 = __this->___m_Item1;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, (RuntimeObject*)L_1);
		RuntimeObject* L_3 = ___0_comparer;
		Il2CppChar L_4 = __this->___m_Item2;
		Il2CppChar L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_5);
		NullCheck(L_3);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_6);
		int32_t L_8;
		L_8 = Tuple_CombineHashCodes_m823D7EC829A9D4FE48FA8B40FBFE6F9DC0092F3C(L_2, L_7, NULL);
		return L_8;
	}
}
// Method Definition Index: 2820
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_ToString_m20BD1F82FD306DE009406A4EDF32876BD0F1C15E_gshared (Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		StringBuilder_t* L_3 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t* >::Invoke(0, ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_3);
		return L_4;
	}
}
// Method Definition Index: 2821
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_System_ITupleInternal_ToString_m2FD68B59B53C5927B2C54BD7E243B1D6D60C8A62_gshared (Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = ___0_sb;
		Il2CppSharedGenericObject* L_1 = __this->___m_Item1;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_0, (RuntimeObject*)L_1, NULL);
		StringBuilder_t* L_3 = ___0_sb;
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_5 = ___0_sb;
		Il2CppChar L_6 = __this->___m_Item2;
		Il2CppChar L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_7);
		NullCheck(L_5);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_5, L_8, NULL);
		StringBuilder_t* L_10 = ___0_sb;
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_10, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_12 = ___0_sb;
		NullCheck((RuntimeObject*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_12);
		return L_13;
	}
}
// Method Definition Index: 2822
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Runtime_CompilerServices_ITuple_get_Length_mA7A07CECF55F0F41BAB16E764A928CF87FE8384F_gshared (Tuple_2_t017348F0D4B98DA56DEB2B0117FF1551FBCB2764* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return 2;
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
// Method Definition Index: 2811
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Tuple_2_get_Item1_m021E7992333B11322D3B042BD09C2EE7B35BEF21_gshared (Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___m_Item1;
		return L_0;
	}
}
// Method Definition Index: 2812
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Tuple_2_get_Item2_mEB98D0541608A1A3224BF892319EECF5DF8BC774_gshared (Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___m_Item2;
		return L_0;
	}
}
// Method Definition Index: 2813
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_mCF17A5763381717C7B050B987E97FF2F22362542_gshared (Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* __this, Il2CppSharedGenericObject* ___0_item1, Il2CppSharedGenericObject* ___1_item2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Il2CppSharedGenericObject* L_0 = ___0_item1;
		__this->___m_Item1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Item1), (void*)L_0);
		Il2CppSharedGenericObject* L_1 = ___1_item2;
		__this->___m_Item2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Item2), (void*)L_1);
		return;
	}
}
// Method Definition Index: 2814
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_Equals_m1D6CA5161AF0799EC194E4D11F566F6E99AC84CE_gshared (Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2815
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_System_Collections_IStructuralEquatable_Equals_mDEF5870426EA1644C140D8D2DB3A27DE06642A02_gshared (Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Il2CppSharedGenericObject* L_4 = __this->___m_Item1;
		Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* L_5 = V_0;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_6 = L_5->___m_Item1;
		NullCheck(L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, (RuntimeObject*)L_4, (RuntimeObject*)L_6);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_8 = ___1_comparer;
		Il2CppSharedGenericObject* L_9 = __this->___m_Item2;
		Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* L_10 = V_0;
		NullCheck(L_10);
		Il2CppSharedGenericObject* L_11 = L_10->___m_Item2;
		NullCheck(L_8);
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, (RuntimeObject*)L_9, (RuntimeObject*)L_11);
		return L_12;
	}

IL_004c:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2816
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_IComparable_CompareTo_m1EC88D7AD99DE3F8185279081D98EAB0B05CDDDB_gshared (Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* L_1;
		L_1 = Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F(Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_m8422B1F8B444A002584FC58CAC0490FD5551F47C_gshared (Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject*)__this);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		NullCheck((RuntimeObject*)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_3);
		String_t* L_5;
		L_5 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject*)L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002f:
	{
		V_1 = 0;
		RuntimeObject* L_7 = ___1_comparer;
		Il2CppSharedGenericObject* L_8 = __this->___m_Item1;
		Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* L_9 = V_0;
		NullCheck(L_9);
		Il2CppSharedGenericObject* L_10 = L_9->___m_Item1;
		NullCheck(L_7);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_7, (RuntimeObject*)L_8, (RuntimeObject*)L_10);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___1_comparer;
		Il2CppSharedGenericObject* L_15 = __this->___m_Item2;
		Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* L_16 = V_0;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_17 = L_16->___m_Item2;
		NullCheck(L_14);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_14, (RuntimeObject*)L_15, (RuntimeObject*)L_17);
		return L_18;
	}
}
// Method Definition Index: 2818
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_GetHashCode_mC62A227753686616F083F081C6A0E48C5E6F353F_gshared (Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 2819
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_mA22394E740DB0289FAA22110DC505AD69C5529BA_gshared (Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Il2CppSharedGenericObject* L_1 = __this->___m_Item1;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, (RuntimeObject*)L_1);
		RuntimeObject* L_3 = ___0_comparer;
		Il2CppSharedGenericObject* L_4 = __this->___m_Item2;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, (RuntimeObject*)L_4);
		int32_t L_6;
		L_6 = Tuple_CombineHashCodes_m823D7EC829A9D4FE48FA8B40FBFE6F9DC0092F3C(L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2820
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_ToString_mF2562F880C1BDA9FCA095FCC1F1D69F320C86EE2_gshared (Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		StringBuilder_t* L_3 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t* >::Invoke(0, ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_3);
		return L_4;
	}
}
// Method Definition Index: 2821
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_System_ITupleInternal_ToString_mDE2ED6EBA1ACDD1DAA0F2D261008A07EAD7C175E_gshared (Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = ___0_sb;
		Il2CppSharedGenericObject* L_1 = __this->___m_Item1;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_0, (RuntimeObject*)L_1, NULL);
		StringBuilder_t* L_3 = ___0_sb;
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_5 = ___0_sb;
		Il2CppSharedGenericObject* L_6 = __this->___m_Item2;
		NullCheck(L_5);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_5, (RuntimeObject*)L_6, NULL);
		StringBuilder_t* L_8 = ___0_sb;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_10 = ___0_sb;
		NullCheck((RuntimeObject*)L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_10);
		return L_11;
	}
}
// Method Definition Index: 2822
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Runtime_CompilerServices_ITuple_get_Length_m22FFD373679A011FC300E704B7105B49436F5BD1_gshared (Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return 2;
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
// Method Definition Index: 2811
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2_get_Item1_mC87072BD14E3669527D96A8739B3E5CA83FCFBD0_gshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
		return;
	}
}
// Method Definition Index: 2812
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2_get_Item2_m7398C77129F66B0CE22A8E95CF2DD790CC693C9B_gshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
		return;
	}
}
// Method Definition Index: 2813
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_mE6FEB2739A30DACC4CFCC8E1207E418437B3CCC1_gshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_item1 : &___0_item1), SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0, SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___1_item2 : &___1_item2), SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_1, SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
		return;
	}
}
// Method Definition Index: 2814
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_Equals_m0D315E199012501CFEE5F0FAABE0DE9CCF1C0082_gshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2815
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_System_Collections_IStructuralEquatable_Equals_m4278C8C38D35221DEA46EF833706A6010BAE92A1_gshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
	//<source_info:<no-source>:1>
	Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___1_comparer;
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_4);
		Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* L_6 = V_0;
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_7);
		NullCheck(L_3);
		bool L_9;
		L_9 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_5, L_8);
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_10 = ___1_comparer;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_11);
		Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* L_13 = V_0;
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_instance_field_data_pointer(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_14);
		NullCheck(L_10);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_12, L_15);
		return L_16;
	}

IL_004c:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2816
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_IComparable_CompareTo_mABED391687D5954EA9A53C5D42D92ACA380C0F99_gshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* L_1;
		L_1 = Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F(Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_m7A8E8C68D22FF305F22F22C36E009489331A8E2F_gshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
	//<source_info:<no-source>:1>
	Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject*)__this);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		NullCheck((RuntimeObject*)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_3);
		String_t* L_5;
		L_5 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject*)L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002f:
	{
		V_1 = 0;
		RuntimeObject* L_7 = ___1_comparer;
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_8);
		Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* L_10 = V_0;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_11);
		NullCheck(L_7);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_7, L_9, L_12);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if (!L_14)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_15 = V_1;
		return L_15;
	}

IL_0053:
	{
		RuntimeObject* L_16 = ___1_comparer;
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_17);
		Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* L_19 = V_0;
		il2cpp_codegen_memcpy(L_20, il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_20);
		NullCheck(L_16);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_16, L_18, L_21);
		return L_22;
	}
}
// Method Definition Index: 2818
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_GetHashCode_m66044BD161F74E7984107A237781B1B289ADBED4_gshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 2819
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_mF54916BEFDCDE920545FAD9EBE92E040AE962EFA_gshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_1);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_2);
		RuntimeObject* L_4 = ___0_comparer;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_5);
		NullCheck(L_4);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_4, L_6);
		int32_t L_8;
		L_8 = Tuple_CombineHashCodes_m823D7EC829A9D4FE48FA8B40FBFE6F9DC0092F3C(L_3, L_7, NULL);
		return L_8;
	}
}
// Method Definition Index: 2820
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_ToString_m788B9A0A488C9938C7A2051E172223EE47F4DD11_gshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		StringBuilder_t* L_3 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t* >::Invoke(0, ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_3);
		return L_4;
	}
}
// Method Definition Index: 2821
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_System_ITupleInternal_ToString_m1346E87EB59CD7F225B6A747CB56494F9FF182F4_gshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = ___0_sb;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_1);
		NullCheck(L_0);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_0, L_2, NULL);
		StringBuilder_t* L_4 = ___0_sb;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_6 = ___0_sb;
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_7);
		NullCheck(L_6);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_6, L_8, NULL);
		StringBuilder_t* L_10 = ___0_sb;
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_10, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_12 = ___0_sb;
		NullCheck((RuntimeObject*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_12);
		return L_13;
	}
}
// Method Definition Index: 2822
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Runtime_CompilerServices_ITuple_get_Length_m90E2B5CFA79CBAE5B89A1B148C90A9183E1A6BDC_gshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return 2;
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
// Method Definition Index: 2811
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item1_m8FA25A72F04EF5F8AE54C276C761CB0532232D65_gshared (Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Item1;
		return L_0;
	}
}
// Method Definition Index: 2812
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item2_m2DFF6F82A974277C5E7431A6A1659DA3CEE20D8F_gshared (Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Item2;
		return L_0;
	}
}
// Method Definition Index: 2813
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_m94EDEA7D483C0368D6A36DBBB95BA2AA28C8773D_gshared (Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937* __this, int32_t ___0_item1, int32_t ___1_item2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_item1;
		__this->___m_Item1 = L_0;
		int32_t L_1 = ___1_item2;
		__this->___m_Item2 = L_1;
		return;
	}
}
// Method Definition Index: 2814
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_Equals_m904D7E4CAEF4EC05469A066B38D8C436DA9B9857_gshared (Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2815
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_System_Collections_IStructuralEquatable_Equals_m12778BFB57A4ECEE8948C5EE500E6CAEC4FEE8CE_gshared (Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937* L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___1_comparer;
		int32_t L_4 = __this->___m_Item1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_5);
		Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___m_Item1;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_9);
		NullCheck(L_3);
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_6, L_10);
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_12 = ___1_comparer;
		int32_t L_13 = __this->___m_Item2;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_14);
		Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = L_16->___m_Item2;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_18);
		NullCheck(L_12);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_12, L_15, L_19);
		return L_20;
	}

IL_004c:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2816
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_IComparable_CompareTo_mFEF1192A7227F5BBA90CBE234FE0C8D93DB1E9FA_gshared (Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* L_1;
		L_1 = Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F(Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_m3985DD05B6DF3696CB7501CD4548CE0097727C4F_gshared (Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937* L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject*)__this);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		NullCheck((RuntimeObject*)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_3);
		String_t* L_5;
		L_5 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject*)L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002f:
	{
		V_1 = 0;
		RuntimeObject* L_7 = ___1_comparer;
		int32_t L_8 = __this->___m_Item1;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_9);
		Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___m_Item1;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_13);
		NullCheck(L_7);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_7, L_10, L_14);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if (!L_16)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_17 = V_1;
		return L_17;
	}

IL_0053:
	{
		RuntimeObject* L_18 = ___1_comparer;
		int32_t L_19 = __this->___m_Item2;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_20);
		Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = L_22->___m_Item2;
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_24);
		NullCheck(L_18);
		int32_t L_26;
		L_26 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_18, L_21, L_25);
		return L_26;
	}
}
// Method Definition Index: 2818
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_GetHashCode_mDFDE6777C04EBFCC332484E165882B2CE1E0E1C5_gshared (Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 2819
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_m30DC8C39133D5FC66756120533B07FB667890CA2_gshared (Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1 = __this->___m_Item1;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_2);
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_3);
		RuntimeObject* L_5 = ___0_comparer;
		int32_t L_6 = __this->___m_Item2;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_7);
		NullCheck(L_5);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_5, L_8);
		int32_t L_10;
		L_10 = Tuple_CombineHashCodes_m823D7EC829A9D4FE48FA8B40FBFE6F9DC0092F3C(L_4, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2820
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_ToString_m9B9649471AE226C5B6ACF60E4EBAC8CF93E0144D_gshared (Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		StringBuilder_t* L_3 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t* >::Invoke(0, ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_3);
		return L_4;
	}
}
// Method Definition Index: 2821
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_System_ITupleInternal_ToString_mD08E068863D796B55B0DD5345BA14E31264426E3_gshared (Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = ___0_sb;
		int32_t L_1 = __this->___m_Item1;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_2);
		NullCheck(L_0);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_0, L_3, NULL);
		StringBuilder_t* L_5 = ___0_sb;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_7 = ___0_sb;
		int32_t L_8 = __this->___m_Item2;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_9);
		NullCheck(L_7);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_7, L_10, NULL);
		StringBuilder_t* L_12 = ___0_sb;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_12, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_14 = ___0_sb;
		NullCheck((RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_14);
		return L_15;
	}
}
// Method Definition Index: 2822
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Runtime_CompilerServices_ITuple_get_Length_m495C1B0D059CB732765EE4125A519E1744DCA951_gshared (Tuple_2_t8F347FCC4F27EA46DAF561114DE834F9D0D84937* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return 2;
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
// Method Definition Index: 2811
// Method Definition Index: 2812
// Method Definition Index: 2813
// Method Definition Index: 2814
// Method Definition Index: 2815
// Method Definition Index: 2816
// Method Definition Index: 2817
// Method Definition Index: 2818
// Method Definition Index: 2819
// Method Definition Index: 2820
// Method Definition Index: 2821
// Method Definition Index: 2822
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2811
// Method Definition Index: 2812
// Method Definition Index: 2813
// Method Definition Index: 2814
// Method Definition Index: 2815
// Method Definition Index: 2816
// Method Definition Index: 2817
// Method Definition Index: 2818
// Method Definition Index: 2819
// Method Definition Index: 2820
// Method Definition Index: 2821
// Method Definition Index: 2822
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2823
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Tuple_3_get_Item1_m4F4334EC810E0FF5BF87B98F25922428C7BE92BB_gshared (Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_Item1;
		return L_0;
	}
}
// Method Definition Index: 2824
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tuple_3_get_Item2_m65F4F239A00C1CFE58AFDE6524B96591C8AC3B6E_gshared (Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = __this->___m_Item2;
		return L_0;
	}
}
// Method Definition Index: 2825
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tuple_3_get_Item3_mD6C3873024C659CB2623E81E6973D4B84D17D657_gshared (Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = __this->___m_Item3;
		return L_0;
	}
}
// Method Definition Index: 2826
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_3__ctor_mBAC8962F4863D9FDDF0C755012901A0D562ED896_gshared (Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_item1, float ___1_item2, float ___2_item3, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_item1;
		__this->___m_Item1 = L_0;
		float L_1 = ___1_item2;
		__this->___m_Item2 = L_1;
		float L_2 = ___2_item3;
		__this->___m_Item3 = L_2;
		return;
	}
}
// Method Definition Index: 2827
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_3_Equals_mC2A647E5308AE5803F6CA15CAA68E968B404DF9C_gshared (Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2828
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_3_System_Collections_IStructuralEquatable_Equals_mDFDB81CF504BE6994C8E021947B861CC98804D56_gshared (Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25* L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = __this->___m_Item1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_5);
		Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25* L_7 = V_0;
		NullCheck(L_7);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8 = L_7->___m_Item1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_9);
		NullCheck(L_3);
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_6, L_10);
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_12 = ___1_comparer;
		float L_13 = __this->___m_Item2;
		float L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_14);
		Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25* L_16 = V_0;
		NullCheck(L_16);
		float L_17 = L_16->___m_Item2;
		float L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_18);
		NullCheck(L_12);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_12, L_15, L_19);
		if (!L_20)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_21 = ___1_comparer;
		float L_22 = __this->___m_Item3;
		float L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_23);
		Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25* L_25 = V_0;
		NullCheck(L_25);
		float L_26 = L_25->___m_Item3;
		float L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_27);
		NullCheck(L_21);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_21, L_24, L_28);
		return L_29;
	}

IL_006a:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2829
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_IComparable_CompareTo_mFE06A8361EFCB03F509FCEDB94D4EF207DA9466C_gshared (Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* L_1;
		L_1 = Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F(Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2830
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Collections_IStructuralComparable_CompareTo_m0CE0BDA33E834550EEF5F66CA6A2A02FDFDD0B72_gshared (Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25* L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject*)__this);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		NullCheck((RuntimeObject*)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_3);
		String_t* L_5;
		L_5 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject*)L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002f:
	{
		V_1 = 0;
		RuntimeObject* L_7 = ___1_comparer;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8 = __this->___m_Item1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_9);
		Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25* L_11 = V_0;
		NullCheck(L_11);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12 = L_11->___m_Item1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_13);
		NullCheck(L_7);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_7, L_10, L_14);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if (!L_16)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_17 = V_1;
		return L_17;
	}

IL_0053:
	{
		RuntimeObject* L_18 = ___1_comparer;
		float L_19 = __this->___m_Item2;
		float L_20 = L_19;
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_20);
		Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25* L_22 = V_0;
		NullCheck(L_22);
		float L_23 = L_22->___m_Item2;
		float L_24 = L_23;
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_24);
		NullCheck(L_18);
		int32_t L_26;
		L_26 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_18, L_21, L_25);
		V_1 = L_26;
		int32_t L_27 = V_1;
		if (!L_27)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_28 = V_1;
		return L_28;
	}

IL_0075:
	{
		RuntimeObject* L_29 = ___1_comparer;
		float L_30 = __this->___m_Item3;
		float L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_31);
		Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25* L_33 = V_0;
		NullCheck(L_33);
		float L_34 = L_33->___m_Item3;
		float L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_35);
		NullCheck(L_29);
		int32_t L_37;
		L_37 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_29, L_32, L_36);
		return L_37;
	}
}
// Method Definition Index: 2831
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_GetHashCode_m6A64ED4AECE914F3308F9B94FF361AD0DD0C37B9_gshared (Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 2832
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Collections_IStructuralEquatable_GetHashCode_mF3D6C777B9CB1FD3628BB2B42528CC70D4A8710F_gshared (Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = __this->___m_Item1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_2);
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_3);
		RuntimeObject* L_5 = ___0_comparer;
		float L_6 = __this->___m_Item2;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_7);
		NullCheck(L_5);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_5, L_8);
		RuntimeObject* L_10 = ___0_comparer;
		float L_11 = __this->___m_Item3;
		float L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_12);
		NullCheck(L_10);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_13);
		int32_t L_15;
		L_15 = Tuple_CombineHashCodes_mE2699A82EC949B2BDC6E5F34C1B73BAF6C613E50(L_4, L_9, L_14, NULL);
		return L_15;
	}
}
// Method Definition Index: 2833
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_3_ToString_m6057E2DE662951B25B8885CCEDD33ED6F8D87ACE_gshared (Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		StringBuilder_t* L_3 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t* >::Invoke(0, ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_3);
		return L_4;
	}
}
// Method Definition Index: 2834
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_3_System_ITupleInternal_ToString_m67C482F8B3050EFC6555DF6FAC3842CDA53A91A0_gshared (Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = ___0_sb;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = __this->___m_Item1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_2);
		NullCheck(L_0);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_0, L_3, NULL);
		StringBuilder_t* L_5 = ___0_sb;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_7 = ___0_sb;
		float L_8 = __this->___m_Item2;
		float L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_9);
		NullCheck(L_7);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_7, L_10, NULL);
		StringBuilder_t* L_12 = ___0_sb;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_14 = ___0_sb;
		float L_15 = __this->___m_Item3;
		float L_16 = L_15;
		RuntimeObject* L_17 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_16);
		NullCheck(L_14);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_14, L_17, NULL);
		StringBuilder_t* L_19 = ___0_sb;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_19, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_21 = ___0_sb;
		NullCheck((RuntimeObject*)L_21);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_21);
		return L_22;
	}
}
// Method Definition Index: 2835
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Runtime_CompilerServices_ITuple_get_Length_m0A2805A869454042A7315EBED3AF6901A02774F0_gshared (Tuple_3_t4F66A5E98AEAE37DCDB7C4409998C7D74F649A25* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return 3;
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
// Method Definition Index: 2823
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Tuple_3_get_Item1_mFE6D63B8040EFC975DE8858ED52F3E8493F08106_gshared (Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___m_Item1;
		return L_0;
	}
}
// Method Definition Index: 2824
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Tuple_3_get_Item2_m008A8757E37563037A331A0C86E464A88F9A5CE5_gshared (Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_0 = __this->___m_Item2;
		return L_0;
	}
}
// Method Definition Index: 2825
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Tuple_3_get_Item3_mA1170AB672A1A28BCF0012CC53A3412655F5A4DD_gshared (Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___m_Item3;
		return L_0;
	}
}
// Method Definition Index: 2826
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_3__ctor_mC0598D1C552EABE66E35303D588AEB44AB3A3AF5_gshared (Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* __this, Il2CppSharedGenericObject* ___0_item1, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___1_item2, Il2CppSharedGenericObject* ___2_item3, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Il2CppSharedGenericObject* L_0 = ___0_item1;
		__this->___m_Item1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Item1), (void*)L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_1 = ___1_item2;
		__this->___m_Item2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_Item2))->____object), (void*)NULL);
		Il2CppSharedGenericObject* L_2 = ___2_item3;
		__this->___m_Item3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Item3), (void*)L_2);
		return;
	}
}
// Method Definition Index: 2827
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_3_Equals_m13D704572C3816EE4AE2712A86B876DD6947532C_gshared (Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2828
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_3_System_Collections_IStructuralEquatable_Equals_m6FB91EA31AEF5A9D8B02D46975266C9F4FE6B7F9_gshared (Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Il2CppSharedGenericObject* L_4 = __this->___m_Item1;
		Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* L_5 = V_0;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_6 = L_5->___m_Item1;
		NullCheck(L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, (RuntimeObject*)L_4, (RuntimeObject*)L_6);
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_8 = ___1_comparer;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_9 = __this->___m_Item2;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_10);
		Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* L_12 = V_0;
		NullCheck(L_12);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_13 = L_12->___m_Item2;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_14);
		NullCheck(L_8);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, L_11, L_15);
		if (!L_16)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_17 = ___1_comparer;
		Il2CppSharedGenericObject* L_18 = __this->___m_Item3;
		Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* L_19 = V_0;
		NullCheck(L_19);
		Il2CppSharedGenericObject* L_20 = L_19->___m_Item3;
		NullCheck(L_17);
		bool L_21;
		L_21 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_17, (RuntimeObject*)L_18, (RuntimeObject*)L_20);
		return L_21;
	}

IL_006a:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2829
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_IComparable_CompareTo_m42BA79D1CD427A85BC3BC619A9541048762EAB38_gshared (Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* L_1;
		L_1 = Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F(Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2830
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Collections_IStructuralComparable_CompareTo_m51E8B279409E28F6FD0BBA857492702CFC45E700_gshared (Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject*)__this);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		NullCheck((RuntimeObject*)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_3);
		String_t* L_5;
		L_5 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject*)L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002f:
	{
		V_1 = 0;
		RuntimeObject* L_7 = ___1_comparer;
		Il2CppSharedGenericObject* L_8 = __this->___m_Item1;
		Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* L_9 = V_0;
		NullCheck(L_9);
		Il2CppSharedGenericObject* L_10 = L_9->___m_Item1;
		NullCheck(L_7);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_7, (RuntimeObject*)L_8, (RuntimeObject*)L_10);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___1_comparer;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_15 = __this->___m_Item2;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_16 = L_15;
		RuntimeObject* L_17 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_16);
		Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* L_18 = V_0;
		NullCheck(L_18);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_19 = L_18->___m_Item2;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_20 = L_19;
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_20);
		NullCheck(L_14);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_14, L_17, L_21);
		V_1 = L_22;
		int32_t L_23 = V_1;
		if (!L_23)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_24 = V_1;
		return L_24;
	}

IL_0075:
	{
		RuntimeObject* L_25 = ___1_comparer;
		Il2CppSharedGenericObject* L_26 = __this->___m_Item3;
		Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* L_27 = V_0;
		NullCheck(L_27);
		Il2CppSharedGenericObject* L_28 = L_27->___m_Item3;
		NullCheck(L_25);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_25, (RuntimeObject*)L_26, (RuntimeObject*)L_28);
		return L_29;
	}
}
// Method Definition Index: 2831
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_GetHashCode_m09745BC3545358336B6BD027D4B0C478C3B63938_gshared (Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 2832
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Collections_IStructuralEquatable_GetHashCode_m4CB668694B2107524DB1D45EFEB70257A18C5C69_gshared (Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Il2CppSharedGenericObject* L_1 = __this->___m_Item1;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, (RuntimeObject*)L_1);
		RuntimeObject* L_3 = ___0_comparer;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_4 = __this->___m_Item2;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_5);
		NullCheck(L_3);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_6);
		RuntimeObject* L_8 = ___0_comparer;
		Il2CppSharedGenericObject* L_9 = __this->___m_Item3;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, (RuntimeObject*)L_9);
		int32_t L_11;
		L_11 = Tuple_CombineHashCodes_mE2699A82EC949B2BDC6E5F34C1B73BAF6C613E50(L_2, L_7, L_10, NULL);
		return L_11;
	}
}
// Method Definition Index: 2833
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_3_ToString_m279BB8CAF973756DDC5AD57DFED4CAFF15089CEE_gshared (Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		StringBuilder_t* L_3 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t* >::Invoke(0, ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_3);
		return L_4;
	}
}
// Method Definition Index: 2834
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_3_System_ITupleInternal_ToString_mD0E81CA6A9CD8AD963AA56EFE0DDC58B62F30858_gshared (Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = ___0_sb;
		Il2CppSharedGenericObject* L_1 = __this->___m_Item1;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_0, (RuntimeObject*)L_1, NULL);
		StringBuilder_t* L_3 = ___0_sb;
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_5 = ___0_sb;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_6 = __this->___m_Item2;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_7);
		NullCheck(L_5);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_5, L_8, NULL);
		StringBuilder_t* L_10 = ___0_sb;
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_12 = ___0_sb;
		Il2CppSharedGenericObject* L_13 = __this->___m_Item3;
		NullCheck(L_12);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_12, (RuntimeObject*)L_13, NULL);
		StringBuilder_t* L_15 = ___0_sb;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = ___0_sb;
		NullCheck((RuntimeObject*)L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_17);
		return L_18;
	}
}
// Method Definition Index: 2835
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Runtime_CompilerServices_ITuple_get_Length_m6AF30F8033522FBA076AE86376625F4E33B625E2_gshared (Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return 3;
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
// Method Definition Index: 2823
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Tuple_3_get_Item1_m27D39D6462E97DB4266DFD333599A1DD31CE0FE2_gshared (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___m_Item1;
		return L_0;
	}
}
// Method Definition Index: 2824
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Tuple_3_get_Item2_m78DBCB1098B966E7A39DEB0AD6CCD8BBA4816051_gshared (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___m_Item2;
		return L_0;
	}
}
// Method Definition Index: 2825
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Tuple_3_get_Item3_m4472E10A81AFC88A18996E34FBF055F308AE70FA_gshared (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___m_Item3;
		return L_0;
	}
}
// Method Definition Index: 2826
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_3__ctor_m413787D7163635B482B8CB6B959902D16F8A72AD_gshared (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* __this, Il2CppSharedGenericObject* ___0_item1, Il2CppSharedGenericObject* ___1_item2, Il2CppSharedGenericObject* ___2_item3, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Il2CppSharedGenericObject* L_0 = ___0_item1;
		__this->___m_Item1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Item1), (void*)L_0);
		Il2CppSharedGenericObject* L_1 = ___1_item2;
		__this->___m_Item2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Item2), (void*)L_1);
		Il2CppSharedGenericObject* L_2 = ___2_item3;
		__this->___m_Item3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Item3), (void*)L_2);
		return;
	}
}
// Method Definition Index: 2827
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_3_Equals_m91E47BE56099986BC0E2BFB695E7D4103E36987F_gshared (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2828
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_3_System_Collections_IStructuralEquatable_Equals_m3E4430841D98F3CCEC5352531B6E4EB389E6DC44_gshared (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Il2CppSharedGenericObject* L_4 = __this->___m_Item1;
		Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* L_5 = V_0;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_6 = L_5->___m_Item1;
		NullCheck(L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, (RuntimeObject*)L_4, (RuntimeObject*)L_6);
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_8 = ___1_comparer;
		Il2CppSharedGenericObject* L_9 = __this->___m_Item2;
		Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* L_10 = V_0;
		NullCheck(L_10);
		Il2CppSharedGenericObject* L_11 = L_10->___m_Item2;
		NullCheck(L_8);
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, (RuntimeObject*)L_9, (RuntimeObject*)L_11);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_13 = ___1_comparer;
		Il2CppSharedGenericObject* L_14 = __this->___m_Item3;
		Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* L_15 = V_0;
		NullCheck(L_15);
		Il2CppSharedGenericObject* L_16 = L_15->___m_Item3;
		NullCheck(L_13);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_13, (RuntimeObject*)L_14, (RuntimeObject*)L_16);
		return L_17;
	}

IL_006a:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2829
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_IComparable_CompareTo_mB1672479E63055F479CA8C92D322AB40DA7B6BEC_gshared (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* L_1;
		L_1 = Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F(Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2830
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Collections_IStructuralComparable_CompareTo_mB47D4B8779C7B147BD25BBAD4AFFC074B0064DD7_gshared (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject*)__this);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		NullCheck((RuntimeObject*)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_3);
		String_t* L_5;
		L_5 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject*)L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002f:
	{
		V_1 = 0;
		RuntimeObject* L_7 = ___1_comparer;
		Il2CppSharedGenericObject* L_8 = __this->___m_Item1;
		Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* L_9 = V_0;
		NullCheck(L_9);
		Il2CppSharedGenericObject* L_10 = L_9->___m_Item1;
		NullCheck(L_7);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_7, (RuntimeObject*)L_8, (RuntimeObject*)L_10);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___1_comparer;
		Il2CppSharedGenericObject* L_15 = __this->___m_Item2;
		Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* L_16 = V_0;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_17 = L_16->___m_Item2;
		NullCheck(L_14);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_14, (RuntimeObject*)L_15, (RuntimeObject*)L_17);
		V_1 = L_18;
		int32_t L_19 = V_1;
		if (!L_19)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_20 = V_1;
		return L_20;
	}

IL_0075:
	{
		RuntimeObject* L_21 = ___1_comparer;
		Il2CppSharedGenericObject* L_22 = __this->___m_Item3;
		Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* L_23 = V_0;
		NullCheck(L_23);
		Il2CppSharedGenericObject* L_24 = L_23->___m_Item3;
		NullCheck(L_21);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_21, (RuntimeObject*)L_22, (RuntimeObject*)L_24);
		return L_25;
	}
}
// Method Definition Index: 2831
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_GetHashCode_m2C868D82A76AEF8AFC3D36448D325562D03878B5_gshared (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 2832
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Collections_IStructuralEquatable_GetHashCode_m6EB4F5926C5F1B9A7AFDBB8E59230CE070A06936_gshared (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Il2CppSharedGenericObject* L_1 = __this->___m_Item1;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, (RuntimeObject*)L_1);
		RuntimeObject* L_3 = ___0_comparer;
		Il2CppSharedGenericObject* L_4 = __this->___m_Item2;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, (RuntimeObject*)L_4);
		RuntimeObject* L_6 = ___0_comparer;
		Il2CppSharedGenericObject* L_7 = __this->___m_Item3;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_6, (RuntimeObject*)L_7);
		int32_t L_9;
		L_9 = Tuple_CombineHashCodes_mE2699A82EC949B2BDC6E5F34C1B73BAF6C613E50(L_2, L_5, L_8, NULL);
		return L_9;
	}
}
// Method Definition Index: 2833
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_3_ToString_mE8126ABA7ACBB57FCB109F1E1D94C29575512B7A_gshared (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		StringBuilder_t* L_3 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t* >::Invoke(0, ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_3);
		return L_4;
	}
}
// Method Definition Index: 2834
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_3_System_ITupleInternal_ToString_m6DBBA7D5490FCC9BA1673E77E680691438861701_gshared (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = ___0_sb;
		Il2CppSharedGenericObject* L_1 = __this->___m_Item1;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_0, (RuntimeObject*)L_1, NULL);
		StringBuilder_t* L_3 = ___0_sb;
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_5 = ___0_sb;
		Il2CppSharedGenericObject* L_6 = __this->___m_Item2;
		NullCheck(L_5);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_5, (RuntimeObject*)L_6, NULL);
		StringBuilder_t* L_8 = ___0_sb;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_10 = ___0_sb;
		Il2CppSharedGenericObject* L_11 = __this->___m_Item3;
		NullCheck(L_10);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_10, (RuntimeObject*)L_11, NULL);
		StringBuilder_t* L_13 = ___0_sb;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_15 = ___0_sb;
		NullCheck((RuntimeObject*)L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_15);
		return L_16;
	}
}
// Method Definition Index: 2835
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Runtime_CompilerServices_ITuple_get_Length_mF6E946A8C291EDE22F433396F48F9E6B2A74F2FD_gshared (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return 3;
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
// Method Definition Index: 2823
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_3_get_Item1_m617AD393E718884D34C55403F32760EA5325A2D5_gshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
		return;
	}
}
// Method Definition Index: 2824
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_3_get_Item2_mAF8E8EBC80FE9377431466D6353576F007C24DA7_gshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
		return;
	}
}
// Method Definition Index: 2825
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_3_get_Item3_mCA65B3EAEF33A0500D92CAC7435D30255A80D947_gshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
		return;
	}
}
// Method Definition Index: 2826
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_3__ctor_mAE8EC256544A8ED26E38C8D9E10A08E6905E136A_gshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const uint32_t SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_item1 : &___0_item1), SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0, SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___1_item2 : &___1_item2), SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_1, SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___2_item3 : &___2_item3), SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_2, SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
		return;
	}
}
// Method Definition Index: 2827
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_3_Equals_m48FF43FA496512EA8DBEBCE8AB89786C174A8E72_gshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2828
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_3_System_Collections_IStructuralEquatable_Equals_m9041C5548BDACB86EC398B811A6AB2073F3FA202_gshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const uint32_t SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
	//<source_info:<no-source>:1>
	Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___1_comparer;
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_4);
		Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* L_6 = V_0;
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_7);
		NullCheck(L_3);
		bool L_9;
		L_9 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_5, L_8);
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_10 = ___1_comparer;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_11);
		Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* L_13 = V_0;
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_instance_field_data_pointer(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_14);
		NullCheck(L_10);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_12, L_15);
		if (!L_16)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_17 = ___1_comparer;
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_18);
		Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* L_20 = V_0;
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_21);
		NullCheck(L_17);
		bool L_23;
		L_23 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_17, L_19, L_22);
		return L_23;
	}

IL_006a:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2829
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_IComparable_CompareTo_m720F0A66A8C9749026F98CDAFE19B05BCB61A0F9_gshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* L_1;
		L_1 = Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F(Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2830
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Collections_IStructuralComparable_CompareTo_m42F0BA676691B76B82BE90BE3D7AC928727DE929_gshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const uint32_t SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
	//<source_info:<no-source>:1>
	Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject*)__this);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		NullCheck((RuntimeObject*)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_3);
		String_t* L_5;
		L_5 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject*)L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002f:
	{
		V_1 = 0;
		RuntimeObject* L_7 = ___1_comparer;
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_8);
		Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* L_10 = V_0;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_11);
		NullCheck(L_7);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_7, L_9, L_12);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if (!L_14)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_15 = V_1;
		return L_15;
	}

IL_0053:
	{
		RuntimeObject* L_16 = ___1_comparer;
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_17);
		Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* L_19 = V_0;
		il2cpp_codegen_memcpy(L_20, il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_20);
		NullCheck(L_16);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_16, L_18, L_21);
		V_1 = L_22;
		int32_t L_23 = V_1;
		if (!L_23)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_24 = V_1;
		return L_24;
	}

IL_0075:
	{
		RuntimeObject* L_25 = ___1_comparer;
		il2cpp_codegen_memcpy(L_26, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
		RuntimeObject* L_27 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_26);
		Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* L_28 = V_0;
		il2cpp_codegen_memcpy(L_29, il2cpp_codegen_get_instance_field_data_pointer(L_28, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_29);
		NullCheck(L_25);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_25, L_27, L_30);
		return L_31;
	}
}
// Method Definition Index: 2831
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_GetHashCode_m9EA5378A7E64CC482F3575E1B9D836D3E15FFADC_gshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 2832
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Collections_IStructuralEquatable_GetHashCode_m39E21BCD54B72C3D96562E142A19CF3F3F7912E0_gshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const uint32_t SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_1);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_2);
		RuntimeObject* L_4 = ___0_comparer;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_5);
		NullCheck(L_4);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_4, L_6);
		RuntimeObject* L_8 = ___0_comparer;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_9);
		NullCheck(L_8);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, L_10);
		int32_t L_12;
		L_12 = Tuple_CombineHashCodes_mE2699A82EC949B2BDC6E5F34C1B73BAF6C613E50(L_3, L_7, L_11, NULL);
		return L_12;
	}
}
// Method Definition Index: 2833
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_3_ToString_m3C1DB63D618CDE9927AB213A76AA5506ACB243CC_gshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		StringBuilder_t* L_3 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t* >::Invoke(0, ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_3);
		return L_4;
	}
}
// Method Definition Index: 2834
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_3_System_ITupleInternal_ToString_m12D09516C5EB2A9BA7693C13F937A6F634B1F693_gshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const uint32_t SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = ___0_sb;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_1);
		NullCheck(L_0);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_0, L_2, NULL);
		StringBuilder_t* L_4 = ___0_sb;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_6 = ___0_sb;
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_7);
		NullCheck(L_6);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_6, L_8, NULL);
		StringBuilder_t* L_10 = ___0_sb;
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_12 = ___0_sb;
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_13);
		NullCheck(L_12);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_12, L_14, NULL);
		StringBuilder_t* L_16 = ___0_sb;
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_16, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_18 = ___0_sb;
		NullCheck((RuntimeObject*)L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_18);
		return L_19;
	}
}
// Method Definition Index: 2835
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Runtime_CompilerServices_ITuple_get_Length_m8C542888CF87965704B55ACEF2C50DBC59F0F942_gshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return 3;
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
// Method Definition Index: 2836
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_4_get_Item1_mE405BBBFC91F8F354D5C0BC1E0B4BB358800F86E_gshared (Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_Item1;
		return L_0;
	}
}
// Method Definition Index: 2837
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_4_get_Item2_m04491B17940FB70AD8D25672B9CCAEC6443894A9_gshared (Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_Item2;
		return L_0;
	}
}
// Method Definition Index: 2838
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_4_get_Item3_mE9E02E1E3D0C5F857AB34ECD9CD64A66EE4E3E88_gshared (Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_Item3;
		return L_0;
	}
}
// Method Definition Index: 2839
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_4_get_Item4_mD28D2AC353DCD94AD322AEA48646CBF58AAA03A9_gshared (Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_Item4;
		return L_0;
	}
}
// Method Definition Index: 2840
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_4__ctor_mE5B339B8A59B760C62DAD75519BFFCCF6A2DD69D_gshared (Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* __this, bool ___0_item1, bool ___1_item2, bool ___2_item3, bool ___3_item4, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		bool L_0 = ___0_item1;
		__this->___m_Item1 = L_0;
		bool L_1 = ___1_item2;
		__this->___m_Item2 = L_1;
		bool L_2 = ___2_item3;
		__this->___m_Item3 = L_2;
		bool L_3 = ___3_item4;
		__this->___m_Item4 = L_3;
		return;
	}
}
// Method Definition Index: 2841
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_4_Equals_mC2F1F0BB960EB81DED4F514FBBD1FDB4474CAA20_gshared (Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2842
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_4_System_Collections_IStructuralEquatable_Equals_mB4257E12B7E10BA95951CA4C7E06FFBC6267297C_gshared (Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___1_comparer;
		bool L_4 = __this->___m_Item1;
		bool L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_5);
		Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = L_7->___m_Item1;
		bool L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_9);
		NullCheck(L_3);
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_6, L_10);
		if (!L_11)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_12 = ___1_comparer;
		bool L_13 = __this->___m_Item2;
		bool L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_14);
		Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* L_16 = V_0;
		NullCheck(L_16);
		bool L_17 = L_16->___m_Item2;
		bool L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_18);
		NullCheck(L_12);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_12, L_15, L_19);
		if (!L_20)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_21 = ___1_comparer;
		bool L_22 = __this->___m_Item3;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_23);
		Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* L_25 = V_0;
		NullCheck(L_25);
		bool L_26 = L_25->___m_Item3;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_27);
		NullCheck(L_21);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_21, L_24, L_28);
		if (!L_29)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_30 = ___1_comparer;
		bool L_31 = __this->___m_Item4;
		bool L_32 = L_31;
		RuntimeObject* L_33 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_32);
		Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* L_34 = V_0;
		NullCheck(L_34);
		bool L_35 = L_34->___m_Item4;
		bool L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_36);
		NullCheck(L_30);
		bool L_38;
		L_38 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_30, L_33, L_37);
		return L_38;
	}

IL_0088:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2843
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_System_IComparable_CompareTo_m89DFB12D674519210723854537C395E192291EDD_gshared (Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* L_1;
		L_1 = Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F(Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2844
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Collections_IStructuralComparable_CompareTo_m0863D10F94E46CA49D4C980B6B3C5325029F1BC6_gshared (Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject*)__this);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		NullCheck((RuntimeObject*)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_3);
		String_t* L_5;
		L_5 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject*)L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002f:
	{
		V_1 = 0;
		RuntimeObject* L_7 = ___1_comparer;
		bool L_8 = __this->___m_Item1;
		bool L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_9);
		Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = L_11->___m_Item1;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_13);
		NullCheck(L_7);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_7, L_10, L_14);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if (!L_16)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_17 = V_1;
		return L_17;
	}

IL_0053:
	{
		RuntimeObject* L_18 = ___1_comparer;
		bool L_19 = __this->___m_Item2;
		bool L_20 = L_19;
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_20);
		Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* L_22 = V_0;
		NullCheck(L_22);
		bool L_23 = L_22->___m_Item2;
		bool L_24 = L_23;
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_24);
		NullCheck(L_18);
		int32_t L_26;
		L_26 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_18, L_21, L_25);
		V_1 = L_26;
		int32_t L_27 = V_1;
		if (!L_27)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_28 = V_1;
		return L_28;
	}

IL_0075:
	{
		RuntimeObject* L_29 = ___1_comparer;
		bool L_30 = __this->___m_Item3;
		bool L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_31);
		Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* L_33 = V_0;
		NullCheck(L_33);
		bool L_34 = L_33->___m_Item3;
		bool L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_35);
		NullCheck(L_29);
		int32_t L_37;
		L_37 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_29, L_32, L_36);
		V_1 = L_37;
		int32_t L_38 = V_1;
		if (!L_38)
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_39 = V_1;
		return L_39;
	}

IL_0097:
	{
		RuntimeObject* L_40 = ___1_comparer;
		bool L_41 = __this->___m_Item4;
		bool L_42 = L_41;
		RuntimeObject* L_43 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_42);
		Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* L_44 = V_0;
		NullCheck(L_44);
		bool L_45 = L_44->___m_Item4;
		bool L_46 = L_45;
		RuntimeObject* L_47 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_46);
		NullCheck(L_40);
		int32_t L_48;
		L_48 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_40, L_43, L_47);
		return L_48;
	}
}
// Method Definition Index: 2845
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_GetHashCode_m1B01D3D2B23084F98CA2ED4ADB01E08E81763F14_gshared (Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 2846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Collections_IStructuralEquatable_GetHashCode_mAA49AC6456C680BC21AB50A3F931B7B1E92ABA24_gshared (Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		bool L_1 = __this->___m_Item1;
		bool L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_2);
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_3);
		RuntimeObject* L_5 = ___0_comparer;
		bool L_6 = __this->___m_Item2;
		bool L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_7);
		NullCheck(L_5);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_5, L_8);
		RuntimeObject* L_10 = ___0_comparer;
		bool L_11 = __this->___m_Item3;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_12);
		NullCheck(L_10);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_13);
		RuntimeObject* L_15 = ___0_comparer;
		bool L_16 = __this->___m_Item4;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_17);
		NullCheck(L_15);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_15, L_18);
		int32_t L_20;
		L_20 = Tuple_CombineHashCodes_m5E17356230416E2397A57B3346E74D6D579B14BA(L_4, L_9, L_14, L_19, NULL);
		return L_20;
	}
}
// Method Definition Index: 2847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_4_ToString_mC3633EED5F8AABAE17A5295455859264DDE8BF80_gshared (Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		StringBuilder_t* L_3 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t* >::Invoke(0, ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_3);
		return L_4;
	}
}
// Method Definition Index: 2848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_4_System_ITupleInternal_ToString_m8E9254BE98C4C13A8C45427A517B9A9758F64C9C_gshared (Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = ___0_sb;
		bool L_1 = __this->___m_Item1;
		bool L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_2);
		NullCheck(L_0);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_0, L_3, NULL);
		StringBuilder_t* L_5 = ___0_sb;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_7 = ___0_sb;
		bool L_8 = __this->___m_Item2;
		bool L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_9);
		NullCheck(L_7);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_7, L_10, NULL);
		StringBuilder_t* L_12 = ___0_sb;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_14 = ___0_sb;
		bool L_15 = __this->___m_Item3;
		bool L_16 = L_15;
		RuntimeObject* L_17 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_16);
		NullCheck(L_14);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_14, L_17, NULL);
		StringBuilder_t* L_19 = ___0_sb;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_21 = ___0_sb;
		bool L_22 = __this->___m_Item4;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_23);
		NullCheck(L_21);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_21, L_24, NULL);
		StringBuilder_t* L_26 = ___0_sb;
		NullCheck(L_26);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_26, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_28 = ___0_sb;
		NullCheck((RuntimeObject*)L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_28);
		return L_29;
	}
}
// Method Definition Index: 2849
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Runtime_CompilerServices_ITuple_get_Length_mBA57DBCB14549CE909B7EF681DE0B85D459A0275_gshared (Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return 4;
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
// Method Definition Index: 2836
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_get_Item1_m5B3F6781065E1FEDF09F95612083C688C126738D_gshared (Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Item1;
		return L_0;
	}
}
// Method Definition Index: 2837
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_get_Item2_m093A12CBDCD9F7B0BFBC478B8F925368C81B7C20_gshared (Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Item2;
		return L_0;
	}
}
// Method Definition Index: 2838
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_get_Item3_m207ABD3C23D93E341DAAC64E1A0A37EC30E0333C_gshared (Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Item3;
		return L_0;
	}
}
// Method Definition Index: 2839
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_4_get_Item4_mB0198212EFFD5773E52B42733051744A66E0545D_gshared (Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_Item4;
		return L_0;
	}
}
// Method Definition Index: 2840
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_4__ctor_m922AB8E1A32CBD203CAFE16015B8C656728E0FE8_gshared (Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* __this, int32_t ___0_item1, int32_t ___1_item2, int32_t ___2_item3, bool ___3_item4, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_item1;
		__this->___m_Item1 = L_0;
		int32_t L_1 = ___1_item2;
		__this->___m_Item2 = L_1;
		int32_t L_2 = ___2_item3;
		__this->___m_Item3 = L_2;
		bool L_3 = ___3_item4;
		__this->___m_Item4 = L_3;
		return;
	}
}
// Method Definition Index: 2841
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_4_Equals_m52D775E93041B4083B3138DE5F81C8F544B5BC95_gshared (Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2842
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_4_System_Collections_IStructuralEquatable_Equals_m5FCE518B524E0CFC015C2A7BAC03583D0E435853_gshared (Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___1_comparer;
		int32_t L_4 = __this->___m_Item1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_5);
		Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___m_Item1;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_9);
		NullCheck(L_3);
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_6, L_10);
		if (!L_11)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_12 = ___1_comparer;
		int32_t L_13 = __this->___m_Item2;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_14);
		Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = L_16->___m_Item2;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_18);
		NullCheck(L_12);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_12, L_15, L_19);
		if (!L_20)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_21 = ___1_comparer;
		int32_t L_22 = __this->___m_Item3;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_23);
		Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = L_25->___m_Item3;
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_27);
		NullCheck(L_21);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_21, L_24, L_28);
		if (!L_29)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_30 = ___1_comparer;
		bool L_31 = __this->___m_Item4;
		bool L_32 = L_31;
		RuntimeObject* L_33 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_32);
		Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* L_34 = V_0;
		NullCheck(L_34);
		bool L_35 = L_34->___m_Item4;
		bool L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_36);
		NullCheck(L_30);
		bool L_38;
		L_38 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_30, L_33, L_37);
		return L_38;
	}

IL_0088:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2843
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_System_IComparable_CompareTo_mC83EB0163025A3536F53E0B105BD3C8263B49855_gshared (Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* L_1;
		L_1 = Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F(Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2844
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Collections_IStructuralComparable_CompareTo_m39EEC7C6C315B312C0D9E2FCE4F34465B9565D48_gshared (Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject*)__this);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		NullCheck((RuntimeObject*)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_3);
		String_t* L_5;
		L_5 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject*)L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002f:
	{
		V_1 = 0;
		RuntimeObject* L_7 = ___1_comparer;
		int32_t L_8 = __this->___m_Item1;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_9);
		Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___m_Item1;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_13);
		NullCheck(L_7);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_7, L_10, L_14);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if (!L_16)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_17 = V_1;
		return L_17;
	}

IL_0053:
	{
		RuntimeObject* L_18 = ___1_comparer;
		int32_t L_19 = __this->___m_Item2;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_20);
		Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = L_22->___m_Item2;
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_24);
		NullCheck(L_18);
		int32_t L_26;
		L_26 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_18, L_21, L_25);
		V_1 = L_26;
		int32_t L_27 = V_1;
		if (!L_27)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_28 = V_1;
		return L_28;
	}

IL_0075:
	{
		RuntimeObject* L_29 = ___1_comparer;
		int32_t L_30 = __this->___m_Item3;
		int32_t L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_31);
		Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34 = L_33->___m_Item3;
		int32_t L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_35);
		NullCheck(L_29);
		int32_t L_37;
		L_37 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_29, L_32, L_36);
		V_1 = L_37;
		int32_t L_38 = V_1;
		if (!L_38)
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_39 = V_1;
		return L_39;
	}

IL_0097:
	{
		RuntimeObject* L_40 = ___1_comparer;
		bool L_41 = __this->___m_Item4;
		bool L_42 = L_41;
		RuntimeObject* L_43 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_42);
		Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* L_44 = V_0;
		NullCheck(L_44);
		bool L_45 = L_44->___m_Item4;
		bool L_46 = L_45;
		RuntimeObject* L_47 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_46);
		NullCheck(L_40);
		int32_t L_48;
		L_48 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_40, L_43, L_47);
		return L_48;
	}
}
// Method Definition Index: 2845
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_GetHashCode_mB621646E6299E85A7C4958DFF62188BC15C89FFA_gshared (Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 2846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Collections_IStructuralEquatable_GetHashCode_m6E6E8733F65D8ECDD230344839FAC65683079F2A_gshared (Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1 = __this->___m_Item1;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_2);
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_3);
		RuntimeObject* L_5 = ___0_comparer;
		int32_t L_6 = __this->___m_Item2;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_7);
		NullCheck(L_5);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_5, L_8);
		RuntimeObject* L_10 = ___0_comparer;
		int32_t L_11 = __this->___m_Item3;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_12);
		NullCheck(L_10);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_13);
		RuntimeObject* L_15 = ___0_comparer;
		bool L_16 = __this->___m_Item4;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_17);
		NullCheck(L_15);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_15, L_18);
		int32_t L_20;
		L_20 = Tuple_CombineHashCodes_m5E17356230416E2397A57B3346E74D6D579B14BA(L_4, L_9, L_14, L_19, NULL);
		return L_20;
	}
}
// Method Definition Index: 2847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_4_ToString_m36915179815B64DA7CBD9EC24BDFEF3D17EDD8CD_gshared (Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		StringBuilder_t* L_3 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t* >::Invoke(0, ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_3);
		return L_4;
	}
}
// Method Definition Index: 2848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_4_System_ITupleInternal_ToString_m46BFDD5CD68912F35B19D39EB187EFABC73BC210_gshared (Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = ___0_sb;
		int32_t L_1 = __this->___m_Item1;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_2);
		NullCheck(L_0);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_0, L_3, NULL);
		StringBuilder_t* L_5 = ___0_sb;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_7 = ___0_sb;
		int32_t L_8 = __this->___m_Item2;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_9);
		NullCheck(L_7);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_7, L_10, NULL);
		StringBuilder_t* L_12 = ___0_sb;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_14 = ___0_sb;
		int32_t L_15 = __this->___m_Item3;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_16);
		NullCheck(L_14);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_14, L_17, NULL);
		StringBuilder_t* L_19 = ___0_sb;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_21 = ___0_sb;
		bool L_22 = __this->___m_Item4;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_23);
		NullCheck(L_21);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_21, L_24, NULL);
		StringBuilder_t* L_26 = ___0_sb;
		NullCheck(L_26);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_26, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_28 = ___0_sb;
		NullCheck((RuntimeObject*)L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_28);
		return L_29;
	}
}
// Method Definition Index: 2849
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Runtime_CompilerServices_ITuple_get_Length_mEBC966C0803A615F9D7E6599EF9DA07D481440E7_gshared (Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return 4;
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
// Method Definition Index: 2836
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Tuple_4_get_Item1_m6C30838321A9A3135944093061D832958BEDC8C6_gshared (Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_Item1;
		return L_0;
	}
}
// Method Definition Index: 2837
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tuple_4_get_Item2_m9347150438824D981DBB9C8162B4E4FD5D2EEF03_gshared (Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = __this->___m_Item2;
		return L_0;
	}
}
// Method Definition Index: 2838
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tuple_4_get_Item3_m4BD5956C9DAAEA0E385BA95EE2F934C620B1A903_gshared (Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = __this->___m_Item3;
		return L_0;
	}
}
// Method Definition Index: 2839
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tuple_4_get_Item4_mDE53CA7267D19F14D242FB63AD50AD4AF0234947_gshared (Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = __this->___m_Item4;
		return L_0;
	}
}
// Method Definition Index: 2840
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_4__ctor_mAC17B80C955C1FB6F4D0DFD847E8964EB0769BC6_gshared (Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_item1, float ___1_item2, float ___2_item3, float ___3_item4, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_item1;
		__this->___m_Item1 = L_0;
		float L_1 = ___1_item2;
		__this->___m_Item2 = L_1;
		float L_2 = ___2_item3;
		__this->___m_Item3 = L_2;
		float L_3 = ___3_item4;
		__this->___m_Item4 = L_3;
		return;
	}
}
// Method Definition Index: 2841
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_4_Equals_m0C26510AE463CAEDEE6106B09A52A49E9EB4D820_gshared (Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2842
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_4_System_Collections_IStructuralEquatable_Equals_m48E6157CF618983E0BBA65A70D547789224CBED1_gshared (Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = __this->___m_Item1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_5);
		Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* L_7 = V_0;
		NullCheck(L_7);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8 = L_7->___m_Item1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_9);
		NullCheck(L_3);
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_6, L_10);
		if (!L_11)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_12 = ___1_comparer;
		float L_13 = __this->___m_Item2;
		float L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_14);
		Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* L_16 = V_0;
		NullCheck(L_16);
		float L_17 = L_16->___m_Item2;
		float L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_18);
		NullCheck(L_12);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_12, L_15, L_19);
		if (!L_20)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_21 = ___1_comparer;
		float L_22 = __this->___m_Item3;
		float L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_23);
		Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* L_25 = V_0;
		NullCheck(L_25);
		float L_26 = L_25->___m_Item3;
		float L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_27);
		NullCheck(L_21);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_21, L_24, L_28);
		if (!L_29)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_30 = ___1_comparer;
		float L_31 = __this->___m_Item4;
		float L_32 = L_31;
		RuntimeObject* L_33 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_32);
		Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* L_34 = V_0;
		NullCheck(L_34);
		float L_35 = L_34->___m_Item4;
		float L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_36);
		NullCheck(L_30);
		bool L_38;
		L_38 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_30, L_33, L_37);
		return L_38;
	}

IL_0088:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2843
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_System_IComparable_CompareTo_m7C9FFC49AF189145C78DFA291D1932891FD142EC_gshared (Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* L_1;
		L_1 = Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F(Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2844
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Collections_IStructuralComparable_CompareTo_m33AD6C62750DFB94EDFB9442819EDF37AB9A152C_gshared (Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject*)__this);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		NullCheck((RuntimeObject*)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_3);
		String_t* L_5;
		L_5 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject*)L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002f:
	{
		V_1 = 0;
		RuntimeObject* L_7 = ___1_comparer;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8 = __this->___m_Item1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_9);
		Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* L_11 = V_0;
		NullCheck(L_11);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12 = L_11->___m_Item1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_13);
		NullCheck(L_7);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_7, L_10, L_14);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if (!L_16)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_17 = V_1;
		return L_17;
	}

IL_0053:
	{
		RuntimeObject* L_18 = ___1_comparer;
		float L_19 = __this->___m_Item2;
		float L_20 = L_19;
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_20);
		Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* L_22 = V_0;
		NullCheck(L_22);
		float L_23 = L_22->___m_Item2;
		float L_24 = L_23;
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_24);
		NullCheck(L_18);
		int32_t L_26;
		L_26 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_18, L_21, L_25);
		V_1 = L_26;
		int32_t L_27 = V_1;
		if (!L_27)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_28 = V_1;
		return L_28;
	}

IL_0075:
	{
		RuntimeObject* L_29 = ___1_comparer;
		float L_30 = __this->___m_Item3;
		float L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_31);
		Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* L_33 = V_0;
		NullCheck(L_33);
		float L_34 = L_33->___m_Item3;
		float L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_35);
		NullCheck(L_29);
		int32_t L_37;
		L_37 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_29, L_32, L_36);
		V_1 = L_37;
		int32_t L_38 = V_1;
		if (!L_38)
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_39 = V_1;
		return L_39;
	}

IL_0097:
	{
		RuntimeObject* L_40 = ___1_comparer;
		float L_41 = __this->___m_Item4;
		float L_42 = L_41;
		RuntimeObject* L_43 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_42);
		Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* L_44 = V_0;
		NullCheck(L_44);
		float L_45 = L_44->___m_Item4;
		float L_46 = L_45;
		RuntimeObject* L_47 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_46);
		NullCheck(L_40);
		int32_t L_48;
		L_48 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_40, L_43, L_47);
		return L_48;
	}
}
// Method Definition Index: 2845
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_GetHashCode_mBF10F5AC279D9E17F779FF7F4A8E91C262516063_gshared (Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 2846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Collections_IStructuralEquatable_GetHashCode_mB2DCC19440F95BAE2AFB78C537A2A002A590068A_gshared (Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = __this->___m_Item1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_2);
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_3);
		RuntimeObject* L_5 = ___0_comparer;
		float L_6 = __this->___m_Item2;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_7);
		NullCheck(L_5);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_5, L_8);
		RuntimeObject* L_10 = ___0_comparer;
		float L_11 = __this->___m_Item3;
		float L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_12);
		NullCheck(L_10);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_13);
		RuntimeObject* L_15 = ___0_comparer;
		float L_16 = __this->___m_Item4;
		float L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_17);
		NullCheck(L_15);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_15, L_18);
		int32_t L_20;
		L_20 = Tuple_CombineHashCodes_m5E17356230416E2397A57B3346E74D6D579B14BA(L_4, L_9, L_14, L_19, NULL);
		return L_20;
	}
}
// Method Definition Index: 2847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_4_ToString_m6E7E69DF3910CCEB7C8BAE3DDB76474D9B96693A_gshared (Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		StringBuilder_t* L_3 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t* >::Invoke(0, ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_3);
		return L_4;
	}
}
// Method Definition Index: 2848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_4_System_ITupleInternal_ToString_m933B0E6EDEEBB9CD4E8F086608DAC639A5942005_gshared (Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = ___0_sb;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = __this->___m_Item1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_2);
		NullCheck(L_0);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_0, L_3, NULL);
		StringBuilder_t* L_5 = ___0_sb;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_7 = ___0_sb;
		float L_8 = __this->___m_Item2;
		float L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_9);
		NullCheck(L_7);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_7, L_10, NULL);
		StringBuilder_t* L_12 = ___0_sb;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_14 = ___0_sb;
		float L_15 = __this->___m_Item3;
		float L_16 = L_15;
		RuntimeObject* L_17 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_16);
		NullCheck(L_14);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_14, L_17, NULL);
		StringBuilder_t* L_19 = ___0_sb;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_21 = ___0_sb;
		float L_22 = __this->___m_Item4;
		float L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_23);
		NullCheck(L_21);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_21, L_24, NULL);
		StringBuilder_t* L_26 = ___0_sb;
		NullCheck(L_26);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_26, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_28 = ___0_sb;
		NullCheck((RuntimeObject*)L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_28);
		return L_29;
	}
}
// Method Definition Index: 2849
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Runtime_CompilerServices_ITuple_get_Length_m99849D39ABC3C20E848A8B0EEBB82A19B321C259_gshared (Tuple_4_tE8C10AEA6C8B176681F8DF9607B42D5E43310CAF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return 4;
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
// Method Definition Index: 2836
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Tuple_4_get_Item1_mE6ABD1BC8B83D112493941F3DEDBBFBE1B9A775C_gshared (Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___m_Item1;
		return L_0;
	}
}
// Method Definition Index: 2837
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Tuple_4_get_Item2_mF0CD2A89AF2C6DD4A86F08D588C8600F228982F7_gshared (Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___m_Item2;
		return L_0;
	}
}
// Method Definition Index: 2838
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_get_Item3_mD47D5E4320EEBEC78C1F0E7D78B8FC42E2B5A0A2_gshared (Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Item3;
		return L_0;
	}
}
// Method Definition Index: 2839
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_get_Item4_m33E41F977AC8034FFC420025C71BD6703ED3FB6C_gshared (Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Item4;
		return L_0;
	}
}
// Method Definition Index: 2840
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_4__ctor_m02E9A55937CE9ECBB36D7ABEE251527B4363EA1C_gshared (Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* __this, Il2CppSharedGenericObject* ___0_item1, Il2CppSharedGenericObject* ___1_item2, int32_t ___2_item3, int32_t ___3_item4, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Il2CppSharedGenericObject* L_0 = ___0_item1;
		__this->___m_Item1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Item1), (void*)L_0);
		Il2CppSharedGenericObject* L_1 = ___1_item2;
		__this->___m_Item2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Item2), (void*)L_1);
		int32_t L_2 = ___2_item3;
		__this->___m_Item3 = L_2;
		int32_t L_3 = ___3_item4;
		__this->___m_Item4 = L_3;
		return;
	}
}
// Method Definition Index: 2841
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_4_Equals_m327EEFCC923430D108F7DF41C90D69C369E196DD_gshared (Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2842
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_4_System_Collections_IStructuralEquatable_Equals_m4DCCFF9CCA265E1B3EBB54EB4FEF29C1C2CEEBC3_gshared (Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Il2CppSharedGenericObject* L_4 = __this->___m_Item1;
		Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* L_5 = V_0;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_6 = L_5->___m_Item1;
		NullCheck(L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, (RuntimeObject*)L_4, (RuntimeObject*)L_6);
		if (!L_7)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_8 = ___1_comparer;
		Il2CppSharedGenericObject* L_9 = __this->___m_Item2;
		Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* L_10 = V_0;
		NullCheck(L_10);
		Il2CppSharedGenericObject* L_11 = L_10->___m_Item2;
		NullCheck(L_8);
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, (RuntimeObject*)L_9, (RuntimeObject*)L_11);
		if (!L_12)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_13 = ___1_comparer;
		int32_t L_14 = __this->___m_Item3;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_15);
		Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = L_17->___m_Item3;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_19);
		NullCheck(L_13);
		bool L_21;
		L_21 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_13, L_16, L_20);
		if (!L_21)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_22 = ___1_comparer;
		int32_t L_23 = __this->___m_Item4;
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_24);
		Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = L_26->___m_Item4;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_28);
		NullCheck(L_22);
		bool L_30;
		L_30 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_22, L_25, L_29);
		return L_30;
	}

IL_0088:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2843
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_System_IComparable_CompareTo_m4FF856CBA40523CAD1DF3B9B98272AA909A82AEC_gshared (Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* L_1;
		L_1 = Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F(Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2844
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Collections_IStructuralComparable_CompareTo_mE10B7EA646509A5A57ABB63A71D66BA8843D2700_gshared (Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject*)__this);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		NullCheck((RuntimeObject*)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_3);
		String_t* L_5;
		L_5 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject*)L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002f:
	{
		V_1 = 0;
		RuntimeObject* L_7 = ___1_comparer;
		Il2CppSharedGenericObject* L_8 = __this->___m_Item1;
		Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* L_9 = V_0;
		NullCheck(L_9);
		Il2CppSharedGenericObject* L_10 = L_9->___m_Item1;
		NullCheck(L_7);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_7, (RuntimeObject*)L_8, (RuntimeObject*)L_10);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___1_comparer;
		Il2CppSharedGenericObject* L_15 = __this->___m_Item2;
		Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* L_16 = V_0;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_17 = L_16->___m_Item2;
		NullCheck(L_14);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_14, (RuntimeObject*)L_15, (RuntimeObject*)L_17);
		V_1 = L_18;
		int32_t L_19 = V_1;
		if (!L_19)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_20 = V_1;
		return L_20;
	}

IL_0075:
	{
		RuntimeObject* L_21 = ___1_comparer;
		int32_t L_22 = __this->___m_Item3;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_23);
		Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = L_25->___m_Item3;
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_27);
		NullCheck(L_21);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_21, L_24, L_28);
		V_1 = L_29;
		int32_t L_30 = V_1;
		if (!L_30)
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_31 = V_1;
		return L_31;
	}

IL_0097:
	{
		RuntimeObject* L_32 = ___1_comparer;
		int32_t L_33 = __this->___m_Item4;
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_34);
		Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* L_36 = V_0;
		NullCheck(L_36);
		int32_t L_37 = L_36->___m_Item4;
		int32_t L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_38);
		NullCheck(L_32);
		int32_t L_40;
		L_40 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_32, L_35, L_39);
		return L_40;
	}
}
// Method Definition Index: 2845
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_GetHashCode_m5F5F97D63A7851A196C0B2250085C157A84E7DF5_gshared (Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 2846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Collections_IStructuralEquatable_GetHashCode_m58227513BAA2123F9C6E669704FE35D8235941C5_gshared (Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Il2CppSharedGenericObject* L_1 = __this->___m_Item1;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, (RuntimeObject*)L_1);
		RuntimeObject* L_3 = ___0_comparer;
		Il2CppSharedGenericObject* L_4 = __this->___m_Item2;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, (RuntimeObject*)L_4);
		RuntimeObject* L_6 = ___0_comparer;
		int32_t L_7 = __this->___m_Item3;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_8);
		NullCheck(L_6);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_6, L_9);
		RuntimeObject* L_11 = ___0_comparer;
		int32_t L_12 = __this->___m_Item4;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_13);
		NullCheck(L_11);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_11, L_14);
		int32_t L_16;
		L_16 = Tuple_CombineHashCodes_m5E17356230416E2397A57B3346E74D6D579B14BA(L_2, L_5, L_10, L_15, NULL);
		return L_16;
	}
}
// Method Definition Index: 2847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_4_ToString_m4F82C918D6C072C697E431AFFF39CAA01BFB2CB9_gshared (Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		StringBuilder_t* L_3 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t* >::Invoke(0, ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_3);
		return L_4;
	}
}
// Method Definition Index: 2848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_4_System_ITupleInternal_ToString_m35858C943FBD5A7396E8BE7612FEA5091DFF4ECA_gshared (Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = ___0_sb;
		Il2CppSharedGenericObject* L_1 = __this->___m_Item1;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_0, (RuntimeObject*)L_1, NULL);
		StringBuilder_t* L_3 = ___0_sb;
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_5 = ___0_sb;
		Il2CppSharedGenericObject* L_6 = __this->___m_Item2;
		NullCheck(L_5);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_5, (RuntimeObject*)L_6, NULL);
		StringBuilder_t* L_8 = ___0_sb;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_10 = ___0_sb;
		int32_t L_11 = __this->___m_Item3;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_12);
		NullCheck(L_10);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_10, L_13, NULL);
		StringBuilder_t* L_15 = ___0_sb;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_17 = ___0_sb;
		int32_t L_18 = __this->___m_Item4;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_19);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_17, L_20, NULL);
		StringBuilder_t* L_22 = ___0_sb;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = ___0_sb;
		NullCheck((RuntimeObject*)L_24);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_24);
		return L_25;
	}
}
// Method Definition Index: 2849
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Runtime_CompilerServices_ITuple_get_Length_m927E2D2BDFF764046920800C9256BED96EBED466_gshared (Tuple_4_tC98F36A7DA1CBE597D722E22FC3D0CAB0D6319C5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return 4;
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
// Method Definition Index: 2836
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_4_get_Item1_mF4B847E67CC81559FD3A9E78E6E4BFA208B3491E_gshared (Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A);
		return;
	}
}
// Method Definition Index: 2837
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_4_get_Item2_m0F6266C1BEF075A14E7E3FF136E21A10C0A50898_gshared (Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB);
		return;
	}
}
// Method Definition Index: 2838
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_4_get_Item3_m20A69814F86B88D2280926E951270A108630C83D_gshared (Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427);
		return;
	}
}
// Method Definition Index: 2839
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_4_get_Item4_m721194B64D2C052E754C0CCEC4E926A98B390F00_gshared (Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226);
		return;
	}
}
// Method Definition Index: 2840
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_4__ctor_mEE94878581B33FFC9294516BD6C7C2752E74198D_gshared (Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, Il2CppFullySharedGenericAny ___3_item4, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const uint32_t SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const uint32_t SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_item1 : &___0_item1), SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0, SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___1_item2 : &___1_item2), SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_1, SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___2_item3 : &___2_item3), SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_2, SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___3_item4 : &___3_item4), SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_3, SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226);
		return;
	}
}
// Method Definition Index: 2841
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_4_Equals_m878BDC5579C5B28AFB5F6D4F0E32FCEEC44916F6_gshared (Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2842
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_4_System_Collections_IStructuralEquatable_Equals_mEE4D3E4609DEFA781806118A0DD06B18B0CA28D6_gshared (Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const uint32_t SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const uint32_t SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427);
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226);
	//<source_info:<no-source>:1>
	Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___1_comparer;
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_4);
		Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* L_6 = V_0;
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_7);
		NullCheck(L_3);
		bool L_9;
		L_9 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_5, L_8);
		if (!L_9)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_10 = ___1_comparer;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_11);
		Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* L_13 = V_0;
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_instance_field_data_pointer(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_14);
		NullCheck(L_10);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_12, L_15);
		if (!L_16)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_17 = ___1_comparer;
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_18);
		Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* L_20 = V_0;
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_21);
		NullCheck(L_17);
		bool L_23;
		L_23 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_17, L_19, L_22);
		if (!L_23)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_24 = ___1_comparer;
		il2cpp_codegen_memcpy(L_25, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226);
		RuntimeObject* L_26 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), L_25);
		Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* L_27 = V_0;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(L_27, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226);
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), L_28);
		NullCheck(L_24);
		bool L_30;
		L_30 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_24, L_26, L_29);
		return L_30;
	}

IL_0088:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2843
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_System_IComparable_CompareTo_m90B149BF971AAB8E108DBCCB5852FFA9DA6224BA_gshared (Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* L_1;
		L_1 = Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F(Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 2844
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Collections_IStructuralComparable_CompareTo_m31356BD614E3D538DFB8F8B0AE1DCD1FA0CC373D_gshared (Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const uint32_t SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const uint32_t SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB);
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427);
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427);
	const Il2CppFullySharedGenericAny L_35 = alloca(SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226);
	const Il2CppFullySharedGenericAny L_38 = alloca(SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226);
	//<source_info:<no-source>:1>
	Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject*)__this);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		NullCheck((RuntimeObject*)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_3);
		String_t* L_5;
		L_5 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject*)L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002f:
	{
		V_1 = 0;
		RuntimeObject* L_7 = ___1_comparer;
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A);
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_8);
		Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* L_10 = V_0;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_11);
		NullCheck(L_7);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_7, L_9, L_12);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if (!L_14)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_15 = V_1;
		return L_15;
	}

IL_0053:
	{
		RuntimeObject* L_16 = ___1_comparer;
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB);
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_17);
		Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* L_19 = V_0;
		il2cpp_codegen_memcpy(L_20, il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB);
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_20);
		NullCheck(L_16);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_16, L_18, L_21);
		V_1 = L_22;
		int32_t L_23 = V_1;
		if (!L_23)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_24 = V_1;
		return L_24;
	}

IL_0075:
	{
		RuntimeObject* L_25 = ___1_comparer;
		il2cpp_codegen_memcpy(L_26, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427);
		RuntimeObject* L_27 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_26);
		Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* L_28 = V_0;
		il2cpp_codegen_memcpy(L_29, il2cpp_codegen_get_instance_field_data_pointer(L_28, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427);
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_29);
		NullCheck(L_25);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_25, L_27, L_30);
		V_1 = L_31;
		int32_t L_32 = V_1;
		if (!L_32)
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_33 = V_1;
		return L_33;
	}

IL_0097:
	{
		RuntimeObject* L_34 = ___1_comparer;
		il2cpp_codegen_memcpy(L_35, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226);
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), L_35);
		Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* L_37 = V_0;
		il2cpp_codegen_memcpy(L_38, il2cpp_codegen_get_instance_field_data_pointer(L_37, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226);
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), L_38);
		NullCheck(L_34);
		int32_t L_40;
		L_40 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_34, L_36, L_39);
		return L_40;
	}
}
// Method Definition Index: 2845
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_GetHashCode_mC0EAD80374F21227974F5137FBD7F67F13CF9EB1_gshared (Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 2846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Collections_IStructuralEquatable_GetHashCode_m7642B90641EB84AF11E1FCB88BE647F4852395B5_gshared (Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const uint32_t SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const uint32_t SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_1);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_2);
		RuntimeObject* L_4 = ___0_comparer;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_5);
		NullCheck(L_4);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_4, L_6);
		RuntimeObject* L_8 = ___0_comparer;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_9);
		NullCheck(L_8);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, L_10);
		RuntimeObject* L_12 = ___0_comparer;
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), L_13);
		NullCheck(L_12);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_12, L_14);
		int32_t L_16;
		L_16 = Tuple_CombineHashCodes_m5E17356230416E2397A57B3346E74D6D579B14BA(L_3, L_7, L_11, L_15, NULL);
		return L_16;
	}
}
// Method Definition Index: 2847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_4_ToString_m85A7B333E9B316C0205A5B1B2EEDDF6999F83F5F_gshared (Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		StringBuilder_t* L_3 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t* >::Invoke(0, ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_3);
		return L_4;
	}
}
// Method Definition Index: 2848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_4_System_ITupleInternal_ToString_mD6172A8FE516FDF7427644ED59CECE80C128FEE2_gshared (Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const uint32_t SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const uint32_t SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226);
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = ___0_sb;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T1_t4D58337E8306F7F89C4ED9B6725936380C3B8B1A);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_1);
		NullCheck(L_0);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_0, L_2, NULL);
		StringBuilder_t* L_4 = ___0_sb;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_6 = ___0_sb;
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T2_t0FF637272DC78513BC022492F4F745897B533FBB);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_7);
		NullCheck(L_6);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_6, L_8, NULL);
		StringBuilder_t* L_10 = ___0_sb;
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_12 = ___0_sb;
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_T3_t335D2C5D8CD5EFBA86B4ECDBDBB91ECB7B69E427);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_13);
		NullCheck(L_12);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_12, L_14, NULL);
		StringBuilder_t* L_16 = ___0_sb;
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_18 = ___0_sb;
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_T4_tE830A3189BFD42B4720480BF6C7D043D1D045226);
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), L_19);
		NullCheck(L_18);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_18, L_20, NULL);
		StringBuilder_t* L_22 = ___0_sb;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = ___0_sb;
		NullCheck((RuntimeObject*)L_24);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_24);
		return L_25;
	}
}
// Method Definition Index: 2849
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Runtime_CompilerServices_ITuple_get_Length_m927660BAFA85E87020B7AC0F5EB08C671E06107A_gshared (Tuple_4_t205CA47CE248A17D08A5E3499845238CB151FFA4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return 4;
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
// Method Definition Index: 153026
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweak_1_get_Min_mA85E104B2B9EF2A3A375DF18A53F21FA410088C5_gshared (Tweak_1_t16C50EEF219B75A7CE4BFC21A45B2F1191A302BE* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->____min;
		return L_0;
	}
}
// Method Definition Index: 153027
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweak_1_get_Max_mCC71B7017AC5ABF2D05F93CC74E0574AF5DECB60_gshared (Tweak_1_t16C50EEF219B75A7CE4BFC21A45B2F1191A302BE* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->____max;
		return L_0;
	}
}
// Method Definition Index: 153028
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweak_1_get_Tween_mB6B1BAA5627E9E0D5C7E7194AB1C3987974701F8_gshared (Tweak_1_t16C50EEF219B75A7CE4BFC21A45B2F1191A302BE* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_4_t6B552DD029418AAC69B05335C9089B9B37E0C343* L_0 = ((Tweak_1_t16C50EEF219B75A7CE4BFC21A45B2F1191A302BE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)))->___InverseLerp;
		bool L_1 = __this->____min;
		bool L_2 = __this->____max;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_3 = __this->____getter;
		NullCheck(L_3);
		bool L_4;
		L_4 = Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_0);
		float L_5;
		L_5 = Func_4_Invoke_mFC6BE1FCDEDBE8C30D21E122A6F45E53651CC8FF_inline(L_0, L_1, L_2, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_5;
	}
}
// Method Definition Index: 153029
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweak_1_set_Tween_m3AD22CFDB28F7C64B3FAA1527821D1EF17B32047_gshared (Tweak_1_t16C50EEF219B75A7CE4BFC21A45B2F1191A302BE* __this, float ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->____setter;
		Func_4_t6A859C6EE14C8D76A55D1500E9B04BC21C5194D3* L_1 = ((Tweak_1_t16C50EEF219B75A7CE4BFC21A45B2F1191A302BE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)))->___Lerp;
		bool L_2 = __this->____min;
		bool L_3 = __this->____max;
		float L_4 = ___0_value;
		NullCheck(L_1);
		bool L_5;
		L_5 = Func_4_Invoke_m5866D67F8D718A89A2DC2DA89B852DA3F9F12C32_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		NullCheck(L_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_0, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// Method Definition Index: 153030
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweak_1__ctor_m8C07C9DE18B2F7143D0D513132F3504ADAAC6B30_gshared (Tweak_1_t16C50EEF219B75A7CE4BFC21A45B2F1191A302BE* __this, MemberInfo_t* ___0_memberInfo, InstanceHandle_tE6B8E29890FB27E3E1824A634157E596584E0CFA ___1_instanceHandle, DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A* ___2_attribute, float ___3_min, float ___4_max, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	U3CU3Ec__DisplayClass14_0_t89A5A60117B7129B9ACC9A54255A62F8A1CEB2D9* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_t89A5A60117B7129B9ACC9A54255A62F8A1CEB2D9* L_0 = (U3CU3Ec__DisplayClass14_0_t89A5A60117B7129B9ACC9A54255A62F8A1CEB2D9*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
		U3CU3Ec__DisplayClass14_0__ctor_m4FE15D011557F73566509B7E443E6CD511A4B349(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_t89A5A60117B7129B9ACC9A54255A62F8A1CEB2D9* L_1 = V_0;
		MemberInfo_t* L_2 = ___0_memberInfo;
		NullCheck(L_1);
		L_1->___memberInfo = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___memberInfo), (void*)L_2);
		U3CU3Ec__DisplayClass14_0_t89A5A60117B7129B9ACC9A54255A62F8A1CEB2D9* L_3 = V_0;
		NullCheck(L_3);
		MemberInfo_t* L_4 = L_3->___memberInfo;
		InstanceHandle_tE6B8E29890FB27E3E1824A634157E596584E0CFA L_5 = ___1_instanceHandle;
		DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A* L_6 = ___2_attribute;
		Tweak__ctor_m4D600E4814BF4989E1A90EB653CCA2BD1FE2DA11((Tweak_t4CDB122769009EF11EC6604D9A27E8C56B4E3574*)__this, L_4, L_5, L_6, NULL);
		U3CU3Ec__DisplayClass14_0_t89A5A60117B7129B9ACC9A54255A62F8A1CEB2D9* L_7 = V_0;
		NullCheck(L_7);
		L_7->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___U3CU3E4__this), (void*)__this);
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_8 = ((Tweak_1_t16C50EEF219B75A7CE4BFC21A45B2F1191A302BE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)))->___FromFloat;
		float L_9 = ___3_min;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		__this->____min = L_10;
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_11 = ((Tweak_1_t16C50EEF219B75A7CE4BFC21A45B2F1191A302BE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)))->___FromFloat;
		float L_12 = ___4_max;
		NullCheck(L_11);
		bool L_13;
		L_13 = Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		__this->____max = L_13;
		U3CU3Ec__DisplayClass14_0_t89A5A60117B7129B9ACC9A54255A62F8A1CEB2D9* L_14 = V_0;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_15 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_15, (RuntimeObject*)L_14, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		__this->____getter = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____getter), (void*)L_15);
		U3CU3Ec__DisplayClass14_0_t89A5A60117B7129B9ACC9A54255A62F8A1CEB2D9* L_16 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_17 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_17, (RuntimeObject*)L_16, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		__this->____setter = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____setter), (void*)L_17);
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
// Method Definition Index: 153026
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tweak_1_get_Min_m5268EE32645C692A9652CA28DFAECB1AFD0020D0_gshared (Tweak_1_tC28659AB7E0129514103A094E59AB0B5D0979306* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____min;
		return L_0;
	}
}
// Method Definition Index: 153027
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tweak_1_get_Max_mB9AC3096E8C87676A0853073215024534D3E9570_gshared (Tweak_1_tC28659AB7E0129514103A094E59AB0B5D0979306* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____max;
		return L_0;
	}
}
// Method Definition Index: 153028
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweak_1_get_Tween_m453664993C70AFE2A02033673D98859F1130DAF8_gshared (Tweak_1_tC28659AB7E0129514103A094E59AB0B5D0979306* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_4_t14DFDA9E85C76FDE067B3F2999C8107AFA671A64* L_0 = ((Tweak_1_tC28659AB7E0129514103A094E59AB0B5D0979306_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)))->___InverseLerp;
		int32_t L_1 = __this->____min;
		int32_t L_2 = __this->____max;
		Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* L_3 = __this->____getter;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Func_1_Invoke_mA967B67675F9F5475EF2DA67722E3876436BF72E_inline(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_0);
		float L_5;
		L_5 = Func_4_Invoke_m3697296E54AA5F2F950FC50A25892236C0456D78_inline(L_0, L_1, L_2, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_5;
	}
}
// Method Definition Index: 153029
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweak_1_set_Tween_mAACD97CF56280FEDAA1D32D2B001F7DCBF2300C2_gshared (Tweak_1_tC28659AB7E0129514103A094E59AB0B5D0979306* __this, float ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = __this->____setter;
		Func_4_t6DC62F76192ECD13986365A34FAD950A35AF225F* L_1 = ((Tweak_1_tC28659AB7E0129514103A094E59AB0B5D0979306_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)))->___Lerp;
		int32_t L_2 = __this->____min;
		int32_t L_3 = __this->____max;
		float L_4 = ___0_value;
		NullCheck(L_1);
		int32_t L_5;
		L_5 = Func_4_Invoke_mA248C7D454B998CBF66485D9630A73A2FEBB1FE2_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		NullCheck(L_0);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(L_0, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// Method Definition Index: 153030
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweak_1__ctor_mF5D3FD7200BCCDA2ED5E0004A8F271AE6B2A658F_gshared (Tweak_1_tC28659AB7E0129514103A094E59AB0B5D0979306* __this, MemberInfo_t* ___0_memberInfo, InstanceHandle_tE6B8E29890FB27E3E1824A634157E596584E0CFA ___1_instanceHandle, DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A* ___2_attribute, float ___3_min, float ___4_max, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	U3CU3Ec__DisplayClass14_0_tD635FE88F777EDF2A091F5E6BF573FBB8CBF69AC* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_tD635FE88F777EDF2A091F5E6BF573FBB8CBF69AC* L_0 = (U3CU3Ec__DisplayClass14_0_tD635FE88F777EDF2A091F5E6BF573FBB8CBF69AC*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
		U3CU3Ec__DisplayClass14_0__ctor_m9942EFC06E11DCAFEF842773A4171AC20CF69504(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_tD635FE88F777EDF2A091F5E6BF573FBB8CBF69AC* L_1 = V_0;
		MemberInfo_t* L_2 = ___0_memberInfo;
		NullCheck(L_1);
		L_1->___memberInfo = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___memberInfo), (void*)L_2);
		U3CU3Ec__DisplayClass14_0_tD635FE88F777EDF2A091F5E6BF573FBB8CBF69AC* L_3 = V_0;
		NullCheck(L_3);
		MemberInfo_t* L_4 = L_3->___memberInfo;
		InstanceHandle_tE6B8E29890FB27E3E1824A634157E596584E0CFA L_5 = ___1_instanceHandle;
		DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A* L_6 = ___2_attribute;
		Tweak__ctor_m4D600E4814BF4989E1A90EB653CCA2BD1FE2DA11((Tweak_t4CDB122769009EF11EC6604D9A27E8C56B4E3574*)__this, L_4, L_5, L_6, NULL);
		U3CU3Ec__DisplayClass14_0_tD635FE88F777EDF2A091F5E6BF573FBB8CBF69AC* L_7 = V_0;
		NullCheck(L_7);
		L_7->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___U3CU3E4__this), (void*)__this);
		Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* L_8 = ((Tweak_1_tC28659AB7E0129514103A094E59AB0B5D0979306_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)))->___FromFloat;
		float L_9 = ___3_min;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = Func_2_Invoke_m5F59DB7D65A544574E0D53BFB58E1475EC5D704F_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		__this->____min = L_10;
		Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* L_11 = ((Tweak_1_tC28659AB7E0129514103A094E59AB0B5D0979306_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)))->___FromFloat;
		float L_12 = ___4_max;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m5F59DB7D65A544574E0D53BFB58E1475EC5D704F_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		__this->____max = L_13;
		U3CU3Ec__DisplayClass14_0_tD635FE88F777EDF2A091F5E6BF573FBB8CBF69AC* L_14 = V_0;
		Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* L_15 = (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		Func_1__ctor_m475512287B9508E6D4721B3022635FED517234D1(L_15, (RuntimeObject*)L_14, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		__this->____getter = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____getter), (void*)L_15);
		U3CU3Ec__DisplayClass14_0_tD635FE88F777EDF2A091F5E6BF573FBB8CBF69AC* L_16 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_17 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_17, (RuntimeObject*)L_16, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		__this->____setter = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____setter), (void*)L_17);
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
// Method Definition Index: 153026
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweak_1_get_Min_m64BC58F41E3A2290A508863DB901A1DD6B4F8147_gshared (Tweak_1_t1087E2982CC0C10E5E00C12F5211E1E0AFBD749C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = __this->____min;
		return L_0;
	}
}
// Method Definition Index: 153027
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweak_1_get_Max_m82B4201A2BE9081EA1C989FDAAD03EEC30F899D4_gshared (Tweak_1_t1087E2982CC0C10E5E00C12F5211E1E0AFBD749C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = __this->____max;
		return L_0;
	}
}
// Method Definition Index: 153028
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweak_1_get_Tween_m7437A58556ADA94954918CA8E96B72C5BCB7B089_gshared (Tweak_1_t1087E2982CC0C10E5E00C12F5211E1E0AFBD749C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_4_t28BFDA9BC4AB12540F2BE70B4FC23CD6FF5EB6F4* L_0 = ((Tweak_1_t1087E2982CC0C10E5E00C12F5211E1E0AFBD749C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)))->___InverseLerp;
		float L_1 = __this->____min;
		float L_2 = __this->____max;
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_3 = __this->____getter;
		NullCheck(L_3);
		float L_4;
		L_4 = Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_inline(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_0);
		float L_5;
		L_5 = Func_4_Invoke_m937DB0BDE1B712223FA52DF3DB87B0CD19DEC276_inline(L_0, L_1, L_2, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_5;
	}
}
// Method Definition Index: 153029
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweak_1_set_Tween_mB89DE86993FDF097E8E9CBA9A9CB6844979370E5_gshared (Tweak_1_t1087E2982CC0C10E5E00C12F5211E1E0AFBD749C* __this, float ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->____setter;
		Func_4_t28BFDA9BC4AB12540F2BE70B4FC23CD6FF5EB6F4* L_1 = ((Tweak_1_t1087E2982CC0C10E5E00C12F5211E1E0AFBD749C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)))->___Lerp;
		float L_2 = __this->____min;
		float L_3 = __this->____max;
		float L_4 = ___0_value;
		NullCheck(L_1);
		float L_5;
		L_5 = Func_4_Invoke_m937DB0BDE1B712223FA52DF3DB87B0CD19DEC276_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		NullCheck(L_0);
		Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(L_0, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// Method Definition Index: 153030
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweak_1__ctor_m8E265DA22314FD0409CE44950674979F138B433B_gshared (Tweak_1_t1087E2982CC0C10E5E00C12F5211E1E0AFBD749C* __this, MemberInfo_t* ___0_memberInfo, InstanceHandle_tE6B8E29890FB27E3E1824A634157E596584E0CFA ___1_instanceHandle, DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A* ___2_attribute, float ___3_min, float ___4_max, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	U3CU3Ec__DisplayClass14_0_tCA7ED17D26299D6937FD79C96DF871D31631463A* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_tCA7ED17D26299D6937FD79C96DF871D31631463A* L_0 = (U3CU3Ec__DisplayClass14_0_tCA7ED17D26299D6937FD79C96DF871D31631463A*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
		U3CU3Ec__DisplayClass14_0__ctor_m1BF31C0BCB8BE1D61AE6C4AC7DB000ED367DA967(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_tCA7ED17D26299D6937FD79C96DF871D31631463A* L_1 = V_0;
		MemberInfo_t* L_2 = ___0_memberInfo;
		NullCheck(L_1);
		L_1->___memberInfo = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___memberInfo), (void*)L_2);
		U3CU3Ec__DisplayClass14_0_tCA7ED17D26299D6937FD79C96DF871D31631463A* L_3 = V_0;
		NullCheck(L_3);
		MemberInfo_t* L_4 = L_3->___memberInfo;
		InstanceHandle_tE6B8E29890FB27E3E1824A634157E596584E0CFA L_5 = ___1_instanceHandle;
		DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A* L_6 = ___2_attribute;
		Tweak__ctor_m4D600E4814BF4989E1A90EB653CCA2BD1FE2DA11((Tweak_t4CDB122769009EF11EC6604D9A27E8C56B4E3574*)__this, L_4, L_5, L_6, NULL);
		U3CU3Ec__DisplayClass14_0_tCA7ED17D26299D6937FD79C96DF871D31631463A* L_7 = V_0;
		NullCheck(L_7);
		L_7->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___U3CU3E4__this), (void*)__this);
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_8 = ((Tweak_1_t1087E2982CC0C10E5E00C12F5211E1E0AFBD749C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)))->___FromFloat;
		float L_9 = ___3_min;
		NullCheck(L_8);
		float L_10;
		L_10 = Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		__this->____min = L_10;
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_11 = ((Tweak_1_t1087E2982CC0C10E5E00C12F5211E1E0AFBD749C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)))->___FromFloat;
		float L_12 = ___4_max;
		NullCheck(L_11);
		float L_13;
		L_13 = Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		__this->____max = L_13;
		U3CU3Ec__DisplayClass14_0_tCA7ED17D26299D6937FD79C96DF871D31631463A* L_14 = V_0;
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_15 = (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71(L_15, (RuntimeObject*)L_14, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		__this->____getter = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____getter), (void*)L_15);
		U3CU3Ec__DisplayClass14_0_tCA7ED17D26299D6937FD79C96DF871D31631463A* L_16 = V_0;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_17 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
		Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859(L_17, (RuntimeObject*)L_16, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		__this->____setter = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____setter), (void*)L_17);
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
// Method Definition Index: 153026
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweak_1_get_Min_m7F1C0E27ABB3BB48C11D4808A81315A769DDCCDF_gshared (Tweak_1_t2634F39F5E3B3C0C215C1E8A18FFF142CD61F1D1* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0);
		return;
	}
}
// Method Definition Index: 153027
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweak_1_get_Max_m4A8876891AC69A87603B4BF785EE628C630F2590_gshared (Tweak_1_t2634F39F5E3B3C0C215C1E8A18FFF142CD61F1D1* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)), SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0);
		return;
	}
}
// Method Definition Index: 153028
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweak_1_get_Tween_m16562ED259A127760D30B23F646E9E7D4A4ADA34_gshared (Tweak_1_t2634F39F5E3B3C0C215C1E8A18FFF142CD61F1D1* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0);
	//<source_info:<no-source>:1>
	{
		Func_4_t2541034AEE4404468532C27DBC715DF62BDAE7F3* L_0 = ((Tweak_1_t2634F39F5E3B3C0C215C1E8A18FFF142CD61F1D1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)))->___InverseLerp;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0);
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)), SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0);
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_3 = *(Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		NullCheck(L_3);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_3, (Il2CppFullySharedGenericAny*)L_4);
		NullCheck(L_0);
		float L_5;
		L_5 = InvokerFuncInvoker3< float, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_2: *(void**)L_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_4: *(void**)L_4));
		return L_5;
	}
}
// Method Definition Index: 153029
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweak_1_set_Tween_mB67367C55956BD7420E3687D178632CAAAF94FE7_gshared (Tweak_1_t2634F39F5E3B3C0C215C1E8A18FFF142CD61F1D1* __this, float ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0);
	//<source_info:<no-source>:1>
	{
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_0 = *(Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		Func_4_t2D728D40D290F8C65346C870D314F893B5896872* L_1 = ((Tweak_1_t2634F39F5E3B3C0C215C1E8A18FFF142CD61F1D1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)))->___Lerp;
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)), SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0);
		float L_4 = ___0_value;
		NullCheck(L_1);
		InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, float, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_2: *(void**)L_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_3: *(void**)L_3), L_4, (Il2CppFullySharedGenericAny*)L_5);
		NullCheck(L_0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_5: *(void**)L_5));
		return;
	}
}
// Method Definition Index: 153030
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweak_1__ctor_m3173807BD426536537F756E65FDC0218B0E96B8A_gshared (Tweak_1_t2634F39F5E3B3C0C215C1E8A18FFF142CD61F1D1* __this, MemberInfo_t* ___0_memberInfo, InstanceHandle_tE6B8E29890FB27E3E1824A634157E596584E0CFA ___1_instanceHandle, DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A* ___2_attribute, float ___3_min, float ___4_max, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0);
	//<source_info:<no-source>:1>
	U3CU3Ec__DisplayClass14_0_t5D4C23D14B87D94C0CC0921986B60DAF5DAC6D47* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_t5D4C23D14B87D94C0CC0921986B60DAF5DAC6D47* L_0 = (U3CU3Ec__DisplayClass14_0_t5D4C23D14B87D94C0CC0921986B60DAF5DAC6D47*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
		((  void (*) (U3CU3Ec__DisplayClass14_0_t5D4C23D14B87D94C0CC0921986B60DAF5DAC6D47*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_t5D4C23D14B87D94C0CC0921986B60DAF5DAC6D47* L_1 = V_0;
		MemberInfo_t* L_2 = ___0_memberInfo;
		NullCheck(L_1);
		L_1->___memberInfo = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___memberInfo), (void*)L_2);
		U3CU3Ec__DisplayClass14_0_t5D4C23D14B87D94C0CC0921986B60DAF5DAC6D47* L_3 = V_0;
		NullCheck(L_3);
		MemberInfo_t* L_4 = L_3->___memberInfo;
		InstanceHandle_tE6B8E29890FB27E3E1824A634157E596584E0CFA L_5 = ___1_instanceHandle;
		DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A* L_6 = ___2_attribute;
		Tweak__ctor_m4D600E4814BF4989E1A90EB653CCA2BD1FE2DA11((Tweak_t4CDB122769009EF11EC6604D9A27E8C56B4E3574*)__this, L_4, L_5, L_6, NULL);
		U3CU3Ec__DisplayClass14_0_t5D4C23D14B87D94C0CC0921986B60DAF5DAC6D47* L_7 = V_0;
		NullCheck(L_7);
		L_7->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___U3CU3E4__this), (void*)__this);
		Func_2_tB5CF618947FC5173B54165B5CE46CAFC16D59714* L_8 = ((Tweak_1_t2634F39F5E3B3C0C215C1E8A18FFF142CD61F1D1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)))->___FromFloat;
		float L_9 = ___3_min;
		NullCheck(L_8);
		InvokerActionInvoker2< float, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_8, L_9, (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_10, SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0);
		Func_2_tB5CF618947FC5173B54165B5CE46CAFC16D59714* L_11 = ((Tweak_1_t2634F39F5E3B3C0C215C1E8A18FFF142CD61F1D1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)))->___FromFloat;
		float L_12 = ___4_max;
		NullCheck(L_11);
		InvokerActionInvoker2< float, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_11, L_12, (Il2CppFullySharedGenericAny*)L_13);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_13, SizeOf_T_t408816B87BBAF8815C4E07DFF485FA4620378AD0);
		U3CU3Ec__DisplayClass14_0_t5D4C23D14B87D94C0CC0921986B60DAF5DAC6D47* L_14 = V_0;
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_15 = (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		((  void (*) (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_15, (RuntimeObject*)L_14, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		il2cpp_codegen_write_instance_field_data<Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_15);
		U3CU3Ec__DisplayClass14_0_t5D4C23D14B87D94C0CC0921986B60DAF5DAC6D47* L_16 = V_0;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_17 = (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
		((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_17, (RuntimeObject*)L_16, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		il2cpp_codegen_write_instance_field_data<Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_17);
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
// Method Definition Index: 120101
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m8F517B7356D09DB3B885AC627C1B11853F0F4E3B_gshared (FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE ___0_tweenInfo, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D* L_0 = (U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		U3CStartU3Ed__2__ctor_m204C7F34151276EE628D17B5C5DECF463BFE649C(L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D* L_1 = L_0;
		FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE L_2 = ___0_tweenInfo;
		NullCheck(L_1);
		L_1->___tweenInfo = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___tweenInfo))->___m_Target), (void*)NULL);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 120102
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_mDC48342689A295BD16CC45907A4DD77718F6C493_gshared (TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E* __this, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___0_coroutineContainer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = ___0_coroutineContainer;
		__this->___m_CoroutineContainer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CoroutineContainer), (void*)L_0);
		return;
	}
}
// Method Definition Index: 120103
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_mB94926E3AF23ED3A6EFC8727B6359949BD689DD6_gshared (TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E* __this, FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE ___0_info, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->___m_CoroutineContainer;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7, NULL);
		return;
	}

IL_0019:
	{
		TweenRunner_1_StopTween_m6C1159C7A8EDF8A363CD82CBA503E234870826F0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_2 = __this->___m_CoroutineContainer;
		NullCheck((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		FloatTween_TweenValue_m022D385B013439E2FB8020F6A6BD329CECA81E89((&___0_info), (1.0f), NULL);
		return;
	}

IL_0044:
	{
		FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE L_5 = ___0_info;
		RuntimeObject* L_6;
		L_6 = TweenRunner_1_Start_m8F517B7356D09DB3B885AC627C1B11853F0F4E3B(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___m_Tween = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tween), (void*)L_6);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_7 = __this->___m_CoroutineContainer;
		RuntimeObject* L_8 = __this->___m_Tween;
		NullCheck(L_7);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_7, L_8, NULL);
		return;
	}
}
// Method Definition Index: 120104
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m6C1159C7A8EDF8A363CD82CBA503E234870826F0_gshared (TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_Tween;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = __this->___m_CoroutineContainer;
		RuntimeObject* L_2 = __this->___m_Tween;
		NullCheck(L_1);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(L_1, L_2, NULL);
		__this->___m_Tween = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tween), (void*)(RuntimeObject*)NULL);
	}

IL_0020:
	{
		return;
	}
}
// Method Definition Index: 120105
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_m9D2B0480E7EEB4E7B359140EC102686CE6E9E696_gshared (TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
// Method Definition Index: 120101
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m6312DA299DB0D9BEB8A36EB3460648C3ACC364E3_gshared (Il2CppFullySharedGenericStruct ___0_tweenInfo, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF89D3C06555F6DCA35317A31A8C999F9341C1008 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_tF89D3C06555F6DCA35317A31A8C999F9341C1008);
	//<source_info:<no-source>:1>
	{
		U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685* L_0 = (U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685* L_1 = L_0;
		il2cpp_codegen_memcpy(L_2, ___0_tweenInfo, SizeOf_T_tF89D3C06555F6DCA35317A31A8C999F9341C1008);
		NullCheck(L_1);
		il2cpp_codegen_write_instance_field_data(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2), L_2, SizeOf_T_tF89D3C06555F6DCA35317A31A8C999F9341C1008);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 120102
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_m4C73AEECA1DCB09E3A9A227C275B2E24C1CEF192_gshared (TweenRunner_1_t506331CFBEF4B7DD78419718F858F743187D08F0* __this, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___0_coroutineContainer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = ___0_coroutineContainer;
		__this->___m_CoroutineContainer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CoroutineContainer), (void*)L_0);
		return;
	}
}
// Method Definition Index: 120103
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_mB084CC7F3B3370EEE23B3FA8707DBFEFEB3BAB5D_gshared (TweenRunner_1_t506331CFBEF4B7DD78419718F858F743187D08F0* __this, Il2CppFullySharedGenericStruct ___0_info, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7);
		s_Il2CppMethodInitialized = true;
	}
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)));
	const uint32_t SizeOf_T_tF89D3C06555F6DCA35317A31A8C999F9341C1008 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_T_tF89D3C06555F6DCA35317A31A8C999F9341C1008);
	//<source_info:<no-source>:1>
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->___m_CoroutineContainer;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7, NULL);
		return;
	}

IL_0019:
	{
		((  void (*) (TweenRunner_1_t506331CFBEF4B7DD78419718F858F743187D08F0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_2 = __this->___m_CoroutineContainer;
		NullCheck((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), il2cpp_rgctx_method(method->klass->rgctx_data, 5), (void*)(Il2CppFullySharedGenericStruct*)___0_info, &L_6, L_5);
		typedef void ( *func_L_8)(void*,float,const RuntimeMethod*);
		((func_L_8)L_7)(L_6.thisPtr, (1.0f),L_6.method);
		return;
	}

IL_0044:
	{
		il2cpp_codegen_memcpy(L_9, ___0_info, SizeOf_T_tF89D3C06555F6DCA35317A31A8C999F9341C1008);
		RuntimeObject* L_10;
		L_10 = InvokerFuncInvoker1< RuntimeObject*, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), NULL, L_9);
		__this->___m_Tween = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tween), (void*)L_10);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_11 = __this->___m_CoroutineContainer;
		RuntimeObject* L_12 = __this->___m_Tween;
		NullCheck(L_11);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_11, L_12, NULL);
		return;
	}
}
// Method Definition Index: 120104
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m782348E0451FB7594F045055A50CDD9DB0C4CE8B_gshared (TweenRunner_1_t506331CFBEF4B7DD78419718F858F743187D08F0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_Tween;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = __this->___m_CoroutineContainer;
		RuntimeObject* L_2 = __this->___m_Tween;
		NullCheck(L_1);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(L_1, L_2, NULL);
		__this->___m_Tween = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tween), (void*)(RuntimeObject*)NULL);
	}

IL_0020:
	{
		return;
	}
}
// Method Definition Index: 120105
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_mFFBA8A1394D4E000DF6BA61EF59C56273D84DEBC_gshared (TweenRunner_1_t506331CFBEF4B7DD78419718F858F743187D08F0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
// Method Definition Index: 142989
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_mB20C8AE701784E49515475A471050D8440D444CF_gshared (ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7 ___0_tweenInfo, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47* L_0 = (U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		U3CStartU3Ed__2__ctor_m0F5A38D7B55D76D7DD1A22C7D2346C87C12C2BC7(L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47* L_1 = L_0;
		ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7 L_2 = ___0_tweenInfo;
		NullCheck(L_1);
		L_1->___tweenInfo = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___tweenInfo))->___m_Target), (void*)NULL);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 142990
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_m31DA89A5CD87A2B1294124A360EB44976D32550A_gshared (TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* __this, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___0_coroutineContainer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = ___0_coroutineContainer;
		__this->___m_CoroutineContainer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CoroutineContainer), (void*)L_0);
		return;
	}
}
// Method Definition Index: 142991
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_m0D1D370495FF04A6F09D1459E5A03ADB2BB2236D_gshared (TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* __this, ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7 ___0_info, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->___m_CoroutineContainer;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7, NULL);
		return;
	}

IL_0019:
	{
		TweenRunner_1_StopTween_m1807F7EC3FF55749912B8EBE4951AEC367ED799D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_2 = __this->___m_CoroutineContainer;
		NullCheck((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		ColorTween_TweenValue_mF5CBA9BDE7F73E47F9CF26DC4EC2419694049860((&___0_info), (1.0f), NULL);
		return;
	}

IL_0044:
	{
		ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7 L_5 = ___0_info;
		RuntimeObject* L_6;
		L_6 = TweenRunner_1_Start_mB20C8AE701784E49515475A471050D8440D444CF(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___m_Tween = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tween), (void*)L_6);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_7 = __this->___m_CoroutineContainer;
		RuntimeObject* L_8 = __this->___m_Tween;
		NullCheck(L_7);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_7, L_8, NULL);
		return;
	}
}
// Method Definition Index: 142992
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m1807F7EC3FF55749912B8EBE4951AEC367ED799D_gshared (TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_Tween;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = __this->___m_CoroutineContainer;
		RuntimeObject* L_2 = __this->___m_Tween;
		NullCheck(L_1);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(L_1, L_2, NULL);
		__this->___m_Tween = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tween), (void*)(RuntimeObject*)NULL);
	}

IL_0020:
	{
		return;
	}
}
// Method Definition Index: 142993
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_mBC3C84D9E4335C511221F3C90E1B3F31907C34DB_gshared (TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
// Method Definition Index: 142989
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m4F400F2F86055B01EF66839CA607B07908E4FC7D_gshared (FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A ___0_tweenInfo, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB* L_0 = (U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		U3CStartU3Ed__2__ctor_mD1B548DCCF5485603C6FB4E9EB5431232DD5B8D0(L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB* L_1 = L_0;
		FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A L_2 = ___0_tweenInfo;
		NullCheck(L_1);
		L_1->___tweenInfo = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___tweenInfo))->___m_Target), (void*)NULL);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 142990
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_m91865D37D021FF9067FDF491E4B15D348A9AD396_gshared (TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* __this, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___0_coroutineContainer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = ___0_coroutineContainer;
		__this->___m_CoroutineContainer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CoroutineContainer), (void*)L_0);
		return;
	}
}
// Method Definition Index: 142991
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_mA2C386A4A22A6F801A31585E13B10AF4E4FEC2D0_gshared (TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* __this, FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A ___0_info, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->___m_CoroutineContainer;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7, NULL);
		return;
	}

IL_0019:
	{
		TweenRunner_1_StopTween_m013CE2AC05F13597F080CDEA23E87CD3FBE422C9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_2 = __this->___m_CoroutineContainer;
		NullCheck((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		FloatTween_TweenValue_mE51344369BDDA58E9C3AEC62E1B1C1AC0349278E((&___0_info), (1.0f), NULL);
		return;
	}

IL_0044:
	{
		FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A L_5 = ___0_info;
		RuntimeObject* L_6;
		L_6 = TweenRunner_1_Start_m4F400F2F86055B01EF66839CA607B07908E4FC7D(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___m_Tween = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tween), (void*)L_6);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_7 = __this->___m_CoroutineContainer;
		RuntimeObject* L_8 = __this->___m_Tween;
		NullCheck(L_7);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_7, L_8, NULL);
		return;
	}
}
// Method Definition Index: 142992
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m013CE2AC05F13597F080CDEA23E87CD3FBE422C9_gshared (TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_Tween;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = __this->___m_CoroutineContainer;
		RuntimeObject* L_2 = __this->___m_Tween;
		NullCheck(L_1);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(L_1, L_2, NULL);
		__this->___m_Tween = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tween), (void*)(RuntimeObject*)NULL);
	}

IL_0020:
	{
		return;
	}
}
// Method Definition Index: 142993
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_mFA97D1708CF28A6D0D9697D66205BB7C24D76BCB_gshared (TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
// Method Definition Index: 142989
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_mAD6D18FE44D639E3EC2EEF54E3FD2EA502532259_gshared (Il2CppFullySharedGenericStruct ___0_tweenInfo, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tDD41B39C2629C5EB98444C2FDDAFD12366A424ED = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_tDD41B39C2629C5EB98444C2FDDAFD12366A424ED);
	//<source_info:<no-source>:1>
	{
		U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942* L_0 = (U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942* L_1 = L_0;
		il2cpp_codegen_memcpy(L_2, ___0_tweenInfo, SizeOf_T_tDD41B39C2629C5EB98444C2FDDAFD12366A424ED);
		NullCheck(L_1);
		il2cpp_codegen_write_instance_field_data(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2), L_2, SizeOf_T_tDD41B39C2629C5EB98444C2FDDAFD12366A424ED);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 142990
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_m3980930C9280CE825270CE506C21109D5ABC67BA_gshared (TweenRunner_1_tA3E6EB0834EDD64BCDE6943EAFE03D0522926859* __this, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___0_coroutineContainer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = ___0_coroutineContainer;
		__this->___m_CoroutineContainer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CoroutineContainer), (void*)L_0);
		return;
	}
}
// Method Definition Index: 142991
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_m92B806933AECC7A78982E834DFB5E0A6B4699242_gshared (TweenRunner_1_tA3E6EB0834EDD64BCDE6943EAFE03D0522926859* __this, Il2CppFullySharedGenericStruct ___0_info, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7);
		s_Il2CppMethodInitialized = true;
	}
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)));
	const uint32_t SizeOf_T_tDD41B39C2629C5EB98444C2FDDAFD12366A424ED = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_T_tDD41B39C2629C5EB98444C2FDDAFD12366A424ED);
	//<source_info:<no-source>:1>
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->___m_CoroutineContainer;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7, NULL);
		return;
	}

IL_0019:
	{
		((  void (*) (TweenRunner_1_tA3E6EB0834EDD64BCDE6943EAFE03D0522926859*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_2 = __this->___m_CoroutineContainer;
		NullCheck((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), il2cpp_rgctx_method(method->klass->rgctx_data, 5), (void*)(Il2CppFullySharedGenericStruct*)___0_info, &L_6, L_5);
		typedef void ( *func_L_8)(void*,float,const RuntimeMethod*);
		((func_L_8)L_7)(L_6.thisPtr, (1.0f),L_6.method);
		return;
	}

IL_0044:
	{
		il2cpp_codegen_memcpy(L_9, ___0_info, SizeOf_T_tDD41B39C2629C5EB98444C2FDDAFD12366A424ED);
		RuntimeObject* L_10;
		L_10 = InvokerFuncInvoker1< RuntimeObject*, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), NULL, L_9);
		__this->___m_Tween = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tween), (void*)L_10);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_11 = __this->___m_CoroutineContainer;
		RuntimeObject* L_12 = __this->___m_Tween;
		NullCheck(L_11);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_11, L_12, NULL);
		return;
	}
}
// Method Definition Index: 142992
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m37DB99A9B05E536CF04651C57196ED6049325A1B_gshared (TweenRunner_1_tA3E6EB0834EDD64BCDE6943EAFE03D0522926859* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_Tween;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = __this->___m_CoroutineContainer;
		RuntimeObject* L_2 = __this->___m_Tween;
		NullCheck(L_1);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(L_1, L_2, NULL);
		__this->___m_Tween = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tween), (void*)(RuntimeObject*)NULL);
	}

IL_0020:
	{
		return;
	}
}
// Method Definition Index: 142993
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_mE3994FDD511664B82F731F3F7DB4F2E67217ED38_gshared (TweenRunner_1_tA3E6EB0834EDD64BCDE6943EAFE03D0522926859* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
// Method Definition Index: 164789
// Method Definition Index: 164790
// Method Definition Index: 164791
// Method Definition Index: 164792
// Method Definition Index: 164793
// Method Definition Index: 164794
// Method Definition Index: 164795
// Method Definition Index: 164796
// Method Definition Index: 164797
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 164789
// Method Definition Index: 164790
// Method Definition Index: 164791
// Method Definition Index: 164792
// Method Definition Index: 164793
// Method Definition Index: 164794
// Method Definition Index: 164795
// Method Definition Index: 164796
// Method Definition Index: 164797
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 164789
// Method Definition Index: 164790
// Method Definition Index: 164791
// Method Definition Index: 164792
// Method Definition Index: 164793
// Method Definition Index: 164794
// Method Definition Index: 164795
// Method Definition Index: 164796
// Method Definition Index: 164797
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 164789
// Method Definition Index: 164790
// Method Definition Index: 164791
// Method Definition Index: 164792
// Method Definition Index: 164793
// Method Definition Index: 164794
// Method Definition Index: 164795
// Method Definition Index: 164796
// Method Definition Index: 164797
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 164789
// Method Definition Index: 164790
// Method Definition Index: 164791
// Method Definition Index: 164792
// Method Definition Index: 164793
// Method Definition Index: 164794
// Method Definition Index: 164795
// Method Definition Index: 164796
// Method Definition Index: 164797
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 164789
// Method Definition Index: 164790
// Method Definition Index: 164791
// Method Definition Index: 164792
// Method Definition Index: 164793
// Method Definition Index: 164794
// Method Definition Index: 164795
// Method Definition Index: 164796
// Method Definition Index: 164797
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 164789
// Method Definition Index: 164790
// Method Definition Index: 164791
// Method Definition Index: 164792
// Method Definition Index: 164793
// Method Definition Index: 164794
// Method Definition Index: 164795
// Method Definition Index: 164796
// Method Definition Index: 164797
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 164789
// Method Definition Index: 164790
// Method Definition Index: 164791
// Method Definition Index: 164792
// Method Definition Index: 164793
// Method Definition Index: 164794
// Method Definition Index: 164795
// Method Definition Index: 164796
// Method Definition Index: 164797
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 164789
// Method Definition Index: 164790
// Method Definition Index: 164791
// Method Definition Index: 164792
// Method Definition Index: 164793
// Method Definition Index: 164794
// Method Definition Index: 164795
// Method Definition Index: 164796
// Method Definition Index: 164797
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 164789
// Method Definition Index: 164790
// Method Definition Index: 164791
// Method Definition Index: 164792
// Method Definition Index: 164793
// Method Definition Index: 164794
// Method Definition Index: 164795
// Method Definition Index: 164796
// Method Definition Index: 164797
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 164789
// Method Definition Index: 164790
// Method Definition Index: 164791
// Method Definition Index: 164792
// Method Definition Index: 164793
// Method Definition Index: 164794
// Method Definition Index: 164795
// Method Definition Index: 164796
// Method Definition Index: 164797
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 164789
// Method Definition Index: 164790
// Method Definition Index: 164791
// Method Definition Index: 164792
// Method Definition Index: 164793
// Method Definition Index: 164794
// Method Definition Index: 164795
// Method Definition Index: 164796
// Method Definition Index: 164797
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 164789
// Method Definition Index: 164790
// Method Definition Index: 164791
// Method Definition Index: 164792
// Method Definition Index: 164793
// Method Definition Index: 164794
// Method Definition Index: 164795
// Method Definition Index: 164796
// Method Definition Index: 164797
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 164789
// Method Definition Index: 164790
// Method Definition Index: 164791
// Method Definition Index: 164792
// Method Definition Index: 164793
// Method Definition Index: 164794
// Method Definition Index: 164795
// Method Definition Index: 164796
// Method Definition Index: 164797
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 164789
// Method Definition Index: 164790
// Method Definition Index: 164791
// Method Definition Index: 164792
// Method Definition Index: 164793
// Method Definition Index: 164794
// Method Definition Index: 164795
// Method Definition Index: 164796
// Method Definition Index: 164797
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 164789
// Method Definition Index: 164790
// Method Definition Index: 164791
// Method Definition Index: 164792
// Method Definition Index: 164793
// Method Definition Index: 164794
// Method Definition Index: 164795
// Method Definition Index: 164796
// Method Definition Index: 164797
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 164789
// Method Definition Index: 164790
// Method Definition Index: 164791
// Method Definition Index: 164792
// Method Definition Index: 164793
// Method Definition Index: 164794
// Method Definition Index: 164795
// Method Definition Index: 164796
// Method Definition Index: 164797
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 164789
// Method Definition Index: 164790
// Method Definition Index: 164791
// Method Definition Index: 164792
// Method Definition Index: 164793
// Method Definition Index: 164794
// Method Definition Index: 164795
// Method Definition Index: 164796
// Method Definition Index: 164797
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 164789
// Method Definition Index: 164790
// Method Definition Index: 164791
// Method Definition Index: 164792
// Method Definition Index: 164793
// Method Definition Index: 164794
// Method Definition Index: 164795
// Method Definition Index: 164796
// Method Definition Index: 164797
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 164789
// Method Definition Index: 164790
// Method Definition Index: 164791
// Method Definition Index: 164792
// Method Definition Index: 164793
// Method Definition Index: 164794
// Method Definition Index: 164795
// Method Definition Index: 164796
// Method Definition Index: 164797
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 164789
// Method Definition Index: 164790
// Method Definition Index: 164791
// Method Definition Index: 164792
// Method Definition Index: 164793
// Method Definition Index: 164794
// Method Definition Index: 164795
// Method Definition Index: 164796
// Method Definition Index: 164797
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 164789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_m92AC36BEDCF9AABCB0A8AFD891AC8DD5CEEF48CE_gshared (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 164790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mCC2DDBA49E1A5E34050E36FBBF78034FB04D1415_gshared (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m9BDE5E9B9E0EE309570C0E1BEEFF1D970E301057(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m567724D44415F983B593F79A65DF98D0B49A7586(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 164791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m567724D44415F983B593F79A65DF98D0B49A7586_gshared (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* G_B3_0 = NULL;
	TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* G_B3_1 = NULL;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* G_B2_0 = NULL;
	TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* G_B2_1 = NULL;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* G_B9_0 = NULL;
	TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* G_B9_1 = NULL;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* G_B8_0 = NULL;
	TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* G_B8_1 = NULL;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* G_B13_0 = NULL;
	TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* G_B13_1 = NULL;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* G_B12_0 = NULL;
	TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_4 = ((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_6 = (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m1CF94999885A2AB1DEDC3C4D08360632327809FC(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_7 = L_6;
		((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_14 = ((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_16 = (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m1CF94999885A2AB1DEDC3C4D08360632327809FC(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_17 = L_16;
		((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_22 = ((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_24 = (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m1CF94999885A2AB1DEDC3C4D08360632327809FC(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_25 = L_24;
		((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 164792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 TypeConstructor_1_CreateValueTypeInstance_mE82A51832FF8AC458EBFF1DAF32C00E26A1B997F_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26));
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 164793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 TypeConstructor_1_CreateScriptableObjectInstance_m7808269708154B7FC4A4A23A67857D16C016AA2B_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 164794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 TypeConstructor_1_CreateClassInstance_m8420F36ADDA84956FB32B12F2D0E0AAC091DF87A_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_0;
		L_0 = Activator_CreateInstance_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mB73A28B81E6D6D5CEA36624398A83B517613B668(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 164795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_m01CA0C176CC6F362F8E48AC734494160EECF4841_gshared (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* __this, Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 164796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_mDFC4AF8F2F59A00B79672C881DCC617898FC054A_gshared (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_2;
		L_2 = Func_1_Invoke_mD023E4BE9F2AC4DDAB5BC6865F64444F25EBA15C_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_14;
		L_14 = InterfaceFuncInvoker0< StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_17;
		L_17 = Func_1_Invoke_mD023E4BE9F2AC4DDAB5BC6865F64444F25EBA15C_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 164797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m94D3A94CB2318D30FDA3DDF783B2DC2ACF3A2858_gshared (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_0;
		L_0 = InterfaceFuncInvoker0< StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 164789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_mB7E7EA000BF94C25D20309B10359E26A68D14C76_gshared (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 164790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m9232AD992B16F402E5AE8AAC8083758F889F6D2C_gshared (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m371FB7DB718EACB453900456810E9A5E7C4560FC(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_mB3A3166BECF17AF72ECD9CB45352121E79693D1D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 164791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mB3A3166BECF17AF72ECD9CB45352121E79693D1D_gshared (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* G_B3_0 = NULL;
	TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* G_B3_1 = NULL;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* G_B2_0 = NULL;
	TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* G_B2_1 = NULL;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* G_B9_0 = NULL;
	TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* G_B9_1 = NULL;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* G_B8_0 = NULL;
	TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* G_B8_1 = NULL;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* G_B13_0 = NULL;
	TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* G_B13_1 = NULL;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* G_B12_0 = NULL;
	TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_4 = ((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_6 = (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mA471FC63ABD240998521909693B8E1F0E226F4C7(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_7 = L_6;
		((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_14 = ((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_16 = (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mA471FC63ABD240998521909693B8E1F0E226F4C7(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_17 = L_16;
		((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_22 = ((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_24 = (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mA471FC63ABD240998521909693B8E1F0E226F4C7(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_25 = L_24;
		((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 164792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F TypeConstructor_1_CreateValueTypeInstance_m19B1CE1BBC1A99035092372B76357F65AD50F3EB_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F));
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 164793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F TypeConstructor_1_CreateScriptableObjectInstance_mF527B42378E99D95B32A5C720C55CC4B99C1C254_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 164794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F TypeConstructor_1_CreateClassInstance_m12CE46EC997EDE13530D214B1EA33CC2D607ACBB_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_0;
		L_0 = Activator_CreateInstance_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mB01EF8A1953AD6AC7F3EA56DC0CA6C9353BFD778(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 164795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_m2A56ADE678FC1FA0F97CDEC7F4A7660EDCF2D3E4_gshared (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* __this, Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 164796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_mB03C1C2B54AC9CCEAFD667680E05FD93813B043D_gshared (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_2;
		L_2 = Func_1_Invoke_mEFCC6E276B7F9541F583BF1DD7C2D4B88A5C9CED_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_14;
		L_14 = InterfaceFuncInvoker0< StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_17;
		L_17 = Func_1_Invoke_mEFCC6E276B7F9541F583BF1DD7C2D4B88A5C9CED_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 164797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_mCA9AE2736B793171808602C4C83E73056F48CE55_gshared (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_0;
		L_0 = InterfaceFuncInvoker0< StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 164789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_mD9CE9B9EA8B011599325405C3CF06897AA6355D4_gshared (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 164790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m21847F0A7EA3023224244FA42EC54883D6CC4F4B_gshared (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m62FD638362BFCB156A7F8AC98F87BB9DA45A686C(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m962EFB2F614BF82E3DFE0A548F875ED7EC21B705(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 164791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m962EFB2F614BF82E3DFE0A548F875ED7EC21B705_gshared (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* G_B3_0 = NULL;
	TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* G_B3_1 = NULL;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* G_B2_0 = NULL;
	TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* G_B2_1 = NULL;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* G_B9_0 = NULL;
	TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* G_B9_1 = NULL;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* G_B8_0 = NULL;
	TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* G_B8_1 = NULL;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* G_B13_0 = NULL;
	TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* G_B13_1 = NULL;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* G_B12_0 = NULL;
	TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_4 = ((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_6 = (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m39E4205D276C3545517E8CBC0AAA109AED598253(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_7 = L_6;
		((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_14 = ((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_16 = (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m39E4205D276C3545517E8CBC0AAA109AED598253(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_17 = L_16;
		((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_22 = ((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_24 = (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m39E4205D276C3545517E8CBC0AAA109AED598253(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_25 = L_24;
		((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 164792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 TypeConstructor_1_CreateValueTypeInstance_mC4D442A1249625E7CD325E3D118DF59F8D41912D_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356));
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 164793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 TypeConstructor_1_CreateScriptableObjectInstance_m0C83D4D9AF62FE5A4E5E119F5EEA3B38F2220F77_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 164794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 TypeConstructor_1_CreateClassInstance_mEA489A50989614F774CF74328E70373D0443A9F1_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_0;
		L_0 = Activator_CreateInstance_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mE1EF4F1754910E076C909536D2A4427F01104233(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 164795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_mF2D43061EC4CECD47802C7FE1C631689DB706D6D_gshared (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* __this, Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 164796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_mD99B1761C5CBE991095DB35641A4DAFE6310B26D_gshared (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_2;
		L_2 = Func_1_Invoke_mF38ACE8EE747FDAB603827786CAA57779D125644_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_14;
		L_14 = InterfaceFuncInvoker0< StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_17;
		L_17 = Func_1_Invoke_mF38ACE8EE747FDAB603827786CAA57779D125644_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 164797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_mFD856ADDCE5758DD220042F53F47E017861E2351_gshared (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_0;
		L_0 = InterfaceFuncInvoker0< StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 164789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_m6CE4441C4CF5135F1B49DD9ED58CA652AD36367B_gshared (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 164790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mDA317D6B6D3FC6DE24B272CF7FB5919581D99F06_gshared (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m3B7D84997A9B8DF8F81AA85C2C9FA88D48A5399A(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m44F12955763EFCCB75A37E92EC25D46B88D288B8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 164791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m44F12955763EFCCB75A37E92EC25D46B88D288B8_gshared (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* G_B3_0 = NULL;
	TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* G_B3_1 = NULL;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* G_B2_0 = NULL;
	TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* G_B2_1 = NULL;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* G_B9_0 = NULL;
	TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* G_B9_1 = NULL;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* G_B8_0 = NULL;
	TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* G_B8_1 = NULL;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* G_B13_0 = NULL;
	TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* G_B13_1 = NULL;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* G_B12_0 = NULL;
	TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_4 = ((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_6 = (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m06C3E157C1C7C2FAB7AC8777BB674C9D951702CB(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_7 = L_6;
		((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_14 = ((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_16 = (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m06C3E157C1C7C2FAB7AC8777BB674C9D951702CB(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_17 = L_16;
		((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_22 = ((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_24 = (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m06C3E157C1C7C2FAB7AC8777BB674C9D951702CB(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_25 = L_24;
		((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 164792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C TypeConstructor_1_CreateValueTypeInstance_m96835016581CF939379948AA67F6BFD411CBC76D_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C));
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 164793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C TypeConstructor_1_CreateScriptableObjectInstance_m62CDE7EDB3D646F6F0606138E6184EE13A8C5DF7_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 164794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C TypeConstructor_1_CreateClassInstance_m21E479FCB4EE01FFC540B8EBDD45B52CF4C8E43F_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_0;
		L_0 = Activator_CreateInstance_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m873909B6AA229BD59E90731F4D6FBF4CC87F5602(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 164795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_m3B5A5A324DD884C686B8529987903E0A7C331578_gshared (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* __this, Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 164796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m291CDBAEBBCD10CE68F1EB86CE9ED860C36E4E9A_gshared (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_2;
		L_2 = Func_1_Invoke_m14C121BADC1DA0C563A54E906949398ADE4E510D_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_14;
		L_14 = InterfaceFuncInvoker0< StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_17;
		L_17 = Func_1_Invoke_m14C121BADC1DA0C563A54E906949398ADE4E510D_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 164797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m96352EFE1502C36E2D1B2C8193189EDF43D5E24C_gshared (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_0;
		L_0 = InterfaceFuncInvoker0< StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 164789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_m9CCF3612F9DEFD27DA181E21233AE2A7EDF9BE2C_gshared (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 164790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m2CFABD1CDC2D6707B10C869155F074E17D2C46F6_gshared (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m90943EC8A95BEF0B7653A90C89F26FC8ADD09FB8(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m0187BB447B4788E880EAB9921A60ECB42609286C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 164791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m0187BB447B4788E880EAB9921A60ECB42609286C_gshared (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* G_B3_0 = NULL;
	TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* G_B3_1 = NULL;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* G_B2_0 = NULL;
	TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* G_B2_1 = NULL;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* G_B9_0 = NULL;
	TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* G_B9_1 = NULL;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* G_B8_0 = NULL;
	TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* G_B8_1 = NULL;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* G_B13_0 = NULL;
	TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* G_B13_1 = NULL;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* G_B12_0 = NULL;
	TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_4 = ((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_6 = (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mA4955FA382BBC4CBD82690DCA4DBB23EFFB5B379(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_7 = L_6;
		((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_14 = ((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_16 = (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mA4955FA382BBC4CBD82690DCA4DBB23EFFB5B379(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_17 = L_16;
		((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_22 = ((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_24 = (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mA4955FA382BBC4CBD82690DCA4DBB23EFFB5B379(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_25 = L_24;
		((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 164792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 TypeConstructor_1_CreateValueTypeInstance_mFA0E76FB4F9E05BE9478E01764C224F52B64A6F9_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4));
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 164793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 TypeConstructor_1_CreateScriptableObjectInstance_m49FE4D8AFB7F31506A2480105254775E21DEE9CB_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 164794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 TypeConstructor_1_CreateClassInstance_mE2A34DE767837644E0AD09754855B78FF4EEF5D4_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_0;
		L_0 = Activator_CreateInstance_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mEE0F7CDAD8C0B99BA86771065E4EE2D71690474C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 164795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_m13AD75A9B9E14C307ACD3664A724A39650B49AFA_gshared (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* __this, Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 164796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_mDC041B94D09AB16884E4B00D33812FD356155D59_gshared (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_2;
		L_2 = Func_1_Invoke_m3C0C15EA65260B3A2D23C645DE9908F470E1D6EB_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_14;
		L_14 = InterfaceFuncInvoker0< StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_17;
		L_17 = Func_1_Invoke_m3C0C15EA65260B3A2D23C645DE9908F470E1D6EB_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 164797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m9F842BBAC1D4ED25459ABE93317AB7521F6E5FF9_gshared (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_0;
		L_0 = InterfaceFuncInvoker0< StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 164789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_mD80B3B05AA9E42D486A61FC92C7C96E9A79B399E_gshared (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 164790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m6B12459720359B1E2565090434E9C652B4A70CE3_gshared (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m82B5917AD86A0775E7DD8F172FEAE0453CF832CE(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m51B797D10A3B0912B091FA941851F9CA25028CD7(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 164791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m51B797D10A3B0912B091FA941851F9CA25028CD7_gshared (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* G_B3_0 = NULL;
	TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* G_B3_1 = NULL;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* G_B2_0 = NULL;
	TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* G_B2_1 = NULL;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* G_B9_0 = NULL;
	TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* G_B9_1 = NULL;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* G_B8_0 = NULL;
	TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* G_B8_1 = NULL;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* G_B13_0 = NULL;
	TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* G_B13_1 = NULL;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* G_B12_0 = NULL;
	TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_4 = ((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_6 = (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mCA44589EC746F7662FC5375FE18EC12DC9E057C5(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_7 = L_6;
		((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_14 = ((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_16 = (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mCA44589EC746F7662FC5375FE18EC12DC9E057C5(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_17 = L_16;
		((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_22 = ((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_24 = (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mCA44589EC746F7662FC5375FE18EC12DC9E057C5(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_25 = L_24;
		((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 164792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC TypeConstructor_1_CreateValueTypeInstance_m59A61EA5D475D36B5DAF8659EF0F19580BC2F6FB_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC));
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 164793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC TypeConstructor_1_CreateScriptableObjectInstance_mFBEF8ACDCEC715E8608F6484D17F815B04058748_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 164794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC TypeConstructor_1_CreateClassInstance_m9191BF22A904C28738D72774BF0E5FCC770F4B95_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_0;
		L_0 = Activator_CreateInstance_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m112E07EE82B221E3263040A368D5DD9FA4581E7A(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 164795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_mB81CD7448C77A77B9B35C821B24ED5C50E3AE501_gshared (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* __this, Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 164796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_mC6A9A3931B170573BE4852111FC22F35786182A4_gshared (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_2;
		L_2 = Func_1_Invoke_m72E1B2AB7AB84681AB456966658AB4AA2262172E_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_14;
		L_14 = InterfaceFuncInvoker0< Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_17;
		L_17 = Func_1_Invoke_m72E1B2AB7AB84681AB456966658AB4AA2262172E_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 164797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_mED0F0F7E24A48EC63C65C0D6B308B23EE62811FE_gshared (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_0;
		L_0 = InterfaceFuncInvoker0< Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 164789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_m32BD5F33A74B3AC2D6160D69871FA4988E6344C0_gshared (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 164790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m3DFB5D9D0C5486439488EC6E30821C47EDDECA62_gshared (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m12EA9186899E84F2F4C3FC7EE5E9BA1EF4A87CE9(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m2D39DE69B79401A5162CC3AE92B414DA350B427E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 164791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m2D39DE69B79401A5162CC3AE92B414DA350B427E_gshared (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* G_B3_0 = NULL;
	TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* G_B3_1 = NULL;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* G_B2_0 = NULL;
	TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* G_B2_1 = NULL;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* G_B9_0 = NULL;
	TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* G_B9_1 = NULL;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* G_B8_0 = NULL;
	TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* G_B8_1 = NULL;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* G_B13_0 = NULL;
	TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* G_B13_1 = NULL;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* G_B12_0 = NULL;
	TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_4 = ((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_6 = (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mBF9DBF4E06C4D61E55687EABBAC4550B432E6D9A(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_7 = L_6;
		((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_14 = ((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_16 = (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mBF9DBF4E06C4D61E55687EABBAC4550B432E6D9A(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_17 = L_16;
		((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_22 = ((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_24 = (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mBF9DBF4E06C4D61E55687EABBAC4550B432E6D9A(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_25 = L_24;
		((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 164792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 TypeConstructor_1_CreateValueTypeInstance_mE29C4601065AC82AB360DFC9D744A28B708A3248_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8));
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 164793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 TypeConstructor_1_CreateScriptableObjectInstance_m80B58BDDD4577BBE8ADA9D46C7587D7B523639BF_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 164794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 TypeConstructor_1_CreateClassInstance_m36C47B5A0F4570ABC84F5ABDDC016DE1FF9AC18A_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_0;
		L_0 = Activator_CreateInstance_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m68F946E397E45AC0C461ABC3CB223C420569B8C5(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 164795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_m90D1E3E5820A9967AE514D376AE7CFBD20B77067_gshared (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* __this, Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 164796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m36A4A6AC2B5587810A7654E6E5F2D9DEB425740A_gshared (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_2;
		L_2 = Func_1_Invoke_m431E4DC7CE52538C527FFFA27B672C9172B9FA5D_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_14;
		L_14 = InterfaceFuncInvoker0< Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_17;
		L_17 = Func_1_Invoke_m431E4DC7CE52538C527FFFA27B672C9172B9FA5D_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 164797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_mB9E8498773F2128661519B1F3A5325C4F2C88731_gshared (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_0;
		L_0 = InterfaceFuncInvoker0< Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 164789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_mF2E8274659CA3C0041207B0780D012D0709A6217_gshared (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 164790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m0B140479278307C1B8AD5E67A6C7DAC0ABA8F998_gshared (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m49C3C2D5C8CE19D771AC6E44664479AB1A300582(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_mC649308AA476E656E8EDFEB064E80C613E329208(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 164791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mC649308AA476E656E8EDFEB064E80C613E329208_gshared (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* G_B3_0 = NULL;
	TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* G_B3_1 = NULL;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* G_B2_0 = NULL;
	TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* G_B2_1 = NULL;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* G_B9_0 = NULL;
	TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* G_B9_1 = NULL;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* G_B8_0 = NULL;
	TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* G_B8_1 = NULL;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* G_B13_0 = NULL;
	TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* G_B13_1 = NULL;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* G_B12_0 = NULL;
	TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_4 = ((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_6 = (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m7DAE2F89A23101179BB5B56E3773CE03C3287F94(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_7 = L_6;
		((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_14 = ((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_16 = (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m7DAE2F89A23101179BB5B56E3773CE03C3287F94(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_17 = L_16;
		((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_22 = ((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_24 = (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m7DAE2F89A23101179BB5B56E3773CE03C3287F94(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_25 = L_24;
		((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 164792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 TypeConstructor_1_CreateValueTypeInstance_mA5544D30EA2F948EF12F6964F2CEAD744391EEC9_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56));
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 164793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 TypeConstructor_1_CreateScriptableObjectInstance_m76688B481B1FB203ABEB5C34B49871AF8928BEFF_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 164794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 TypeConstructor_1_CreateClassInstance_mA10D596BEB316451B89B92402BD44CFB877D5CD3_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_0;
		L_0 = Activator_CreateInstance_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mE7341C88FD622F8CC6463B0990DECFDEC77CE513(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 164795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_m708D325BBE69C63B55AA7C756FFE77025B7CAAE0_gshared (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* __this, Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 164796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m8AF722A332B44AE38E4101C1680D9256D6A5D50B_gshared (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_2;
		L_2 = Func_1_Invoke_m22D302915F20EEF62D9C1666172BBE063F7D795A_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_14;
		L_14 = InterfaceFuncInvoker0< BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_17;
		L_17 = Func_1_Invoke_m22D302915F20EEF62D9C1666172BBE063F7D795A_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 164797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_mC73E6C24ED3939B74CC11C8957A49897DFD03992_gshared (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_0;
		L_0 = InterfaceFuncInvoker0< BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 164789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_mD87E1EBECED90FCA4D8C3F367ABB519222F1A6F6_gshared (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 164790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mC6B7B302C518C9F408DD9A14B416B900A4A14B49_gshared (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m889D9CDB4925D6CEA1E008BD11C74F4C4B526CD7(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_mF8ACDEC4A418A3DC5EB0F27E4682223125B50B29(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 164791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mF8ACDEC4A418A3DC5EB0F27E4682223125B50B29_gshared (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* G_B3_0 = NULL;
	TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* G_B3_1 = NULL;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* G_B2_0 = NULL;
	TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* G_B2_1 = NULL;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* G_B9_0 = NULL;
	TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* G_B9_1 = NULL;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* G_B8_0 = NULL;
	TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* G_B8_1 = NULL;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* G_B13_0 = NULL;
	TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* G_B13_1 = NULL;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* G_B12_0 = NULL;
	TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_4 = ((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_6 = (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m2749E8A77FD25617A4ECDB5CEEEDE39F9D1EE456(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_7 = L_6;
		((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_14 = ((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_16 = (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m2749E8A77FD25617A4ECDB5CEEEDE39F9D1EE456(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_17 = L_16;
		((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_22 = ((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_24 = (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m2749E8A77FD25617A4ECDB5CEEEDE39F9D1EE456(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_25 = L_24;
		((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 164792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F TypeConstructor_1_CreateValueTypeInstance_m557622F3E0E50739B935E3A78A833E4B208D89B7_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F));
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 164793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F TypeConstructor_1_CreateScriptableObjectInstance_mA645D3EC5FB5D761014E7C65A075436FFBF0D6C0_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 164794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F TypeConstructor_1_CreateClassInstance_m458F2BAF99E22C22C0C4A5B7A3351ED393A0C63E_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_0;
		L_0 = Activator_CreateInstance_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m93B83A4B46F4D2E164D1604B782F208D26E12267(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 164795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_mBAD4A752BDCD87C401CFE744A65B3FAF806C19BE_gshared (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* __this, Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 164796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m7542D35EBD9882BD549A2F97FA26B89F8CA9DE11_gshared (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_2;
		L_2 = Func_1_Invoke_m46E31998378DE2BA4DF293634298EF5AA1E6520B_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_14;
		L_14 = InterfaceFuncInvoker0< BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_17;
		L_17 = Func_1_Invoke_m46E31998378DE2BA4DF293634298EF5AA1E6520B_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 164797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m92D34953F6FE5C0902BEDA87560F206951E6C441_gshared (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_0;
		L_0 = InterfaceFuncInvoker0< BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 164789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_mA07459CA43B86912ED0CA5BBDD4E37D1FFFCCFFB_gshared (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 164790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m46548CB3BA3F31069F109A752ADE6F8D302E51F7_gshared (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mA41D4EADD69077FA3D6860DDBF38E73AC193A3C8(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_mA88560F0713BBFA2C37745AF9D6C52629ED1DF7E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 164791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mA88560F0713BBFA2C37745AF9D6C52629ED1DF7E_gshared (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* G_B3_0 = NULL;
	TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* G_B3_1 = NULL;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* G_B2_0 = NULL;
	TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* G_B2_1 = NULL;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* G_B9_0 = NULL;
	TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* G_B9_1 = NULL;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* G_B8_0 = NULL;
	TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* G_B8_1 = NULL;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* G_B13_0 = NULL;
	TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* G_B13_1 = NULL;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* G_B12_0 = NULL;
	TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_4 = ((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_6 = (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m5DE18B6F84B0E4095B7DACFC9C7006775018056A(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_7 = L_6;
		((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_14 = ((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_16 = (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m5DE18B6F84B0E4095B7DACFC9C7006775018056A(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_17 = L_16;
		((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_22 = ((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_24 = (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m5DE18B6F84B0E4095B7DACFC9C7006775018056A(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_25 = L_24;
		((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 164792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 TypeConstructor_1_CreateValueTypeInstance_mDA2C9B4A3E83D2556ADD98EC0EA7EE8D5AAE1AE7_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7));
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 164793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 TypeConstructor_1_CreateScriptableObjectInstance_m7E5AC78F732005C17D67E7209680D1AF00E4AF57_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 164794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 TypeConstructor_1_CreateClassInstance_mFDCF8787FDD831843EE2120FB59072B1B6640DA3_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_0;
		L_0 = Activator_CreateInstance_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m03ECCA81585078D9FEB71559619D15E1512A86A5(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 164795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_mF5F5DAC5ED87056B75AA0BDA32A15A7BD421AF29_gshared (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* __this, Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 164796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m874EF05F5759D3C9498C79715B2192CB4B684733_gshared (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_2;
		L_2 = Func_1_Invoke_m387E8C6D589CA66F72630F311D4CA283A6771829_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_14;
		L_14 = InterfaceFuncInvoker0< BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_17;
		L_17 = Func_1_Invoke_m387E8C6D589CA66F72630F311D4CA283A6771829_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 164797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m38BBF2A889895804BDBB40BF9EF895630DB5127A_gshared (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_0;
		L_0 = InterfaceFuncInvoker0< BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 164789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_m88F3CC7577D94F8B78457A61E5A11D684F1EEF51_gshared (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 164790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mA44AE4CA2839F2717B9950321247E9AA135D7B5C_gshared (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mE320B134EF716E35A5CA75A177D0ABB88DA281C0(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m2092EB1058CE691B86BD2DA94035F4A18D28CE99(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 164791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m2092EB1058CE691B86BD2DA94035F4A18D28CE99_gshared (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* G_B3_0 = NULL;
	TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* G_B3_1 = NULL;
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* G_B2_0 = NULL;
	TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* G_B2_1 = NULL;
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* G_B9_0 = NULL;
	TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* G_B9_1 = NULL;
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* G_B8_0 = NULL;
	TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* G_B8_1 = NULL;
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* G_B13_0 = NULL;
	TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* G_B13_1 = NULL;
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* G_B12_0 = NULL;
	TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_4 = ((U3CU3EO_tDAC805319825F8349602AD57EDACE499355FC181_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_6 = (Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m40600DEE70082D8157F0AAB3AC1E531E4A48DA6E(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_7 = L_6;
		((U3CU3EO_tDAC805319825F8349602AD57EDACE499355FC181_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tDAC805319825F8349602AD57EDACE499355FC181_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_14 = ((U3CU3EO_tDAC805319825F8349602AD57EDACE499355FC181_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_16 = (Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m40600DEE70082D8157F0AAB3AC1E531E4A48DA6E(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_17 = L_16;
		((U3CU3EO_tDAC805319825F8349602AD57EDACE499355FC181_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tDAC805319825F8349602AD57EDACE499355FC181_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_22 = ((U3CU3EO_tDAC805319825F8349602AD57EDACE499355FC181_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_24 = (Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m40600DEE70082D8157F0AAB3AC1E531E4A48DA6E(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_25 = L_24;
		((U3CU3EO_tDAC805319825F8349602AD57EDACE499355FC181_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tDAC805319825F8349602AD57EDACE499355FC181_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 164792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TypeConstructor_1_CreateValueTypeInstance_mF62F1F46DAD81CCB1E29A9FF11C798AB9D527A78_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 164793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TypeConstructor_1_CreateScriptableObjectInstance_mBB27C2AC13DC233D5634721BC040D3EA10DD9E24_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 164794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TypeConstructor_1_CreateClassInstance_mBEC1E385E4202E5C1C800E8632394E57E14A0AC9_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0;
		L_0 = Activator_CreateInstance_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mA5589FEB1272F05337DDA4D3300BE9B8D9700A35(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 164795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_m03ECFBFAC57B048916EEC97FB1537F4BD5F8ED20_gshared (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* __this, Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 164796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m2342DB818951E060F07894FEF59650D2E14ED3D8_gshared (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_2;
		L_2 = Func_1_Invoke_m0550CD624A6760EE6C25CDCB1F5E159B527857F5_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_14;
		L_14 = InterfaceFuncInvoker0< Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_17;
		L_17 = Func_1_Invoke_m0550CD624A6760EE6C25CDCB1F5E159B527857F5_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 164797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m8756076F45D8136F254CA7C16842D789DDEC3494_gshared (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0;
		L_0 = InterfaceFuncInvoker0< Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 164789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_m74631CD88728BB7B5011E7F7F879F6191EC001DD_gshared (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 164790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mBDEC850104319B918A6CBE0A5FC8CF72FE449073_gshared (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8085A1891CE7A1165DDEC25CAE6AAFE21B594DAF(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m22E8E1250F27BF4E34A150C25414F7026014918C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 164791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m22E8E1250F27BF4E34A150C25414F7026014918C_gshared (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* G_B3_0 = NULL;
	TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* G_B3_1 = NULL;
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* G_B2_0 = NULL;
	TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* G_B2_1 = NULL;
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* G_B9_0 = NULL;
	TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* G_B9_1 = NULL;
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* G_B8_0 = NULL;
	TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* G_B8_1 = NULL;
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* G_B13_0 = NULL;
	TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* G_B13_1 = NULL;
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* G_B12_0 = NULL;
	TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_4 = ((U3CU3EO_t22C4A52306A9B63C8E26F72B6932849196CFA637_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_6 = (Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mBED93A7595F38D64DCA95CA0388AD8A054FDBF7A(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_7 = L_6;
		((U3CU3EO_t22C4A52306A9B63C8E26F72B6932849196CFA637_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t22C4A52306A9B63C8E26F72B6932849196CFA637_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_14 = ((U3CU3EO_t22C4A52306A9B63C8E26F72B6932849196CFA637_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_16 = (Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mBED93A7595F38D64DCA95CA0388AD8A054FDBF7A(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_17 = L_16;
		((U3CU3EO_t22C4A52306A9B63C8E26F72B6932849196CFA637_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t22C4A52306A9B63C8E26F72B6932849196CFA637_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_22 = ((U3CU3EO_t22C4A52306A9B63C8E26F72B6932849196CFA637_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_24 = (Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mBED93A7595F38D64DCA95CA0388AD8A054FDBF7A(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_25 = L_24;
		((U3CU3EO_t22C4A52306A9B63C8E26F72B6932849196CFA637_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t22C4A52306A9B63C8E26F72B6932849196CFA637_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 164792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 TypeConstructor_1_CreateValueTypeInstance_m685E8312D09CEF6C9569D1789012CD8AE615792C_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485));
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 164793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 TypeConstructor_1_CreateScriptableObjectInstance_mBA311D96C5963D1DF9C03F276AFC74168424E604_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 164794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 TypeConstructor_1_CreateClassInstance_m76778AA2C88EAF4CE152180FAA17B40929A2BD15_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_0;
		L_0 = Activator_CreateInstance_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m352B21AA96F81D3AAFEC94237A3D01038A0C61D8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 164795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_mAA8C1695D086D68AD750B6D5EB487A6E4F94AE00_gshared (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* __this, Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 164796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m11B1C6F47D9C9AA87745D2587A3326D747D82BEA_gshared (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_2;
		L_2 = Func_1_Invoke_m16CD92EAF9608CEFEDBB2F540D76F5BAEFBC1FB9_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_14;
		L_14 = InterfaceFuncInvoker0< BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_17;
		L_17 = Func_1_Invoke_m16CD92EAF9608CEFEDBB2F540D76F5BAEFBC1FB9_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 164797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m65AD2DB5375F3F3A0DC7A7C4896664C902F9FBD3_gshared (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_0;
		L_0 = InterfaceFuncInvoker0< BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 12308
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_0 = NULL;
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_0 = ((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 943
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 949
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_4_Invoke_mFC6BE1FCDEDBE8C30D21E122A6F45E53651CC8FF_gshared_inline (Func_4_t6B552DD029418AAC69B05335C9089B9B37E0C343* __this, bool ___0_arg1, bool ___1_arg2, bool ___2_arg3, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef float (*FunctionPointerType) (RuntimeObject*, bool, bool, bool, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 949
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_4_Invoke_m5866D67F8D718A89A2DC2DA89B852DA3F9F12C32_gshared_inline (Func_4_t6A859C6EE14C8D76A55D1500E9B04BC21C5194D3* __this, bool ___0_arg1, bool ___1_arg2, float ___2_arg3, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, bool, bool, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 927
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 945
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_gshared_inline (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* __this, float ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 943
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_1_Invoke_mA967B67675F9F5475EF2DA67722E3876436BF72E_gshared_inline (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 949
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_4_Invoke_m3697296E54AA5F2F950FC50A25892236C0456D78_gshared_inline (Func_4_t14DFDA9E85C76FDE067B3F2999C8107AFA671A64* __this, int32_t ___0_arg1, int32_t ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef float (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 949
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_4_Invoke_mA248C7D454B998CBF66485D9630A73A2FEBB1FE2_gshared_inline (Func_4_t6DC62F76192ECD13986365A34FAD950A35AF225F* __this, int32_t ___0_arg1, int32_t ___1_arg2, float ___2_arg3, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 927
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 945
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5F59DB7D65A544574E0D53BFB58E1475EC5D704F_gshared_inline (Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* __this, float ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 943
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef float (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 949
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_4_Invoke_m937DB0BDE1B712223FA52DF3DB87B0CD19DEC276_gshared_inline (Func_4_t28BFDA9BC4AB12540F2BE70B4FC23CD6FF5EB6F4* __this, float ___0_arg1, float ___1_arg2, float ___2_arg3, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef float (*FunctionPointerType) (RuntimeObject*, float, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 927
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 945
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_gshared_inline (Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* __this, float ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef float (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 3519
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
// Method Definition Index: 943
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 Func_1_Invoke_mD023E4BE9F2AC4DDAB5BC6865F64444F25EBA15C_gshared_inline (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 943
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F Func_1_Invoke_mEFCC6E276B7F9541F583BF1DD7C2D4B88A5C9CED_gshared_inline (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 943
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 Func_1_Invoke_mF38ACE8EE747FDAB603827786CAA57779D125644_gshared_inline (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 943
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C Func_1_Invoke_m14C121BADC1DA0C563A54E906949398ADE4E510D_gshared_inline (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 943
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 Func_1_Invoke_m3C0C15EA65260B3A2D23C645DE9908F470E1D6EB_gshared_inline (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 943
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC Func_1_Invoke_m72E1B2AB7AB84681AB456966658AB4AA2262172E_gshared_inline (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 943
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 Func_1_Invoke_m431E4DC7CE52538C527FFFA27B672C9172B9FA5D_gshared_inline (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 943
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 Func_1_Invoke_m22D302915F20EEF62D9C1666172BBE063F7D795A_gshared_inline (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 943
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F Func_1_Invoke_m46E31998378DE2BA4DF293634298EF5AA1E6520B_gshared_inline (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 943
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 Func_1_Invoke_m387E8C6D589CA66F72630F311D4CA283A6771829_gshared_inline (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 943
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Func_1_Invoke_m0550CD624A6760EE6C25CDCB1F5E159B527857F5_gshared_inline (Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 943
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 Func_1_Invoke_m16CD92EAF9608CEFEDBB2F540D76F5BAEFBC1FB9_gshared_inline (Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
