#include "pch-cpp.hpp"





template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*,T1,T2,T3,T4,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,p2,p3,p4,invokeData.method);
	}
};
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

struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
struct IEnumerable_1_t6D5FFB1B4A97F30426C5D394135AD0D2FAEAE680;
struct IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB;
struct IReadOnlyList_1_t7BB300FE9C8B0D3BCB34B752D2516BD12EB5E8CF;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C;
struct ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A;
struct EmbeddedAttribute_t1815395440A524EE4AEC2D1AF392FB75724A340A;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct MultiplayerRolesData_t146815EE2F8DED4F36EE7536B834E53C875E9D4B;
struct RefSafetyRulesAttribute_tD669286AA45E94BACAB455523FCE3362CB12B886;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_MultiplayerModule[];
IL2CPP_EXTERN_C RuntimeClass* CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CurrentPlayer_tA38F5DE026D7800F8A64FB198765CD6F1D88EA68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_tBA250D556D09440D4C5D53F04CABE5CE3A25D83C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_t7BB300FE9C8B0D3BCB34B752D2516BD12EB5E8CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurrentPlayerApi_ReadOnlyTags_m9C5807618179DE9863F8852FF6D8F0BB3FD4DF68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurrentPlayerApi_ReportResult_m70C4A3533E23585C2D90B9AE2955B8956D526161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurrentPlayerApi_SetTags_mEFD414E209DE87C3A29D005D374D7C7C6887691D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurrentPlayerApi__ctor_m475B8A0DA8932E65609EABFA04FCB7D5A0ABEC8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurrentPlayerApi_get_IsMainEditor_mFEA5B330F18B819D9F3AE17A186E61BB8AD384C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurrentPlayer_EnsureInitialized_m1C823033BB4F229FD5D6AB10A43AA80A1FC9B360_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurrentPlayer_ReadOnlyTags_m304B0F406F6F73230986D44FF43DE6ACE5DCB9F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurrentPlayer_ReportResult_m1E84994D6D7DC26EF0BC4431438D6B4406072D24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurrentPlayer_get_IsMainEditor_mAFBB53D60C3FC3D4C1AFC80F301A4736FFBFD4E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurrentPlayer_get_Tags_m453D8267BF405DEA6939BA0A7AF2F86C84FD3E61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmbeddedAttribute__ctor_mAD428EF4F4CCB5C61C769847041B242AA5E178CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AsReadOnly_mEA1292E1C9C95B299504A128E31609D0DCE5EDA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_Marshal_TisComponent_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_m197E5A299FBA779D24F6472D9854DE904E349BD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_Marshal_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44793CF3C0208AAD3122A5B81497AB1C6C851F8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiplayerManager_GetMultiplayerRoleMaskForComponent_Injected_m60FC5F9C1CC7D897B1914770DF0230AA7542C976_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiplayerManager_GetMultiplayerRoleMaskForComponent_m802FB7CC45D8433A6AEEB54E33653B1A47B4513F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiplayerManager_GetMultiplayerRoleMaskForGameObject_Injected_mF75AF83FC133DE3BB6A8DF575A942859028FEA56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiplayerManager_GetMultiplayerRoleMaskForGameObject_m9AD1E42CC453D1D4A6AC31B0D7365AFA1AAEAA12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiplayerManager_get_activeMultiplayerRoleMask_m7353CF3D74C5D098F918B293B1AA77BDCE565052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiplayerRolesData__ctor_mBFC1EB949CE794AC9DD50E5ACBF11670CCBEDBB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RefSafetyRulesAttribute__ctor_m24C1B53C65A6914ED7DF48BCF6C90BDACE8624C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IReadOnlyList_1_t7BB300FE9C8B0D3BCB34B752D2516BD12EB5E8CF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t0DD09A74B47965F07723CAE3FA997593C7A3CFE9 
{
};
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items;
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
struct ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct CurrentPlayer_tA38F5DE026D7800F8A64FB198765CD6F1D88EA68  : public RuntimeObject
{
};
struct CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A  : public RuntimeObject
{
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_Tags;
};
struct MultiplayerManager_t4FDF6FD79B3B77E8C2E34714CF01A74FE677C06D  : public RuntimeObject
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct EmbeddedAttribute_t1815395440A524EE4AEC2D1AF392FB75724A340A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct RefSafetyRulesAttribute_tD669286AA45E94BACAB455523FCE3362CB12B886  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	int32_t ___Version;
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
struct MultiplayerRole_t2D1512FABBF54EAB3E4DAF311CDFCAD99B12A97B 
{
	int32_t ___value__;
};
struct MultiplayerRoleFlags_t3236AC5634A24737C0C07550BCC3CED3182573B4 
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
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MultiplayerRolesData_t146815EE2F8DED4F36EE7536B834E53C875E9D4B  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
};
struct CurrentPlayer_tA38F5DE026D7800F8A64FB198765CD6F1D88EA68_StaticFields
{
	CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A* ___s_CurrentPlayerApi;
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
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mCCC05B98943E8F4E0F6FBF47063A269048AE71E5_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m655A34E010FCB41069350D2D616558180A0C0AFF_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* List_1_AsReadOnly_m55F73F8553E9885F803507A3650967BE90AA81C9_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_Marshal_TisIl2CppSharedGenericObject_m35CB06885EF5600EDBB840B54EDAF3A806896DBB_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
inline void List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_Clear_mCCC05B98943E8F4E0F6FBF47063A269048AE71E5_gshared_inline)(__this, method);
}
inline void List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m655A34E010FCB41069350D2D616558180A0C0AFF_gshared)(__this, ___0_collection, method);
}
inline ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C* List_1_AsReadOnly_mEA1292E1C9C95B299504A128E31609D0DCE5EDA8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_AsReadOnly_m55F73F8553E9885F803507A3650967BE90AA81C9_gshared)(__this, method);
}
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentPlayerApi__ctor_m475B8A0DA8932E65609EABFA04FCB7D5A0ABEC8A (CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentPlayer_EnsureInitialized_m1C823033BB4F229FD5D6AB10A43AA80A1FC9B360 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CurrentPlayer_get_Tags_m453D8267BF405DEA6939BA0A7AF2F86C84FD3E61 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component__ctor_m4319162A6E6B02301078C1233F6E7F4A3E735486 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_Marshal_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44793CF3C0208AAD3122A5B81497AB1C6C851F8B_inline (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))MarshalledUnityObject_Marshal_TisIl2CppSharedGenericObject_m35CB06885EF5600EDBB840B54EDAF3A806896DBB_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MultiplayerManager_GetMultiplayerRoleMaskForGameObject_Injected_mF75AF83FC133DE3BB6A8DF575A942859028FEA56 (intptr_t ___0_gameObject, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_Marshal_TisComponent_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_m197E5A299FBA779D24F6472D9854DE904E349BD4_inline (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))MarshalledUnityObject_Marshal_TisIl2CppSharedGenericObject_m35CB06885EF5600EDBB840B54EDAF3A806896DBB_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MultiplayerManager_GetMultiplayerRoleMaskForComponent_Injected_m60FC5F9C1CC7D897B1914770DF0230AA7542C976 (intptr_t ___0_component, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Il2CppSharedGenericObject*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline)(___0_obj, method);
}
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
// Method Definition Index: 180458
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mAD428EF4F4CCB5C61C769847041B242AA5E178CC (EmbeddedAttribute_t1815395440A524EE4AEC2D1AF392FB75724A340A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmbeddedAttribute__ctor_mAD428EF4F4CCB5C61C769847041B242AA5E178CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(EmbeddedAttribute__ctor_mAD428EF4F4CCB5C61C769847041B242AA5E178CC_RuntimeMethod_var);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, EmbeddedAttribute__ctor_mAD428EF4F4CCB5C61C769847041B242AA5E178CC_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// Method Definition Index: 180459
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefSafetyRulesAttribute__ctor_m24C1B53C65A6914ED7DF48BCF6C90BDACE8624C4 (RefSafetyRulesAttribute_tD669286AA45E94BACAB455523FCE3362CB12B886* __this, int32_t ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RefSafetyRulesAttribute__ctor_m24C1B53C65A6914ED7DF48BCF6C90BDACE8624C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(RefSafetyRulesAttribute__ctor_m24C1B53C65A6914ED7DF48BCF6C90BDACE8624C4_RuntimeMethod_var);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RefSafetyRulesAttribute__ctor_m24C1B53C65A6914ED7DF48BCF6C90BDACE8624C4_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___0_p;
		__this->___Version = L_0;
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
// Method Definition Index: 180460
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurrentPlayerApi_get_IsMainEditor_mFEA5B330F18B819D9F3AE17A186E61BB8AD384C1 (CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentPlayerApi_get_IsMainEditor_mFEA5B330F18B819D9F3AE17A186E61BB8AD384C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CurrentPlayerApi_get_IsMainEditor_mFEA5B330F18B819D9F3AE17A186E61BB8AD384C1_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CurrentPlayerApi_get_IsMainEditor_mFEA5B330F18B819D9F3AE17A186E61BB8AD384C1_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 1));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.cs:11>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 2));
		return (bool)0;
	}
}
// Method Definition Index: 180461
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentPlayerApi_SetTags_mEFD414E209DE87C3A29D005D374D7C7C6887691D (CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A* __this, RuntimeObject* ___0_tags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentPlayerApi_SetTags_mEFD414E209DE87C3A29D005D374D7C7C6887691D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CurrentPlayerApi_SetTags_mEFD414E209DE87C3A29D005D374D7C7C6887691D_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_tags));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CurrentPlayerApi_SetTags_mEFD414E209DE87C3A29D005D374D7C7C6887691D_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 3));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 4));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.cs:16>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 5));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___m_Tags;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 6));
		NullCheck(L_0);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_0, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 6));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.cs:17>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 7));
		RuntimeObject* L_1 = ___0_tags;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.cs:19>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 8));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___m_Tags;
		RuntimeObject* L_3 = ___0_tags;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 9));
		NullCheck(L_2);
		List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E(L_2, L_3, List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 9));
	}

