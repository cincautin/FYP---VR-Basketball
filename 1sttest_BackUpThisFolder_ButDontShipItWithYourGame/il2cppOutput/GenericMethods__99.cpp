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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*,T1,T2,T3,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,p3,invokeData.method);
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

struct Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195;
struct Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629;
struct Dictionary_2_t29FB78C9E5DF443E2A5880E4E9B7C86E516670E0;
struct IEnumerable_1_t6F5A08FC0BF8C41DA72716A0CB35584DC32D7F93;
struct IEnumerable_1_t7F5142FC65DC3AD9C5645A3A0E4380E7E75E1AC4;
struct IEnumerable_1_tAF5C5631BEA6192743A2583A64C117312EBB9D01;
struct IEnumerable_1_t7A279889898F9346462C50E40CD274F4BED7D141;
struct IEnumerable_1_tBC1041F6708F98C39C3E3B4FFE79654629DA8CC4;
struct IEnumerable_1_tF5BAE34F311180FDB8BBE1B8FA55C1F38E5A1EF1;
struct IEnumerable_1_t656FE846963D4B6CC038D80144F2FE53A522AA8A;
struct IEnumerable_1_tD317BB472ED43945C16BD7A3631FA41417E37877;
struct IEnumerable_1_t1DA01AAAAA9D47222D147A0BAA4830D25F8DA3B8;
struct IEnumerable_1_t08C9DB3319E4FC383532155258AF347B10F55F2A;
struct IEnumerable_1_t32D88A6D34A92B8AF5729663C314948B82A9C746;
struct IEnumerable_1_t2407F16784ECBCB7BCD2504A1B49EF6BAD4EB738;
struct IEnumerable_1_t8F6DFB2957A7F67600F4F938B333626EA7FE3A08;
struct IEnumerable_1_t92C0958B8E0B1DC2D1236463A315CEFBEB977F72;
struct IEnumerable_1_t8749D6CC122D96185736E0D8F25B4693C2A6FA48;
struct IEnumerable_1_t08FE669BFD07D21826D8830F9045BF3DD2D88A37;
struct IEnumerable_1_tB19CBB0200FE24A83365DD0A05899B614BF329AF;
struct IEnumerable_1_tE819528B00355C7F3B5C080993E4BAD552D965A0;
struct IEnumerator_1_tFF15C4A3CB34ED2498E3FE45500F0F5BB909B19E;
struct IEnumerator_1_tE49AFCB6393FA7A5337C53722A992968CC51DBE4;
struct IEnumerator_1_t29B0AC367748B9C185067B8702C14D360A992E08;
struct IEnumerator_1_t849F9C0A0BA14B8BD43D1EDAC2D9DCFD5DFE4EB3;
struct IEnumerator_1_t98A4E329FAAED41C3D360B9416EDDD8A6E43787D;
struct IEnumerator_1_t492FA5EFE32CBB0A859720ED8DF38BC773FFA810;
struct IEnumerator_1_t0F906B43A2BE8096463B58CA8390259CBDB3F6BA;
struct IEnumerator_1_tEE113AD17F4A40A72FED8455EB0BE1208ECF5E91;
struct IEnumerator_1_t89136C6E35B24264290619BBBBBAEEC56E192EB6;
struct IEnumerator_1_t689F24B92790A142309171C95DCAC5BF92F8DCFB;
struct IEnumerator_1_tAA3F3B4C81ACBFFD64DC4C46ABE766B031ABDFF5;
struct IEnumerator_1_t322904638649A2F4C9236E13C7BBAFEC6A7CE469;
struct IEnumerator_1_tD2525C7F5B0A4F4CA71629EA509CA973C7749784;
struct IEnumerator_1_t2CF51D8878CB6E59818DA4752992744D2FB9B4DA;
struct IEnumerator_1_t83DAC6022A58AD3093965A4A4A765B0372D5D166;
struct IEnumerator_1_t5030EA478C098B6A6ADF2960E9843B88E75053B1;
struct IEnumerator_1_tC899BE6C879670A4646BAF3CECBFE83493E5F395;
struct IEnumerator_1_t39674DAC5FA89EDD6FD7B802B4B20204E3074212;
struct IIndexedCollectionPropertyBagEnumerator_1_t6698B24AEBA9214B2DBB039BE8A7EA46E9BE08D2;
struct IIndexedCollectionPropertyBagEnumerator_1_t742109DEEC8358919DBC0D30D11FF19068DE72C2;
struct IIndexedCollectionPropertyBagEnumerator_1_t4BB1651EFFB7C42AF26EE5C73A932708DCF0217A;
struct IIndexedCollectionPropertyBagEnumerator_1_t102ADA9AB9FC7EA8156686E1CF59FEA28A87ED5F;
struct IIndexedCollectionPropertyBagEnumerator_1_t4B291257C3682D2A9F97DB0B1EB11B8E9CCCE8C6;
struct IIndexedCollectionPropertyBagEnumerator_1_tA0A96BAD0359A2F490E0AC2751C8652021892855;
struct IIndexedCollectionPropertyBagEnumerator_1_tEA891559AAADCB6DD424A02C66949B673B12F1B2;
struct IIndexedCollectionPropertyBagEnumerator_1_tA9BA29298F9D294372C22CB4C34EC7DF2B852F62;
struct IIndexedCollectionPropertyBagEnumerator_1_t9EA5494157AB8C82DC1EB8DBFB5D9ED370E6DCD1;
struct IIndexedCollectionPropertyBagEnumerator_1_tD9C62BE322A89A5687BCFE704D06578FA85AC748;
struct IIndexedCollectionPropertyBagEnumerator_1_t8F60E0B40523A06A073B4410AC0AF1466A4B9EF2;
struct IIndexedCollectionPropertyBagEnumerator_1_tCE8B549631FEA7E42B65C4A7897E3178B02526E6;
struct IIndexedCollectionPropertyBagEnumerator_1_t613D66F492631564A75646BAFFDD6BA5DB580343;
struct IIndexedCollectionPropertyBagEnumerator_1_tBE367AF76BD5F295ED9E881761D4066AAF2A918C;
struct IIndexedCollectionPropertyBagEnumerator_1_t565805E05520AF729653D4039FC1290A8D061C82;
struct IIndexedCollectionPropertyBagEnumerator_1_t1E1F0EC2098400B9121838CD4CD38EC00165AB2B;
struct IIndexedCollectionPropertyBagEnumerator_1_tFCB03C2800CF440F23EA78E515D5CA11712F7DE4;
struct IIndexedCollectionPropertyBagEnumerator_1_t2131617A7ED445B6195638CD8EEE6E51F8DEBEAF;
struct IIndexedProperties_1_t7CE945BFF2815E6F6108D665655CF8D19795CF01;
struct IIndexedProperties_1_t460CFDCB1070EE881F2984DEF724B97EA2254BE1;
struct IIndexedProperties_1_t2E15B241626E1F06ACCF9982F40CC932BB389D5B;
struct IIndexedProperties_1_t452C023303070FB0D58075B1B4CF4F79283DFCED;
struct IIndexedProperties_1_t16E7285CE8312C18902FA6791AE9D43AF334D41A;
struct IIndexedProperties_1_t912538E715322197D269DC6F8DC358A99E17740B;
struct IIndexedProperties_1_t4FE2DF1E528B5C420E2721E6817D95176EEC389D;
struct IIndexedProperties_1_t176AC67EFF45925CD2AE0E36898CFBD27EFC8616;
struct IIndexedProperties_1_t70053CA73D8885F14715D3AEB587416B801F4034;
struct IIndexedProperties_1_t83EF54E7B435CEBF148FE787D1713A2126FFCAD7;
struct IIndexedProperties_1_tF3DA684D1266DEF065B4AF11168813F5C197789A;
struct IIndexedProperties_1_t8E8A15719E6AA8EA4F05DF704DCAAEF53274BA9E;
struct IIndexedProperties_1_t34EA255F2225207F925F7BE02CA6D6504E3B0F06;
struct IIndexedProperties_1_tDBA610095BCF991787DA6A6F8F3B38C38ABE1CAF;
struct IIndexedProperties_1_t3CE3B60BE113A662349FA7ED9F98DBA3852A02E0;
struct IIndexedProperties_1_tE1806C2074CFCFA623964FA460F3E40AB40908F2;
struct IIndexedProperties_1_tF9FDB762345B8EB0308D61F4EAD9740263268495;
struct IIndexedProperties_1_t74B71999E27801D0F7E7BF8AB880FAE3394F114E;
struct INamedProperties_1_tB93133F4FE3CD580F759B88DF90FD9C1490AF9C3;
struct INamedProperties_1_tB2E1B7081DBA33CED11CCC209C26E97894844352;
struct INamedProperties_1_t6364E9A7637EF7B50ED1062E67F0695F00A14288;
struct INamedProperties_1_t7026F157B00CD3728975CB8D32126DC1431EFD36;
struct INamedProperties_1_t58DB6621AD53FD7387E7420A16EB159F7D04600C;
struct INamedProperties_1_tE552B984086951046EED71FA4A800FC83F549DC0;
struct INamedProperties_1_t43ACDF45E9B9BA244D85F8A72B22BDAF34729FCC;
struct INamedProperties_1_t676FBE52A17D87ED9143E37A21EDF049AE138D8F;
struct INamedProperties_1_tEA8542EE26E82ED37E76460BC51F7D99DABA75CD;
struct INamedProperties_1_t6C798D5D239F18748B4C6ACDCCFFF00ABEA2A98F;
struct INamedProperties_1_t2F26FDCEB0DC32D18187B76D203D9D6689339A3E;
struct INamedProperties_1_t2F49E3D1B0282611F2758D8FFD3FBB1D2B5CDDF8;
struct INamedProperties_1_t58D871FBE867E0CC2484AF1E6036FD3C4A258615;
struct INamedProperties_1_t3F542CD1610337170D2D54A3057AA073EAF53E92;
struct INamedProperties_1_t786C28150DCD0B35D9C812410152C521850FA8C7;
struct INamedProperties_1_t5D218C083C98BBDEDC15D55767AF3183B89A8BEE;
struct INamedProperties_1_t6A3C2764356C1988E9A7B4EE5F7C275B9725E73D;
struct INamedProperties_1_tA4F9034069B1A90C97FF0B0CC937D2113018018E;
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
struct IPropertyBag_1_tF96AD753C8C0604F73BEC05D07FB8DB0E652D9D7;
struct IPropertyBag_1_tCC672A5FC4DF9FCAEDB0E95C78D8B03C0BE79D1F;
struct IPropertyBag_1_tFB0D9D329A0DD352CA6F2E401245E71D132AF6B1;
struct IPropertyBag_1_tEF276B210F9DE83EB23F108A9E4140B944A90684;
struct IPropertyBag_1_tD475E86AD532B7E07FF336E6D5F45242390B1331;
struct IPropertyBag_1_tAA5B8A65854B645C4BE0170D2629B00A15218E3E;
struct IProperty_1_t98878FD77D337872A4E5BC68C68B41F682CD3B6C;
struct IProperty_1_t49CEA58F187BC2188B8C7455257619386615F2D9;
struct IProperty_1_t3F614B28D9097A146C2C94A503BB36864477D6AA;
struct IProperty_1_t4BDA5F59B6CF957E8D8E3802E69B767A12C532B0;
struct IProperty_1_tF20CE8FBC7B20A09C2A7E0EB9630919D71339E99;
struct IProperty_1_t5E43D0F89C8C835C74BBF564571DA984A6415335;
struct IProperty_1_tD9FE1AF3703439208728AD16A49693976E1C4BC0;
struct IProperty_1_t0CED323160A5869C2EF0D8E073FBEEDBDA2EFF28;
struct IProperty_1_tB7F6496CEFBE912425446A3DB3235CAE0654CB1D;
struct IProperty_1_t33BD2C97D37F86F94427C4DAD86A13162B485570;
struct IProperty_1_tD244114CE436FD9ED0FFA2D1D455AEDAC05FF05E;
struct IProperty_1_tA0905C4267FB6A7FD0A05C37B6A16B0F607E7169;
struct IProperty_1_t8885BD5CD7EF54503D9E4531265EFE41C32A76A7;
struct IProperty_1_tA91D958F297A9E6CAA1A37517EE12264CE046A34;
struct IProperty_1_t07316563C3064E0D46C1476430CB2E10558FE27D;
struct IProperty_1_tABFD02566F6FE6D20EEF1BF6B952D37E2A34DED9;
struct IProperty_1_tCFEF868BA125BBF458061067FBFEFE885B76B8DD;
struct IProperty_1_t326CF524CC80B6F64C96D78AFB3CB0A694D3B714;
struct List_1_t26E81977A765E91FE90EECF628F03AAD3CF4E408;
struct List_1_tDD494D344F11DD6D6E47FB6794635C7CBD737022;
struct List_1_tF3064CB6487998058BB680B32D26638CBBD66A77;
struct List_1_t42439BC4D933D6DE2219753ECC4A674696A9B788;
struct List_1_t8973E7D95DDAF81785EFAC31612A98CE078EB91B;
struct List_1_tA277DF6E372990202E6992461F8737D089DD59DE;
struct List_1_t0B1CD5EC523AD51049E5BCEF30AF7ADB8A09DE27;
struct List_1_t95955E49E2CAA2956C04ABE04FA8D76DB746DB08;
struct List_1_tB3875941EB9C31B6A1EE0576F969C79D850E686B;
struct List_1_t5BEEEF0A5BECBFAABCCFDB3EF9A6AB5C7D948F13;
struct List_1_tE031E2B1B3599B1B808F7E565E285D0265829963;
struct List_1_tB0305892E26D0C482A75FD711E7CF6277D867EAA;
struct List_1_t514193F05FE01729A5ADF1CBD11F2A3282FEA464;
struct List_1_tEB54794B1D963FD8B2747B2513C8DC5D0EE60633;
struct List_1_t694C128536F59FED79740621FF2F3A5003C57EB3;
struct List_1_tBE0352B1FFC10C8C5E262C616B6556B8DE2FCB4E;
struct List_1_t6E8E59EDC80EB269FA8F88257727E96C4D402641;
struct List_1_tC0D87214221D0C74B6611A02D556860215C9D468;
struct List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B;
struct List_1_t2EC26D0ED018C658813F1744B58498EF88D4A3C7;
struct List_1_tBD2E4781BB0BD1FCD30E6D3586CA13AFD0ABE6F7;
struct List_1_t491347B1404617671B39DA9325642B0DB8748CB3;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268;
struct List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF;
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929;
struct TypeConverter_2_t0525BA89BAB435F8C9F2EEF9023F9BCB7ABE80A1;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral27DBD6F813162A38E3FA9501FBCAA10F18CC6F6D;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72  : public RuntimeObject
{
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9  : public RuntimeObject
{
};
struct TypeExtensions_t65367AC18793C0FA75C262A51A63DC36B4E9D427  : public RuntimeObject
{
};
struct TypeHelpers_tF2D4804F9906DD09986DC5852EE53402EA9B3FA3  : public RuntimeObject
{
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
struct Enumerator_tCA8B5DD49AE1DEB38023A79B313C60733127BA30 
{
	List_1_t26E81977A765E91FE90EECF628F03AAD3CF4E408* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t1DBB6D61AD8DFA5788395BE4D3E7250D145C096E 
{
	List_1_tDD494D344F11DD6D6E47FB6794635C7CBD737022* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t653B42B4FCDACA9BAD2027118676429E31A85130 
{
	List_1_tF3064CB6487998058BB680B32D26638CBBD66A77* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_tAF1FDE16E447EC8ED01BA9DF2507BD4EA9C92EF0 
{
	List_1_t42439BC4D933D6DE2219753ECC4A674696A9B788* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_tDB324AB50420D43D083AE1EF2C3D363C08F59235 
{
	List_1_t8973E7D95DDAF81785EFAC31612A98CE078EB91B* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t36D39630269E3C8F9231AFDA1309C6D25161ED7E 
{
	List_1_tA277DF6E372990202E6992461F8737D089DD59DE* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t0AC6D12A69215AEA1ABA576D8D28247545857C45 
{
	List_1_t0B1CD5EC523AD51049E5BCEF30AF7ADB8A09DE27* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t4D1380B9651306430C353F4B09620F3EA3CA99AF 
{
	List_1_t95955E49E2CAA2956C04ABE04FA8D76DB746DB08* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t3285E2DFD4D92C2ED55CE6962D5CC32B7F27880B 
{
	List_1_tB3875941EB9C31B6A1EE0576F969C79D850E686B* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t6302370FBAD7019AD871E4C063C0202EB499B847 
{
	List_1_t5BEEEF0A5BECBFAABCCFDB3EF9A6AB5C7D948F13* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t6F19937235B9D04AB517A7194D413D24040DED72 
{
	List_1_tE031E2B1B3599B1B808F7E565E285D0265829963* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t0455B22F9493298B73DB12AE4260678F7CF64B13 
{
	List_1_tB0305892E26D0C482A75FD711E7CF6277D867EAA* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t42AB80E368F0AA9A6863183AAF6A0594B7672780 
{
	List_1_t514193F05FE01729A5ADF1CBD11F2A3282FEA464* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_tF0995ACC6AA66E331198202861457B7B006E979A 
{
	List_1_tEB54794B1D963FD8B2747B2513C8DC5D0EE60633* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_tC5B542A29597CEF00CADA46E5BDA51BDB48D7E04 
{
	List_1_t694C128536F59FED79740621FF2F3A5003C57EB3* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t38DE1B2B4DFF7B8AB2B6F63E6FBAB975729D0660 
{
	List_1_tBE0352B1FFC10C8C5E262C616B6556B8DE2FCB4E* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t7D2969898DCF9987F2C26E6A288F49C516FD235F 
{
	List_1_t6E8E59EDC80EB269FA8F88257727E96C4D402641* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t1912C1744D9A13668FD2D52DB984CEC0DBC7395A 
{
	List_1_tC0D87214221D0C74B6611A02D556860215C9D468* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
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
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426 
{
	Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629* ___m_Converters;
	Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195* ___m_LazyConverters;
};
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_marshaled_pinvoke
{
	Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629* ___m_Converters;
	Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195* ___m_LazyConverters;
};
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_marshaled_com
{
	Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629* ___m_Converters;
	Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195* ___m_LazyConverters;
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
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 
{
	int32_t ___Index;
	bool ___IsReadOnly;
};
struct IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79_marshaled_pinvoke
{
	int32_t ___Index;
	int32_t ___IsReadOnly;
};
struct IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79_marshaled_com
{
	int32_t ___Index;
	int32_t ___IsReadOnly;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD 
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material;
	List_1_t491347B1404617671B39DA9325642B0DB8748CB3* ___propertyValues;
};
struct MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_marshaled_pinvoke
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material;
	List_1_t491347B1404617671B39DA9325642B0DB8748CB3* ___propertyValues;
};
struct MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_marshaled_com
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material;
	List_1_t491347B1404617671B39DA9325642B0DB8748CB3* ___propertyValues;
};
struct Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 
{
	float ___m_Value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
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
struct EnumeratorType_t08E21A0508AF06F2539C4AF1C7D622B7A053C802 
{
	int32_t ___value__;
};
struct EnumeratorType_t382E7F4469202A5F7B7E274AE231E5587CECBB8C 
{
	int32_t ___value__;
};
struct EnumeratorType_t09FB877DB954850AC952BACC49264E467250CF79 
{
	int32_t ___value__;
};
struct EnumeratorType_tCE671B4CBF373C630F4A2425448C669758A79CCE 
{
	int32_t ___value__;
};
struct EnumeratorType_t83F753C18B5DEE4C13D561BC7DE174A728D733B2 
{
	int32_t ___value__;
};
struct EnumeratorType_t57383F4EA73A68F64C23844856E9F11282FEEF0D 
{
	int32_t ___value__;
};
struct EnumeratorType_tED928AE156CF8D861CF156134E6D62C92815ABD0 
{
	int32_t ___value__;
};
struct EnumeratorType_t56A1A39572F78A9A2F80B82991202AAF68228011 
{
	int32_t ___value__;
};
struct EnumeratorType_tBC05AD0F0720908C44E000756644A0DEE29F6E6C 
{
	int32_t ___value__;
};
struct EnumeratorType_tE2810F643FAB0D074845DE00AFA7F69758F352F7 
{
	int32_t ___value__;
};
struct EnumeratorType_tF480834535C146DDCC4106EAF8024A3E1DAFF6BC 
{
	int32_t ___value__;
};
struct EnumeratorType_t0ACB27180373C4F7B6CC76F37BBDE8B5B4D5B5C6 
{
	int32_t ___value__;
};
struct EnumeratorType_tD03F6629FD47437BADCA4B77659B2D6234437095 
{
	int32_t ___value__;
};
struct EnumeratorType_tC3766DE1C34D6EE43E45BBA88CCC591630BE9A48 
{
	int32_t ___value__;
};
struct EnumeratorType_t652FF78FFDF021ABFC79C8A0FAA7210BBB279CC7 
{
	int32_t ___value__;
};
struct EnumeratorType_tC4776F9624C3196B8C7EF9CE1B98CB0E43F68BF2 
{
	int32_t ___value__;
};
struct EnumeratorType_tDDC759BB648136E7ED70E562EF229CDAE70145A0 
{
	int32_t ___value__;
};
struct EnumeratorType_tF74CF686D6BCDA992CD7FFAFC9263CA139DEEC69 
{
	int32_t ___value__;
};
struct IndexedCollectionPropertyBagEnumerable_1_tE254CF2D0A8DE4E5CDA4A024CE13F19EDB254982 
{
	RuntimeObject* ___m_Impl;
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___m_Container;
};
struct IndexedCollectionPropertyBagEnumerable_1_tE38F8FDB1F19403BAF873489FBB2835BB8BF2A0F 
{
	RuntimeObject* ___m_Impl;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Container;
};
struct IndexedCollectionPropertyBagEnumerable_1_tD829449C7513B6D21CA6D8B1F30E18433EAB230B 
{
	RuntimeObject* ___m_Impl;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___m_Container;
};
struct IndexedCollectionPropertyBagEnumerator_1_t4C75750458C34E591B554834B0CF4629AF587386 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___m_Container;
	int32_t ___m_Position;
};
struct IndexedCollectionPropertyBagEnumerator_1_t48FF0A51926A6310D107BBCF1934B068C1D9367A 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Container;
	int32_t ___m_Position;
};
struct IndexedCollectionPropertyBagEnumerator_1_t1525D4EDDB33B2A15B082E81309A2FD8A9428D96 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___m_Container;
	int32_t ___m_Position;
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
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 
{
	union
	{
		struct
		{
			EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_Texture;
			int32_t ___m_DefaultCursorId;
			int32_t _____dummy;
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Hotspot;
		};
		uint8_t Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82__padding[24];
	};
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
struct EasingMode_tEF87477B9B9EB2524525550AE5ABEBC00FC7B0DF 
{
	int32_t ___value__;
};
struct FilterFunctionType_tF29290365A61009BE6F2EF6C6C6218E72CB9F64A 
{
	int32_t ___value__;
};
struct FilterParameterType_t7250262A78079140235AAFF6F4FA3CCB2F99E390 
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
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct Repeat_tC0330B75B12D24B063BA5151AF3BB73B85D8B840 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	bool ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct TextAutoSizeMode_t10C0C54209C97D8A231AF021AE2F9DFFD26EE2C9 
{
	int32_t ___value__;
};
struct TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset;
	float ___blurRadius;
};
struct TimeUnit_t56A79CDB672E98A4EE28002BD23B6D5E0BAA2649 
{
	int32_t ___value__;
};
struct VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75 
{
	int32_t ___value__;
};
struct Unit_t21DCD5C095F7DC1A0B9A47CAF8CAD3E7776CD3DB 
{
	int32_t ___value__;
};
struct Enumerator_t7D47CEE5594385EF5CAFF555A27EF450272A8210 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_t0AC6D12A69215AEA1ABA576D8D28247545857C45 ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_t4C75750458C34E591B554834B0CF4629AF587386 ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct Enumerator_t7D642C44F9F61CC011E38CB49A73BD0A1C56E56C 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_t42AB80E368F0AA9A6863183AAF6A0594B7672780 ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_t48FF0A51926A6310D107BBCF1934B068C1D9367A ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct Enumerator_t0D1401C0611E0CB7F53B5135FB51B2072C4D7AF3 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_t7D2969898DCF9987F2C26E6A288F49C516FD235F ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_t1525D4EDDB33B2A15B082E81309A2FD8A9428D96 ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct IndexedCollectionPropertyBagEnumerable_1_t1F18826A121279FA6B31064D3655321DF281A45B 
{
	RuntimeObject* ___m_Impl;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_Container;
};
struct IndexedCollectionPropertyBagEnumerable_1_t47A73FB97DE2ABFDD0B3C0BF10084D7594FFB649 
{
	RuntimeObject* ___m_Impl;
	BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___m_Container;
};
struct IndexedCollectionPropertyBagEnumerable_1_tBC07B871163385CB56C782EBE894BA67AB229755 
{
	RuntimeObject* ___m_Impl;
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 ___m_Container;
};
struct IndexedCollectionPropertyBagEnumerator_1_t25E6541C2CB133F15D8ABFAAC839AB78B37A8F7F 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_Container;
	int32_t ___m_Position;
};
struct IndexedCollectionPropertyBagEnumerator_1_t73CA0BE5143260C52FA5DE06B90625915CC4677A 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___m_Container;
	int32_t ___m_Position;
};
struct IndexedCollectionPropertyBagEnumerator_1_tB16F1F129D0AC08E294D1278C49FA7888C285508 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 ___m_Container;
	int32_t ___m_Position;
};
struct PropertyCollection_1_tEA87734C1D3CD4DFFA79347A5D1415D7F696E486 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerable;
	List_1_t0B1CD5EC523AD51049E5BCEF30AF7ADB8A09DE27* ___m_Properties;
	IndexedCollectionPropertyBagEnumerable_1_tE254CF2D0A8DE4E5CDA4A024CE13F19EDB254982 ___m_IndexedCollectionPropertyBag;
};
struct PropertyCollection_1_t9596CB6B288440AB4D49A18019653CC3030C0A1A 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerable;
	List_1_t514193F05FE01729A5ADF1CBD11F2A3282FEA464* ___m_Properties;
	IndexedCollectionPropertyBagEnumerable_1_tE38F8FDB1F19403BAF873489FBB2835BB8BF2A0F ___m_IndexedCollectionPropertyBag;
};
struct PropertyCollection_1_t8CC1D13F2E6173E560314F0097651F02C0EDC548 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerable;
	List_1_t6E8E59EDC80EB269FA8F88257727E96C4D402641* ___m_Properties;
	IndexedCollectionPropertyBagEnumerable_1_tD829449C7513B6D21CA6D8B1F30E18433EAB230B ___m_IndexedCollectionPropertyBag;
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
struct EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 
{
	int32_t ___m_Mode;
};
struct FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 
{
	int32_t ___m_Type;
	float ___m_FloatValue;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorValue;
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
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF 
{
	int32_t ___m_Kind;
	String_t* ___m_Name;
	int32_t ___m_Index;
	RuntimeObject* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke
{
	int32_t ___m_Kind;
	char* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com
{
	int32_t ___m_Kind;
	Il2CppChar* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B 
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_pinvoke
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_com
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 
{
	float ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___m_Value;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshaled_pinvoke
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke ___m_Value;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshaled_com
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com ___m_Value;
};
struct StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 
{
	MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_marshaled_pinvoke
{
	MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_marshaled_com
{
	MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF 
{
	int32_t ___U3CidU3Ek__BackingField;
	String_t* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField;
	char* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField;
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
struct StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 
{
	Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC 
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshaled_pinvoke
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshaled_com
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 
{
	int32_t ___m_Keyword;
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___m_Value;
};
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Enumerator_t1BC64DC5630D00766F0D7E596856131BEFE3727C 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_t6F19937235B9D04AB517A7194D413D24040DED72 ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_t25E6541C2CB133F15D8ABFAAC839AB78B37A8F7F ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct Enumerator_t3648701D3843B13744B06A771CE13CE211422FFA 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_t0455B22F9493298B73DB12AE4260678F7CF64B13 ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_t73CA0BE5143260C52FA5DE06B90625915CC4677A ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct Enumerator_tF643BE0D5A76D18176FCE425FA913FF6C100A639 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_tF0995ACC6AA66E331198202861457B7B006E979A ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_tB16F1F129D0AC08E294D1278C49FA7888C285508 ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C 
{
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____0;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____1;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____2;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____3;
};
struct IndexedCollectionPropertyBagEnumerable_1_t746DBCBD95FBCAFE469F059B1A3609258FB4B820 
{
	RuntimeObject* ___m_Impl;
	StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 ___m_Container;
};
struct IndexedCollectionPropertyBagEnumerable_1_tF9AEEC9CC4CE34CDC357D5372CB09DB6B51FFEFD 
{
	RuntimeObject* ___m_Impl;
	StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F ___m_Container;
};
struct IndexedCollectionPropertyBagEnumerable_1_t922D740F64519DA3F56F1EDDAA50397603E10754 
{
	RuntimeObject* ___m_Impl;
	StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 ___m_Container;
};
struct IndexedCollectionPropertyBagEnumerable_1_t49603B661ACD5F5B954A332060A3B7BD09BA2C43 
{
	RuntimeObject* ___m_Impl;
	StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C ___m_Container;
};
struct IndexedCollectionPropertyBagEnumerable_1_t32AE6CE56DFA25B29B6EE3818DA319A07D791BB3 
{
	RuntimeObject* ___m_Impl;
	StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 ___m_Container;
};
struct IndexedCollectionPropertyBagEnumerable_1_t998B2F6622E767CC77F2BAC6A853B4536F902333 
{
	RuntimeObject* ___m_Impl;
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Container;
};
struct IndexedCollectionPropertyBagEnumerable_1_t40F00EC198F107BD5F76914B1BB49C6446AEE8D8 
{
	RuntimeObject* ___m_Impl;
	BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___m_Container;
};
struct IndexedCollectionPropertyBagEnumerable_1_tE22E7DEF92E82632475BD519CAA669F0D9F8132F 
{
	RuntimeObject* ___m_Impl;
	EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 ___m_Container;
};
struct IndexedCollectionPropertyBagEnumerable_1_t18A554B10835A1C4FCED252F997FA209A7B32935 
{
	RuntimeObject* ___m_Impl;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Container;
};
struct IndexedCollectionPropertyBagEnumerator_1_tE59A904E4D33564D20D00581E92EB734BE5B190C 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 ___m_Container;
	int32_t ___m_Position;
};
struct IndexedCollectionPropertyBagEnumerator_1_t0B36F41ABDB866EA778C570107CF72B07B7B486E 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F ___m_Container;
	int32_t ___m_Position;
};
struct IndexedCollectionPropertyBagEnumerator_1_t3BE828239473DCC8B50E07E3DDC412F941A2244C 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 ___m_Container;
	int32_t ___m_Position;
};
struct IndexedCollectionPropertyBagEnumerator_1_t95910C0E348083773022211F494B7D7C2D25E705 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C ___m_Container;
	int32_t ___m_Position;
};
struct IndexedCollectionPropertyBagEnumerator_1_tFA04B89CF8D8A4C865048EB94079CA05CA048377 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 ___m_Container;
	int32_t ___m_Position;
};
struct IndexedCollectionPropertyBagEnumerator_1_tEAEDEC589FF63384250A25DB9001ECC8845E8F6E 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Container;
	int32_t ___m_Position;
};
struct IndexedCollectionPropertyBagEnumerator_1_tF2908B727589FF9A818F42467FC076419061D2C0 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___m_Container;
	int32_t ___m_Position;
};
struct IndexedCollectionPropertyBagEnumerator_1_tB9DB174E40883DDA0514F41980E9387553F19706 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 ___m_Container;
	int32_t ___m_Position;
};
struct IndexedCollectionPropertyBagEnumerator_1_t05487780786BB6980FE7CA4A44A01A27918254DC 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Container;
	int32_t ___m_Position;
};
struct PropertyCollection_1_t5C455411091F5AB1DBBCC2701C0DFC7512D7D140 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerable;
	List_1_tE031E2B1B3599B1B808F7E565E285D0265829963* ___m_Properties;
	IndexedCollectionPropertyBagEnumerable_1_t1F18826A121279FA6B31064D3655321DF281A45B ___m_IndexedCollectionPropertyBag;
};
struct PropertyCollection_1_t8281685F99C8C57CC2DA275986F4AF17734385CC 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerable;
	List_1_tB0305892E26D0C482A75FD711E7CF6277D867EAA* ___m_Properties;
	IndexedCollectionPropertyBagEnumerable_1_t47A73FB97DE2ABFDD0B3C0BF10084D7594FFB649 ___m_IndexedCollectionPropertyBag;
};
struct PropertyCollection_1_tAA96E23293BF5D632DF124803ADDBE5B41F5293A 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerable;
	List_1_tEB54794B1D963FD8B2747B2513C8DC5D0EE60633* ___m_Properties;
	IndexedCollectionPropertyBagEnumerable_1_tBC07B871163385CB56C782EBE894BA67AB229755 ___m_IndexedCollectionPropertyBag;
};
struct TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929  : public MulticastDelegate_t
{
};
struct TypeConverter_2_t0525BA89BAB435F8C9F2EEF9023F9BCB7ABE80A1  : public MulticastDelegate_t
{
};
struct TypeConverter_2_t092CBFB8B2C91DDB61909080B4E1A2C19896B01F  : public MulticastDelegate_t
{
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
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part3;
	PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	bool ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 
{
	BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Value;
	int32_t ___m_Keyword;
};
struct TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_MinSize;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_MaxSize;
	int32_t ___m_Mode;
};
struct TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	bool ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct Enumerator_t6A11FE63188973969841D4B13F1F4D021BCDF090 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_tCA8B5DD49AE1DEB38023A79B313C60733127BA30 ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_tE59A904E4D33564D20D00581E92EB734BE5B190C ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct Enumerator_t02CD38A297320277736A838E77ADDD6185E9DCBD 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_t1DBB6D61AD8DFA5788395BE4D3E7250D145C096E ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_t0B36F41ABDB866EA778C570107CF72B07B7B486E ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct Enumerator_t7C1888E7670B0BB598477ED601D368B0296B745F 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_t653B42B4FCDACA9BAD2027118676429E31A85130 ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_t3BE828239473DCC8B50E07E3DDC412F941A2244C ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct Enumerator_tABFB270AC141E565FB4A2352299030FB92BB1B58 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_tAF1FDE16E447EC8ED01BA9DF2507BD4EA9C92EF0 ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_t95910C0E348083773022211F494B7D7C2D25E705 ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct Enumerator_tBC542700822D291E0D2BABBE7814E42A93ED5EAE 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_tDB324AB50420D43D083AE1EF2C3D363C08F59235 ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_tFA04B89CF8D8A4C865048EB94079CA05CA048377 ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct Enumerator_t9088FC23F01997F1718A1C16C5317EA0D8788D64 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_t36D39630269E3C8F9231AFDA1309C6D25161ED7E ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_tEAEDEC589FF63384250A25DB9001ECC8845E8F6E ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct Enumerator_tB47F44C0354494C310D40DBE5134D136EB22B77C 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_t3285E2DFD4D92C2ED55CE6962D5CC32B7F27880B ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_tF2908B727589FF9A818F42467FC076419061D2C0 ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct Enumerator_t6EBC20E60FF235EC2930C4A6D91D169B87DDB828 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_tC5B542A29597CEF00CADA46E5BDA51BDB48D7E04 ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_tB9DB174E40883DDA0514F41980E9387553F19706 ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct Enumerator_t1761CC40B515D3EEEF28C40678DCB2B504824DC4 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_t1912C1744D9A13668FD2D52DB984CEC0DBC7395A ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_t05487780786BB6980FE7CA4A44A01A27918254DC ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct IndexedCollectionPropertyBagEnumerable_1_tF2D3139A4FAE5BC5ACA780A1346884F5D16FFEBB 
{
	RuntimeObject* ___m_Impl;
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___m_Container;
};
struct IndexedCollectionPropertyBagEnumerable_1_t61632AC07664B171FD3513B3FDF676AD21202A22 
{
	RuntimeObject* ___m_Impl;
	BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 ___m_Container;
};
struct IndexedCollectionPropertyBagEnumerator_1_tFC9BD562DDACED38D717C8ADC82C98DCEC4C49E0 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___m_Container;
	int32_t ___m_Position;
};
struct IndexedCollectionPropertyBagEnumerator_1_t4CB24108C417662CB181570A20327F77D3D05638 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 ___m_Container;
	int32_t ___m_Position;
};
struct PropertyCollection_1_t66244703658BF1D2205CE0CD4AB73046D8F55445 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerable;
	List_1_t26E81977A765E91FE90EECF628F03AAD3CF4E408* ___m_Properties;
	IndexedCollectionPropertyBagEnumerable_1_t746DBCBD95FBCAFE469F059B1A3609258FB4B820 ___m_IndexedCollectionPropertyBag;
};
struct PropertyCollection_1_t41DA8EAD20A010C22EBFA2EC7462BB11CB90DE55 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerable;
	List_1_tDD494D344F11DD6D6E47FB6794635C7CBD737022* ___m_Properties;
	IndexedCollectionPropertyBagEnumerable_1_tF9AEEC9CC4CE34CDC357D5372CB09DB6B51FFEFD ___m_IndexedCollectionPropertyBag;
};
struct PropertyCollection_1_t42406DF21850919439861BD109A614BB4F6F6516 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerable;
	List_1_tF3064CB6487998058BB680B32D26638CBBD66A77* ___m_Properties;
	IndexedCollectionPropertyBagEnumerable_1_t922D740F64519DA3F56F1EDDAA50397603E10754 ___m_IndexedCollectionPropertyBag;
};
struct PropertyCollection_1_t38EF76A7C3CEAA54EFBA77C99B94C014F791FA13 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerable;
	List_1_t42439BC4D933D6DE2219753ECC4A674696A9B788* ___m_Properties;
	IndexedCollectionPropertyBagEnumerable_1_t49603B661ACD5F5B954A332060A3B7BD09BA2C43 ___m_IndexedCollectionPropertyBag;
};
struct PropertyCollection_1_t7415350DFFCF7B59120A66892A01E43373218162 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerable;
	List_1_t8973E7D95DDAF81785EFAC31612A98CE078EB91B* ___m_Properties;
	IndexedCollectionPropertyBagEnumerable_1_t32AE6CE56DFA25B29B6EE3818DA319A07D791BB3 ___m_IndexedCollectionPropertyBag;
};
struct PropertyCollection_1_t7B1F6F7CD7DDA9062C74D469A2511AB47AB3B248 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerable;
	List_1_tA277DF6E372990202E6992461F8737D089DD59DE* ___m_Properties;
	IndexedCollectionPropertyBagEnumerable_1_t998B2F6622E767CC77F2BAC6A853B4536F902333 ___m_IndexedCollectionPropertyBag;
};
struct PropertyCollection_1_tEAF3652EA2DFE0F11DAB5F4E6DE7D59C2E9DC274 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerable;
	List_1_tB3875941EB9C31B6A1EE0576F969C79D850E686B* ___m_Properties;
	IndexedCollectionPropertyBagEnumerable_1_t40F00EC198F107BD5F76914B1BB49C6446AEE8D8 ___m_IndexedCollectionPropertyBag;
};
struct PropertyCollection_1_tC598A73CD7DDE2371D521A9745AF6D6AB663A796 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerable;
	List_1_t694C128536F59FED79740621FF2F3A5003C57EB3* ___m_Properties;
	IndexedCollectionPropertyBagEnumerable_1_tE22E7DEF92E82632475BD519CAA669F0D9F8132F ___m_IndexedCollectionPropertyBag;
};
struct PropertyCollection_1_tDF798E2F7DDFE2D1025D17B2E32E00593683FB75 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerable;
	List_1_tC0D87214221D0C74B6611A02D556860215C9D468* ___m_Properties;
	IndexedCollectionPropertyBagEnumerable_1_t18A554B10835A1C4FCED252F997FA209A7B32935 ___m_IndexedCollectionPropertyBag;
};
struct FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF 
{
	int32_t ___m_Type;
	FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C ___m_Parameters;
	int32_t ___m_ParameterCount;
	FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2* ___m_CustomDefinition;
};
struct FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_marshaled_pinvoke
{
	int32_t ___m_Type;
	FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C ___m_Parameters;
	int32_t ___m_ParameterCount;
	FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2* ___m_CustomDefinition;
};
struct FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_marshaled_com
{
	int32_t ___m_Type;
	FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C ___m_Parameters;
	int32_t ___m_ParameterCount;
	FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2* ___m_CustomDefinition;
};
struct StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 
{
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 
{
	BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B 
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshaled_pinvoke
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshaled_com
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A 
{
	int32_t ___m_Keyword;
	TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A ___m_Value;
};
struct StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 
{
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_pinvoke
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_com
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E  : public RuntimeObject
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CPathU3Ek__BackingField;
	Type_t* ___U3CresolvedTypeU3Ek__BackingField;
	int32_t ___U3CReturnCodeU3Ek__BackingField;
	Type_t* ___m_LastType;
	int32_t ___m_PathIndex;
};
struct Enumerator_tCC5ED1F73E39E7B14964CBE64F0318FB042AB70D 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_t4D1380B9651306430C353F4B09620F3EA3CA99AF ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_tFC9BD562DDACED38D717C8ADC82C98DCEC4C49E0 ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct Enumerator_t4EFFFB85C3620D0B1C29E3F817701CBB89EDEE55 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_t6302370FBAD7019AD871E4C063C0202EB499B847 ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_t4CB24108C417662CB181570A20327F77D3D05638 ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct IndexedCollectionPropertyBagEnumerable_1_t01EE8F2A3B67C65951D65E140081957CA6CD431D 
{
	RuntimeObject* ___m_Impl;
	FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF ___m_Container;
};
struct IndexedCollectionPropertyBagEnumerator_1_t30691719F728F6639A747E03A12E3E541102B425 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF ___m_Container;
	int32_t ___m_Position;
};
struct PropertyCollection_1_t89A7A8D977964C1E959381AD26D9A1A3F4731E9A 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerable;
	List_1_t95955E49E2CAA2956C04ABE04FA8D76DB746DB08* ___m_Properties;
	IndexedCollectionPropertyBagEnumerable_1_tF2D3139A4FAE5BC5ACA780A1346884F5D16FFEBB ___m_IndexedCollectionPropertyBag;
};
struct PropertyCollection_1_t29CF2454D90FEAB4DE222C38D4C20956E65A44EA 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerable;
	List_1_t5BEEEF0A5BECBFAABCCFDB3EF9A6AB5C7D948F13* ___m_Properties;
	IndexedCollectionPropertyBagEnumerable_1_t61632AC07664B171FD3513B3FDF676AD21202A22 ___m_IndexedCollectionPropertyBag;
};
struct Enumerator_t841DE24D270160BE54E3D380BDA3E88335619A9A 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_t38DE1B2B4DFF7B8AB2B6F63E6FBAB975729D0660 ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_t30691719F728F6639A747E03A12E3E541102B425 ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct PropertyCollection_1_tBF011EE6246099B856281092B3A95E8EAC6A7883 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerable;
	List_1_tBE0352B1FFC10C8C5E262C616B6556B8DE2FCB4E* ___m_Properties;
	IndexedCollectionPropertyBagEnumerable_1_t01EE8F2A3B67C65951D65E140081957CA6CD431D ___m_IndexedCollectionPropertyBag;
};
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_StaticFields
{
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_emptyArray;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields
{
	ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426 ___s_GlobalConverters;
};
struct TypeExtensions_t65367AC18793C0FA75C262A51A63DC36B4E9D427_StaticFields
{
	List_1_t2EC26D0ED018C658813F1744B58498EF88D4A3C7* ___k_Fields;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___k_TypeNames;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
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
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct PropertyCollection_1_tEA87734C1D3CD4DFFA79347A5D1415D7F696E486_StaticFields
{
	PropertyCollection_1_tEA87734C1D3CD4DFFA79347A5D1415D7F696E486 ___U3CEmptyU3Ek__BackingField;
};
struct PropertyCollection_1_t9596CB6B288440AB4D49A18019653CC3030C0A1A_StaticFields
{
	PropertyCollection_1_t9596CB6B288440AB4D49A18019653CC3030C0A1A ___U3CEmptyU3Ek__BackingField;
};
struct PropertyCollection_1_t8CC1D13F2E6173E560314F0097651F02C0EDC548_StaticFields
{
	PropertyCollection_1_t8CC1D13F2E6173E560314F0097651F02C0EDC548 ___U3CEmptyU3Ek__BackingField;
};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_StaticFields
{
	Dictionary_2_t29FB78C9E5DF443E2A5880E4E9B7C86E516670E0* ___s_AngleUnitLookup;
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
struct PropertyCollection_1_t5C455411091F5AB1DBBCC2701C0DFC7512D7D140_StaticFields
{
	PropertyCollection_1_t5C455411091F5AB1DBBCC2701C0DFC7512D7D140 ___U3CEmptyU3Ek__BackingField;
};
struct PropertyCollection_1_t8281685F99C8C57CC2DA275986F4AF17734385CC_StaticFields
{
	PropertyCollection_1_t8281685F99C8C57CC2DA275986F4AF17734385CC ___U3CEmptyU3Ek__BackingField;
};
struct PropertyCollection_1_tAA96E23293BF5D632DF124803ADDBE5B41F5293A_StaticFields
{
	PropertyCollection_1_tAA96E23293BF5D632DF124803ADDBE5B41F5293A ___U3CEmptyU3Ek__BackingField;
};
struct PropertyCollection_1_t66244703658BF1D2205CE0CD4AB73046D8F55445_StaticFields
{
	PropertyCollection_1_t66244703658BF1D2205CE0CD4AB73046D8F55445 ___U3CEmptyU3Ek__BackingField;
};
struct PropertyCollection_1_t41DA8EAD20A010C22EBFA2EC7462BB11CB90DE55_StaticFields
{
	PropertyCollection_1_t41DA8EAD20A010C22EBFA2EC7462BB11CB90DE55 ___U3CEmptyU3Ek__BackingField;
};
struct PropertyCollection_1_t42406DF21850919439861BD109A614BB4F6F6516_StaticFields
{
	PropertyCollection_1_t42406DF21850919439861BD109A614BB4F6F6516 ___U3CEmptyU3Ek__BackingField;
};
struct PropertyCollection_1_t38EF76A7C3CEAA54EFBA77C99B94C014F791FA13_StaticFields
{
	PropertyCollection_1_t38EF76A7C3CEAA54EFBA77C99B94C014F791FA13 ___U3CEmptyU3Ek__BackingField;
};
struct PropertyCollection_1_t7415350DFFCF7B59120A66892A01E43373218162_StaticFields
{
	PropertyCollection_1_t7415350DFFCF7B59120A66892A01E43373218162 ___U3CEmptyU3Ek__BackingField;
};
struct PropertyCollection_1_t7B1F6F7CD7DDA9062C74D469A2511AB47AB3B248_StaticFields
{
	PropertyCollection_1_t7B1F6F7CD7DDA9062C74D469A2511AB47AB3B248 ___U3CEmptyU3Ek__BackingField;
};
struct PropertyCollection_1_tEAF3652EA2DFE0F11DAB5F4E6DE7D59C2E9DC274_StaticFields
{
	PropertyCollection_1_tEAF3652EA2DFE0F11DAB5F4E6DE7D59C2E9DC274 ___U3CEmptyU3Ek__BackingField;
};
struct PropertyCollection_1_tC598A73CD7DDE2371D521A9745AF6D6AB663A796_StaticFields
{
	PropertyCollection_1_tC598A73CD7DDE2371D521A9745AF6D6AB663A796 ___U3CEmptyU3Ek__BackingField;
};
struct PropertyCollection_1_tDF798E2F7DDFE2D1025D17B2E32E00593683FB75_StaticFields
{
	PropertyCollection_1_tDF798E2F7DDFE2D1025D17B2E32E00593683FB75 ___U3CEmptyU3Ek__BackingField;
};
struct PropertyCollection_1_t89A7A8D977964C1E959381AD26D9A1A3F4731E9A_StaticFields
{
	PropertyCollection_1_t89A7A8D977964C1E959381AD26D9A1A3F4731E9A ___U3CEmptyU3Ek__BackingField;
};
struct PropertyCollection_1_t29CF2454D90FEAB4DE222C38D4C20956E65A44EA_StaticFields
{
	PropertyCollection_1_t29CF2454D90FEAB4DE222C38D4C20956E65A44EA ___U3CEmptyU3Ek__BackingField;
};
struct PropertyCollection_1_tBF011EE6246099B856281092B3A95E8EAC6A7883_StaticFields
{
	PropertyCollection_1_tBF011EE6246099B856281092B3A95E8EAC6A7883 ___U3CEmptyU3Ek__BackingField;
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* TypeConverter_2_Invoke_mF0FFFFF940DA8BB84CBB0B4BD67E875750ADA97C_gshared_inline (TypeConverter_2_t0525BA89BAB435F8C9F2EEF9023F9BCB7ABE80A1* __this, Il2CppSharedGenericObject** ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6A11FE63188973969841D4B13F1F4D021BCDF090 PropertyCollection_1_GetEnumerator_mE38CFFCE3C5FA28CDE56EB215091D499D3E30B1A_gshared (PropertyCollection_1_t66244703658BF1D2205CE0CD4AB73046D8F55445* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m6D00C142D6F1FC73850FAAAC923FBD179C9589E2_gshared (Enumerator_t6A11FE63188973969841D4B13F1F4D021BCDF090* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m4A076BF8CCA696A6F3870DD208594E4CC660DCC3_gshared_inline (Enumerator_t6A11FE63188973969841D4B13F1F4D021BCDF090* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4C1B14EE93EA1A800355F61BFDB25F3FAE9D0078_gshared (Enumerator_t6A11FE63188973969841D4B13F1F4D021BCDF090* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t02CD38A297320277736A838E77ADDD6185E9DCBD PropertyCollection_1_GetEnumerator_m88CC0A850D644B5B1A8C83DA16F36705D2452366_gshared (PropertyCollection_1_t41DA8EAD20A010C22EBFA2EC7462BB11CB90DE55* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m42914F590490E31642B853AE63147400FA6C5004_gshared (Enumerator_t02CD38A297320277736A838E77ADDD6185E9DCBD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m19810E67B637A3A877880098AE4A499814991A91_gshared_inline (Enumerator_t02CD38A297320277736A838E77ADDD6185E9DCBD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6D508ADD54444E21AE919F5BE3DE40A75D2EB260_gshared (Enumerator_t02CD38A297320277736A838E77ADDD6185E9DCBD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7C1888E7670B0BB598477ED601D368B0296B745F PropertyCollection_1_GetEnumerator_m46CDC1CE37C942F2A700CA11AEBE0086598EFF87_gshared (PropertyCollection_1_t42406DF21850919439861BD109A614BB4F6F6516* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m9158A161412B924939494966385016E1809D3E5A_gshared (Enumerator_t7C1888E7670B0BB598477ED601D368B0296B745F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mAFEF2F92894DEFDE1336AEE03C5D3BC6EB0BFDF5_gshared_inline (Enumerator_t7C1888E7670B0BB598477ED601D368B0296B745F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD5C02BD53AC3252A965C5D5FE598D23A810A6021_gshared (Enumerator_t7C1888E7670B0BB598477ED601D368B0296B745F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tABFB270AC141E565FB4A2352299030FB92BB1B58 PropertyCollection_1_GetEnumerator_m3B85FA0F58F92E53A1C9D7DE4E85DC9693118FBD_gshared (PropertyCollection_1_t38EF76A7C3CEAA54EFBA77C99B94C014F791FA13* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m297B57E73891F7C6F2E390B3EC9CF5C16FF0C2FB_gshared (Enumerator_tABFB270AC141E565FB4A2352299030FB92BB1B58* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mBFDA5CF8BD44713105285CABED92689E440F2B9B_gshared_inline (Enumerator_tABFB270AC141E565FB4A2352299030FB92BB1B58* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA26CA80661AFDFA4E9F65B17B70D431931A0931C_gshared (Enumerator_tABFB270AC141E565FB4A2352299030FB92BB1B58* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tBC542700822D291E0D2BABBE7814E42A93ED5EAE PropertyCollection_1_GetEnumerator_m0AF481FB9C5D11A22FD7FC1086F688F54F392D70_gshared (PropertyCollection_1_t7415350DFFCF7B59120A66892A01E43373218162* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB0C2F9621BD0686E061E203FB619CCB824ECA19_gshared (Enumerator_tBC542700822D291E0D2BABBE7814E42A93ED5EAE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mCC041B0CC2BA645600E4CB340AE8ABEB68CAE200_gshared_inline (Enumerator_tBC542700822D291E0D2BABBE7814E42A93ED5EAE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mABE6B9B67B680B7A91EB4B026AD26E6F5A36A0B1_gshared (Enumerator_tBC542700822D291E0D2BABBE7814E42A93ED5EAE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9088FC23F01997F1718A1C16C5317EA0D8788D64 PropertyCollection_1_GetEnumerator_m8B59253F91C36DDC1D9123957BF1730F394D5667_gshared (PropertyCollection_1_t7B1F6F7CD7DDA9062C74D469A2511AB47AB3B248* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFD74709C6445EDE3DF5602D97DE8B9A61FAB1E6_gshared (Enumerator_t9088FC23F01997F1718A1C16C5317EA0D8788D64* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mF7AD50DF850378FB7F40A4B05513D9F506D3482D_gshared_inline (Enumerator_t9088FC23F01997F1718A1C16C5317EA0D8788D64* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m350CCC1D8258DC87D78E63061111157BCFF58E97_gshared (Enumerator_t9088FC23F01997F1718A1C16C5317EA0D8788D64* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7D47CEE5594385EF5CAFF555A27EF450272A8210 PropertyCollection_1_GetEnumerator_m2661F621B2234B5E115A4F4F679182D6296140ED_gshared (PropertyCollection_1_tEA87734C1D3CD4DFFA79347A5D1415D7F696E486* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m57AD435DE425E5366CEE348EADF7AB3EA7F97B6A_gshared (Enumerator_t7D47CEE5594385EF5CAFF555A27EF450272A8210* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mDD6AEAE70523B332674906165BABED12125CF0B0_gshared_inline (Enumerator_t7D47CEE5594385EF5CAFF555A27EF450272A8210* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB013D6A728F41E43D381D6E2A22E439C0553483A_gshared (Enumerator_t7D47CEE5594385EF5CAFF555A27EF450272A8210* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tCC5ED1F73E39E7B14964CBE64F0318FB042AB70D PropertyCollection_1_GetEnumerator_mFAB4E36E1633C65180CD0CD9AA1ABBF982BC9723_gshared (PropertyCollection_1_t89A7A8D977964C1E959381AD26D9A1A3F4731E9A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mC9D395C948135836D1B9E51F23BA0A63E51464EF_gshared (Enumerator_tCC5ED1F73E39E7B14964CBE64F0318FB042AB70D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m34C61C2E196011199D7301725A46DC64EDF456FB_gshared_inline (Enumerator_tCC5ED1F73E39E7B14964CBE64F0318FB042AB70D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m883248A06E16EFE4BBE928FA0A04CDDF3ADCD991_gshared (Enumerator_tCC5ED1F73E39E7B14964CBE64F0318FB042AB70D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB47F44C0354494C310D40DBE5134D136EB22B77C PropertyCollection_1_GetEnumerator_m5F70F76C1799BD1C97C994FF2D61A0F26B49700A_gshared (PropertyCollection_1_tEAF3652EA2DFE0F11DAB5F4E6DE7D59C2E9DC274* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD847F533540BB2C9E45BE2EBD5DE23F3D0DF664A_gshared (Enumerator_tB47F44C0354494C310D40DBE5134D136EB22B77C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m1E752B432C4D0A7739023F58A13CB62E0ECAE9F4_gshared_inline (Enumerator_tB47F44C0354494C310D40DBE5134D136EB22B77C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m815333E0B88342B338332EA090386A067099D138_gshared (Enumerator_tB47F44C0354494C310D40DBE5134D136EB22B77C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4EFFFB85C3620D0B1C29E3F817701CBB89EDEE55 PropertyCollection_1_GetEnumerator_mCF12480CD2A1FA14D1B2A924C0312B09C6B83AC1_gshared (PropertyCollection_1_t29CF2454D90FEAB4DE222C38D4C20956E65A44EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mC1CE6D06E1F4D502D2E28462B91DD2B75B5352A9_gshared (Enumerator_t4EFFFB85C3620D0B1C29E3F817701CBB89EDEE55* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m07E2669886B55B6E94309FE2365CB7EB7157F980_gshared_inline (Enumerator_t4EFFFB85C3620D0B1C29E3F817701CBB89EDEE55* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m130B0787A62F716A9BE303FF0DF5E9EE41524583_gshared (Enumerator_t4EFFFB85C3620D0B1C29E3F817701CBB89EDEE55* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1BC64DC5630D00766F0D7E596856131BEFE3727C PropertyCollection_1_GetEnumerator_m1DF9AB90326D9450EF0524141F7D09BBDC3A3BBD_gshared (PropertyCollection_1_t5C455411091F5AB1DBBCC2701C0DFC7512D7D140* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m844C7549472B89A0B070CB7169165A047A8C327F_gshared (Enumerator_t1BC64DC5630D00766F0D7E596856131BEFE3727C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m32941DB97468B3FD7738E8EA76EDFEC347B01799_gshared_inline (Enumerator_t1BC64DC5630D00766F0D7E596856131BEFE3727C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA9FF27CB7CFD899BBC98F50E4D7E0637F5107C92_gshared (Enumerator_t1BC64DC5630D00766F0D7E596856131BEFE3727C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3648701D3843B13744B06A771CE13CE211422FFA PropertyCollection_1_GetEnumerator_m2CE64B681A1082F1C6FD29EA6D8AED9A0559AE73_gshared (PropertyCollection_1_t8281685F99C8C57CC2DA275986F4AF17734385CC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m4EE84632E2B1A018361AB5A8DDC6A0058949615B_gshared (Enumerator_t3648701D3843B13744B06A771CE13CE211422FFA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m2FE62C0232D38150B8D6179F0140570DA16480DE_gshared_inline (Enumerator_t3648701D3843B13744B06A771CE13CE211422FFA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m26BD47B4AFC03EABD946384168856845E86764E3_gshared (Enumerator_t3648701D3843B13744B06A771CE13CE211422FFA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7D642C44F9F61CC011E38CB49A73BD0A1C56E56C PropertyCollection_1_GetEnumerator_m5448C5CDF0F9833CE40BD4E25C120C66B1B7FA0C_gshared (PropertyCollection_1_t9596CB6B288440AB4D49A18019653CC3030C0A1A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m906EE111B39E8587E0847C54533DB862D11F0CCA_gshared (Enumerator_t7D642C44F9F61CC011E38CB49A73BD0A1C56E56C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m90C4F5D7AF82872EF38E6933D951B81A92F1D195_gshared_inline (Enumerator_t7D642C44F9F61CC011E38CB49A73BD0A1C56E56C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m35843750D76F2B82BCFDC6AEDBB006AF5E4CA245_gshared (Enumerator_t7D642C44F9F61CC011E38CB49A73BD0A1C56E56C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF643BE0D5A76D18176FCE425FA913FF6C100A639 PropertyCollection_1_GetEnumerator_m5644AF02523BF123704202E76240E428CAC495CF_gshared (PropertyCollection_1_tAA96E23293BF5D632DF124803ADDBE5B41F5293A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mC43EE54272E8CBEEE682CC02E1C9641057DB70CD_gshared (Enumerator_tF643BE0D5A76D18176FCE425FA913FF6C100A639* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m9CFB4AE26006B00A090EB97E0AFFCD190D7916D4_gshared_inline (Enumerator_tF643BE0D5A76D18176FCE425FA913FF6C100A639* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB80F85005AD34E625BC68FCE4F9A68A93DD7E06C_gshared (Enumerator_tF643BE0D5A76D18176FCE425FA913FF6C100A639* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6EBC20E60FF235EC2930C4A6D91D169B87DDB828 PropertyCollection_1_GetEnumerator_mE9239C34386B0A920E1AE83584AFA811EE88312E_gshared (PropertyCollection_1_tC598A73CD7DDE2371D521A9745AF6D6AB663A796* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m9B87C155ADCA4D519FA81C8ED158AC944372CC3E_gshared (Enumerator_t6EBC20E60FF235EC2930C4A6D91D169B87DDB828* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m668EFCD6C6CE28C7E1BCF318C6401C7A1E1E76EE_gshared_inline (Enumerator_t6EBC20E60FF235EC2930C4A6D91D169B87DDB828* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF0B0BBD184C27EB93E3481F4139B5C25CE536059_gshared (Enumerator_t6EBC20E60FF235EC2930C4A6D91D169B87DDB828* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t841DE24D270160BE54E3D380BDA3E88335619A9A PropertyCollection_1_GetEnumerator_m319B358349DB018D4ABDEA0032D2BD1F3623FD04_gshared (PropertyCollection_1_tBF011EE6246099B856281092B3A95E8EAC6A7883* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3FCE29D162F0A3AFBF6EE016D23F71BBB5CCA0E7_gshared (Enumerator_t841DE24D270160BE54E3D380BDA3E88335619A9A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6358C9DEA9A38C566A4A1705287332E0FA80E62_gshared_inline (Enumerator_t841DE24D270160BE54E3D380BDA3E88335619A9A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mFB5C7EC44B23AD122FC0F08EEC4AEE8615F2DDAC_gshared (Enumerator_t841DE24D270160BE54E3D380BDA3E88335619A9A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t0D1401C0611E0CB7F53B5135FB51B2072C4D7AF3 PropertyCollection_1_GetEnumerator_m62B0F98C2E5296F10D7B7239F0FF3902DD13AE88_gshared (PropertyCollection_1_t8CC1D13F2E6173E560314F0097651F02C0EDC548* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m065C0DA288BF6430E490729C099F629707FA87C9_gshared (Enumerator_t0D1401C0611E0CB7F53B5135FB51B2072C4D7AF3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m685B308324724C83FC3A172940EC6E97D9DCB02E_gshared_inline (Enumerator_t0D1401C0611E0CB7F53B5135FB51B2072C4D7AF3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB64F9230777BEABCCBC37A29C199F7AB30637A78_gshared (Enumerator_t0D1401C0611E0CB7F53B5135FB51B2072C4D7AF3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1761CC40B515D3EEEF28C40678DCB2B504824DC4 PropertyCollection_1_GetEnumerator_m8F8B1841E4FE8B9B512227F87C80D0B1841D47E3_gshared (PropertyCollection_1_tDF798E2F7DDFE2D1025D17B2E32E00593683FB75* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m878669C7BD465F0CFC401862C59377399FD156A3_gshared (Enumerator_t1761CC40B515D3EEEF28C40678DCB2B504824DC4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mF7493BF25FFB576F597EC12AFFF0E38DD2A775CB_gshared_inline (Enumerator_t1761CC40B515D3EEEF28C40678DCB2B504824DC4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC32ACB0808A02D10660EB5282B25FDC798D0CAA8_gshared (Enumerator_t1761CC40B515D3EEEF28C40678DCB2B504824DC4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD (ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426* __this, Type_t* ___0_source, Type_t* ___1_destination, Delegate_t** ___2_converter, const RuntimeMethod* method) ;
inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline (TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929* __this, Il2CppSharedGenericObject** ___0_value, const RuntimeMethod* method)
{
	return ((  Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* (*) (TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*, Il2CppSharedGenericObject**, const RuntimeMethod*))TypeConverter_2_Invoke_mF0FFFFF940DA8BB84CBB0B4BD67E875750ADA97C_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_m390B3F48332F46CE76AB45491A60ACDCCF521AAE (bool ___0_condition, String_t* ___1_message, const RuntimeMethod* method) ;
inline void List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, Type_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, Type_t*, const RuntimeMethod*))List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD (PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21 (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
inline Enumerator_t6A11FE63188973969841D4B13F1F4D021BCDF090 PropertyCollection_1_GetEnumerator_mE38CFFCE3C5FA28CDE56EB215091D499D3E30B1A (PropertyCollection_1_t66244703658BF1D2205CE0CD4AB73046D8F55445* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6A11FE63188973969841D4B13F1F4D021BCDF090 (*) (PropertyCollection_1_t66244703658BF1D2205CE0CD4AB73046D8F55445*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_mE38CFFCE3C5FA28CDE56EB215091D499D3E30B1A_gshared)(__this, method);
}
inline void Enumerator_Dispose_m6D00C142D6F1FC73850FAAAC923FBD179C9589E2 (Enumerator_t6A11FE63188973969841D4B13F1F4D021BCDF090* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6A11FE63188973969841D4B13F1F4D021BCDF090*, const RuntimeMethod*))Enumerator_Dispose_m6D00C142D6F1FC73850FAAAC923FBD179C9589E2_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_m4A076BF8CCA696A6F3870DD208594E4CC660DCC3_inline (Enumerator_t6A11FE63188973969841D4B13F1F4D021BCDF090* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t6A11FE63188973969841D4B13F1F4D021BCDF090*, const RuntimeMethod*))Enumerator_get_Current_m4A076BF8CCA696A6F3870DD208594E4CC660DCC3_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472 (Type_t* ___0_type, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_m4C1B14EE93EA1A800355F61BFDB25F3FAE9D0078 (Enumerator_t6A11FE63188973969841D4B13F1F4D021BCDF090* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6A11FE63188973969841D4B13F1F4D021BCDF090*, const RuntimeMethod*))Enumerator_MoveNext_m4C1B14EE93EA1A800355F61BFDB25F3FAE9D0078_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57 (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853 (Type_t* ___0_type, const RuntimeMethod* method) ;
inline Enumerator_t02CD38A297320277736A838E77ADDD6185E9DCBD PropertyCollection_1_GetEnumerator_m88CC0A850D644B5B1A8C83DA16F36705D2452366 (PropertyCollection_1_t41DA8EAD20A010C22EBFA2EC7462BB11CB90DE55* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t02CD38A297320277736A838E77ADDD6185E9DCBD (*) (PropertyCollection_1_t41DA8EAD20A010C22EBFA2EC7462BB11CB90DE55*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_m88CC0A850D644B5B1A8C83DA16F36705D2452366_gshared)(__this, method);
}
inline void Enumerator_Dispose_m42914F590490E31642B853AE63147400FA6C5004 (Enumerator_t02CD38A297320277736A838E77ADDD6185E9DCBD* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t02CD38A297320277736A838E77ADDD6185E9DCBD*, const RuntimeMethod*))Enumerator_Dispose_m42914F590490E31642B853AE63147400FA6C5004_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_m19810E67B637A3A877880098AE4A499814991A91_inline (Enumerator_t02CD38A297320277736A838E77ADDD6185E9DCBD* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t02CD38A297320277736A838E77ADDD6185E9DCBD*, const RuntimeMethod*))Enumerator_get_Current_m19810E67B637A3A877880098AE4A499814991A91_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m6D508ADD54444E21AE919F5BE3DE40A75D2EB260 (Enumerator_t02CD38A297320277736A838E77ADDD6185E9DCBD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t02CD38A297320277736A838E77ADDD6185E9DCBD*, const RuntimeMethod*))Enumerator_MoveNext_m6D508ADD54444E21AE919F5BE3DE40A75D2EB260_gshared)(__this, method);
}
inline Enumerator_t7C1888E7670B0BB598477ED601D368B0296B745F PropertyCollection_1_GetEnumerator_m46CDC1CE37C942F2A700CA11AEBE0086598EFF87 (PropertyCollection_1_t42406DF21850919439861BD109A614BB4F6F6516* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7C1888E7670B0BB598477ED601D368B0296B745F (*) (PropertyCollection_1_t42406DF21850919439861BD109A614BB4F6F6516*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_m46CDC1CE37C942F2A700CA11AEBE0086598EFF87_gshared)(__this, method);
}
inline void Enumerator_Dispose_m9158A161412B924939494966385016E1809D3E5A (Enumerator_t7C1888E7670B0BB598477ED601D368B0296B745F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7C1888E7670B0BB598477ED601D368B0296B745F*, const RuntimeMethod*))Enumerator_Dispose_m9158A161412B924939494966385016E1809D3E5A_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_mAFEF2F92894DEFDE1336AEE03C5D3BC6EB0BFDF5_inline (Enumerator_t7C1888E7670B0BB598477ED601D368B0296B745F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t7C1888E7670B0BB598477ED601D368B0296B745F*, const RuntimeMethod*))Enumerator_get_Current_mAFEF2F92894DEFDE1336AEE03C5D3BC6EB0BFDF5_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mD5C02BD53AC3252A965C5D5FE598D23A810A6021 (Enumerator_t7C1888E7670B0BB598477ED601D368B0296B745F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7C1888E7670B0BB598477ED601D368B0296B745F*, const RuntimeMethod*))Enumerator_MoveNext_mD5C02BD53AC3252A965C5D5FE598D23A810A6021_gshared)(__this, method);
}
inline Enumerator_tABFB270AC141E565FB4A2352299030FB92BB1B58 PropertyCollection_1_GetEnumerator_m3B85FA0F58F92E53A1C9D7DE4E85DC9693118FBD (PropertyCollection_1_t38EF76A7C3CEAA54EFBA77C99B94C014F791FA13* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tABFB270AC141E565FB4A2352299030FB92BB1B58 (*) (PropertyCollection_1_t38EF76A7C3CEAA54EFBA77C99B94C014F791FA13*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_m3B85FA0F58F92E53A1C9D7DE4E85DC9693118FBD_gshared)(__this, method);
}
inline void Enumerator_Dispose_m297B57E73891F7C6F2E390B3EC9CF5C16FF0C2FB (Enumerator_tABFB270AC141E565FB4A2352299030FB92BB1B58* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tABFB270AC141E565FB4A2352299030FB92BB1B58*, const RuntimeMethod*))Enumerator_Dispose_m297B57E73891F7C6F2E390B3EC9CF5C16FF0C2FB_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_mBFDA5CF8BD44713105285CABED92689E440F2B9B_inline (Enumerator_tABFB270AC141E565FB4A2352299030FB92BB1B58* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tABFB270AC141E565FB4A2352299030FB92BB1B58*, const RuntimeMethod*))Enumerator_get_Current_mBFDA5CF8BD44713105285CABED92689E440F2B9B_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mA26CA80661AFDFA4E9F65B17B70D431931A0931C (Enumerator_tABFB270AC141E565FB4A2352299030FB92BB1B58* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tABFB270AC141E565FB4A2352299030FB92BB1B58*, const RuntimeMethod*))Enumerator_MoveNext_mA26CA80661AFDFA4E9F65B17B70D431931A0931C_gshared)(__this, method);
}
inline Enumerator_tBC542700822D291E0D2BABBE7814E42A93ED5EAE PropertyCollection_1_GetEnumerator_m0AF481FB9C5D11A22FD7FC1086F688F54F392D70 (PropertyCollection_1_t7415350DFFCF7B59120A66892A01E43373218162* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBC542700822D291E0D2BABBE7814E42A93ED5EAE (*) (PropertyCollection_1_t7415350DFFCF7B59120A66892A01E43373218162*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_m0AF481FB9C5D11A22FD7FC1086F688F54F392D70_gshared)(__this, method);
}
inline void Enumerator_Dispose_mFB0C2F9621BD0686E061E203FB619CCB824ECA19 (Enumerator_tBC542700822D291E0D2BABBE7814E42A93ED5EAE* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBC542700822D291E0D2BABBE7814E42A93ED5EAE*, const RuntimeMethod*))Enumerator_Dispose_mFB0C2F9621BD0686E061E203FB619CCB824ECA19_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_mCC041B0CC2BA645600E4CB340AE8ABEB68CAE200_inline (Enumerator_tBC542700822D291E0D2BABBE7814E42A93ED5EAE* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tBC542700822D291E0D2BABBE7814E42A93ED5EAE*, const RuntimeMethod*))Enumerator_get_Current_mCC041B0CC2BA645600E4CB340AE8ABEB68CAE200_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mABE6B9B67B680B7A91EB4B026AD26E6F5A36A0B1 (Enumerator_tBC542700822D291E0D2BABBE7814E42A93ED5EAE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBC542700822D291E0D2BABBE7814E42A93ED5EAE*, const RuntimeMethod*))Enumerator_MoveNext_mABE6B9B67B680B7A91EB4B026AD26E6F5A36A0B1_gshared)(__this, method);
}
inline Enumerator_t9088FC23F01997F1718A1C16C5317EA0D8788D64 PropertyCollection_1_GetEnumerator_m8B59253F91C36DDC1D9123957BF1730F394D5667 (PropertyCollection_1_t7B1F6F7CD7DDA9062C74D469A2511AB47AB3B248* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9088FC23F01997F1718A1C16C5317EA0D8788D64 (*) (PropertyCollection_1_t7B1F6F7CD7DDA9062C74D469A2511AB47AB3B248*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_m8B59253F91C36DDC1D9123957BF1730F394D5667_gshared)(__this, method);
}
inline void Enumerator_Dispose_mCFD74709C6445EDE3DF5602D97DE8B9A61FAB1E6 (Enumerator_t9088FC23F01997F1718A1C16C5317EA0D8788D64* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9088FC23F01997F1718A1C16C5317EA0D8788D64*, const RuntimeMethod*))Enumerator_Dispose_mCFD74709C6445EDE3DF5602D97DE8B9A61FAB1E6_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_mF7AD50DF850378FB7F40A4B05513D9F506D3482D_inline (Enumerator_t9088FC23F01997F1718A1C16C5317EA0D8788D64* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9088FC23F01997F1718A1C16C5317EA0D8788D64*, const RuntimeMethod*))Enumerator_get_Current_mF7AD50DF850378FB7F40A4B05513D9F506D3482D_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m350CCC1D8258DC87D78E63061111157BCFF58E97 (Enumerator_t9088FC23F01997F1718A1C16C5317EA0D8788D64* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9088FC23F01997F1718A1C16C5317EA0D8788D64*, const RuntimeMethod*))Enumerator_MoveNext_m350CCC1D8258DC87D78E63061111157BCFF58E97_gshared)(__this, method);
}
inline Enumerator_t7D47CEE5594385EF5CAFF555A27EF450272A8210 PropertyCollection_1_GetEnumerator_m2661F621B2234B5E115A4F4F679182D6296140ED (PropertyCollection_1_tEA87734C1D3CD4DFFA79347A5D1415D7F696E486* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7D47CEE5594385EF5CAFF555A27EF450272A8210 (*) (PropertyCollection_1_tEA87734C1D3CD4DFFA79347A5D1415D7F696E486*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_m2661F621B2234B5E115A4F4F679182D6296140ED_gshared)(__this, method);
}
inline void Enumerator_Dispose_m57AD435DE425E5366CEE348EADF7AB3EA7F97B6A (Enumerator_t7D47CEE5594385EF5CAFF555A27EF450272A8210* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7D47CEE5594385EF5CAFF555A27EF450272A8210*, const RuntimeMethod*))Enumerator_Dispose_m57AD435DE425E5366CEE348EADF7AB3EA7F97B6A_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_mDD6AEAE70523B332674906165BABED12125CF0B0_inline (Enumerator_t7D47CEE5594385EF5CAFF555A27EF450272A8210* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t7D47CEE5594385EF5CAFF555A27EF450272A8210*, const RuntimeMethod*))Enumerator_get_Current_mDD6AEAE70523B332674906165BABED12125CF0B0_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mB013D6A728F41E43D381D6E2A22E439C0553483A (Enumerator_t7D47CEE5594385EF5CAFF555A27EF450272A8210* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7D47CEE5594385EF5CAFF555A27EF450272A8210*, const RuntimeMethod*))Enumerator_MoveNext_mB013D6A728F41E43D381D6E2A22E439C0553483A_gshared)(__this, method);
}
inline Enumerator_tCC5ED1F73E39E7B14964CBE64F0318FB042AB70D PropertyCollection_1_GetEnumerator_mFAB4E36E1633C65180CD0CD9AA1ABBF982BC9723 (PropertyCollection_1_t89A7A8D977964C1E959381AD26D9A1A3F4731E9A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCC5ED1F73E39E7B14964CBE64F0318FB042AB70D (*) (PropertyCollection_1_t89A7A8D977964C1E959381AD26D9A1A3F4731E9A*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_mFAB4E36E1633C65180CD0CD9AA1ABBF982BC9723_gshared)(__this, method);
}
inline void Enumerator_Dispose_mC9D395C948135836D1B9E51F23BA0A63E51464EF (Enumerator_tCC5ED1F73E39E7B14964CBE64F0318FB042AB70D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCC5ED1F73E39E7B14964CBE64F0318FB042AB70D*, const RuntimeMethod*))Enumerator_Dispose_mC9D395C948135836D1B9E51F23BA0A63E51464EF_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_m34C61C2E196011199D7301725A46DC64EDF456FB_inline (Enumerator_tCC5ED1F73E39E7B14964CBE64F0318FB042AB70D* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tCC5ED1F73E39E7B14964CBE64F0318FB042AB70D*, const RuntimeMethod*))Enumerator_get_Current_m34C61C2E196011199D7301725A46DC64EDF456FB_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m883248A06E16EFE4BBE928FA0A04CDDF3ADCD991 (Enumerator_tCC5ED1F73E39E7B14964CBE64F0318FB042AB70D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCC5ED1F73E39E7B14964CBE64F0318FB042AB70D*, const RuntimeMethod*))Enumerator_MoveNext_m883248A06E16EFE4BBE928FA0A04CDDF3ADCD991_gshared)(__this, method);
}
inline Enumerator_tB47F44C0354494C310D40DBE5134D136EB22B77C PropertyCollection_1_GetEnumerator_m5F70F76C1799BD1C97C994FF2D61A0F26B49700A (PropertyCollection_1_tEAF3652EA2DFE0F11DAB5F4E6DE7D59C2E9DC274* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB47F44C0354494C310D40DBE5134D136EB22B77C (*) (PropertyCollection_1_tEAF3652EA2DFE0F11DAB5F4E6DE7D59C2E9DC274*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_m5F70F76C1799BD1C97C994FF2D61A0F26B49700A_gshared)(__this, method);
}
inline void Enumerator_Dispose_mD847F533540BB2C9E45BE2EBD5DE23F3D0DF664A (Enumerator_tB47F44C0354494C310D40DBE5134D136EB22B77C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB47F44C0354494C310D40DBE5134D136EB22B77C*, const RuntimeMethod*))Enumerator_Dispose_mD847F533540BB2C9E45BE2EBD5DE23F3D0DF664A_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_m1E752B432C4D0A7739023F58A13CB62E0ECAE9F4_inline (Enumerator_tB47F44C0354494C310D40DBE5134D136EB22B77C* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tB47F44C0354494C310D40DBE5134D136EB22B77C*, const RuntimeMethod*))Enumerator_get_Current_m1E752B432C4D0A7739023F58A13CB62E0ECAE9F4_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m815333E0B88342B338332EA090386A067099D138 (Enumerator_tB47F44C0354494C310D40DBE5134D136EB22B77C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB47F44C0354494C310D40DBE5134D136EB22B77C*, const RuntimeMethod*))Enumerator_MoveNext_m815333E0B88342B338332EA090386A067099D138_gshared)(__this, method);
}
inline Enumerator_t4EFFFB85C3620D0B1C29E3F817701CBB89EDEE55 PropertyCollection_1_GetEnumerator_mCF12480CD2A1FA14D1B2A924C0312B09C6B83AC1 (PropertyCollection_1_t29CF2454D90FEAB4DE222C38D4C20956E65A44EA* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4EFFFB85C3620D0B1C29E3F817701CBB89EDEE55 (*) (PropertyCollection_1_t29CF2454D90FEAB4DE222C38D4C20956E65A44EA*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_mCF12480CD2A1FA14D1B2A924C0312B09C6B83AC1_gshared)(__this, method);
}
inline void Enumerator_Dispose_mC1CE6D06E1F4D502D2E28462B91DD2B75B5352A9 (Enumerator_t4EFFFB85C3620D0B1C29E3F817701CBB89EDEE55* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4EFFFB85C3620D0B1C29E3F817701CBB89EDEE55*, const RuntimeMethod*))Enumerator_Dispose_mC1CE6D06E1F4D502D2E28462B91DD2B75B5352A9_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_m07E2669886B55B6E94309FE2365CB7EB7157F980_inline (Enumerator_t4EFFFB85C3620D0B1C29E3F817701CBB89EDEE55* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t4EFFFB85C3620D0B1C29E3F817701CBB89EDEE55*, const RuntimeMethod*))Enumerator_get_Current_m07E2669886B55B6E94309FE2365CB7EB7157F980_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m130B0787A62F716A9BE303FF0DF5E9EE41524583 (Enumerator_t4EFFFB85C3620D0B1C29E3F817701CBB89EDEE55* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4EFFFB85C3620D0B1C29E3F817701CBB89EDEE55*, const RuntimeMethod*))Enumerator_MoveNext_m130B0787A62F716A9BE303FF0DF5E9EE41524583_gshared)(__this, method);
}
inline Enumerator_t1BC64DC5630D00766F0D7E596856131BEFE3727C PropertyCollection_1_GetEnumerator_m1DF9AB90326D9450EF0524141F7D09BBDC3A3BBD (PropertyCollection_1_t5C455411091F5AB1DBBCC2701C0DFC7512D7D140* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1BC64DC5630D00766F0D7E596856131BEFE3727C (*) (PropertyCollection_1_t5C455411091F5AB1DBBCC2701C0DFC7512D7D140*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_m1DF9AB90326D9450EF0524141F7D09BBDC3A3BBD_gshared)(__this, method);
}
inline void Enumerator_Dispose_m844C7549472B89A0B070CB7169165A047A8C327F (Enumerator_t1BC64DC5630D00766F0D7E596856131BEFE3727C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1BC64DC5630D00766F0D7E596856131BEFE3727C*, const RuntimeMethod*))Enumerator_Dispose_m844C7549472B89A0B070CB7169165A047A8C327F_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_m32941DB97468B3FD7738E8EA76EDFEC347B01799_inline (Enumerator_t1BC64DC5630D00766F0D7E596856131BEFE3727C* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t1BC64DC5630D00766F0D7E596856131BEFE3727C*, const RuntimeMethod*))Enumerator_get_Current_m32941DB97468B3FD7738E8EA76EDFEC347B01799_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mA9FF27CB7CFD899BBC98F50E4D7E0637F5107C92 (Enumerator_t1BC64DC5630D00766F0D7E596856131BEFE3727C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1BC64DC5630D00766F0D7E596856131BEFE3727C*, const RuntimeMethod*))Enumerator_MoveNext_mA9FF27CB7CFD899BBC98F50E4D7E0637F5107C92_gshared)(__this, method);
}
inline Enumerator_t3648701D3843B13744B06A771CE13CE211422FFA PropertyCollection_1_GetEnumerator_m2CE64B681A1082F1C6FD29EA6D8AED9A0559AE73 (PropertyCollection_1_t8281685F99C8C57CC2DA275986F4AF17734385CC* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3648701D3843B13744B06A771CE13CE211422FFA (*) (PropertyCollection_1_t8281685F99C8C57CC2DA275986F4AF17734385CC*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_m2CE64B681A1082F1C6FD29EA6D8AED9A0559AE73_gshared)(__this, method);
}
inline void Enumerator_Dispose_m4EE84632E2B1A018361AB5A8DDC6A0058949615B (Enumerator_t3648701D3843B13744B06A771CE13CE211422FFA* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3648701D3843B13744B06A771CE13CE211422FFA*, const RuntimeMethod*))Enumerator_Dispose_m4EE84632E2B1A018361AB5A8DDC6A0058949615B_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_m2FE62C0232D38150B8D6179F0140570DA16480DE_inline (Enumerator_t3648701D3843B13744B06A771CE13CE211422FFA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t3648701D3843B13744B06A771CE13CE211422FFA*, const RuntimeMethod*))Enumerator_get_Current_m2FE62C0232D38150B8D6179F0140570DA16480DE_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m26BD47B4AFC03EABD946384168856845E86764E3 (Enumerator_t3648701D3843B13744B06A771CE13CE211422FFA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3648701D3843B13744B06A771CE13CE211422FFA*, const RuntimeMethod*))Enumerator_MoveNext_m26BD47B4AFC03EABD946384168856845E86764E3_gshared)(__this, method);
}
inline Enumerator_t7D642C44F9F61CC011E38CB49A73BD0A1C56E56C PropertyCollection_1_GetEnumerator_m5448C5CDF0F9833CE40BD4E25C120C66B1B7FA0C (PropertyCollection_1_t9596CB6B288440AB4D49A18019653CC3030C0A1A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7D642C44F9F61CC011E38CB49A73BD0A1C56E56C (*) (PropertyCollection_1_t9596CB6B288440AB4D49A18019653CC3030C0A1A*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_m5448C5CDF0F9833CE40BD4E25C120C66B1B7FA0C_gshared)(__this, method);
}
inline void Enumerator_Dispose_m906EE111B39E8587E0847C54533DB862D11F0CCA (Enumerator_t7D642C44F9F61CC011E38CB49A73BD0A1C56E56C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7D642C44F9F61CC011E38CB49A73BD0A1C56E56C*, const RuntimeMethod*))Enumerator_Dispose_m906EE111B39E8587E0847C54533DB862D11F0CCA_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_m90C4F5D7AF82872EF38E6933D951B81A92F1D195_inline (Enumerator_t7D642C44F9F61CC011E38CB49A73BD0A1C56E56C* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t7D642C44F9F61CC011E38CB49A73BD0A1C56E56C*, const RuntimeMethod*))Enumerator_get_Current_m90C4F5D7AF82872EF38E6933D951B81A92F1D195_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m35843750D76F2B82BCFDC6AEDBB006AF5E4CA245 (Enumerator_t7D642C44F9F61CC011E38CB49A73BD0A1C56E56C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7D642C44F9F61CC011E38CB49A73BD0A1C56E56C*, const RuntimeMethod*))Enumerator_MoveNext_m35843750D76F2B82BCFDC6AEDBB006AF5E4CA245_gshared)(__this, method);
}
inline Enumerator_tF643BE0D5A76D18176FCE425FA913FF6C100A639 PropertyCollection_1_GetEnumerator_m5644AF02523BF123704202E76240E428CAC495CF (PropertyCollection_1_tAA96E23293BF5D632DF124803ADDBE5B41F5293A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF643BE0D5A76D18176FCE425FA913FF6C100A639 (*) (PropertyCollection_1_tAA96E23293BF5D632DF124803ADDBE5B41F5293A*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_m5644AF02523BF123704202E76240E428CAC495CF_gshared)(__this, method);
}
inline void Enumerator_Dispose_mC43EE54272E8CBEEE682CC02E1C9641057DB70CD (Enumerator_tF643BE0D5A76D18176FCE425FA913FF6C100A639* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF643BE0D5A76D18176FCE425FA913FF6C100A639*, const RuntimeMethod*))Enumerator_Dispose_mC43EE54272E8CBEEE682CC02E1C9641057DB70CD_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_m9CFB4AE26006B00A090EB97E0AFFCD190D7916D4_inline (Enumerator_tF643BE0D5A76D18176FCE425FA913FF6C100A639* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tF643BE0D5A76D18176FCE425FA913FF6C100A639*, const RuntimeMethod*))Enumerator_get_Current_m9CFB4AE26006B00A090EB97E0AFFCD190D7916D4_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mB80F85005AD34E625BC68FCE4F9A68A93DD7E06C (Enumerator_tF643BE0D5A76D18176FCE425FA913FF6C100A639* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF643BE0D5A76D18176FCE425FA913FF6C100A639*, const RuntimeMethod*))Enumerator_MoveNext_mB80F85005AD34E625BC68FCE4F9A68A93DD7E06C_gshared)(__this, method);
}
inline Enumerator_t6EBC20E60FF235EC2930C4A6D91D169B87DDB828 PropertyCollection_1_GetEnumerator_mE9239C34386B0A920E1AE83584AFA811EE88312E (PropertyCollection_1_tC598A73CD7DDE2371D521A9745AF6D6AB663A796* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6EBC20E60FF235EC2930C4A6D91D169B87DDB828 (*) (PropertyCollection_1_tC598A73CD7DDE2371D521A9745AF6D6AB663A796*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_mE9239C34386B0A920E1AE83584AFA811EE88312E_gshared)(__this, method);
}
inline void Enumerator_Dispose_m9B87C155ADCA4D519FA81C8ED158AC944372CC3E (Enumerator_t6EBC20E60FF235EC2930C4A6D91D169B87DDB828* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6EBC20E60FF235EC2930C4A6D91D169B87DDB828*, const RuntimeMethod*))Enumerator_Dispose_m9B87C155ADCA4D519FA81C8ED158AC944372CC3E_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_m668EFCD6C6CE28C7E1BCF318C6401C7A1E1E76EE_inline (Enumerator_t6EBC20E60FF235EC2930C4A6D91D169B87DDB828* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t6EBC20E60FF235EC2930C4A6D91D169B87DDB828*, const RuntimeMethod*))Enumerator_get_Current_m668EFCD6C6CE28C7E1BCF318C6401C7A1E1E76EE_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mF0B0BBD184C27EB93E3481F4139B5C25CE536059 (Enumerator_t6EBC20E60FF235EC2930C4A6D91D169B87DDB828* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6EBC20E60FF235EC2930C4A6D91D169B87DDB828*, const RuntimeMethod*))Enumerator_MoveNext_mF0B0BBD184C27EB93E3481F4139B5C25CE536059_gshared)(__this, method);
}
inline Enumerator_t841DE24D270160BE54E3D380BDA3E88335619A9A PropertyCollection_1_GetEnumerator_m319B358349DB018D4ABDEA0032D2BD1F3623FD04 (PropertyCollection_1_tBF011EE6246099B856281092B3A95E8EAC6A7883* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t841DE24D270160BE54E3D380BDA3E88335619A9A (*) (PropertyCollection_1_tBF011EE6246099B856281092B3A95E8EAC6A7883*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_m319B358349DB018D4ABDEA0032D2BD1F3623FD04_gshared)(__this, method);
}
inline void Enumerator_Dispose_m3FCE29D162F0A3AFBF6EE016D23F71BBB5CCA0E7 (Enumerator_t841DE24D270160BE54E3D380BDA3E88335619A9A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t841DE24D270160BE54E3D380BDA3E88335619A9A*, const RuntimeMethod*))Enumerator_Dispose_m3FCE29D162F0A3AFBF6EE016D23F71BBB5CCA0E7_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_mD6358C9DEA9A38C566A4A1705287332E0FA80E62_inline (Enumerator_t841DE24D270160BE54E3D380BDA3E88335619A9A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t841DE24D270160BE54E3D380BDA3E88335619A9A*, const RuntimeMethod*))Enumerator_get_Current_mD6358C9DEA9A38C566A4A1705287332E0FA80E62_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mFB5C7EC44B23AD122FC0F08EEC4AEE8615F2DDAC (Enumerator_t841DE24D270160BE54E3D380BDA3E88335619A9A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t841DE24D270160BE54E3D380BDA3E88335619A9A*, const RuntimeMethod*))Enumerator_MoveNext_mFB5C7EC44B23AD122FC0F08EEC4AEE8615F2DDAC_gshared)(__this, method);
}
inline Enumerator_t0D1401C0611E0CB7F53B5135FB51B2072C4D7AF3 PropertyCollection_1_GetEnumerator_m62B0F98C2E5296F10D7B7239F0FF3902DD13AE88 (PropertyCollection_1_t8CC1D13F2E6173E560314F0097651F02C0EDC548* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t0D1401C0611E0CB7F53B5135FB51B2072C4D7AF3 (*) (PropertyCollection_1_t8CC1D13F2E6173E560314F0097651F02C0EDC548*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_m62B0F98C2E5296F10D7B7239F0FF3902DD13AE88_gshared)(__this, method);
}
inline void Enumerator_Dispose_m065C0DA288BF6430E490729C099F629707FA87C9 (Enumerator_t0D1401C0611E0CB7F53B5135FB51B2072C4D7AF3* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0D1401C0611E0CB7F53B5135FB51B2072C4D7AF3*, const RuntimeMethod*))Enumerator_Dispose_m065C0DA288BF6430E490729C099F629707FA87C9_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_m685B308324724C83FC3A172940EC6E97D9DCB02E_inline (Enumerator_t0D1401C0611E0CB7F53B5135FB51B2072C4D7AF3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t0D1401C0611E0CB7F53B5135FB51B2072C4D7AF3*, const RuntimeMethod*))Enumerator_get_Current_m685B308324724C83FC3A172940EC6E97D9DCB02E_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mB64F9230777BEABCCBC37A29C199F7AB30637A78 (Enumerator_t0D1401C0611E0CB7F53B5135FB51B2072C4D7AF3* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0D1401C0611E0CB7F53B5135FB51B2072C4D7AF3*, const RuntimeMethod*))Enumerator_MoveNext_mB64F9230777BEABCCBC37A29C199F7AB30637A78_gshared)(__this, method);
}
inline Enumerator_t1761CC40B515D3EEEF28C40678DCB2B504824DC4 PropertyCollection_1_GetEnumerator_m8F8B1841E4FE8B9B512227F87C80D0B1841D47E3 (PropertyCollection_1_tDF798E2F7DDFE2D1025D17B2E32E00593683FB75* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1761CC40B515D3EEEF28C40678DCB2B504824DC4 (*) (PropertyCollection_1_tDF798E2F7DDFE2D1025D17B2E32E00593683FB75*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_m8F8B1841E4FE8B9B512227F87C80D0B1841D47E3_gshared)(__this, method);
}
inline void Enumerator_Dispose_m878669C7BD465F0CFC401862C59377399FD156A3 (Enumerator_t1761CC40B515D3EEEF28C40678DCB2B504824DC4* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1761CC40B515D3EEEF28C40678DCB2B504824DC4*, const RuntimeMethod*))Enumerator_Dispose_m878669C7BD465F0CFC401862C59377399FD156A3_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_mF7493BF25FFB576F597EC12AFFF0E38DD2A775CB_inline (Enumerator_t1761CC40B515D3EEEF28C40678DCB2B504824DC4* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t1761CC40B515D3EEEF28C40678DCB2B504824DC4*, const RuntimeMethod*))Enumerator_get_Current_mF7493BF25FFB576F597EC12AFFF0E38DD2A775CB_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mC32ACB0808A02D10660EB5282B25FDC798D0CAA8 (Enumerator_t1761CC40B515D3EEEF28C40678DCB2B504824DC4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1761CC40B515D3EEEF28C40678DCB2B504824DC4*, const RuntimeMethod*))Enumerator_MoveNext_mC32ACB0808A02D10660EB5282B25FDC798D0CAA8_gshared)(__this, method);
}
inline void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared)(__this, ___0_item, method);
}
// Method Definition Index: 164204
// Method Definition Index: 164204
// Method Definition Index: 164204
// Method Definition Index: 164204
// Method Definition Index: 164204
// Method Definition Index: 164204
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisFixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C_m2458BC1D00842600DEEF849C27B21DC69564C5D3_gshared (Il2CppSharedGenericObject* ___0_source, FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C*)L_21 = ((*(FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m99D6404502E8C40A52BBC47B8E5EC4029D482BC3_gshared (Il2CppSharedGenericObject* ___0_source, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26*)L_21 = ((*(StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mD9C3A02A056626800D47BBC902EF0708757DAF0F_gshared (Il2CppSharedGenericObject* ___0_source, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_21 = ((*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_21)->___m_Value), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mD451898CDC76C9DD526479545A7321F518C4DC59_gshared (Il2CppSharedGenericObject* ___0_source, StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)L_21 = ((*(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)L_21)->___m_Value), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m866F8070C798C3101EADAFFA95CE499CA35639B1_gshared (Il2CppSharedGenericObject* ___0_source, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_21 = ((*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_21)->___m_Value), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mD6196ED49A39EA7B356FEB9951CC4A5B05B80462_gshared (Il2CppSharedGenericObject* ___0_source, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_21 = ((*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_21)->___m_Value), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mCC2006107932D1ADDE3E881221E916BD72586347_gshared (Il2CppSharedGenericObject* ___0_source, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)L_21 = ((*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m55C3E835924F1D0D478BFD8E04A7717A141BCC29_gshared (Il2CppSharedGenericObject* ___0_source, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_21 = ((*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_21)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_21)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_21)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_21)->___m_VectorImage), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m633C02645A7541323690C2760EA8D0B91B3CC564_gshared (Il2CppSharedGenericObject* ___0_source, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_21 = ((*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m2A501F482E6F6CF563EA56552C89AD8E13E5E053_gshared (Il2CppSharedGenericObject* ___0_source, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_21 = ((*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mD74AF6C48598EE558112BA52B7A501BD3194F691_gshared (Il2CppSharedGenericObject* ___0_source, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_21 = ((*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD90E8A98684E7EC8D633A9E9863EB7A416A080D7_gshared (Il2CppSharedGenericObject* ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		bool* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(bool));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		bool* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(bool));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		bool* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(bool*)L_21 = ((*(bool*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		bool* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(bool));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mE13A22C91B3A086F8C07D0994113DF811E68D3CE_gshared (Il2CppSharedGenericObject* ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_21 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m9F42B2C2D567352780FB420F0D89F8763F728983_gshared (Il2CppSharedGenericObject* ___0_source, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_21 = ((*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mF296A05E1CB7F583ED31B9F0E0E4FC51661F73B5_gshared (Il2CppSharedGenericObject* ___0_source, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_21 = ((*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m8A007CC9B626BEB8B6E839F6EE09F2C982E91B9F_gshared (Il2CppSharedGenericObject* ___0_source, FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_21 = ((*(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Il2CppCodeGenWriteBarrier((void**)&(((FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_21)->___m_CustomDefinition), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m01C24E5FEC7C50CFBAA0620FC6C7554561B48C5A_gshared (Il2CppSharedGenericObject* ___0_source, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_21 = ((*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_21)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_21)->___m_FontAsset), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDD31AAC572D4D3747FA4863F11FDF21131EA25F3_gshared (Il2CppSharedGenericObject* ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		int32_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int32_t));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		int32_t* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(int32_t));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		int32_t* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(int32_t*)L_21 = ((*(int32_t*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		int32_t* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(int32_t));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m527E604222B74EEA570D6456459F8F2C1E48216A_gshared (Il2CppSharedGenericObject* ___0_source, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_21 = ((*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_mD30EE6EB25BBD3BE5ECC7EC4570B9EB407E40F8D_gshared (Il2CppSharedGenericObject* ___0_source, MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_21 = ((*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_21)->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_21)->___propertyValues), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m66AE3C5B9D94CAB3744298210CF7E1F5223CF439_gshared (Il2CppSharedGenericObject* ___0_source, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_21 = ((*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mF2DFCA116C04188B7536D26F5A5961AD4C51DEBB_gshared (Il2CppSharedGenericObject* ___0_source, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_21 = ((*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m3477BD30AC007BD3AD1B0FE3FB3D850121F9B60A_gshared (Il2CppSharedGenericObject* ___0_source, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_21 = ((*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m28287CDC79FCC6890BB306BB62537989AFC8E92A_gshared (Il2CppSharedGenericObject* ___0_source, float* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		float* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(float));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		float* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(float));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		float* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(float*)L_21 = ((*(float*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		float* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(float));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m1E5C07B73708D94A2E0A72EDC9B80DC353E95E63_gshared (Il2CppSharedGenericObject* ___0_source, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_21 = ((*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_21)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_21)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_21)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_21)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mD8F00E356A2939491402C1722655538028F4B46C_gshared (Il2CppSharedGenericObject* ___0_source, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_21 = ((*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m600917AA69D6C28EA9387D637D4D5C7523998424_gshared (Il2CppSharedGenericObject* ___0_source, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_21 = ((*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m05860A0CFADFF648AECAD782075167713467C573_gshared (Il2CppSharedGenericObject* ___0_source, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_21 = ((*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m79A9D0286412B2F46797355AE43DCA736BA46239_gshared (Il2CppSharedGenericObject* ___0_source, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_21 = ((*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m5F44400F3380DD16F43AF2B26423C9433FC3E09D_gshared (Il2CppSharedGenericObject* ___0_source, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_21 = ((*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m14B1DB548D1860899F5C0EFFE8EB6166CAEDEFBB_gshared (Il2CppSharedGenericObject* ___0_source, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_21 = ((*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m119018014527744EF8831B768385AD0FCD61C31C_gshared (Il2CppSharedGenericObject* ___0_source, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_21 = ((*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_21)->___m_Value), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m7AEF71BD4513237AE17B4161CDF9CBBD826AE66C_gshared (Il2CppSharedGenericObject* ___0_source, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_21 = ((*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_21)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_21)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m8FAF55FBA4A7D760FEF86577C3FC0714B91E7BAA_gshared (Il2CppSharedGenericObject* ___0_source, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_21 = ((*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m793265089DE256188A8BD73199EA8A189E563841_gshared (Il2CppSharedGenericObject* ___0_source, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_21 = ((*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_mC7A632F3E2D58B15813E5616DFC851B3410FBA31_gshared (Il2CppSharedGenericObject* ___0_source, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_21 = ((*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_21)->___m_Value))->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_21)->___m_Value))->___propertyValues), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mE5C6E0BB516B4472F1806B58F71AAF258415E9D5_gshared (Il2CppSharedGenericObject* ___0_source, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_21 = ((*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_21)->___U3CnameU3Ek__BackingField), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mE081F767B5982BA86FA384B5F73E377754FEA1ED_gshared (Il2CppSharedGenericObject* ___0_source, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_21 = ((*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m7BF85D612CF7C2D1E96964A290DBFD9D384AF493_gshared (Il2CppSharedGenericObject* ___0_source, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_21 = ((*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m0A77200F22765DC6ED2ED451CC005E908F06A11C_gshared (Il2CppSharedGenericObject* ___0_source, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_21 = ((*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m853A450EC24CDBC2E14281CE2C04239CF7E7FA60_gshared (Il2CppSharedGenericObject* ___0_source, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_21 = ((*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mEE7F4A8F63991814B174D57FCF6FC2F496DF7EA5_gshared (Il2CppSharedGenericObject* ___0_source, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_21 = ((*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m8399BB721318A07B2CB98B770031EFC5EF12E7F7_gshared (Il2CppSharedGenericObject* ___0_source, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_21 = ((*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m4EB0464CDB4975842B63C67462BDBB01612FABCB_gshared (Il2CppSharedGenericObject* ___0_source, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_21 = ((*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_mAF37628D99B7AE42B9420533D24C7F5F7B94D986_gshared (Il2CppSharedGenericObject* ___0_source, TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_21 = ((*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m05759354955D3A449C3EB327B9D0FC2995D78A16_gshared (Il2CppSharedGenericObject* ___0_source, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_21 = ((*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m890F9B74999D7F62E686CB9028C19252CF5B3162_gshared (Il2CppSharedGenericObject* ___0_source, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_21 = ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mF9CB9E3DF63B70278C7644C14E87765DFF86202E_gshared (Il2CppSharedGenericObject* ___0_source, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_21 = ((*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m15BCEE9792C8945FDE5437EC42A3AEC4C84FDC99_gshared (Il2CppSharedGenericObject* ___0_source, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_21 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mEAC9854D622F8E0FCDE60F2FD1E880F17E1D98BD_gshared (Il2CppSharedGenericObject* ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_21 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m304562AB878726D52E63977FEBBF8A8E1784C510_gshared (Il2CppSharedGenericObject* ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_21 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m300E03EBD0D44EC7E31CEDAE2EDDBCD68477B15A_gshared (Il2CppSharedGenericObject* ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_21 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m69CA52F1857A6F0CC726661F95B30610A2A5A056_gshared (Il2CppSharedGenericObject* ___0_source, Il2CppSharedGenericObject** ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Il2CppSharedGenericObject** L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		Il2CppSharedGenericObject** L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(Il2CppSharedGenericObject*));
		return (bool)1;
	}

IL_005d:
	{
		bool L_14 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_14)
		{
			goto IL_008b;
		}
	}
	{
		Il2CppSharedGenericObject** L_15 = ___1_destination;
		Il2CppSharedGenericObject* L_16 = ___0_source;
		*(Il2CppSharedGenericObject**)L_15 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_16, il2cpp_rgctx_data(method->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_15, (void*)((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_16, il2cpp_rgctx_data(method->rgctx_data, 1))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_18, L_20, (&V_0), NULL);
		if (!L_21)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_22 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23;
		L_23 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_23;
		Il2CppSharedGenericObject** L_24 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_25 = V_1;
		*(Il2CppSharedGenericObject**)L_24 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_25, il2cpp_rgctx_data(method->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_24, (void*)((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_25, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_26, NULL);
		return L_27;
	}

IL_00ce:
	{
		Il2CppSharedGenericObject** L_28 = ___1_destination;
		il2cpp_codegen_initobj(L_28, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppSharedGenericObject_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m0BDE3F76A27AF8EE49D883FDA385E6DC4AED439D_gshared (Il2CppSharedGenericObject* ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		int32_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int32_t));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = ___0_source;
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_11, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		Il2CppSharedGenericObject* L_12 = ___0_source;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		int32_t* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, sizeof(int32_t));
		return (bool)1;
	}

IL_005d:
	{
		goto IL_008b;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_15, L_17, (&V_0), NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_19 = V_0;
		NullCheck(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20;
		L_20 = TypeConverter_2_Invoke_m505082E2BF2F00928E2C210993C384E9C7DD8F4C_inline(((TypeConverter_2_tBF306F45F2D72E38547B079FDBCD25590B3E3929*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_20;
		int32_t* L_21 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		*(int32_t*)L_21 = ((*(int32_t*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		return L_24;
	}

IL_00ce:
	{
		int32_t* L_25 = ___1_destination;
		il2cpp_codegen_initobj(L_25, sizeof(int32_t));
		return (bool)0;
	}
}
// Method Definition Index: 164204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mBA69D37B4DED14E1204D55EB28F6BA7FA787ADBA_gshared (Il2CppFullySharedGenericAny ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TDestination_t0A90A28DE457357F0B77F378F2E29196394B43FA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_TSource_tBCE2D9186264DE5C946EF8EF446BE0727E8E5BB1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_tBCE2D9186264DE5C946EF8EF446BE0727E8E5BB1);
	const Il2CppFullySharedGenericAny L_13 = L_11;
	const Il2CppFullySharedGenericAny L_18 = L_11;
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TDestination_t0A90A28DE457357F0B77F378F2E29196394B43FA);
	const Il2CppFullySharedGenericAny L_29 = L_19;
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, SizeOf_TDestination_t0A90A28DE457357F0B77F378F2E29196394B43FA);
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___0_source : &___0_source), SizeOf_TSource_tBCE2D9186264DE5C946EF8EF446BE0727E8E5BB1);
		bool L_12 = il2cpp_codegen_isinst_runtime_check_class(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var, L_11);
		if (!L_12)
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___0_source : &___0_source), SizeOf_TSource_tBCE2D9186264DE5C946EF8EF446BE0727E8E5BB1);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_13);
		if (L_14)
		{
			goto IL_005d;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, SizeOf_TDestination_t0A90A28DE457357F0B77F378F2E29196394B43FA);
		return (bool)1;
	}

IL_005d:
	{
		bool L_16 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_16)
		{
			goto IL_008b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_17 = ___1_destination;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___0_source : &___0_source), SizeOf_TSource_tBCE2D9186264DE5C946EF8EF446BE0727E8E5BB1);
		il2cpp_codegen_box_unbox(L_18, L_19, SizeOf_TDestination_t0A90A28DE457357F0B77F378F2E29196394B43FA, il2cpp_rgctx_data(method->rgctx_data, 4), il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_17, L_19, SizeOf_TDestination_t0A90A28DE457357F0B77F378F2E29196394B43FA);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_17, (void*)L_19);
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_21, L_23, (&V_0), NULL);
		if (!L_24)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_25 = V_0;
		NullCheck(((TypeConverter_2_t092CBFB8B2C91DDB61909080B4E1A2C19896B01F*)Castclass((RuntimeObject*)L_25, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26;
		L_26 = InvokerFuncInvoker1< Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), ((TypeConverter_2_t092CBFB8B2C91DDB61909080B4E1A2C19896B01F*)Castclass((RuntimeObject*)L_25, il2cpp_rgctx_data(method->rgctx_data, 5))), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___0_source : &___0_source));
		V_1 = L_26;
		Il2CppFullySharedGenericAny* L_27 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_28 = V_1;
		void* L_30 = UnBox_Any((RuntimeObject*)L_28, il2cpp_rgctx_data(method->rgctx_data, 1), L_29);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_27, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_30)), SizeOf_TDestination_t0A90A28DE457357F0B77F378F2E29196394B43FA);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_27, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_30)));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_31 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_31, NULL);
		return L_32;
	}

IL_00ce:
	{
		Il2CppFullySharedGenericAny* L_33 = ___1_destination;
		il2cpp_codegen_initobj(L_33, SizeOf_TDestination_t0A90A28DE457357F0B77F378F2E29196394B43FA);
		return (bool)0;
	}
}
// Method Definition Index: 165861
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* TypeExtensions_GetAttribute_TisIl2CppSharedGenericObject_m44F96B7FE2ED9601D982C126ED5558DA5AA25830_gshared (Type_t* ___0_type, bool ___1_inherit, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27DBD6F813162A38E3FA9501FBCAA10F18CC6F6D);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		Type_t* L_0 = ___0_type;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3 = ___1_inherit;
		NullCheck((MemberInfo_t*)L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, Type_t*, bool >::Invoke(12, (MemberInfo_t*)L_0, L_2, L_3);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_m390B3F48332F46CE76AB45491A60ACDCCF521AAE(L_4, _stringLiteral27DBD6F813162A38E3FA9501FBCAA10F18CC6F6D, NULL);
		Type_t* L_5 = ___0_type;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8 = ___1_inherit;
		NullCheck((MemberInfo_t*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9;
		L_9 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(14, (MemberInfo_t*)L_5, L_7, L_8);
		NullCheck(L_9);
		int32_t L_10 = 0;
		RuntimeObject* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// Method Definition Index: 165862
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeExtensions_IsDefinedGetInheritedTypes_TisIl2CppSharedGenericObject_mE3B340FA53A58FE49B3D74D8AF4584E57A712D4A_gshared (Type_t* ___0_type, List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___1_types, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		goto IL_0024;
	}

IL_0002:
	{
		Type_t* L_0 = ___0_type;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck((MemberInfo_t*)L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, Type_t*, bool >::Invoke(12, (MemberInfo_t*)L_0, L_2, (bool)1);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_4 = ___1_types;
		Type_t* L_5 = ___0_type;
		NullCheck(L_4);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_4, L_5, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
	}

IL_001c:
	{
		Type_t* L_6 = ___0_type;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = VirtualFuncInvoker0< Type_t* >::Invoke(115, L_6);
		___0_type = L_7;
	}

IL_0024:
	{
		Type_t* L_8 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, (Type_t*)NULL, NULL);
		if (L_9)
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 73485
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeHelpers_As_TisIl2CppFullySharedGenericAny_m77D430CC8981CE610392DE44CBC6D1D2A23D9641_gshared (RuntimeObject* ___0_obj, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A);
	const Il2CppFullySharedGenericAny L_3 = L_1;
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A);
	memset(V_0, 0, SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A);
		return;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_obj;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->rgctx_data, 0), L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A);
		return;
	}
}
// Method Definition Index: 29959
// Method Definition Index: 29959
// Method Definition Index: 29959
// Method Definition Index: 29959
// Method Definition Index: 29959
// Method Definition Index: 29959
// Method Definition Index: 29959
// Method Definition Index: 29959
// Method Definition Index: 29959
// Method Definition Index: 29959
// Method Definition Index: 29959
// Method Definition Index: 29959
// Method Definition Index: 29959
// Method Definition Index: 29959
// Method Definition Index: 29959
// Method Definition Index: 29959
// Method Definition Index: 29959
// Method Definition Index: 29959
// Method Definition Index: 29959
// Method Definition Index: 29959
// Method Definition Index: 29959
// Method Definition Index: 29959
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypePathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m5AF3181253A6DBD9D59C41E62A92564B0D71B7E5_gshared (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, RuntimeObject* ___0_properties, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Enumerator_t6A11FE63188973969841D4B13F1F4D021BCDF090 V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyCollection_1_t66244703658BF1D2205CE0CD4AB73046D8F55445 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	Type_t* V_11 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_00e6;
			}
			case 2:
			{
				goto IL_0144;
			}
		}
	}
	{
		goto IL_0144;
	}

IL_0041:
	{
		RuntimeObject* L_7 = ___0_properties;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_8 = V_5;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_9 = V_5;
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_10 = ___1_container;
		String_t* L_11;
		L_11 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = InterfaceFuncInvoker3< bool, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_9, L_10, L_11, (&V_1));
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_14 = ___1_container;
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker2< RuntimeObject*, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_13, (RuntimeObject*)__this, L_14);
		return;
	}

IL_0069:
	{
		RuntimeObject* L_15 = ___0_properties;
		NullCheck(L_15);
		PropertyCollection_1_t66244703658BF1D2205CE0CD4AB73046D8F55445 L_16;
		L_16 = InterfaceFuncInvoker0< PropertyCollection_1_t66244703658BF1D2205CE0CD4AB73046D8F55445 >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_15);
		V_7 = L_16;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
		Enumerator_t6A11FE63188973969841D4B13F1F4D021BCDF090 L_17;
		L_17 = PropertyCollection_1_GetEnumerator_mE38CFFCE3C5FA28CDE56EB215091D499D3E30B1A((&V_7), il2cpp_rgctx_method(method->rgctx_data, 9));
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d0:
			{
				Enumerator_Dispose_m6D00C142D6F1FC73850FAAAC923FBD179C9589E2((&V_6), il2cpp_rgctx_method(method->rgctx_data, 16));
				return;
			}
		});
		try
		{
			{
				goto IL_00c5_1;
			}

IL_007c_1:
			{
				RuntimeObject* L_18;
				L_18 = Enumerator_get_Current_m4A076BF8CCA696A6F3870DD208594E4CC660DCC3_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 12));
				V_8 = L_18;
				RuntimeObject* L_19 = V_8;
				NullCheck((RuntimeObject*)L_19);
				String_t* L_20;
				L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				String_t* L_21;
				L_21 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, L_21, NULL);
				if (!L_22)
				{
					goto IL_00c5_1;
				}
			}
			{
				RuntimeObject* L_23 = V_8;
				NullCheck((RuntimeObject*)L_23);
				Type_t* L_24;
				L_24 = InterfaceFuncInvoker0< Type_t* >::Invoke(2, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
				Type_t* L_25 = L_24;
				V_9 = L_25;
				__this->___m_LastType = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastType), (void*)L_25);
				Type_t* L_26 = V_9;
				RuntimeObject* L_27;
				L_27 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_26, NULL);
				RuntimeObject* L_28 = L_27;
				if (L_28)
				{
					G_B10_0 = L_28;
					goto IL_00ba_1;
				}
				G_B9_0 = L_28;
			}
			{
				goto IL_014b;
			}

IL_00ba_1:
			{
				NullCheck(G_B10_0);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B10_0, (RuntimeObject*)__this);
				goto IL_014b;
			}

IL_00c5_1:
			{
				bool L_29;
				L_29 = Enumerator_MoveNext_m4C1B14EE93EA1A800355F61BFDB25F3FAE9D0078((&V_6), il2cpp_rgctx_method(method->rgctx_data, 15));
				if (L_29)
				{
					goto IL_007c_1;
				}
			}
			{
				goto IL_00de;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00de:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_00e6:
	{
		RuntimeObject* L_30 = ___0_properties;
		V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 17)));
		RuntimeObject* L_31 = V_10;
		if (!L_31)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_32 = V_10;
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_33 = ___1_container;
		int32_t L_34;
		L_34 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_32);
		bool L_35;
		L_35 = InterfaceFuncInvoker3< bool, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 17), L_32, L_33, L_34, (&V_1));
		if (!L_35)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_37 = ___1_container;
		NullCheck((RuntimeObject*)L_36);
		InterfaceActionInvoker2< RuntimeObject*, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_36, (RuntimeObject*)__this, L_37);
		return;
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 19)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		Type_t* L_40;
		L_40 = TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853(L_39, NULL);
		V_11 = L_40;
		Type_t* L_41 = V_11;
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_41, (Type_t*)NULL, NULL);
		if (!L_42)
		{
			goto IL_013c;
		}
	}
	{
		Type_t* L_43 = V_11;
		RuntimeObject* L_44;
		L_44 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_43, NULL);
		RuntimeObject* L_45 = L_44;
		if (L_45)
		{
			G_B21_0 = L_45;
			goto IL_0135;
		}
		G_B20_0 = L_45;
	}
	{
		return;
	}

IL_0135:
	{
		NullCheck(G_B21_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B21_0, (RuntimeObject*)__this);
		return;
	}

IL_013c:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_0144:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
	}

IL_014b:
	{
		return;
	}
}
// Method Definition Index: 29959
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypePathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mA33FF6674919C256A5987916488DCA24480679D9_gshared (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, RuntimeObject* ___0_properties, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Enumerator_t02CD38A297320277736A838E77ADDD6185E9DCBD V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyCollection_1_t41DA8EAD20A010C22EBFA2EC7462BB11CB90DE55 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	Type_t* V_11 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_00e6;
			}
			case 2:
			{
				goto IL_0144;
			}
		}
	}
	{
		goto IL_0144;
	}

IL_0041:
	{
		RuntimeObject* L_7 = ___0_properties;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_8 = V_5;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_9 = V_5;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_10 = ___1_container;
		String_t* L_11;
		L_11 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = InterfaceFuncInvoker3< bool, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_9, L_10, L_11, (&V_1));
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_14 = ___1_container;
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_13, (RuntimeObject*)__this, L_14);
		return;
	}

IL_0069:
	{
		RuntimeObject* L_15 = ___0_properties;
		NullCheck(L_15);
		PropertyCollection_1_t41DA8EAD20A010C22EBFA2EC7462BB11CB90DE55 L_16;
		L_16 = InterfaceFuncInvoker0< PropertyCollection_1_t41DA8EAD20A010C22EBFA2EC7462BB11CB90DE55 >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_15);
		V_7 = L_16;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
		Enumerator_t02CD38A297320277736A838E77ADDD6185E9DCBD L_17;
		L_17 = PropertyCollection_1_GetEnumerator_m88CC0A850D644B5B1A8C83DA16F36705D2452366((&V_7), il2cpp_rgctx_method(method->rgctx_data, 9));
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d0:
			{
				Enumerator_Dispose_m42914F590490E31642B853AE63147400FA6C5004((&V_6), il2cpp_rgctx_method(method->rgctx_data, 16));
				return;
			}
		});
		try
		{
			{
				goto IL_00c5_1;
			}

IL_007c_1:
			{
				RuntimeObject* L_18;
				L_18 = Enumerator_get_Current_m19810E67B637A3A877880098AE4A499814991A91_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 12));
				V_8 = L_18;
				RuntimeObject* L_19 = V_8;
				NullCheck((RuntimeObject*)L_19);
				String_t* L_20;
				L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				String_t* L_21;
				L_21 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, L_21, NULL);
				if (!L_22)
				{
					goto IL_00c5_1;
				}
			}
			{
				RuntimeObject* L_23 = V_8;
				NullCheck((RuntimeObject*)L_23);
				Type_t* L_24;
				L_24 = InterfaceFuncInvoker0< Type_t* >::Invoke(2, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
				Type_t* L_25 = L_24;
				V_9 = L_25;
				__this->___m_LastType = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastType), (void*)L_25);
				Type_t* L_26 = V_9;
				RuntimeObject* L_27;
				L_27 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_26, NULL);
				RuntimeObject* L_28 = L_27;
				if (L_28)
				{
					G_B10_0 = L_28;
					goto IL_00ba_1;
				}
				G_B9_0 = L_28;
			}
			{
				goto IL_014b;
			}

IL_00ba_1:
			{
				NullCheck(G_B10_0);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B10_0, (RuntimeObject*)__this);
				goto IL_014b;
			}

IL_00c5_1:
			{
				bool L_29;
				L_29 = Enumerator_MoveNext_m6D508ADD54444E21AE919F5BE3DE40A75D2EB260((&V_6), il2cpp_rgctx_method(method->rgctx_data, 15));
				if (L_29)
				{
					goto IL_007c_1;
				}
			}
			{
				goto IL_00de;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00de:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_00e6:
	{
		RuntimeObject* L_30 = ___0_properties;
		V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 17)));
		RuntimeObject* L_31 = V_10;
		if (!L_31)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_32 = V_10;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_33 = ___1_container;
		int32_t L_34;
		L_34 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_32);
		bool L_35;
		L_35 = InterfaceFuncInvoker3< bool, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 17), L_32, L_33, L_34, (&V_1));
		if (!L_35)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_37 = ___1_container;
		NullCheck((RuntimeObject*)L_36);
		InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_36, (RuntimeObject*)__this, L_37);
		return;
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 19)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		Type_t* L_40;
		L_40 = TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853(L_39, NULL);
		V_11 = L_40;
		Type_t* L_41 = V_11;
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_41, (Type_t*)NULL, NULL);
		if (!L_42)
		{
			goto IL_013c;
		}
	}
	{
		Type_t* L_43 = V_11;
		RuntimeObject* L_44;
		L_44 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_43, NULL);
		RuntimeObject* L_45 = L_44;
		if (L_45)
		{
			G_B21_0 = L_45;
			goto IL_0135;
		}
		G_B20_0 = L_45;
	}
	{
		return;
	}

IL_0135:
	{
		NullCheck(G_B21_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B21_0, (RuntimeObject*)__this);
		return;
	}

IL_013c:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_0144:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
	}

IL_014b:
	{
		return;
	}
}
// Method Definition Index: 29959
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypePathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m5FA3485652A89AFA7C4074C01A4823C9DF1172E3_gshared (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, RuntimeObject* ___0_properties, StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Enumerator_t7C1888E7670B0BB598477ED601D368B0296B745F V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyCollection_1_t42406DF21850919439861BD109A614BB4F6F6516 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	Type_t* V_11 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_00e6;
			}
			case 2:
			{
				goto IL_0144;
			}
		}
	}
	{
		goto IL_0144;
	}

IL_0041:
	{
		RuntimeObject* L_7 = ___0_properties;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_8 = V_5;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_9 = V_5;
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_10 = ___1_container;
		String_t* L_11;
		L_11 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = InterfaceFuncInvoker3< bool, StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_9, L_10, L_11, (&V_1));
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_14 = ___1_container;
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_13, (RuntimeObject*)__this, L_14);
		return;
	}

IL_0069:
	{
		RuntimeObject* L_15 = ___0_properties;
		NullCheck(L_15);
		PropertyCollection_1_t42406DF21850919439861BD109A614BB4F6F6516 L_16;
		L_16 = InterfaceFuncInvoker0< PropertyCollection_1_t42406DF21850919439861BD109A614BB4F6F6516 >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_15);
		V_7 = L_16;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
		Enumerator_t7C1888E7670B0BB598477ED601D368B0296B745F L_17;
		L_17 = PropertyCollection_1_GetEnumerator_m46CDC1CE37C942F2A700CA11AEBE0086598EFF87((&V_7), il2cpp_rgctx_method(method->rgctx_data, 9));
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d0:
			{
				Enumerator_Dispose_m9158A161412B924939494966385016E1809D3E5A((&V_6), il2cpp_rgctx_method(method->rgctx_data, 16));
				return;
			}
		});
		try
		{
			{
				goto IL_00c5_1;
			}

IL_007c_1:
			{
				RuntimeObject* L_18;
				L_18 = Enumerator_get_Current_mAFEF2F92894DEFDE1336AEE03C5D3BC6EB0BFDF5_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 12));
				V_8 = L_18;
				RuntimeObject* L_19 = V_8;
				NullCheck((RuntimeObject*)L_19);
				String_t* L_20;
				L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				String_t* L_21;
				L_21 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, L_21, NULL);
				if (!L_22)
				{
					goto IL_00c5_1;
				}
			}
			{
				RuntimeObject* L_23 = V_8;
				NullCheck((RuntimeObject*)L_23);
				Type_t* L_24;
				L_24 = InterfaceFuncInvoker0< Type_t* >::Invoke(2, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
				Type_t* L_25 = L_24;
				V_9 = L_25;
				__this->___m_LastType = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastType), (void*)L_25);
				Type_t* L_26 = V_9;
				RuntimeObject* L_27;
				L_27 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_26, NULL);
				RuntimeObject* L_28 = L_27;
				if (L_28)
				{
					G_B10_0 = L_28;
					goto IL_00ba_1;
				}
				G_B9_0 = L_28;
			}
			{
				goto IL_014b;
			}

IL_00ba_1:
			{
				NullCheck(G_B10_0);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B10_0, (RuntimeObject*)__this);
				goto IL_014b;
			}

IL_00c5_1:
			{
				bool L_29;
				L_29 = Enumerator_MoveNext_mD5C02BD53AC3252A965C5D5FE598D23A810A6021((&V_6), il2cpp_rgctx_method(method->rgctx_data, 15));
				if (L_29)
				{
					goto IL_007c_1;
				}
			}
			{
				goto IL_00de;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00de:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_00e6:
	{
		RuntimeObject* L_30 = ___0_properties;
		V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 17)));
		RuntimeObject* L_31 = V_10;
		if (!L_31)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_32 = V_10;
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_33 = ___1_container;
		int32_t L_34;
		L_34 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_32);
		bool L_35;
		L_35 = InterfaceFuncInvoker3< bool, StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 17), L_32, L_33, L_34, (&V_1));
		if (!L_35)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_37 = ___1_container;
		NullCheck((RuntimeObject*)L_36);
		InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_36, (RuntimeObject*)__this, L_37);
		return;
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 19)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		Type_t* L_40;
		L_40 = TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853(L_39, NULL);
		V_11 = L_40;
		Type_t* L_41 = V_11;
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_41, (Type_t*)NULL, NULL);
		if (!L_42)
		{
			goto IL_013c;
		}
	}
	{
		Type_t* L_43 = V_11;
		RuntimeObject* L_44;
		L_44 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_43, NULL);
		RuntimeObject* L_45 = L_44;
		if (L_45)
		{
			G_B21_0 = L_45;
			goto IL_0135;
		}
		G_B20_0 = L_45;
	}
	{
		return;
	}

IL_0135:
	{
		NullCheck(G_B21_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B21_0, (RuntimeObject*)__this);
		return;
	}

IL_013c:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_0144:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
	}

IL_014b:
	{
		return;
	}
}
// Method Definition Index: 29959
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypePathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mE7171061FA729B22C9985E311E9B3C2223A390EF_gshared (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, RuntimeObject* ___0_properties, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Enumerator_tABFB270AC141E565FB4A2352299030FB92BB1B58 V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyCollection_1_t38EF76A7C3CEAA54EFBA77C99B94C014F791FA13 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	Type_t* V_11 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_00e6;
			}
			case 2:
			{
				goto IL_0144;
			}
		}
	}
	{
		goto IL_0144;
	}

IL_0041:
	{
		RuntimeObject* L_7 = ___0_properties;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_8 = V_5;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_9 = V_5;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_10 = ___1_container;
		String_t* L_11;
		L_11 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = InterfaceFuncInvoker3< bool, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_9, L_10, L_11, (&V_1));
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_14 = ___1_container;
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker2< RuntimeObject*, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_13, (RuntimeObject*)__this, L_14);
		return;
	}

IL_0069:
	{
		RuntimeObject* L_15 = ___0_properties;
		NullCheck(L_15);
		PropertyCollection_1_t38EF76A7C3CEAA54EFBA77C99B94C014F791FA13 L_16;
		L_16 = InterfaceFuncInvoker0< PropertyCollection_1_t38EF76A7C3CEAA54EFBA77C99B94C014F791FA13 >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_15);
		V_7 = L_16;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
		Enumerator_tABFB270AC141E565FB4A2352299030FB92BB1B58 L_17;
		L_17 = PropertyCollection_1_GetEnumerator_m3B85FA0F58F92E53A1C9D7DE4E85DC9693118FBD((&V_7), il2cpp_rgctx_method(method->rgctx_data, 9));
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d0:
			{
				Enumerator_Dispose_m297B57E73891F7C6F2E390B3EC9CF5C16FF0C2FB((&V_6), il2cpp_rgctx_method(method->rgctx_data, 16));
				return;
			}
		});
		try
		{
			{
				goto IL_00c5_1;
			}

IL_007c_1:
			{
				RuntimeObject* L_18;
				L_18 = Enumerator_get_Current_mBFDA5CF8BD44713105285CABED92689E440F2B9B_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 12));
				V_8 = L_18;
				RuntimeObject* L_19 = V_8;
				NullCheck((RuntimeObject*)L_19);
				String_t* L_20;
				L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				String_t* L_21;
				L_21 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, L_21, NULL);
				if (!L_22)
				{
					goto IL_00c5_1;
				}
			}
			{
				RuntimeObject* L_23 = V_8;
				NullCheck((RuntimeObject*)L_23);
				Type_t* L_24;
				L_24 = InterfaceFuncInvoker0< Type_t* >::Invoke(2, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
				Type_t* L_25 = L_24;
				V_9 = L_25;
				__this->___m_LastType = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastType), (void*)L_25);
				Type_t* L_26 = V_9;
				RuntimeObject* L_27;
				L_27 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_26, NULL);
				RuntimeObject* L_28 = L_27;
				if (L_28)
				{
					G_B10_0 = L_28;
					goto IL_00ba_1;
				}
				G_B9_0 = L_28;
			}
			{
				goto IL_014b;
			}

IL_00ba_1:
			{
				NullCheck(G_B10_0);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B10_0, (RuntimeObject*)__this);
				goto IL_014b;
			}

IL_00c5_1:
			{
				bool L_29;
				L_29 = Enumerator_MoveNext_mA26CA80661AFDFA4E9F65B17B70D431931A0931C((&V_6), il2cpp_rgctx_method(method->rgctx_data, 15));
				if (L_29)
				{
					goto IL_007c_1;
				}
			}
			{
				goto IL_00de;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00de:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_00e6:
	{
		RuntimeObject* L_30 = ___0_properties;
		V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 17)));
		RuntimeObject* L_31 = V_10;
		if (!L_31)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_32 = V_10;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_33 = ___1_container;
		int32_t L_34;
		L_34 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_32);
		bool L_35;
		L_35 = InterfaceFuncInvoker3< bool, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 17), L_32, L_33, L_34, (&V_1));
		if (!L_35)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_37 = ___1_container;
		NullCheck((RuntimeObject*)L_36);
		InterfaceActionInvoker2< RuntimeObject*, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_36, (RuntimeObject*)__this, L_37);
		return;
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 19)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		Type_t* L_40;
		L_40 = TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853(L_39, NULL);
		V_11 = L_40;
		Type_t* L_41 = V_11;
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_41, (Type_t*)NULL, NULL);
		if (!L_42)
		{
			goto IL_013c;
		}
	}
	{
		Type_t* L_43 = V_11;
		RuntimeObject* L_44;
		L_44 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_43, NULL);
		RuntimeObject* L_45 = L_44;
		if (L_45)
		{
			G_B21_0 = L_45;
			goto IL_0135;
		}
		G_B20_0 = L_45;
	}
	{
		return;
	}

IL_0135:
	{
		NullCheck(G_B21_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B21_0, (RuntimeObject*)__this);
		return;
	}

IL_013c:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_0144:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
	}

IL_014b:
	{
		return;
	}
}
// Method Definition Index: 29959
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypePathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m152723E6A2CA07003B46E1A7B81F71A50593F248_gshared (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, RuntimeObject* ___0_properties, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Enumerator_tBC542700822D291E0D2BABBE7814E42A93ED5EAE V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyCollection_1_t7415350DFFCF7B59120A66892A01E43373218162 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	Type_t* V_11 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_00e6;
			}
			case 2:
			{
				goto IL_0144;
			}
		}
	}
	{
		goto IL_0144;
	}

IL_0041:
	{
		RuntimeObject* L_7 = ___0_properties;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_8 = V_5;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_9 = V_5;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_10 = ___1_container;
		String_t* L_11;
		L_11 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = InterfaceFuncInvoker3< bool, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_9, L_10, L_11, (&V_1));
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_14 = ___1_container;
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_13, (RuntimeObject*)__this, L_14);
		return;
	}

IL_0069:
	{
		RuntimeObject* L_15 = ___0_properties;
		NullCheck(L_15);
		PropertyCollection_1_t7415350DFFCF7B59120A66892A01E43373218162 L_16;
		L_16 = InterfaceFuncInvoker0< PropertyCollection_1_t7415350DFFCF7B59120A66892A01E43373218162 >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_15);
		V_7 = L_16;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
		Enumerator_tBC542700822D291E0D2BABBE7814E42A93ED5EAE L_17;
		L_17 = PropertyCollection_1_GetEnumerator_m0AF481FB9C5D11A22FD7FC1086F688F54F392D70((&V_7), il2cpp_rgctx_method(method->rgctx_data, 9));
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d0:
			{
				Enumerator_Dispose_mFB0C2F9621BD0686E061E203FB619CCB824ECA19((&V_6), il2cpp_rgctx_method(method->rgctx_data, 16));
				return;
			}
		});
		try
		{
			{
				goto IL_00c5_1;
			}

IL_007c_1:
			{
				RuntimeObject* L_18;
				L_18 = Enumerator_get_Current_mCC041B0CC2BA645600E4CB340AE8ABEB68CAE200_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 12));
				V_8 = L_18;
				RuntimeObject* L_19 = V_8;
				NullCheck((RuntimeObject*)L_19);
				String_t* L_20;
				L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				String_t* L_21;
				L_21 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, L_21, NULL);
				if (!L_22)
				{
					goto IL_00c5_1;
				}
			}
			{
				RuntimeObject* L_23 = V_8;
				NullCheck((RuntimeObject*)L_23);
				Type_t* L_24;
				L_24 = InterfaceFuncInvoker0< Type_t* >::Invoke(2, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
				Type_t* L_25 = L_24;
				V_9 = L_25;
				__this->___m_LastType = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastType), (void*)L_25);
				Type_t* L_26 = V_9;
				RuntimeObject* L_27;
				L_27 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_26, NULL);
				RuntimeObject* L_28 = L_27;
				if (L_28)
				{
					G_B10_0 = L_28;
					goto IL_00ba_1;
				}
				G_B9_0 = L_28;
			}
			{
				goto IL_014b;
			}