IL_001a:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.cs:21>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 10));
		return;
	}
}
// Method Definition Index: 180462
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CurrentPlayerApi_ReadOnlyTags_m9C5807618179DE9863F8852FF6D8F0BB3FD4DF68 (CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentPlayerApi_ReadOnlyTags_m9C5807618179DE9863F8852FF6D8F0BB3FD4DF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AsReadOnly_mEA1292E1C9C95B299504A128E31609D0DCE5EDA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CurrentPlayerApi_ReadOnlyTags_m9C5807618179DE9863F8852FF6D8F0BB3FD4DF68_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CurrentPlayerApi_ReadOnlyTags_m9C5807618179DE9863F8852FF6D8F0BB3FD4DF68_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 11));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 12));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.cs:23>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 13));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___m_Tags;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 14));
		NullCheck(L_0);
		ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C* L_1;
		L_1 = List_1_AsReadOnly_mEA1292E1C9C95B299504A128E31609D0DCE5EDA8(L_0, List_1_AsReadOnly_mEA1292E1C9C95B299504A128E31609D0DCE5EDA8_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 14));
		return L_1;
	}
}
// Method Definition Index: 180463
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentPlayerApi_ReportResult_m70C4A3533E23585C2D90B9AE2955B8956D526161 (CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A* __this, bool ___0_condition, String_t* ___1_message, String_t* ___2_callingFilePath, int32_t ___3_lineNumber, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentPlayerApi_ReportResult_m70C4A3533E23585C2D90B9AE2955B8956D526161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CurrentPlayerApi_ReportResult_m70C4A3533E23585C2D90B9AE2955B8956D526161_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_condition), (&___1_message), (&___2_callingFilePath), (&___3_lineNumber));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CurrentPlayerApi_ReportResult_m70C4A3533E23585C2D90B9AE2955B8956D526161_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 15));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 16));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.cs:25>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 17));
		return;
	}
}
// Method Definition Index: 180464
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentPlayerApi__ctor_m475B8A0DA8932E65609EABFA04FCB7D5A0ABEC8A (CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentPlayerApi__ctor_m475B8A0DA8932E65609EABFA04FCB7D5A0ABEC8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CurrentPlayerApi__ctor_m475B8A0DA8932E65609EABFA04FCB7D5A0ABEC8A_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CurrentPlayerApi__ctor_m475B8A0DA8932E65609EABFA04FCB7D5A0ABEC8A_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 18));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 19));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.cs:12>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 20));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 21));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 21));
		__this->___m_Tags = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tags), (void*)L_0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 22));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 22));
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
// Method Definition Index: 180465
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentPlayer_EnsureInitialized_m1C823033BB4F229FD5D6AB10A43AA80A1FC9B360 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentPlayer_EnsureInitialized_m1C823033BB4F229FD5D6AB10A43AA80A1FC9B360_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentPlayer_tA38F5DE026D7800F8A64FB198765CD6F1D88EA68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CurrentPlayer_EnsureInitialized_m1C823033BB4F229FD5D6AB10A43AA80A1FC9B360_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CurrentPlayer_EnsureInitialized_m1C823033BB4F229FD5D6AB10A43AA80A1FC9B360_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 23));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 24));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.cs:38>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 25));
		CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A* L_0 = ((CurrentPlayer_tA38F5DE026D7800F8A64FB198765CD6F1D88EA68_StaticFields*)il2cpp_codegen_static_fields_for(CurrentPlayer_tA38F5DE026D7800F8A64FB198765CD6F1D88EA68_il2cpp_TypeInfo_var))->___s_CurrentPlayerApi;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.cs:39>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 26));
		return;
	}