IL_00ba_1:
			{
				NullCheck(G_B10_0);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B10_0, (RuntimeObject*)__this);
				goto IL_014b;
			}

IL_00c5_1:
			{
				bool L_29;
				L_29 = Enumerator_MoveNext_mABE6B9B67B680B7A91EB4B026AD26E6F5A36A0B1((&V_6), il2cpp_rgctx_method(method->rgctx_data, 15));
				if (L_29)
				{
					goto IL_007c_1;
				}
			}
			{
				goto IL_00de;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00de:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_00e6:
	{
		RuntimeObject* L_30 = ___0_properties;
		V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 17)));
		RuntimeObject* L_31 = V_10;
		if (!L_31)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_32 = V_10;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_33 = ___1_container;
		int32_t L_34;
		L_34 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_32);
		bool L_35;
		L_35 = InterfaceFuncInvoker3< bool, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 17), L_32, L_33, L_34, (&V_1));
		if (!L_35)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_37 = ___1_container;
		NullCheck((RuntimeObject*)L_36);
		InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_36, (RuntimeObject*)__this, L_37);
		return;
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 19)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		Type_t* L_40;
		L_40 = TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853(L_39, NULL);
		V_11 = L_40;
		Type_t* L_41 = V_11;
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_41, (Type_t*)NULL, NULL);
		if (!L_42)
		{
			goto IL_013c;
		}
	}
	{
		Type_t* L_43 = V_11;
		RuntimeObject* L_44;
		L_44 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_43, NULL);
		RuntimeObject* L_45 = L_44;
		if (L_45)
		{
			G_B21_0 = L_45;
			goto IL_0135;
		}
		G_B20_0 = L_45;
	}
	{
		return;
	}

IL_0135:
	{
		NullCheck(G_B21_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B21_0, (RuntimeObject*)__this);
		return;
	}

IL_013c:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_0144:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
	}

IL_014b:
	{
		return;
	}
}
// Method Definition Index: 29959
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypePathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mAD91F78B9BE684BB2D3C467AEF84579AEFE9AA5D_gshared (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, RuntimeObject* ___0_properties, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Enumerator_t9088FC23F01997F1718A1C16C5317EA0D8788D64 V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyCollection_1_t7B1F6F7CD7DDA9062C74D469A2511AB47AB3B248 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	Type_t* V_11 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_00e6;
			}
			case 2:
			{
				goto IL_0144;
			}
		}
	}
	{
		goto IL_0144;
	}

IL_0041:
	{
		RuntimeObject* L_7 = ___0_properties;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_8 = V_5;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_9 = V_5;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_10 = ___1_container;
		String_t* L_11;
		L_11 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = InterfaceFuncInvoker3< bool, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_9, L_10, L_11, (&V_1));
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_14 = ___1_container;
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker2< RuntimeObject*, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_13, (RuntimeObject*)__this, L_14);
		return;
	}

IL_0069:
	{
		RuntimeObject* L_15 = ___0_properties;
		NullCheck(L_15);
		PropertyCollection_1_t7B1F6F7CD7DDA9062C74D469A2511AB47AB3B248 L_16;
		L_16 = InterfaceFuncInvoker0< PropertyCollection_1_t7B1F6F7CD7DDA9062C74D469A2511AB47AB3B248 >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_15);
		V_7 = L_16;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
		Enumerator_t9088FC23F01997F1718A1C16C5317EA0D8788D64 L_17;
		L_17 = PropertyCollection_1_GetEnumerator_m8B59253F91C36DDC1D9123957BF1730F394D5667((&V_7), il2cpp_rgctx_method(method->rgctx_data, 9));
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d0:
			{
				Enumerator_Dispose_mCFD74709C6445EDE3DF5602D97DE8B9A61FAB1E6((&V_6), il2cpp_rgctx_method(method->rgctx_data, 16));
				return;
			}
		});
		try
		{
			{
				goto IL_00c5_1;
			}

IL_007c_1:
			{
				RuntimeObject* L_18;
				L_18 = Enumerator_get_Current_mF7AD50DF850378FB7F40A4B05513D9F506D3482D_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 12));
				V_8 = L_18;
				RuntimeObject* L_19 = V_8;
				NullCheck((RuntimeObject*)L_19);
				String_t* L_20;
				L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				String_t* L_21;
				L_21 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, L_21, NULL);
				if (!L_22)
				{
					goto IL_00c5_1;
				}
			}
			{
				RuntimeObject* L_23 = V_8;
				NullCheck((RuntimeObject*)L_23);
				Type_t* L_24;
				L_24 = InterfaceFuncInvoker0< Type_t* >::Invoke(2, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
				Type_t* L_25 = L_24;
				V_9 = L_25;
				__this->___m_LastType = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastType), (void*)L_25);
				Type_t* L_26 = V_9;
				RuntimeObject* L_27;
				L_27 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_26, NULL);
				RuntimeObject* L_28 = L_27;
				if (L_28)
				{
					G_B10_0 = L_28;
					goto IL_00ba_1;
				}
				G_B9_0 = L_28;
			}
			{
				goto IL_014b;
			}