IL_0008:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.cs:51>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 27));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 28));
		CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A* L_1 = (CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A*)il2cpp_codegen_object_new(CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A_il2cpp_TypeInfo_var);
		CurrentPlayerApi__ctor_m475B8A0DA8932E65609EABFA04FCB7D5A0ABEC8A(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 28));
		((CurrentPlayer_tA38F5DE026D7800F8A64FB198765CD6F1D88EA68_StaticFields*)il2cpp_codegen_static_fields_for(CurrentPlayer_tA38F5DE026D7800F8A64FB198765CD6F1D88EA68_il2cpp_TypeInfo_var))->___s_CurrentPlayerApi = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CurrentPlayer_tA38F5DE026D7800F8A64FB198765CD6F1D88EA68_StaticFields*)il2cpp_codegen_static_fields_for(CurrentPlayer_tA38F5DE026D7800F8A64FB198765CD6F1D88EA68_il2cpp_TypeInfo_var))->___s_CurrentPlayerApi), (void*)L_1);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.cs:53>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 29));
		return;
	}
}
// Method Definition Index: 180466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurrentPlayer_get_IsMainEditor_mAFBB53D60C3FC3D4C1AFC80F301A4736FFBFD4E6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentPlayer_get_IsMainEditor_mAFBB53D60C3FC3D4C1AFC80F301A4736FFBFD4E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentPlayer_tA38F5DE026D7800F8A64FB198765CD6F1D88EA68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CurrentPlayer_get_IsMainEditor_mAFBB53D60C3FC3D4C1AFC80F301A4736FFBFD4E6_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CurrentPlayer_get_IsMainEditor_mAFBB53D60C3FC3D4C1AFC80F301A4736FFBFD4E6_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 30));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 31));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.cs:63>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 32));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 33));
		CurrentPlayer_EnsureInitialized_m1C823033BB4F229FD5D6AB10A43AA80A1FC9B360(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 33));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.cs:64>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 34));
		CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A* L_0 = ((CurrentPlayer_tA38F5DE026D7800F8A64FB198765CD6F1D88EA68_StaticFields*)il2cpp_codegen_static_fields_for(CurrentPlayer_tA38F5DE026D7800F8A64FB198765CD6F1D88EA68_il2cpp_TypeInfo_var))->___s_CurrentPlayerApi;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 35));
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(4, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 35));
		return L_1;
	}
}
// Method Definition Index: 180467
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CurrentPlayer_get_Tags_m453D8267BF405DEA6939BA0A7AF2F86C84FD3E61 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentPlayer_get_Tags_m453D8267BF405DEA6939BA0A7AF2F86C84FD3E61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentPlayer_tA38F5DE026D7800F8A64FB198765CD6F1D88EA68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CurrentPlayer_get_Tags_m453D8267BF405DEA6939BA0A7AF2F86C84FD3E61_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CurrentPlayer_get_Tags_m453D8267BF405DEA6939BA0A7AF2F86C84FD3E61_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 36));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 37));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.cs:87>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 38));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 39));
		CurrentPlayer_EnsureInitialized_m1C823033BB4F229FD5D6AB10A43AA80A1FC9B360(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 39));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.cs:88>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 40));
		CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A* L_0 = ((CurrentPlayer_tA38F5DE026D7800F8A64FB198765CD6F1D88EA68_StaticFields*)il2cpp_codegen_static_fields_for(CurrentPlayer_tA38F5DE026D7800F8A64FB198765CD6F1D88EA68_il2cpp_TypeInfo_var))->___s_CurrentPlayerApi;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 41));
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 41));
		return L_1;
	}
}
// Method Definition Index: 180468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentPlayer_ReportResult_m1E84994D6D7DC26EF0BC4431438D6B4406072D24 (bool ___0_condition, String_t* ___1_message, String_t* ___2_callingFilePath, int32_t ___3_lineNumber, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentPlayer_ReportResult_m1E84994D6D7DC26EF0BC4431438D6B4406072D24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentPlayer_tA38F5DE026D7800F8A64FB198765CD6F1D88EA68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CurrentPlayer_ReportResult_m1E84994D6D7DC26EF0BC4431438D6B4406072D24_RuntimeMethod_var);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_condition), (&___1_message), (&___2_callingFilePath), (&___3_lineNumber));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CurrentPlayer_ReportResult_m1E84994D6D7DC26EF0BC4431438D6B4406072D24_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 42));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 43));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.cs:113>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 44));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 45));
		CurrentPlayer_EnsureInitialized_m1C823033BB4F229FD5D6AB10A43AA80A1FC9B360(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 45));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.cs:114>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 46));
		CurrentPlayerApi_tBA7E3D451058BF490343DD8582F0E1DA867DD63A* L_0 = ((CurrentPlayer_tA38F5DE026D7800F8A64FB198765CD6F1D88EA68_StaticFields*)il2cpp_codegen_static_fields_for(CurrentPlayer_tA38F5DE026D7800F8A64FB198765CD6F1D88EA68_il2cpp_TypeInfo_var))->___s_CurrentPlayerApi;
		bool L_1 = ___0_condition;
		String_t* L_2 = ___1_message;
		String_t* L_3 = ___2_callingFilePath;
		int32_t L_4 = ___3_lineNumber;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 47));
		NullCheck(L_0);
		VirtualActionInvoker4< bool, String_t*, String_t*, int32_t >::Invoke(6, L_0, L_1, L_2, L_3, L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 47));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.cs:115>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 48));
		return;
	}
}
// Method Definition Index: 180469
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* CurrentPlayer_ReadOnlyTags_m304B0F406F6F73230986D44FF43DE6ACE5DCB9F3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentPlayer_ReadOnlyTags_m304B0F406F6F73230986D44FF43DE6ACE5DCB9F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_tBA250D556D09440D4C5D53F04CABE5CE3A25D83C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t7BB300FE9C8B0D3BCB34B752D2516BD12EB5E8CF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t7BB300FE9C8B0D3BCB34B752D2516BD12EB5E8CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CurrentPlayer_ReadOnlyTags_m304B0F406F6F73230986D44FF43DE6ACE5DCB9F3_RuntimeMethod_var);
	RuntimeObject* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CurrentPlayer_ReadOnlyTags_m304B0F406F6F73230986D44FF43DE6ACE5DCB9F3_RuntimeMethod_var, NULL, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 49));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 50));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.deprecated.cs:25>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 51));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 52));
		RuntimeObject* L_0;
		L_0 = CurrentPlayer_get_Tags_m453D8267BF405DEA6939BA0A7AF2F86C84FD3E61(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 52));
		V_0 = L_0;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.deprecated.cs:26>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 53));
		RuntimeObject* L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 54));
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_tBA250D556D09440D4C5D53F04CABE5CE3A25D83C_il2cpp_TypeInfo_var, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 54));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.deprecated.cs:27>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 55));
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 56));
		goto IL_0024;
	}