IL_00ba_1:
			{
				NullCheck(G_B10_0);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B10_0, (RuntimeObject*)__this);
				goto IL_014b;
			}

IL_00c5_1:
			{
				bool L_29;
				L_29 = Enumerator_MoveNext_m350CCC1D8258DC87D78E63061111157BCFF58E97((&V_6), il2cpp_rgctx_method(method->rgctx_data, 15));
				if (L_29)
				{
					goto IL_007c_1;
				}
			}
			{
				goto IL_00de;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00de:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_00e6:
	{
		RuntimeObject* L_30 = ___0_properties;
		V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 17)));
		RuntimeObject* L_31 = V_10;
		if (!L_31)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_32 = V_10;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_33 = ___1_container;
		int32_t L_34;
		L_34 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_32);
		bool L_35;
		L_35 = InterfaceFuncInvoker3< bool, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 17), L_32, L_33, L_34, (&V_1));
		if (!L_35)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_37 = ___1_container;
		NullCheck((RuntimeObject*)L_36);
		InterfaceActionInvoker2< RuntimeObject*, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_36, (RuntimeObject*)__this, L_37);
		return;
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 19)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		Type_t* L_40;
		L_40 = TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853(L_39, NULL);
		V_11 = L_40;
		Type_t* L_41 = V_11;
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_41, (Type_t*)NULL, NULL);
		if (!L_42)
		{
			goto IL_013c;
		}
	}
	{
		Type_t* L_43 = V_11;
		RuntimeObject* L_44;
		L_44 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_43, NULL);
		RuntimeObject* L_45 = L_44;
		if (L_45)
		{
			G_B21_0 = L_45;
			goto IL_0135;
		}
		G_B20_0 = L_45;
	}
	{
		return;
	}

IL_0135:
	{
		NullCheck(G_B21_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B21_0, (RuntimeObject*)__this);
		return;
	}

IL_013c:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_0144:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
	}

IL_014b:
	{
		return;
	}
}
// Method Definition Index: 29959
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypePathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mA67D815A518584CC7029E366F00DE1C3E1EBBD12_gshared (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, RuntimeObject* ___0_properties, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Enumerator_t7D47CEE5594385EF5CAFF555A27EF450272A8210 V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyCollection_1_tEA87734C1D3CD4DFFA79347A5D1415D7F696E486 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	Type_t* V_11 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_00e6;
			}
			case 2:
			{
				goto IL_0144;
			}
		}
	}
	{
		goto IL_0144;
	}

IL_0041:
	{
		RuntimeObject* L_7 = ___0_properties;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_8 = V_5;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_9 = V_5;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_10 = ___1_container;
		String_t* L_11;
		L_11 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = InterfaceFuncInvoker3< bool, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_9, L_10, L_11, (&V_1));
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_14 = ___1_container;
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker2< RuntimeObject*, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_13, (RuntimeObject*)__this, L_14);
		return;
	}

IL_0069:
	{
		RuntimeObject* L_15 = ___0_properties;
		NullCheck(L_15);
		PropertyCollection_1_tEA87734C1D3CD4DFFA79347A5D1415D7F696E486 L_16;
		L_16 = InterfaceFuncInvoker0< PropertyCollection_1_tEA87734C1D3CD4DFFA79347A5D1415D7F696E486 >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_15);
		V_7 = L_16;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
		Enumerator_t7D47CEE5594385EF5CAFF555A27EF450272A8210 L_17;
		L_17 = PropertyCollection_1_GetEnumerator_m2661F621B2234B5E115A4F4F679182D6296140ED((&V_7), il2cpp_rgctx_method(method->rgctx_data, 9));
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d0:
			{
				Enumerator_Dispose_m57AD435DE425E5366CEE348EADF7AB3EA7F97B6A((&V_6), il2cpp_rgctx_method(method->rgctx_data, 16));
				return;
			}
		});
		try
		{
			{
				goto IL_00c5_1;
			}

IL_007c_1:
			{
				RuntimeObject* L_18;
				L_18 = Enumerator_get_Current_mDD6AEAE70523B332674906165BABED12125CF0B0_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 12));
				V_8 = L_18;
				RuntimeObject* L_19 = V_8;
				NullCheck((RuntimeObject*)L_19);
				String_t* L_20;
				L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				String_t* L_21;
				L_21 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, L_21, NULL);
				if (!L_22)
				{
					goto IL_00c5_1;
				}
			}
			{
				RuntimeObject* L_23 = V_8;
				NullCheck((RuntimeObject*)L_23);
				Type_t* L_24;
				L_24 = InterfaceFuncInvoker0< Type_t* >::Invoke(2, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
				Type_t* L_25 = L_24;
				V_9 = L_25;
				__this->___m_LastType = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastType), (void*)L_25);
				Type_t* L_26 = V_9;
				RuntimeObject* L_27;
				L_27 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_26, NULL);
				RuntimeObject* L_28 = L_27;
				if (L_28)
				{
					G_B10_0 = L_28;
					goto IL_00ba_1;
				}
				G_B9_0 = L_28;
			}
			{
				goto IL_014b;
			}

IL_00ba_1:
			{
				NullCheck(G_B10_0);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B10_0, (RuntimeObject*)__this);
				goto IL_014b;
			}

IL_00c5_1:
			{
				bool L_29;
				L_29 = Enumerator_MoveNext_mB013D6A728F41E43D381D6E2A22E439C0553483A((&V_6), il2cpp_rgctx_method(method->rgctx_data, 15));
				if (L_29)
				{
					goto IL_007c_1;
				}
			}
			{
				goto IL_00de;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00de:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_00e6:
	{
		RuntimeObject* L_30 = ___0_properties;
		V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 17)));
		RuntimeObject* L_31 = V_10;
		if (!L_31)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_32 = V_10;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_33 = ___1_container;
		int32_t L_34;
		L_34 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_32);
		bool L_35;
		L_35 = InterfaceFuncInvoker3< bool, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 17), L_32, L_33, L_34, (&V_1));
		if (!L_35)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_37 = ___1_container;
		NullCheck((RuntimeObject*)L_36);
		InterfaceActionInvoker2< RuntimeObject*, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_36, (RuntimeObject*)__this, L_37);
		return;
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 19)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		Type_t* L_40;
		L_40 = TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853(L_39, NULL);
		V_11 = L_40;
		Type_t* L_41 = V_11;
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_41, (Type_t*)NULL, NULL);
		if (!L_42)
		{
			goto IL_013c;
		}
	}
	{
		Type_t* L_43 = V_11;
		RuntimeObject* L_44;
		L_44 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_43, NULL);
		RuntimeObject* L_45 = L_44;
		if (L_45)
		{
			G_B21_0 = L_45;
			goto IL_0135;
		}
		G_B20_0 = L_45;
	}
	{
		return;
	}

IL_0135:
	{
		NullCheck(G_B21_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B21_0, (RuntimeObject*)__this);
		return;
	}

IL_013c:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_0144:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
	}

IL_014b:
	{
		return;
	}
}
// Method Definition Index: 29959
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypePathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m57236DC3C709A371F317D68FF2CA40AC1FA5CEAE_gshared (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, RuntimeObject* ___0_properties, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Enumerator_tCC5ED1F73E39E7B14964CBE64F0318FB042AB70D V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyCollection_1_t89A7A8D977964C1E959381AD26D9A1A3F4731E9A V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	Type_t* V_11 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_00e6;
			}
			case 2:
			{
				goto IL_0144;
			}
		}
	}
	{
		goto IL_0144;
	}

IL_0041:
	{
		RuntimeObject* L_7 = ___0_properties;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_8 = V_5;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_9 = V_5;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_10 = ___1_container;
		String_t* L_11;
		L_11 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = InterfaceFuncInvoker3< bool, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_9, L_10, L_11, (&V_1));
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_14 = ___1_container;
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker2< RuntimeObject*, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_13, (RuntimeObject*)__this, L_14);
		return;
	}

IL_0069:
	{
		RuntimeObject* L_15 = ___0_properties;
		NullCheck(L_15);
		PropertyCollection_1_t89A7A8D977964C1E959381AD26D9A1A3F4731E9A L_16;
		L_16 = InterfaceFuncInvoker0< PropertyCollection_1_t89A7A8D977964C1E959381AD26D9A1A3F4731E9A >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_15);
		V_7 = L_16;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
		Enumerator_tCC5ED1F73E39E7B14964CBE64F0318FB042AB70D L_17;
		L_17 = PropertyCollection_1_GetEnumerator_mFAB4E36E1633C65180CD0CD9AA1ABBF982BC9723((&V_7), il2cpp_rgctx_method(method->rgctx_data, 9));
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d0:
			{
				Enumerator_Dispose_mC9D395C948135836D1B9E51F23BA0A63E51464EF((&V_6), il2cpp_rgctx_method(method->rgctx_data, 16));
				return;
			}
		});
		try
		{
			{
				goto IL_00c5_1;
			}

IL_007c_1:
			{
				RuntimeObject* L_18;
				L_18 = Enumerator_get_Current_m34C61C2E196011199D7301725A46DC64EDF456FB_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 12));
				V_8 = L_18;
				RuntimeObject* L_19 = V_8;
				NullCheck((RuntimeObject*)L_19);
				String_t* L_20;
				L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				String_t* L_21;
				L_21 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, L_21, NULL);
				if (!L_22)
				{
					goto IL_00c5_1;
				}
			}
			{
				RuntimeObject* L_23 = V_8;
				NullCheck((RuntimeObject*)L_23);
				Type_t* L_24;
				L_24 = InterfaceFuncInvoker0< Type_t* >::Invoke(2, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
				Type_t* L_25 = L_24;
				V_9 = L_25;
				__this->___m_LastType = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastType), (void*)L_25);
				Type_t* L_26 = V_9;
				RuntimeObject* L_27;
				L_27 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_26, NULL);
				RuntimeObject* L_28 = L_27;
				if (L_28)
				{
					G_B10_0 = L_28;
					goto IL_00ba_1;
				}
				G_B9_0 = L_28;
			}
			{
				goto IL_014b;
			}

IL_00ba_1:
			{
				NullCheck(G_B10_0);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B10_0, (RuntimeObject*)__this);
				goto IL_014b;
			}

IL_00c5_1:
			{
				bool L_29;
				L_29 = Enumerator_MoveNext_m883248A06E16EFE4BBE928FA0A04CDDF3ADCD991((&V_6), il2cpp_rgctx_method(method->rgctx_data, 15));
				if (L_29)
				{
					goto IL_007c_1;
				}
			}
			{
				goto IL_00de;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00de:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_00e6:
	{
		RuntimeObject* L_30 = ___0_properties;
		V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 17)));
		RuntimeObject* L_31 = V_10;
		if (!L_31)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_32 = V_10;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_33 = ___1_container;
		int32_t L_34;
		L_34 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_32);
		bool L_35;
		L_35 = InterfaceFuncInvoker3< bool, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 17), L_32, L_33, L_34, (&V_1));
		if (!L_35)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_37 = ___1_container;
		NullCheck((RuntimeObject*)L_36);
		InterfaceActionInvoker2< RuntimeObject*, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_36, (RuntimeObject*)__this, L_37);
		return;
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 19)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		Type_t* L_40;
		L_40 = TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853(L_39, NULL);
		V_11 = L_40;
		Type_t* L_41 = V_11;
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_41, (Type_t*)NULL, NULL);
		if (!L_42)
		{
			goto IL_013c;
		}
	}
	{
		Type_t* L_43 = V_11;
		RuntimeObject* L_44;
		L_44 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_43, NULL);
		RuntimeObject* L_45 = L_44;
		if (L_45)
		{
			G_B21_0 = L_45;
			goto IL_0135;
		}
		G_B20_0 = L_45;
	}
	{
		return;
	}

IL_0135:
	{
		NullCheck(G_B21_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B21_0, (RuntimeObject*)__this);
		return;
	}

IL_013c:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_0144:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
	}

IL_014b:
	{
		return;
	}
}
// Method Definition Index: 29959
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypePathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m86AA7CFF3FAE8FE974F84FCC2A195B2B0C5A69CC_gshared (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, RuntimeObject* ___0_properties, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Enumerator_tB47F44C0354494C310D40DBE5134D136EB22B77C V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyCollection_1_tEAF3652EA2DFE0F11DAB5F4E6DE7D59C2E9DC274 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	Type_t* V_11 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_00e6;
			}
			case 2:
			{
				goto IL_0144;
			}
		}
	}
	{
		goto IL_0144;
	}

IL_0041:
	{
		RuntimeObject* L_7 = ___0_properties;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_8 = V_5;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_9 = V_5;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_10 = ___1_container;
		String_t* L_11;
		L_11 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = InterfaceFuncInvoker3< bool, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_9, L_10, L_11, (&V_1));
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_14 = ___1_container;
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker2< RuntimeObject*, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_13, (RuntimeObject*)__this, L_14);
		return;
	}

IL_0069:
	{
		RuntimeObject* L_15 = ___0_properties;
		NullCheck(L_15);
		PropertyCollection_1_tEAF3652EA2DFE0F11DAB5F4E6DE7D59C2E9DC274 L_16;
		L_16 = InterfaceFuncInvoker0< PropertyCollection_1_tEAF3652EA2DFE0F11DAB5F4E6DE7D59C2E9DC274 >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_15);
		V_7 = L_16;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
		Enumerator_tB47F44C0354494C310D40DBE5134D136EB22B77C L_17;
		L_17 = PropertyCollection_1_GetEnumerator_m5F70F76C1799BD1C97C994FF2D61A0F26B49700A((&V_7), il2cpp_rgctx_method(method->rgctx_data, 9));
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d0:
			{
				Enumerator_Dispose_mD847F533540BB2C9E45BE2EBD5DE23F3D0DF664A((&V_6), il2cpp_rgctx_method(method->rgctx_data, 16));
				return;
			}
		});
		try
		{
			{
				goto IL_00c5_1;
			}

IL_007c_1:
			{
				RuntimeObject* L_18;
				L_18 = Enumerator_get_Current_m1E752B432C4D0A7739023F58A13CB62E0ECAE9F4_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 12));
				V_8 = L_18;
				RuntimeObject* L_19 = V_8;
				NullCheck((RuntimeObject*)L_19);
				String_t* L_20;
				L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				String_t* L_21;
				L_21 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, L_21, NULL);
				if (!L_22)
				{
					goto IL_00c5_1;
				}
			}
			{
				RuntimeObject* L_23 = V_8;
				NullCheck((RuntimeObject*)L_23);
				Type_t* L_24;
				L_24 = InterfaceFuncInvoker0< Type_t* >::Invoke(2, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
				Type_t* L_25 = L_24;
				V_9 = L_25;
				__this->___m_LastType = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastType), (void*)L_25);
				Type_t* L_26 = V_9;
				RuntimeObject* L_27;
				L_27 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_26, NULL);
				RuntimeObject* L_28 = L_27;
				if (L_28)
				{
					G_B10_0 = L_28;
					goto IL_00ba_1;
				}
				G_B9_0 = L_28;
			}
			{
				goto IL_014b;
			}