IL_0016:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.deprecated.cs:29>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 57));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_1;
		int32_t L_5 = V_2;
		RuntimeObject* L_6 = V_0;
		int32_t L_7 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 58));
		NullCheck(L_6);
		String_t* L_8;
		L_8 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0, IReadOnlyList_1_t7BB300FE9C8B0D3BCB34B752D2516BD12EB5E8CF_il2cpp_TypeInfo_var, L_6, L_7);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 58));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (String_t*)L_8);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.deprecated.cs:27>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 59));
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0024:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.deprecated.cs:27>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 60));
		int32_t L_10 = V_2;
		RuntimeObject* L_11 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 61));
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_tBA250D556D09440D4C5D53F04CABE5CE3A25D83C_il2cpp_TypeInfo_var, L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 61));
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0016;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Multiplayer/Managed/MultiplayerPlayMode/Public/CurrentPlayer.deprecated.cs:31>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MultiplayerModule + 62));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_1;
		return L_13;
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
// Method Definition Index: 180470
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiplayerRolesData__ctor_mBFC1EB949CE794AC9DD50E5ACBF11670CCBEDBB7 (MultiplayerRolesData_t146815EE2F8DED4F36EE7536B834E53C875E9D4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiplayerRolesData__ctor_mBFC1EB949CE794AC9DD50E5ACBF11670CCBEDBB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(MultiplayerRolesData__ctor_mBFC1EB949CE794AC9DD50E5ACBF11670CCBEDBB7_RuntimeMethod_var);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MultiplayerRolesData__ctor_mBFC1EB949CE794AC9DD50E5ACBF11670CCBEDBB7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Component__ctor_m4319162A6E6B02301078C1233F6E7F4A3E735486(__this, NULL);
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
// Method Definition Index: 180471
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MultiplayerManager_get_activeMultiplayerRoleMask_m7353CF3D74C5D098F918B293B1AA77BDCE565052 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiplayerManager_get_activeMultiplayerRoleMask_m7353CF3D74C5D098F918B293B1AA77BDCE565052_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(MultiplayerManager_get_activeMultiplayerRoleMask_m7353CF3D74C5D098F918B293B1AA77BDCE565052_RuntimeMethod_var);
	//<source_info:<no-source>:1>
	typedef int32_t (*MultiplayerManager_get_activeMultiplayerRoleMask_m7353CF3D74C5D098F918B293B1AA77BDCE565052_ftn) ();
	static MultiplayerManager_get_activeMultiplayerRoleMask_m7353CF3D74C5D098F918B293B1AA77BDCE565052_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MultiplayerManager_get_activeMultiplayerRoleMask_m7353CF3D74C5D098F918B293B1AA77BDCE565052_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Multiplayer.Internal.MultiplayerManager::get_activeMultiplayerRoleMask()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// Method Definition Index: 180472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MultiplayerManager_GetMultiplayerRoleMaskForGameObject_m9AD1E42CC453D1D4A6AC31B0D7365AFA1AAEAA12 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_Marshal_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44793CF3C0208AAD3122A5B81497AB1C6C851F8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiplayerManager_GetMultiplayerRoleMaskForGameObject_m9AD1E42CC453D1D4A6AC31B0D7365AFA1AAEAA12_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(MultiplayerManager_GetMultiplayerRoleMaskForGameObject_m9AD1E42CC453D1D4A6AC31B0D7365AFA1AAEAA12_RuntimeMethod_var);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MultiplayerManager_GetMultiplayerRoleMaskForGameObject_m9AD1E42CC453D1D4A6AC31B0D7365AFA1AAEAA12_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		intptr_t L_1;
		L_1 = MarshalledUnityObject_Marshal_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44793CF3C0208AAD3122A5B81497AB1C6C851F8B_inline(L_0, MarshalledUnityObject_Marshal_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44793CF3C0208AAD3122A5B81497AB1C6C851F8B_RuntimeMethod_var);
		int32_t L_2;
		L_2 = MultiplayerManager_GetMultiplayerRoleMaskForGameObject_Injected_mF75AF83FC133DE3BB6A8DF575A942859028FEA56(L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 180473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MultiplayerManager_GetMultiplayerRoleMaskForComponent_m802FB7CC45D8433A6AEEB54E33653B1A47B4513F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_Marshal_TisComponent_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_m197E5A299FBA779D24F6472D9854DE904E349BD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiplayerManager_GetMultiplayerRoleMaskForComponent_m802FB7CC45D8433A6AEEB54E33653B1A47B4513F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(MultiplayerManager_GetMultiplayerRoleMaskForComponent_m802FB7CC45D8433A6AEEB54E33653B1A47B4513F_RuntimeMethod_var);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MultiplayerManager_GetMultiplayerRoleMaskForComponent_m802FB7CC45D8433A6AEEB54E33653B1A47B4513F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0 = ___0_component;
		intptr_t L_1;
		L_1 = MarshalledUnityObject_Marshal_TisComponent_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_m197E5A299FBA779D24F6472D9854DE904E349BD4_inline(L_0, MarshalledUnityObject_Marshal_TisComponent_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_m197E5A299FBA779D24F6472D9854DE904E349BD4_RuntimeMethod_var);
		int32_t L_2;
		L_2 = MultiplayerManager_GetMultiplayerRoleMaskForComponent_Injected_m60FC5F9C1CC7D897B1914770DF0230AA7542C976(L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 180474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MultiplayerManager_GetMultiplayerRoleMaskForGameObject_Injected_mF75AF83FC133DE3BB6A8DF575A942859028FEA56 (intptr_t ___0_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiplayerManager_GetMultiplayerRoleMaskForGameObject_Injected_mF75AF83FC133DE3BB6A8DF575A942859028FEA56_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(MultiplayerManager_GetMultiplayerRoleMaskForGameObject_Injected_mF75AF83FC133DE3BB6A8DF575A942859028FEA56_RuntimeMethod_var);
	//<source_info:<no-source>:1>
	typedef int32_t (*MultiplayerManager_GetMultiplayerRoleMaskForGameObject_Injected_mF75AF83FC133DE3BB6A8DF575A942859028FEA56_ftn) (intptr_t);
	static MultiplayerManager_GetMultiplayerRoleMaskForGameObject_Injected_mF75AF83FC133DE3BB6A8DF575A942859028FEA56_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MultiplayerManager_GetMultiplayerRoleMaskForGameObject_Injected_mF75AF83FC133DE3BB6A8DF575A942859028FEA56_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Multiplayer.Internal.MultiplayerManager::GetMultiplayerRoleMaskForGameObject_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_gameObject);
	return icallRetVal;
}
// Method Definition Index: 180475
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MultiplayerManager_GetMultiplayerRoleMaskForComponent_Injected_m60FC5F9C1CC7D897B1914770DF0230AA7542C976 (intptr_t ___0_component, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiplayerManager_GetMultiplayerRoleMaskForComponent_Injected_m60FC5F9C1CC7D897B1914770DF0230AA7542C976_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(MultiplayerManager_GetMultiplayerRoleMaskForComponent_Injected_m60FC5F9C1CC7D897B1914770DF0230AA7542C976_RuntimeMethod_var);
	//<source_info:<no-source>:1>
	typedef int32_t (*MultiplayerManager_GetMultiplayerRoleMaskForComponent_Injected_m60FC5F9C1CC7D897B1914770DF0230AA7542C976_ftn) (intptr_t);
	static MultiplayerManager_GetMultiplayerRoleMaskForComponent_Injected_m60FC5F9C1CC7D897B1914770DF0230AA7542C976_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MultiplayerManager_GetMultiplayerRoleMaskForComponent_Injected_m60FC5F9C1CC7D897B1914770DF0230AA7542C976_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Multiplayer.Internal.MultiplayerManager::GetMultiplayerRoleMaskForComponent_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_component);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 12078
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mCCC05B98943E8F4E0F6FBF47063A269048AE71E5_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
// Method Definition Index: 39950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_Marshal_TisIl2CppSharedGenericObject_m35CB06885EF5600EDBB840B54EDAF3A806896DBB_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_obj));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 33113));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 33114));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/UnityEngineObject.bindings.cs:1062>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 33115));
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/UnityEngineObject.bindings.cs:1063>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 33116));
		return 0;
	}

IL_000e:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/UnityEngineObject.bindings.cs:1064>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 33117));
		Il2CppSharedGenericObject* L_1 = ___0_obj;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 33118));
		intptr_t L_2;
		L_2 = MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 33118));
		return L_2;
	}
}
// Method Definition Index: 39951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_obj));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 33119));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 33120));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/UnityEngineObject.bindings.cs:1076>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 33121));
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0)->___m_CachedPtr;
		return L_1;
	}
}