IL_00ba_1:
			{
				NullCheck(G_B10_0);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B10_0, (RuntimeObject*)__this);
				goto IL_014b;
			}

IL_00c5_1:
			{
				bool L_29;
				L_29 = Enumerator_MoveNext_m815333E0B88342B338332EA090386A067099D138((&V_6), il2cpp_rgctx_method(method->rgctx_data, 15));
				if (L_29)
				{
					goto IL_007c_1;
				}
			}
			{
				goto IL_00de;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00de:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_00e6:
	{
		RuntimeObject* L_30 = ___0_properties;
		V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 17)));
		RuntimeObject* L_31 = V_10;
		if (!L_31)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_32 = V_10;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_33 = ___1_container;
		int32_t L_34;
		L_34 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_32);
		bool L_35;
		L_35 = InterfaceFuncInvoker3< bool, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 17), L_32, L_33, L_34, (&V_1));
		if (!L_35)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_37 = ___1_container;
		NullCheck((RuntimeObject*)L_36);
		InterfaceActionInvoker2< RuntimeObject*, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_36, (RuntimeObject*)__this, L_37);
		return;
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 19)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		Type_t* L_40;
		L_40 = TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853(L_39, NULL);
		V_11 = L_40;
		Type_t* L_41 = V_11;
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_41, (Type_t*)NULL, NULL);
		if (!L_42)
		{
			goto IL_013c;
		}
	}
	{
		Type_t* L_43 = V_11;
		RuntimeObject* L_44;
		L_44 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_43, NULL);
		RuntimeObject* L_45 = L_44;
		if (L_45)
		{
			G_B21_0 = L_45;
			goto IL_0135;
		}
		G_B20_0 = L_45;
	}
	{
		return;
	}

IL_0135:
	{
		NullCheck(G_B21_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B21_0, (RuntimeObject*)__this);
		return;
	}

IL_013c:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_0144:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
	}

IL_014b:
	{
		return;
	}
}
// Method Definition Index: 29959
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypePathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m37F2C91EEABB8FB035B01E851046B2F186E988C9_gshared (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, RuntimeObject* ___0_properties, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Enumerator_t4EFFFB85C3620D0B1C29E3F817701CBB89EDEE55 V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyCollection_1_t29CF2454D90FEAB4DE222C38D4C20956E65A44EA V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	Type_t* V_11 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_00e6;
			}
			case 2:
			{
				goto IL_0144;
			}
		}
	}
	{
		goto IL_0144;
	}

IL_0041:
	{
		RuntimeObject* L_7 = ___0_properties;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_8 = V_5;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_9 = V_5;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_10 = ___1_container;
		String_t* L_11;
		L_11 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = InterfaceFuncInvoker3< bool, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_9, L_10, L_11, (&V_1));
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_14 = ___1_container;
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker2< RuntimeObject*, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_13, (RuntimeObject*)__this, L_14);
		return;
	}

IL_0069:
	{
		RuntimeObject* L_15 = ___0_properties;
		NullCheck(L_15);
		PropertyCollection_1_t29CF2454D90FEAB4DE222C38D4C20956E65A44EA L_16;
		L_16 = InterfaceFuncInvoker0< PropertyCollection_1_t29CF2454D90FEAB4DE222C38D4C20956E65A44EA >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_15);
		V_7 = L_16;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
		Enumerator_t4EFFFB85C3620D0B1C29E3F817701CBB89EDEE55 L_17;
		L_17 = PropertyCollection_1_GetEnumerator_mCF12480CD2A1FA14D1B2A924C0312B09C6B83AC1((&V_7), il2cpp_rgctx_method(method->rgctx_data, 9));
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d0:
			{
				Enumerator_Dispose_mC1CE6D06E1F4D502D2E28462B91DD2B75B5352A9((&V_6), il2cpp_rgctx_method(method->rgctx_data, 16));
				return;
			}
		});
		try
		{
			{
				goto IL_00c5_1;
			}

IL_007c_1:
			{
				RuntimeObject* L_18;
				L_18 = Enumerator_get_Current_m07E2669886B55B6E94309FE2365CB7EB7157F980_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 12));
				V_8 = L_18;
				RuntimeObject* L_19 = V_8;
				NullCheck((RuntimeObject*)L_19);
				String_t* L_20;
				L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				String_t* L_21;
				L_21 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, L_21, NULL);
				if (!L_22)
				{
					goto IL_00c5_1;
				}
			}
			{
				RuntimeObject* L_23 = V_8;
				NullCheck((RuntimeObject*)L_23);
				Type_t* L_24;
				L_24 = InterfaceFuncInvoker0< Type_t* >::Invoke(2, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
				Type_t* L_25 = L_24;
				V_9 = L_25;
				__this->___m_LastType = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastType), (void*)L_25);
				Type_t* L_26 = V_9;
				RuntimeObject* L_27;
				L_27 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_26, NULL);
				RuntimeObject* L_28 = L_27;
				if (L_28)
				{
					G_B10_0 = L_28;
					goto IL_00ba_1;
				}
				G_B9_0 = L_28;
			}
			{
				goto IL_014b;
			}

IL_00ba_1:
			{
				NullCheck(G_B10_0);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B10_0, (RuntimeObject*)__this);
				goto IL_014b;
			}

IL_00c5_1:
			{
				bool L_29;
				L_29 = Enumerator_MoveNext_m130B0787A62F716A9BE303FF0DF5E9EE41524583((&V_6), il2cpp_rgctx_method(method->rgctx_data, 15));
				if (L_29)
				{
					goto IL_007c_1;
				}
			}
			{
				goto IL_00de;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00de:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_00e6:
	{
		RuntimeObject* L_30 = ___0_properties;
		V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 17)));
		RuntimeObject* L_31 = V_10;
		if (!L_31)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_32 = V_10;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_33 = ___1_container;
		int32_t L_34;
		L_34 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_32);
		bool L_35;
		L_35 = InterfaceFuncInvoker3< bool, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 17), L_32, L_33, L_34, (&V_1));
		if (!L_35)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_37 = ___1_container;
		NullCheck((RuntimeObject*)L_36);
		InterfaceActionInvoker2< RuntimeObject*, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_36, (RuntimeObject*)__this, L_37);
		return;
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 19)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		Type_t* L_40;
		L_40 = TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853(L_39, NULL);
		V_11 = L_40;
		Type_t* L_41 = V_11;
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_41, (Type_t*)NULL, NULL);
		if (!L_42)
		{
			goto IL_013c;
		}
	}
	{
		Type_t* L_43 = V_11;
		RuntimeObject* L_44;
		L_44 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_43, NULL);
		RuntimeObject* L_45 = L_44;
		if (L_45)
		{
			G_B21_0 = L_45;
			goto IL_0135;
		}
		G_B20_0 = L_45;
	}
	{
		return;
	}

IL_0135:
	{
		NullCheck(G_B21_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B21_0, (RuntimeObject*)__this);
		return;
	}

IL_013c:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_0144:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
	}

IL_014b:
	{
		return;
	}
}
// Method Definition Index: 29959
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypePathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mE780F56175A5D84A10465E44B854F74D011896B2_gshared (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, RuntimeObject* ___0_properties, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Enumerator_t1BC64DC5630D00766F0D7E596856131BEFE3727C V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyCollection_1_t5C455411091F5AB1DBBCC2701C0DFC7512D7D140 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	Type_t* V_11 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_00e6;
			}
			case 2:
			{
				goto IL_0144;
			}
		}
	}
	{
		goto IL_0144;
	}

IL_0041:
	{
		RuntimeObject* L_7 = ___0_properties;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_8 = V_5;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_9 = V_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_10 = ___1_container;
		String_t* L_11;
		L_11 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = InterfaceFuncInvoker3< bool, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_9, L_10, L_11, (&V_1));
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_14 = ___1_container;
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker2< RuntimeObject*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_13, (RuntimeObject*)__this, L_14);
		return;
	}

IL_0069:
	{
		RuntimeObject* L_15 = ___0_properties;
		NullCheck(L_15);
		PropertyCollection_1_t5C455411091F5AB1DBBCC2701C0DFC7512D7D140 L_16;
		L_16 = InterfaceFuncInvoker0< PropertyCollection_1_t5C455411091F5AB1DBBCC2701C0DFC7512D7D140 >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_15);
		V_7 = L_16;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
		Enumerator_t1BC64DC5630D00766F0D7E596856131BEFE3727C L_17;
		L_17 = PropertyCollection_1_GetEnumerator_m1DF9AB90326D9450EF0524141F7D09BBDC3A3BBD((&V_7), il2cpp_rgctx_method(method->rgctx_data, 9));
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d0:
			{
				Enumerator_Dispose_m844C7549472B89A0B070CB7169165A047A8C327F((&V_6), il2cpp_rgctx_method(method->rgctx_data, 16));
				return;
			}
		});
		try
		{
			{
				goto IL_00c5_1;
			}

IL_007c_1:
			{
				RuntimeObject* L_18;
				L_18 = Enumerator_get_Current_m32941DB97468B3FD7738E8EA76EDFEC347B01799_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 12));
				V_8 = L_18;
				RuntimeObject* L_19 = V_8;
				NullCheck((RuntimeObject*)L_19);
				String_t* L_20;
				L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				String_t* L_21;
				L_21 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, L_21, NULL);
				if (!L_22)
				{
					goto IL_00c5_1;
				}
			}
			{
				RuntimeObject* L_23 = V_8;
				NullCheck((RuntimeObject*)L_23);
				Type_t* L_24;
				L_24 = InterfaceFuncInvoker0< Type_t* >::Invoke(2, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
				Type_t* L_25 = L_24;
				V_9 = L_25;
				__this->___m_LastType = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastType), (void*)L_25);
				Type_t* L_26 = V_9;
				RuntimeObject* L_27;
				L_27 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_26, NULL);
				RuntimeObject* L_28 = L_27;
				if (L_28)
				{
					G_B10_0 = L_28;
					goto IL_00ba_1;
				}
				G_B9_0 = L_28;
			}
			{
				goto IL_014b;
			}

IL_00ba_1:
			{
				NullCheck(G_B10_0);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B10_0, (RuntimeObject*)__this);
				goto IL_014b;
			}

IL_00c5_1:
			{
				bool L_29;
				L_29 = Enumerator_MoveNext_mA9FF27CB7CFD899BBC98F50E4D7E0637F5107C92((&V_6), il2cpp_rgctx_method(method->rgctx_data, 15));
				if (L_29)
				{
					goto IL_007c_1;
				}
			}
			{
				goto IL_00de;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00de:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_00e6:
	{
		RuntimeObject* L_30 = ___0_properties;
		V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 17)));
		RuntimeObject* L_31 = V_10;
		if (!L_31)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_32 = V_10;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_33 = ___1_container;
		int32_t L_34;
		L_34 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_32);
		bool L_35;
		L_35 = InterfaceFuncInvoker3< bool, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 17), L_32, L_33, L_34, (&V_1));
		if (!L_35)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_37 = ___1_container;
		NullCheck((RuntimeObject*)L_36);
		InterfaceActionInvoker2< RuntimeObject*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_36, (RuntimeObject*)__this, L_37);
		return;
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 19)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		Type_t* L_40;
		L_40 = TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853(L_39, NULL);
		V_11 = L_40;
		Type_t* L_41 = V_11;
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_41, (Type_t*)NULL, NULL);
		if (!L_42)
		{
			goto IL_013c;
		}
	}
	{
		Type_t* L_43 = V_11;
		RuntimeObject* L_44;
		L_44 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_43, NULL);
		RuntimeObject* L_45 = L_44;
		if (L_45)
		{
			G_B21_0 = L_45;
			goto IL_0135;
		}
		G_B20_0 = L_45;
	}
	{
		return;
	}

IL_0135:
	{
		NullCheck(G_B21_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B21_0, (RuntimeObject*)__this);
		return;
	}

IL_013c:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_0144:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
	}

IL_014b:
	{
		return;
	}
}
// Method Definition Index: 29959
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypePathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_mC527A8D03AD1654567973D9E3F684DEA5EC7E3CC_gshared (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, RuntimeObject* ___0_properties, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Enumerator_t3648701D3843B13744B06A771CE13CE211422FFA V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyCollection_1_t8281685F99C8C57CC2DA275986F4AF17734385CC V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	Type_t* V_11 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_00e6;
			}
			case 2:
			{
				goto IL_0144;
			}
		}
	}
	{
		goto IL_0144;
	}

IL_0041:
	{
		RuntimeObject* L_7 = ___0_properties;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_8 = V_5;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_9 = V_5;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_10 = ___1_container;
		String_t* L_11;
		L_11 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = InterfaceFuncInvoker3< bool, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_9, L_10, L_11, (&V_1));
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_14 = ___1_container;
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker2< RuntimeObject*, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_13, (RuntimeObject*)__this, L_14);
		return;
	}

IL_0069:
	{
		RuntimeObject* L_15 = ___0_properties;
		NullCheck(L_15);
		PropertyCollection_1_t8281685F99C8C57CC2DA275986F4AF17734385CC L_16;
		L_16 = InterfaceFuncInvoker0< PropertyCollection_1_t8281685F99C8C57CC2DA275986F4AF17734385CC >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_15);
		V_7 = L_16;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
		Enumerator_t3648701D3843B13744B06A771CE13CE211422FFA L_17;
		L_17 = PropertyCollection_1_GetEnumerator_m2CE64B681A1082F1C6FD29EA6D8AED9A0559AE73((&V_7), il2cpp_rgctx_method(method->rgctx_data, 9));
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d0:
			{
				Enumerator_Dispose_m4EE84632E2B1A018361AB5A8DDC6A0058949615B((&V_6), il2cpp_rgctx_method(method->rgctx_data, 16));
				return;
			}
		});
		try
		{
			{
				goto IL_00c5_1;
			}

IL_007c_1:
			{
				RuntimeObject* L_18;
				L_18 = Enumerator_get_Current_m2FE62C0232D38150B8D6179F0140570DA16480DE_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 12));
				V_8 = L_18;
				RuntimeObject* L_19 = V_8;
				NullCheck((RuntimeObject*)L_19);
				String_t* L_20;
				L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				String_t* L_21;
				L_21 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, L_21, NULL);
				if (!L_22)
				{
					goto IL_00c5_1;
				}
			}
			{
				RuntimeObject* L_23 = V_8;
				NullCheck((RuntimeObject*)L_23);
				Type_t* L_24;
				L_24 = InterfaceFuncInvoker0< Type_t* >::Invoke(2, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
				Type_t* L_25 = L_24;
				V_9 = L_25;
				__this->___m_LastType = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastType), (void*)L_25);
				Type_t* L_26 = V_9;
				RuntimeObject* L_27;
				L_27 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_26, NULL);
				RuntimeObject* L_28 = L_27;
				if (L_28)
				{
					G_B10_0 = L_28;
					goto IL_00ba_1;
				}
				G_B9_0 = L_28;
			}
			{
				goto IL_014b;
			}

IL_00ba_1:
			{
				NullCheck(G_B10_0);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B10_0, (RuntimeObject*)__this);
				goto IL_014b;
			}

IL_00c5_1:
			{
				bool L_29;
				L_29 = Enumerator_MoveNext_m26BD47B4AFC03EABD946384168856845E86764E3((&V_6), il2cpp_rgctx_method(method->rgctx_data, 15));
				if (L_29)
				{
					goto IL_007c_1;
				}
			}
			{
				goto IL_00de;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00de:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_00e6:
	{
		RuntimeObject* L_30 = ___0_properties;
		V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 17)));
		RuntimeObject* L_31 = V_10;
		if (!L_31)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_32 = V_10;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_33 = ___1_container;
		int32_t L_34;
		L_34 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_32);
		bool L_35;
		L_35 = InterfaceFuncInvoker3< bool, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 17), L_32, L_33, L_34, (&V_1));
		if (!L_35)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_37 = ___1_container;
		NullCheck((RuntimeObject*)L_36);
		InterfaceActionInvoker2< RuntimeObject*, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_36, (RuntimeObject*)__this, L_37);
		return;
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 19)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		Type_t* L_40;
		L_40 = TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853(L_39, NULL);
		V_11 = L_40;
		Type_t* L_41 = V_11;
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_41, (Type_t*)NULL, NULL);
		if (!L_42)
		{
			goto IL_013c;
		}
	}
	{
		Type_t* L_43 = V_11;
		RuntimeObject* L_44;
		L_44 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_43, NULL);
		RuntimeObject* L_45 = L_44;
		if (L_45)
		{
			G_B21_0 = L_45;
			goto IL_0135;
		}
		G_B20_0 = L_45;
	}
	{
		return;
	}

IL_0135:
	{
		NullCheck(G_B21_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B21_0, (RuntimeObject*)__this);
		return;
	}

IL_013c:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_0144:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
	}

IL_014b:
	{
		return;
	}
}
// Method Definition Index: 29959
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypePathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA68EB3CC341AF5084A2990651631BF1C4F22D759_gshared (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, RuntimeObject* ___0_properties, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Enumerator_t7D642C44F9F61CC011E38CB49A73BD0A1C56E56C V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyCollection_1_t9596CB6B288440AB4D49A18019653CC3030C0A1A V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	Type_t* V_11 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_00e6;
			}
			case 2:
			{
				goto IL_0144;
			}
		}
	}
	{
		goto IL_0144;
	}

IL_0041:
	{
		RuntimeObject* L_7 = ___0_properties;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_8 = V_5;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_9 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_10 = ___1_container;
		String_t* L_11;
		L_11 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = InterfaceFuncInvoker3< bool, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_9, L_10, L_11, (&V_1));
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_14 = ___1_container;
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker2< RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_13, (RuntimeObject*)__this, L_14);
		return;
	}

IL_0069:
	{
		RuntimeObject* L_15 = ___0_properties;
		NullCheck(L_15);
		PropertyCollection_1_t9596CB6B288440AB4D49A18019653CC3030C0A1A L_16;
		L_16 = InterfaceFuncInvoker0< PropertyCollection_1_t9596CB6B288440AB4D49A18019653CC3030C0A1A >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_15);
		V_7 = L_16;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
		Enumerator_t7D642C44F9F61CC011E38CB49A73BD0A1C56E56C L_17;
		L_17 = PropertyCollection_1_GetEnumerator_m5448C5CDF0F9833CE40BD4E25C120C66B1B7FA0C((&V_7), il2cpp_rgctx_method(method->rgctx_data, 9));
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d0:
			{
				Enumerator_Dispose_m906EE111B39E8587E0847C54533DB862D11F0CCA((&V_6), il2cpp_rgctx_method(method->rgctx_data, 16));
				return;
			}
		});
		try
		{
			{
				goto IL_00c5_1;
			}

IL_007c_1:
			{
				RuntimeObject* L_18;
				L_18 = Enumerator_get_Current_m90C4F5D7AF82872EF38E6933D951B81A92F1D195_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 12));
				V_8 = L_18;
				RuntimeObject* L_19 = V_8;
				NullCheck((RuntimeObject*)L_19);
				String_t* L_20;
				L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				String_t* L_21;
				L_21 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, L_21, NULL);
				if (!L_22)
				{
					goto IL_00c5_1;
				}
			}
			{
				RuntimeObject* L_23 = V_8;
				NullCheck((RuntimeObject*)L_23);
				Type_t* L_24;
				L_24 = InterfaceFuncInvoker0< Type_t* >::Invoke(2, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
				Type_t* L_25 = L_24;
				V_9 = L_25;
				__this->___m_LastType = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastType), (void*)L_25);
				Type_t* L_26 = V_9;
				RuntimeObject* L_27;
				L_27 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_26, NULL);
				RuntimeObject* L_28 = L_27;
				if (L_28)
				{
					G_B10_0 = L_28;
					goto IL_00ba_1;
				}
				G_B9_0 = L_28;
			}
			{
				goto IL_014b;
			}

IL_00ba_1:
			{
				NullCheck(G_B10_0);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B10_0, (RuntimeObject*)__this);
				goto IL_014b;
			}

IL_00c5_1:
			{
				bool L_29;
				L_29 = Enumerator_MoveNext_m35843750D76F2B82BCFDC6AEDBB006AF5E4CA245((&V_6), il2cpp_rgctx_method(method->rgctx_data, 15));
				if (L_29)
				{
					goto IL_007c_1;
				}
			}
			{
				goto IL_00de;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00de:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_00e6:
	{
		RuntimeObject* L_30 = ___0_properties;
		V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 17)));
		RuntimeObject* L_31 = V_10;
		if (!L_31)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_32 = V_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_33 = ___1_container;
		int32_t L_34;
		L_34 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_32);
		bool L_35;
		L_35 = InterfaceFuncInvoker3< bool, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 17), L_32, L_33, L_34, (&V_1));
		if (!L_35)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_37 = ___1_container;
		NullCheck((RuntimeObject*)L_36);
		InterfaceActionInvoker2< RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_36, (RuntimeObject*)__this, L_37);
		return;
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 19)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		Type_t* L_40;
		L_40 = TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853(L_39, NULL);
		V_11 = L_40;
		Type_t* L_41 = V_11;
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_41, (Type_t*)NULL, NULL);
		if (!L_42)
		{
			goto IL_013c;
		}
	}
	{
		Type_t* L_43 = V_11;
		RuntimeObject* L_44;
		L_44 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_43, NULL);
		RuntimeObject* L_45 = L_44;
		if (L_45)
		{
			G_B21_0 = L_45;
			goto IL_0135;
		}
		G_B20_0 = L_45;
	}
	{
		return;
	}

IL_0135:
	{
		NullCheck(G_B21_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B21_0, (RuntimeObject*)__this);
		return;
	}

IL_013c:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_0144:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
	}

IL_014b:
	{
		return;
	}
}
// Method Definition Index: 29959
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypePathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m542B303305F84D09F1CF821E2EE8E379348A7123_gshared (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, RuntimeObject* ___0_properties, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Enumerator_tF643BE0D5A76D18176FCE425FA913FF6C100A639 V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyCollection_1_tAA96E23293BF5D632DF124803ADDBE5B41F5293A V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	Type_t* V_11 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_00e6;
			}
			case 2:
			{
				goto IL_0144;
			}
		}
	}
	{
		goto IL_0144;
	}

IL_0041:
	{
		RuntimeObject* L_7 = ___0_properties;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_8 = V_5;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_9 = V_5;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_10 = ___1_container;
		String_t* L_11;
		L_11 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = InterfaceFuncInvoker3< bool, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_9, L_10, L_11, (&V_1));
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_14 = ___1_container;
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker2< RuntimeObject*, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_13, (RuntimeObject*)__this, L_14);
		return;
	}

IL_0069:
	{
		RuntimeObject* L_15 = ___0_properties;
		NullCheck(L_15);
		PropertyCollection_1_tAA96E23293BF5D632DF124803ADDBE5B41F5293A L_16;
		L_16 = InterfaceFuncInvoker0< PropertyCollection_1_tAA96E23293BF5D632DF124803ADDBE5B41F5293A >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_15);
		V_7 = L_16;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
		Enumerator_tF643BE0D5A76D18176FCE425FA913FF6C100A639 L_17;
		L_17 = PropertyCollection_1_GetEnumerator_m5644AF02523BF123704202E76240E428CAC495CF((&V_7), il2cpp_rgctx_method(method->rgctx_data, 9));
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d0:
			{
				Enumerator_Dispose_mC43EE54272E8CBEEE682CC02E1C9641057DB70CD((&V_6), il2cpp_rgctx_method(method->rgctx_data, 16));
				return;
			}
		});
		try
		{
			{
				goto IL_00c5_1;
			}

IL_007c_1:
			{
				RuntimeObject* L_18;
				L_18 = Enumerator_get_Current_m9CFB4AE26006B00A090EB97E0AFFCD190D7916D4_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 12));
				V_8 = L_18;
				RuntimeObject* L_19 = V_8;
				NullCheck((RuntimeObject*)L_19);
				String_t* L_20;
				L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				String_t* L_21;
				L_21 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, L_21, NULL);
				if (!L_22)
				{
					goto IL_00c5_1;
				}
			}
			{
				RuntimeObject* L_23 = V_8;
				NullCheck((RuntimeObject*)L_23);
				Type_t* L_24;
				L_24 = InterfaceFuncInvoker0< Type_t* >::Invoke(2, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
				Type_t* L_25 = L_24;
				V_9 = L_25;
				__this->___m_LastType = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastType), (void*)L_25);
				Type_t* L_26 = V_9;
				RuntimeObject* L_27;
				L_27 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_26, NULL);
				RuntimeObject* L_28 = L_27;
				if (L_28)
				{
					G_B10_0 = L_28;
					goto IL_00ba_1;
				}
				G_B9_0 = L_28;
			}
			{
				goto IL_014b;
			}

IL_00ba_1:
			{
				NullCheck(G_B10_0);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B10_0, (RuntimeObject*)__this);
				goto IL_014b;
			}

IL_00c5_1:
			{
				bool L_29;
				L_29 = Enumerator_MoveNext_mB80F85005AD34E625BC68FCE4F9A68A93DD7E06C((&V_6), il2cpp_rgctx_method(method->rgctx_data, 15));
				if (L_29)
				{
					goto IL_007c_1;
				}
			}
			{
				goto IL_00de;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00de:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_00e6:
	{
		RuntimeObject* L_30 = ___0_properties;
		V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 17)));
		RuntimeObject* L_31 = V_10;
		if (!L_31)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_32 = V_10;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_33 = ___1_container;
		int32_t L_34;
		L_34 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_32);
		bool L_35;
		L_35 = InterfaceFuncInvoker3< bool, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 17), L_32, L_33, L_34, (&V_1));
		if (!L_35)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_37 = ___1_container;
		NullCheck((RuntimeObject*)L_36);
		InterfaceActionInvoker2< RuntimeObject*, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_36, (RuntimeObject*)__this, L_37);
		return;
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 19)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		Type_t* L_40;
		L_40 = TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853(L_39, NULL);
		V_11 = L_40;
		Type_t* L_41 = V_11;
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_41, (Type_t*)NULL, NULL);
		if (!L_42)
		{
			goto IL_013c;
		}
	}
	{
		Type_t* L_43 = V_11;
		RuntimeObject* L_44;
		L_44 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_43, NULL);
		RuntimeObject* L_45 = L_44;
		if (L_45)
		{
			G_B21_0 = L_45;
			goto IL_0135;
		}
		G_B20_0 = L_45;
	}
	{
		return;
	}

IL_0135:
	{
		NullCheck(G_B21_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B21_0, (RuntimeObject*)__this);
		return;
	}

IL_013c:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_0144:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
	}

IL_014b:
	{
		return;
	}
}
// Method Definition Index: 29959
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypePathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m41C73D21FD418C110EBA0F693ECCF74BD4EC568E_gshared (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, RuntimeObject* ___0_properties, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Enumerator_t6EBC20E60FF235EC2930C4A6D91D169B87DDB828 V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyCollection_1_tC598A73CD7DDE2371D521A9745AF6D6AB663A796 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	Type_t* V_11 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_00e6;
			}
			case 2:
			{
				goto IL_0144;
			}
		}
	}
	{
		goto IL_0144;
	}

IL_0041:
	{
		RuntimeObject* L_7 = ___0_properties;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_8 = V_5;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_9 = V_5;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_10 = ___1_container;
		String_t* L_11;
		L_11 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = InterfaceFuncInvoker3< bool, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_9, L_10, L_11, (&V_1));
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_14 = ___1_container;
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker2< RuntimeObject*, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_13, (RuntimeObject*)__this, L_14);
		return;
	}

IL_0069:
	{
		RuntimeObject* L_15 = ___0_properties;
		NullCheck(L_15);
		PropertyCollection_1_tC598A73CD7DDE2371D521A9745AF6D6AB663A796 L_16;
		L_16 = InterfaceFuncInvoker0< PropertyCollection_1_tC598A73CD7DDE2371D521A9745AF6D6AB663A796 >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_15);
		V_7 = L_16;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
		Enumerator_t6EBC20E60FF235EC2930C4A6D91D169B87DDB828 L_17;
		L_17 = PropertyCollection_1_GetEnumerator_mE9239C34386B0A920E1AE83584AFA811EE88312E((&V_7), il2cpp_rgctx_method(method->rgctx_data, 9));
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d0:
			{
				Enumerator_Dispose_m9B87C155ADCA4D519FA81C8ED158AC944372CC3E((&V_6), il2cpp_rgctx_method(method->rgctx_data, 16));
				return;
			}
		});
		try
		{
			{
				goto IL_00c5_1;
			}

IL_007c_1:
			{
				RuntimeObject* L_18;
				L_18 = Enumerator_get_Current_m668EFCD6C6CE28C7E1BCF318C6401C7A1E1E76EE_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 12));
				V_8 = L_18;
				RuntimeObject* L_19 = V_8;
				NullCheck((RuntimeObject*)L_19);
				String_t* L_20;
				L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				String_t* L_21;
				L_21 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, L_21, NULL);
				if (!L_22)
				{
					goto IL_00c5_1;
				}
			}
			{
				RuntimeObject* L_23 = V_8;
				NullCheck((RuntimeObject*)L_23);
				Type_t* L_24;
				L_24 = InterfaceFuncInvoker0< Type_t* >::Invoke(2, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
				Type_t* L_25 = L_24;
				V_9 = L_25;
				__this->___m_LastType = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastType), (void*)L_25);
				Type_t* L_26 = V_9;
				RuntimeObject* L_27;
				L_27 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_26, NULL);
				RuntimeObject* L_28 = L_27;
				if (L_28)
				{
					G_B10_0 = L_28;
					goto IL_00ba_1;
				}
				G_B9_0 = L_28;
			}
			{
				goto IL_014b;
			}

IL_00ba_1:
			{
				NullCheck(G_B10_0);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B10_0, (RuntimeObject*)__this);
				goto IL_014b;
			}

IL_00c5_1:
			{
				bool L_29;
				L_29 = Enumerator_MoveNext_mF0B0BBD184C27EB93E3481F4139B5C25CE536059((&V_6), il2cpp_rgctx_method(method->rgctx_data, 15));
				if (L_29)
				{
					goto IL_007c_1;
				}
			}
			{
				goto IL_00de;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00de:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_00e6:
	{
		RuntimeObject* L_30 = ___0_properties;
		V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 17)));
		RuntimeObject* L_31 = V_10;
		if (!L_31)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_32 = V_10;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_33 = ___1_container;
		int32_t L_34;
		L_34 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_32);
		bool L_35;
		L_35 = InterfaceFuncInvoker3< bool, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 17), L_32, L_33, L_34, (&V_1));
		if (!L_35)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_37 = ___1_container;
		NullCheck((RuntimeObject*)L_36);
		InterfaceActionInvoker2< RuntimeObject*, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_36, (RuntimeObject*)__this, L_37);
		return;
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 19)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		Type_t* L_40;
		L_40 = TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853(L_39, NULL);
		V_11 = L_40;
		Type_t* L_41 = V_11;
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_41, (Type_t*)NULL, NULL);
		if (!L_42)
		{
			goto IL_013c;
		}
	}
	{
		Type_t* L_43 = V_11;
		RuntimeObject* L_44;
		L_44 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_43, NULL);
		RuntimeObject* L_45 = L_44;
		if (L_45)
		{
			G_B21_0 = L_45;
			goto IL_0135;
		}
		G_B20_0 = L_45;
	}
	{
		return;
	}

IL_0135:
	{
		NullCheck(G_B21_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B21_0, (RuntimeObject*)__this);
		return;
	}

IL_013c:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_0144:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
	}

IL_014b:
	{
		return;
	}
}
// Method Definition Index: 29959
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypePathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_mAEF3D7839549CD0AAF25DEC5A9EB4465A7CFEC61_gshared (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, RuntimeObject* ___0_properties, FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Enumerator_t841DE24D270160BE54E3D380BDA3E88335619A9A V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyCollection_1_tBF011EE6246099B856281092B3A95E8EAC6A7883 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	Type_t* V_11 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_00e6;
			}
			case 2:
			{
				goto IL_0144;
			}
		}
	}
	{
		goto IL_0144;
	}

IL_0041:
	{
		RuntimeObject* L_7 = ___0_properties;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_8 = V_5;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_9 = V_5;
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_10 = ___1_container;
		String_t* L_11;
		L_11 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = InterfaceFuncInvoker3< bool, FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_9, L_10, L_11, (&V_1));
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_14 = ___1_container;
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker2< RuntimeObject*, FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_13, (RuntimeObject*)__this, L_14);
		return;
	}

IL_0069:
	{
		RuntimeObject* L_15 = ___0_properties;
		NullCheck(L_15);
		PropertyCollection_1_tBF011EE6246099B856281092B3A95E8EAC6A7883 L_16;
		L_16 = InterfaceFuncInvoker0< PropertyCollection_1_tBF011EE6246099B856281092B3A95E8EAC6A7883 >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_15);
		V_7 = L_16;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
		Enumerator_t841DE24D270160BE54E3D380BDA3E88335619A9A L_17;
		L_17 = PropertyCollection_1_GetEnumerator_m319B358349DB018D4ABDEA0032D2BD1F3623FD04((&V_7), il2cpp_rgctx_method(method->rgctx_data, 9));
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d0:
			{
				Enumerator_Dispose_m3FCE29D162F0A3AFBF6EE016D23F71BBB5CCA0E7((&V_6), il2cpp_rgctx_method(method->rgctx_data, 16));
				return;
			}
		});
		try
		{
			{
				goto IL_00c5_1;
			}

IL_007c_1:
			{
				RuntimeObject* L_18;
				L_18 = Enumerator_get_Current_mD6358C9DEA9A38C566A4A1705287332E0FA80E62_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 12));
				V_8 = L_18;
				RuntimeObject* L_19 = V_8;
				NullCheck((RuntimeObject*)L_19);
				String_t* L_20;
				L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				String_t* L_21;
				L_21 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, L_21, NULL);
				if (!L_22)
				{
					goto IL_00c5_1;
				}
			}
			{
				RuntimeObject* L_23 = V_8;
				NullCheck((RuntimeObject*)L_23);
				Type_t* L_24;
				L_24 = InterfaceFuncInvoker0< Type_t* >::Invoke(2, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
				Type_t* L_25 = L_24;
				V_9 = L_25;
				__this->___m_LastType = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastType), (void*)L_25);
				Type_t* L_26 = V_9;
				RuntimeObject* L_27;
				L_27 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_26, NULL);
				RuntimeObject* L_28 = L_27;
				if (L_28)
				{
					G_B10_0 = L_28;
					goto IL_00ba_1;
				}
				G_B9_0 = L_28;
			}
			{
				goto IL_014b;
			}

IL_00ba_1:
			{
				NullCheck(G_B10_0);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B10_0, (RuntimeObject*)__this);
				goto IL_014b;
			}

IL_00c5_1:
			{
				bool L_29;
				L_29 = Enumerator_MoveNext_mFB5C7EC44B23AD122FC0F08EEC4AEE8615F2DDAC((&V_6), il2cpp_rgctx_method(method->rgctx_data, 15));
				if (L_29)
				{
					goto IL_007c_1;
				}
			}
			{
				goto IL_00de;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00de:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_00e6:
	{
		RuntimeObject* L_30 = ___0_properties;
		V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 17)));
		RuntimeObject* L_31 = V_10;
		if (!L_31)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_32 = V_10;
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_33 = ___1_container;
		int32_t L_34;
		L_34 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_32);
		bool L_35;
		L_35 = InterfaceFuncInvoker3< bool, FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 17), L_32, L_33, L_34, (&V_1));
		if (!L_35)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_37 = ___1_container;
		NullCheck((RuntimeObject*)L_36);
		InterfaceActionInvoker2< RuntimeObject*, FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_36, (RuntimeObject*)__this, L_37);
		return;
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 19)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		Type_t* L_40;
		L_40 = TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853(L_39, NULL);
		V_11 = L_40;
		Type_t* L_41 = V_11;
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_41, (Type_t*)NULL, NULL);
		if (!L_42)
		{
			goto IL_013c;
		}
	}
	{
		Type_t* L_43 = V_11;
		RuntimeObject* L_44;
		L_44 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_43, NULL);
		RuntimeObject* L_45 = L_44;
		if (L_45)
		{
			G_B21_0 = L_45;
			goto IL_0135;
		}
		G_B20_0 = L_45;
	}
	{
		return;
	}

IL_0135:
	{
		NullCheck(G_B21_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B21_0, (RuntimeObject*)__this);
		return;
	}

IL_013c:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_0144:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
	}

IL_014b:
	{
		return;
	}
}
// Method Definition Index: 29959
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypePathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m26BD5C3033ACB41931C067033962C8B4C4AE3C70_gshared (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, RuntimeObject* ___0_properties, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Enumerator_t0D1401C0611E0CB7F53B5135FB51B2072C4D7AF3 V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyCollection_1_t8CC1D13F2E6173E560314F0097651F02C0EDC548 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	Type_t* V_11 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_00e6;
			}
			case 2:
			{
				goto IL_0144;
			}
		}
	}
	{
		goto IL_0144;
	}

IL_0041:
	{
		RuntimeObject* L_7 = ___0_properties;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_8 = V_5;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_9 = V_5;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_10 = ___1_container;
		String_t* L_11;
		L_11 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = InterfaceFuncInvoker3< bool, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_9, L_10, L_11, (&V_1));
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_14 = ___1_container;
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker2< RuntimeObject*, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_13, (RuntimeObject*)__this, L_14);
		return;
	}

IL_0069:
	{
		RuntimeObject* L_15 = ___0_properties;
		NullCheck(L_15);
		PropertyCollection_1_t8CC1D13F2E6173E560314F0097651F02C0EDC548 L_16;
		L_16 = InterfaceFuncInvoker0< PropertyCollection_1_t8CC1D13F2E6173E560314F0097651F02C0EDC548 >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_15);
		V_7 = L_16;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
		Enumerator_t0D1401C0611E0CB7F53B5135FB51B2072C4D7AF3 L_17;
		L_17 = PropertyCollection_1_GetEnumerator_m62B0F98C2E5296F10D7B7239F0FF3902DD13AE88((&V_7), il2cpp_rgctx_method(method->rgctx_data, 9));
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d0:
			{
				Enumerator_Dispose_m065C0DA288BF6430E490729C099F629707FA87C9((&V_6), il2cpp_rgctx_method(method->rgctx_data, 16));
				return;
			}
		});
		try
		{
			{
				goto IL_00c5_1;
			}

IL_007c_1:
			{
				RuntimeObject* L_18;
				L_18 = Enumerator_get_Current_m685B308324724C83FC3A172940EC6E97D9DCB02E_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 12));
				V_8 = L_18;
				RuntimeObject* L_19 = V_8;
				NullCheck((RuntimeObject*)L_19);
				String_t* L_20;
				L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				String_t* L_21;
				L_21 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, L_21, NULL);
				if (!L_22)
				{
					goto IL_00c5_1;
				}
			}
			{
				RuntimeObject* L_23 = V_8;
				NullCheck((RuntimeObject*)L_23);
				Type_t* L_24;
				L_24 = InterfaceFuncInvoker0< Type_t* >::Invoke(2, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
				Type_t* L_25 = L_24;
				V_9 = L_25;
				__this->___m_LastType = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastType), (void*)L_25);
				Type_t* L_26 = V_9;
				RuntimeObject* L_27;
				L_27 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_26, NULL);
				RuntimeObject* L_28 = L_27;
				if (L_28)
				{
					G_B10_0 = L_28;
					goto IL_00ba_1;
				}
				G_B9_0 = L_28;
			}
			{
				goto IL_014b;
			}

IL_00ba_1:
			{
				NullCheck(G_B10_0);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B10_0, (RuntimeObject*)__this);
				goto IL_014b;
			}

IL_00c5_1:
			{
				bool L_29;
				L_29 = Enumerator_MoveNext_mB64F9230777BEABCCBC37A29C199F7AB30637A78((&V_6), il2cpp_rgctx_method(method->rgctx_data, 15));
				if (L_29)
				{
					goto IL_007c_1;
				}
			}
			{
				goto IL_00de;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00de:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_00e6:
	{
		RuntimeObject* L_30 = ___0_properties;
		V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 17)));
		RuntimeObject* L_31 = V_10;
		if (!L_31)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_32 = V_10;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_33 = ___1_container;
		int32_t L_34;
		L_34 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_32);
		bool L_35;
		L_35 = InterfaceFuncInvoker3< bool, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 17), L_32, L_33, L_34, (&V_1));
		if (!L_35)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_37 = ___1_container;
		NullCheck((RuntimeObject*)L_36);
		InterfaceActionInvoker2< RuntimeObject*, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_36, (RuntimeObject*)__this, L_37);
		return;
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 19)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		Type_t* L_40;
		L_40 = TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853(L_39, NULL);
		V_11 = L_40;
		Type_t* L_41 = V_11;
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_41, (Type_t*)NULL, NULL);
		if (!L_42)
		{
			goto IL_013c;
		}
	}
	{
		Type_t* L_43 = V_11;
		RuntimeObject* L_44;
		L_44 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_43, NULL);
		RuntimeObject* L_45 = L_44;
		if (L_45)
		{
			G_B21_0 = L_45;
			goto IL_0135;
		}
		G_B20_0 = L_45;
	}
	{
		return;
	}

IL_0135:
	{
		NullCheck(G_B21_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B21_0, (RuntimeObject*)__this);
		return;
	}

IL_013c:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_0144:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
	}

IL_014b:
	{
		return;
	}
}
// Method Definition Index: 29959
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypePathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m4252800BB11D0CD47C4B21452B007DA793470BC6_gshared (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, RuntimeObject* ___0_properties, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Enumerator_t1761CC40B515D3EEEF28C40678DCB2B504824DC4 V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyCollection_1_tDF798E2F7DDFE2D1025D17B2E32E00593683FB75 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	Type_t* V_11 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_00e6;
			}
			case 2:
			{
				goto IL_0144;
			}
		}
	}
	{
		goto IL_0144;
	}

IL_0041:
	{
		RuntimeObject* L_7 = ___0_properties;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_8 = V_5;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_9 = V_5;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_10 = ___1_container;
		String_t* L_11;
		L_11 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = InterfaceFuncInvoker3< bool, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_9, L_10, L_11, (&V_1));
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_14 = ___1_container;
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker2< RuntimeObject*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_13, (RuntimeObject*)__this, L_14);
		return;
	}

IL_0069:
	{
		RuntimeObject* L_15 = ___0_properties;
		NullCheck(L_15);
		PropertyCollection_1_tDF798E2F7DDFE2D1025D17B2E32E00593683FB75 L_16;
		L_16 = InterfaceFuncInvoker0< PropertyCollection_1_tDF798E2F7DDFE2D1025D17B2E32E00593683FB75 >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_15);
		V_7 = L_16;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
		Enumerator_t1761CC40B515D3EEEF28C40678DCB2B504824DC4 L_17;
		L_17 = PropertyCollection_1_GetEnumerator_m8F8B1841E4FE8B9B512227F87C80D0B1841D47E3((&V_7), il2cpp_rgctx_method(method->rgctx_data, 9));
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d0:
			{
				Enumerator_Dispose_m878669C7BD465F0CFC401862C59377399FD156A3((&V_6), il2cpp_rgctx_method(method->rgctx_data, 16));
				return;
			}
		});
		try
		{
			{
				goto IL_00c5_1;
			}

IL_007c_1:
			{
				RuntimeObject* L_18;
				L_18 = Enumerator_get_Current_mF7493BF25FFB576F597EC12AFFF0E38DD2A775CB_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 12));
				V_8 = L_18;
				RuntimeObject* L_19 = V_8;
				NullCheck((RuntimeObject*)L_19);
				String_t* L_20;
				L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				String_t* L_21;
				L_21 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, L_21, NULL);
				if (!L_22)
				{
					goto IL_00c5_1;
				}
			}
			{
				RuntimeObject* L_23 = V_8;
				NullCheck((RuntimeObject*)L_23);
				Type_t* L_24;
				L_24 = InterfaceFuncInvoker0< Type_t* >::Invoke(2, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
				Type_t* L_25 = L_24;
				V_9 = L_25;
				__this->___m_LastType = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastType), (void*)L_25);
				Type_t* L_26 = V_9;
				RuntimeObject* L_27;
				L_27 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_26, NULL);
				RuntimeObject* L_28 = L_27;
				if (L_28)
				{
					G_B10_0 = L_28;
					goto IL_00ba_1;
				}
				G_B9_0 = L_28;
			}
			{
				goto IL_014b;
			}

IL_00ba_1:
			{
				NullCheck(G_B10_0);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B10_0, (RuntimeObject*)__this);
				goto IL_014b;
			}

IL_00c5_1:
			{
				bool L_29;
				L_29 = Enumerator_MoveNext_mC32ACB0808A02D10660EB5282B25FDC798D0CAA8((&V_6), il2cpp_rgctx_method(method->rgctx_data, 15));
				if (L_29)
				{
					goto IL_007c_1;
				}
			}
			{
				goto IL_00de;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00de:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_00e6:
	{
		RuntimeObject* L_30 = ___0_properties;
		V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 17)));
		RuntimeObject* L_31 = V_10;
		if (!L_31)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_32 = V_10;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_33 = ___1_container;
		int32_t L_34;
		L_34 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_32);
		bool L_35;
		L_35 = InterfaceFuncInvoker3< bool, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 17), L_32, L_33, L_34, (&V_1));
		if (!L_35)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_37 = ___1_container;
		NullCheck((RuntimeObject*)L_36);
		InterfaceActionInvoker2< RuntimeObject*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_36, (RuntimeObject*)__this, L_37);
		return;
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 19)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		Type_t* L_40;
		L_40 = TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853(L_39, NULL);
		V_11 = L_40;
		Type_t* L_41 = V_11;
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_41, (Type_t*)NULL, NULL);
		if (!L_42)
		{
			goto IL_013c;
		}
	}
	{
		Type_t* L_43 = V_11;
		RuntimeObject* L_44;
		L_44 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_43, NULL);
		RuntimeObject* L_45 = L_44;
		if (L_45)
		{
			G_B21_0 = L_45;
			goto IL_0135;
		}
		G_B20_0 = L_45;
	}
	{
		return;
	}

IL_0135:
	{
		NullCheck(G_B21_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B21_0, (RuntimeObject*)__this);
		return;
	}

IL_013c:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
		return;
	}

IL_0144:
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, (int32_t)4, NULL);
	}

IL_014b:
	{
		return;
	}
}
// Method Definition Index: 29951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0 = __this->___U3CPathU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 163797
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Kind;
		return L_0;
	}
}
// Method Definition Index: 29956
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CReturnCodeU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 164194
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* TypeConverter_2_Invoke_mF0FFFFF940DA8BB84CBB0B4BD67E875750ADA97C_gshared_inline (TypeConverter_2_t0525BA89BAB435F8C9F2EEF9023F9BCB7ABE80A1* __this, Il2CppSharedGenericObject** ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 12070
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = V_0;
		int32_t L_8 = V_1;
		Il2CppSharedGenericObject* L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Il2CppSharedGenericObject*)L_9);
		return;
	}

IL_0034:
	{
		Il2CppSharedGenericObject* L_10 = ___0_item;
		List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// Method Definition Index: 164037
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m4A076BF8CCA696A6F3870DD208594E4CC660DCC3_gshared_inline (Enumerator_t6A11FE63188973969841D4B13F1F4D021BCDF090* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 164037
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m19810E67B637A3A877880098AE4A499814991A91_gshared_inline (Enumerator_t02CD38A297320277736A838E77ADDD6185E9DCBD* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 164037
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mAFEF2F92894DEFDE1336AEE03C5D3BC6EB0BFDF5_gshared_inline (Enumerator_t7C1888E7670B0BB598477ED601D368B0296B745F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 164037
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mBFDA5CF8BD44713105285CABED92689E440F2B9B_gshared_inline (Enumerator_tABFB270AC141E565FB4A2352299030FB92BB1B58* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 164037
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mCC041B0CC2BA645600E4CB340AE8ABEB68CAE200_gshared_inline (Enumerator_tBC542700822D291E0D2BABBE7814E42A93ED5EAE* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 164037
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mF7AD50DF850378FB7F40A4B05513D9F506D3482D_gshared_inline (Enumerator_t9088FC23F01997F1718A1C16C5317EA0D8788D64* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 164037
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mDD6AEAE70523B332674906165BABED12125CF0B0_gshared_inline (Enumerator_t7D47CEE5594385EF5CAFF555A27EF450272A8210* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 164037
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m34C61C2E196011199D7301725A46DC64EDF456FB_gshared_inline (Enumerator_tCC5ED1F73E39E7B14964CBE64F0318FB042AB70D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 164037
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m1E752B432C4D0A7739023F58A13CB62E0ECAE9F4_gshared_inline (Enumerator_tB47F44C0354494C310D40DBE5134D136EB22B77C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 164037
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m07E2669886B55B6E94309FE2365CB7EB7157F980_gshared_inline (Enumerator_t4EFFFB85C3620D0B1C29E3F817701CBB89EDEE55* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 164037
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m32941DB97468B3FD7738E8EA76EDFEC347B01799_gshared_inline (Enumerator_t1BC64DC5630D00766F0D7E596856131BEFE3727C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 164037
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m2FE62C0232D38150B8D6179F0140570DA16480DE_gshared_inline (Enumerator_t3648701D3843B13744B06A771CE13CE211422FFA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 164037
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m90C4F5D7AF82872EF38E6933D951B81A92F1D195_gshared_inline (Enumerator_t7D642C44F9F61CC011E38CB49A73BD0A1C56E56C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 164037
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m9CFB4AE26006B00A090EB97E0AFFCD190D7916D4_gshared_inline (Enumerator_tF643BE0D5A76D18176FCE425FA913FF6C100A639* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 164037
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m668EFCD6C6CE28C7E1BCF318C6401C7A1E1E76EE_gshared_inline (Enumerator_t6EBC20E60FF235EC2930C4A6D91D169B87DDB828* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 164037
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6358C9DEA9A38C566A4A1705287332E0FA80E62_gshared_inline (Enumerator_t841DE24D270160BE54E3D380BDA3E88335619A9A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 164037
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m685B308324724C83FC3A172940EC6E97D9DCB02E_gshared_inline (Enumerator_t0D1401C0611E0CB7F53B5135FB51B2072C4D7AF3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 164037
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mF7493BF25FFB576F597EC12AFFF0E38DD2A775CB_gshared_inline (Enumerator_t1761CC40B515D3EEEF28C40678DCB2B504824DC4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
