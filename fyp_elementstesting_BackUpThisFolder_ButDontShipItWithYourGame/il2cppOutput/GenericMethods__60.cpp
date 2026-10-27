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

struct UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD;
struct UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D;
struct UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B;
struct UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0;
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718;
struct UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6;
struct UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4;
struct UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A;
struct UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516;
struct UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB;
struct UnsafeList_1_tBBA2813E39DF02BCF903DF5387C884420C28F644;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct BlobBuilder_tBBD57F4A395313817B6AD5C883DA9BD7A3E9BC84;
struct CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A;
struct GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B;
struct Guid_t;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct String_t;
struct StructWithSelfPointer_tAA69227DAC8CF88D2FBE4A42BD77E491383B599A;
struct Type_t;
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF;
struct UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84;
struct FreeBitsChunk_tEA687BD905633D23A1F0C2DA3CE892F9A90FE1A5;
struct EqualityComparer_tF8FCE99C5DBB2F35D74728CB65346435381CFD5B;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Buffer_tF5DDA52AA39735125D710A126AC80BADEB900CD4  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
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
struct NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030 
{
	UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* ___m_ListData;
};
struct AttachmentIndexArray_tDC550BA2CD14AFB3B5545B02331C26903ADA90B5 
{
	int32_t ___a0;
	int32_t ___a1;
	int32_t ___a2;
	int32_t ___a3;
	int32_t ___a4;
	int32_t ___a5;
	int32_t ___a6;
	int32_t ___a7;
	int32_t ___activeAttachments;
};
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 
{
	uint32_t ___value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 
{
	uint8_t ___m_WriteEnabled;
	int8_t ___m_CompareFunction;
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
#pragma pack(push, tp, 1)
struct FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint64_t ___byte0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint64_t ___byte0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_OffsetPadding[8];
					uint64_t ___byte0008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_OffsetPadding_forAlignmentOnly[8];
					uint64_t ___byte0008_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4__padding[16];
	};
};
#pragma pack(pop, tp)
struct GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 
{
	int16_t ___U3CindexU3Ek__BackingField;
};
struct GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 
{
	float ___m_XCoordinate;
	float ___m_YCoordinate;
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
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	uint64_t ___u64_0;
	uint64_t ___u64_1;
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
struct MachineLearningTensorShape_tB77DBE335F1F51D0E33C78CA2B10E79995ACF957 
{
	uint32_t ___rank;
	uint32_t ___D0;
	uint32_t ___D1;
	uint32_t ___D2;
	uint32_t ___D3;
	uint32_t ___D4;
	uint32_t ___D5;
	uint32_t ___D6;
	uint32_t ___D7;
};
struct MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 
{
	float ___m_XPositionAdjustment;
	float ___m_YPositionAdjustment;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC 
{
	uint64_t ___m_SubId1;
	uint64_t ___m_SubId2;
};
struct MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E 
{
	uint32_t ___m_IndexStart;
	uint32_t ___m_IndexCount;
};
struct MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937 
{
	int32_t ___NameID;
	uint32_t ___Value;
};
struct MethodDefinitionHandle_t94F3F4618C88F6DD6A658FC3C364BC5C5D1EA8BF 
{
	int32_t ____rowId;
};
struct Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354 
{
	String_t* ___name;
	int32_t ___utf8ByteCount;
};
struct Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354_marshaled_pinvoke
{
	char* ___name;
	int32_t ___utf8ByteCount;
};
struct Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___utf8ByteCount;
};
struct NamespaceDefinitionHandle_t5490363A809D68426A38836A29CAA7704F7EAFF9 
{
	uint32_t ____value;
};
struct NavNode_t5BB37F8530DD1B679EACF4C83616D8AB28E4EBD3 
{
	uint64_t ___m_PolyRef;
};
struct OTL_Lookup_t868EC01B5051F7AA4A3735BC93BD02C875F07304 
{
	uint32_t ___lookupType;
	uint32_t ___lookupFlag;
	uint32_t ___markFilteringSet;
};
struct OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F 
{
	uint64_t ___U3CHandleU3Ek__BackingField;
};
struct PatchExtents_t9F583D220D8803058584E983C416D5706242A2CE 
{
	float ___m_min;
	float ___m_max;
};
struct PhysicsComposer_t0D54F067D6F10F1736E0A1667194CA45802E491B 
{
	int32_t ___m_Index1;
	uint16_t ___m_Generation;
};
struct PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 
{
	int32_t ___m_Index1;
	uint16_t ___m_World0;
	uint16_t ___m_Generation;
};
struct PhysicsMask_t3DD2C96AAEA0F639053D0EC7770BF403F296BFCC 
{
	uint64_t ___bitMask;
};
struct PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE 
{
	int32_t ___m_index;
	int32_t ___m_version;
};
struct PhysicsWorld_tD76337CF6B632797461123938E650738C9A18952 
{
	uint16_t ___m_Index1;
	uint16_t ___m_Generation;
};
struct PolygonId_t8064F95ADA9FE8AC5F7DDF61A9F1E66FFDDE2449 
{
	uint64_t ___polyRef;
};
#pragma pack(push, tp, 1)
struct ProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint16_t ___m_CategoryId;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint16_t ___m_CategoryId_forAlignmentOnly;
				};
			};
		};
		uint8_t ProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC__padding[2];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint64_t ___handle;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint64_t ___handle_forAlignmentOnly;
				};
			};
		};
		uint8_t ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4__padding[8];
	};
};
#pragma pack(pop, tp)
struct ProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F 
{
	int64_t ___value;
	int64_t ___count;
	int64_t ___refValue;
};
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	int32_t ___id;
};
struct PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 
{
	uint32_t ___valid;
	int32_t ___handleIndex;
};
struct PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 
{
	uint32_t ___m_AnimatorBindingsVersion;
	int32_t ___handleIndex;
	int32_t ___valueArrayIndex;
	int32_t ___bindType;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 
{
	int32_t ___start;
	int32_t ___length;
};
struct ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F 
{
	void* ___Buffer;
	int64_t ___Offset;
	int64_t ___Size;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RefreshRate_t44FF0D3F256477CC8AB97FA49D08B636AFB4F68F 
{
	uint32_t ___numerator;
	uint32_t ___denominator;
};
struct RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 
{
	int32_t ___m_LowerBound;
	int32_t ___m_UpperBound;
};
struct RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 
{
	uint8_t ___m_WriteMask;
	uint8_t ___m_SourceColorBlendMode;
	uint8_t ___m_DestinationColorBlendMode;
	uint8_t ___m_SourceAlphaBlendMode;
	uint8_t ___m_DestinationAlphaBlendMode;
	uint8_t ___m_ColorBlendOperation;
	uint8_t ___m_AlphaBlendOperation;
	uint8_t ___m_Padding;
};
struct ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC 
{
	int32_t ___passId;
	int32_t ___inputSlot;
};
struct ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC 
{
	bool ___written;
	int32_t ___writePassId;
	int32_t ___numReaders;
};
struct ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC_marshaled_pinvoke
{
	int32_t ___written;
	int32_t ___writePassId;
	int32_t ___numReaders;
};
struct ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC_marshaled_com
{
	int32_t ___written;
	int32_t ___writePassId;
	int32_t ___numReaders;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	int32_t ___m_Id;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct SingleSubstitutionRecord_t2246EF12CAF7E758203D0C11E9F3878472051CC9 
{
	uint32_t ___m_TargetGlyphID;
	uint32_t ___m_SubstituteGlyphID;
};
struct SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 
{
	int16_t ___m_LowerBound;
	int16_t ___m_UpperBound;
};
struct SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 
{
	float ___shr0;
	float ___shr1;
	float ___shr2;
	float ___shr3;
	float ___shr4;
	float ___shr5;
	float ___shr6;
	float ___shr7;
	float ___shr8;
	float ___shg0;
	float ___shg1;
	float ___shg2;
	float ___shg3;
	float ___shg4;
	float ___shg5;
	float ___shg6;
	float ___shg7;
	float ___shg8;
	float ___shb0;
	float ___shb1;
	float ___shb2;
	float ___shb3;
	float ___shb4;
	float ___shb5;
	float ___shb6;
	float ___shb7;
	float ___shb8;
};
struct SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501 
{
	float ___height;
	float ___bevelCutoff;
	float ___bevelSize;
	uint32_t ___spriteIndex;
	bool ___corner;
};
struct SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501_marshaled_pinvoke
{
	float ___height;
	float ___bevelCutoff;
	float ___bevelSize;
	uint32_t ___spriteIndex;
	int32_t ___corner;
};
struct SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501_marshaled_com
{
	float ___height;
	float ___bevelCutoff;
	float ___bevelSize;
	uint32_t ___spriteIndex;
	int32_t ___corner;
};
struct SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5 
{
	int32_t ___m_GeomIndex;
	int32_t ___m_IndexCount;
	int32_t ___m_VertexCount;
	int32_t ___m_SpriteIndex;
};
struct StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 
{
	uint8_t ___m_Enabled;
	uint8_t ___m_ReadMask;
	uint8_t ___m_WriteMask;
	uint8_t ___m_Padding;
	uint8_t ___m_CompareFunctionFront;
	uint8_t ___m_PassOperationFront;
	uint8_t ___m_FailOperationFront;
	uint8_t ___m_ZFailOperationFront;
	uint8_t ___m_CompareFunctionBack;
	uint8_t ___m_PassOperationBack;
	uint8_t ___m_FailOperationBack;
	uint8_t ___m_ZFailOperationBack;
};
struct StringOffset_t429FFE4819A3944F4D1176FF9582DBADA89A1DDE 
{
	int32_t ___Value;
};
struct StructInt_t964CDBE36B779556058BB33004AD4997131D452D 
{
	int32_t ___field;
};
struct StructWith8ByteAndBoolFields_tB5DD3E2DD9CF376D1710F8093CF4644C16C2F21B 
{
	int64_t ___int64;
	bool ___bool1;
	bool ___bool2;
	bool ___bool3;
};
struct StructWith8ByteAndBoolFields_tB5DD3E2DD9CF376D1710F8093CF4644C16C2F21B_marshaled_pinvoke
{
	int64_t ___int64;
	int32_t ___bool1;
	int32_t ___bool2;
	int32_t ___bool3;
};
struct StructWith8ByteAndBoolFields_tB5DD3E2DD9CF376D1710F8093CF4644C16C2F21B_marshaled_com
{
	int64_t ___int64;
	int32_t ___bool1;
	int32_t ___bool2;
	int32_t ___bool3;
};
struct StructWithSelfPointer_tAA69227DAC8CF88D2FBE4A42BD77E491383B599A 
{
	int32_t ___value;
	StructWithSelfPointer_tAA69227DAC8CF88D2FBE4A42BD77E491383B599A* ___other;
};
struct SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026 
{
	int32_t ___cullingSplitIndex;
	int32_t ___occluderSubviewIndex;
};
struct TypeDefinitionHandle_tE85E143F0FED1313BA132EB2151B5FC04F00043B 
{
	int32_t ____rowId;
};
struct UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC 
{
	int32_t ___startCharIdx;
	int32_t ___height;
	float ___topY;
	float ___leading;
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
struct UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
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
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
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
struct XrExtent2Df_t4302AF6D9C771DE91C603A415095BC851189CE1C 
{
	float ___Width;
	float ___Height;
};
struct XrExtent3Df_tE3B30FA164620FBE1DEF115DB8F4134C8FA064E5 
{
	float ___U3CwidthU3Ek__BackingField;
	float ___U3CheightU3Ek__BackingField;
	float ___U3CdepthU3Ek__BackingField;
};
struct XrQuaternionf_t1B123C02977BA0A0FF57BF0434F92C16BAC4CFD6 
{
	float ___X;
	float ___Y;
	float ___Z;
	float ___W;
};
struct XrUuid_tE34CFEC216D8A7DD1EE157F12A145509C1BF2A74 
{
	uint64_t ___U3CdataPart1U3Ek__BackingField;
	uint64_t ___U3CdataPart2U3Ek__BackingField;
};
struct XrVector2f_t347E48BCFE5F37AFA86233510BC67C246F868188 
{
	float ___X;
	float ___Y;
};
struct XrVector3f_t63DECBA2AFC7771B19C164A533925A5E20386F2A 
{
	float ___X;
	float ___Y;
	float ___Z;
};
struct float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 
{
	float ___x;
	float ___y;
};
struct float3_t7600B73F092B37F484B12910A5269F30C778D31E 
{
	float ___x;
	float ___y;
	float ___z;
};
struct float4_t545A994996126766890C1F28B43EA823F2410190 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct int2_tB123E869131C6102341F8F9AA01726E0E7C2768D 
{
	int32_t ___x;
	int32_t ___y;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct Block_tBD2149E220F819A66A4A0A18F237932ACD9011DE 
{
	int32_t ___offset;
	int32_t ___count;
};
struct U3CshaderPassNamesU3Ee__FixedBuffer_t5EDC823777BDDC9D50E55FF3779FBC1B3820126D 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CshaderPassNamesU3Ee__FixedBuffer_t5EDC823777BDDC9D50E55FF3779FBC1B3820126D__padding[64];
	};
};
struct SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A 
{
	int32_t ___packetCount;
};
struct GeoPoolEntrySlot_tE1B7B103A90E4C3379CED82C8D6DA55189422977 
{
	uint32_t ___refCount;
	uint32_t ___hash;
	int32_t ___geoSlotHandle;
};
struct U3Cm_DataU3Ee__FixedBuffer_t61B5089B532ED860FEB565777CFF3E1187313433 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3Cm_DataU3Ee__FixedBuffer_t61B5089B532ED860FEB565777CFF3E1187313433__padding[48];
	};
};
struct LodSelectionCurve_t5E3F99BC782C22E828074538B8B43051FF859713 
{
	float ___m_LodSlope;
	float ___m_LodBias;
};
struct RowCounts_t7C20BB319478D12D43A8A6E9BD0EBEF939A2828B 
{
	int32_t ___AggregateInserts;
	int32_t ___Updates;
};
struct FreeBitsChunk_tEA687BD905633D23A1F0C2DA3CE892F9A90FE1A5 
{
	int32_t ___chunk;
	uint32_t ___freeBits;
};
struct Vector2f_tB2A7770F503276F90D359B6933F0A86D51BA3186 
{
	float ___x;
	float ___y;
};
struct Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4f_t1B7E11764C0EA53E7809996B56E208E32A1D5A86 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Vector4s_t37178C957A1C65EEC13FADEFB227695709228857 
{
	int16_t ___x;
	int16_t ___y;
	int16_t ___z;
	int16_t ___w;
};
struct Triangle_t1E40B48B31C15D29D06051730DE4C3CDFEA5C042 
{
	int32_t ___A;
	int32_t ___B;
	int32_t ___C;
};
struct U3C_InvViewProjMatrixU3Ee__FixedBuffer_t84BA561C0A390D42FB00B35F6BE1C962C6F74476 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_InvViewProjMatrixU3Ee__FixedBuffer_t84BA561C0A390D42FB00B35F6BE1C962C6F74476__padding[384];
	};
};
struct U3C_MipOffsetAndSizeU3Ee__FixedBuffer_t19F7DC806EA002CD5FAB22FF5C56BA6996373997 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3C_MipOffsetAndSizeU3Ee__FixedBuffer_t19F7DC806EA002CD5FAB22FF5C56BA6996373997__padding[80];
	};
};
struct U3C_SilhouettePlanesU3Ee__FixedBuffer_t138533E2CBC2A8352DC298BD5645D4B1DC7B0553 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_SilhouettePlanesU3Ee__FixedBuffer_t138533E2CBC2A8352DC298BD5645D4B1DC7B0553__padding[96];
	};
};
struct U3C_SrcOffsetU3Ee__FixedBuffer_tB1B1C9C345AE115D9BA814505D76E71BC515BB1E 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3C_SrcOffsetU3Ee__FixedBuffer_tB1B1C9C345AE115D9BA814505D76E71BC515BB1E__padding[96];
	};
};
struct U3C_FacingDirWorldSpaceU3Ee__FixedBuffer_t2195F26FDAB952B9A94C6FC1F36CD4A370DE00F6 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_FacingDirWorldSpaceU3Ee__FixedBuffer_t2195F26FDAB952B9A94C6FC1F36CD4A370DE00F6__padding[96];
	};
};
struct U3C_OccluderMipBoundsU3Ee__FixedBuffer_t369A0CC0F2EADA636FAF26E88452A11643E481EF 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3C_OccluderMipBoundsU3Ee__FixedBuffer_t369A0CC0F2EADA636FAF26E88452A11643E481EF__padding[128];
	};
};
struct U3C_RadialDirWorldSpaceU3Ee__FixedBuffer_t4F19C8EE6486E94F0A21112400CC138E955DCFF9 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_RadialDirWorldSpaceU3Ee__FixedBuffer_t4F19C8EE6486E94F0A21112400CC138E955DCFF9__padding[96];
	};
};
struct U3C_ViewOriginWorldSpaceU3Ee__FixedBuffer_tAA15F0CD1A812C5CB25868532F7F022903331B69 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_ViewOriginWorldSpaceU3Ee__FixedBuffer_tAA15F0CD1A812C5CB25868532F7F022903331B69__padding[96];
	};
};
struct U3C_ViewProjMatrixU3Ee__FixedBuffer_t0AA43098E17D71DCD19AFE4EA8D150954292017F 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_ViewProjMatrixU3Ee__FixedBuffer_t0AA43098E17D71DCD19AFE4EA8D150954292017F__padding[384];
	};
};
struct U3C_OccluderMipBoundsU3Ee__FixedBuffer_tF1478CF3899AC0E5325B5284FBE53B0FF2454A55 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3C_OccluderMipBoundsU3Ee__FixedBuffer_tF1478CF3899AC0E5325B5284FBE53B0FF2454A55__padding[128];
	};
};
struct LayerHandle_t06582578F9B5D5AA335BFCDE0973956EF5648900 
{
	int32_t ___m_IndexId;
	int32_t ___m_Composer;
	uint16_t ___m_Revision;
};
struct ContactId_tD87E020E1E854F067B05AE73E9C5B3FE3155CF11 
{
	int32_t ___m_IndexId;
	uint16_t ___m_WorldId;
	uint16_t ___m_Padding;
	int32_t ___m_GenerationId;
};
struct U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62__padding[160];
	};
};
struct U3CindicesU3Ee__FixedBuffer_t7113A060626CDDAD4EE265E2FF21718C0DFC5AC9 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CindicesU3Ee__FixedBuffer_t7113A060626CDDAD4EE265E2FF21718C0DFC5AC9__padding[16];
	};
};
struct U3CneighborsU3Ee__FixedBuffer_t67A3150AF25E6345E2F567B86A0AE64DBC5AF4DB 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CneighborsU3Ee__FixedBuffer_t67A3150AF25E6345E2F567B86A0AE64DBC5AF4DB__padding[16];
	};
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
struct Nullable_1_tC8106DB4DC621B5BCB8913A244640A1CEDF9DD25 
{
	bool ___hasValue;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value;
};
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	bool ___hasValue;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value;
};
struct UnsafeList_1_tEF402E259D390EA25AFFFF8D967B3EB014B9A7DC 
{
	UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t045D20B5AD78A93EF71288E2EE1F31B44B682778 
{
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t50550CEABB959BFA1A623C8BEA7F57DB44B12093 
{
	UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t562F009533B9AD3A7B0F4DBF2D3DD41A07EBA140 
{
	UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tA360AA1D3FAC94F732905EC58605414C4592FCBD 
{
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tADF105D4D0254C44A022A3B2928E3A129B090DA6 
{
	UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tCB6C3D0DF6D45E8D0F1AB899D3F6184EB53CACD5 
{
	UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tBDD383F66A245BBF180BD9D9BCD6D9C48B36325C 
{
	UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tB16A935C476248B9129865F308F511262905777F 
{
	UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t42D7397763B114A70D610F1FFBBC262DE2D9E5FC 
{
	UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tB698B9DE7D882F49506F01854E176CB7BEC89B30 
{
	UnsafeList_1_tBBA2813E39DF02BCF903DF5387C884420C28F644* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t5F75981CEC17C7EAE94180B0C9C63C260D6D1B3C 
{
	GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 
{
	int32_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tEECA348F0E34147530D222AB9E0B420D6190B22E 
{
	UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tBB6961066733E78B8C22E5C4D4D5FF9A581981D1 
{
	Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t48F05227A71C57D26477CA087FE73B2908CEF600 
{
	FreeBitsChunk_tEA687BD905633D23A1F0C2DA3CE892F9A90FE1A5* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct AccessFlags_tB7D400C853C05A1DB9C6B56DF14E43721F0B1739 
{
	int32_t ___value__;
};
struct AimFlags_t8952604A46D1B1A92F6BB8E282BF3C92FBC66397 
{
	int32_t ___value__;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Version;
};
struct AvailableTrackingData_t223756B90093C1B8974F04856043E3983BA37402 
{
	int32_t ___value__;
};
struct BatchCullingViewType_tAC2682BF9A489DF44A8960693303B47248C252CF 
{
	int32_t ___value__;
};
struct BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 
{
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState0;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState1;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState2;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState3;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState4;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState5;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState6;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState7;
	uint8_t ___m_SeparateMRTBlendStates;
	uint8_t ___m_AlphaToMask;
	int16_t ___m_Padding;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct BuiltinRenderTextureType_t3D56813CAC7C6E4AC3B438039BD1CE7E62FE7C4E 
{
	int32_t ___value__;
};
struct ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 
{
	bool ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke
{
	int32_t ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com
{
	int32_t ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct CubemapFace_t300D6E2CD7DF60D44AA28338748B607677ED1D1B 
{
	int32_t ___value__;
};
struct CullMode_t049B71889E4E981866E205A3F71DC8B856306D50 
{
	int32_t ___value__;
};
struct CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 
{
	intptr_t ___ptr;
	CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A* ___m_AllocationInfo;
};
struct DistanceMetric_t071B9815BB961E33F7CA2C553CA725F61AE09EDE 
{
	int32_t ___value__;
};
struct DrawRendererFlags_t3AD0574208BFF93F323D5E1E92012F19EAE972CD 
{
	int32_t ___value__;
};
struct ExtendedFeatureFlags_t736CECC24E1DDF78CDF8A2B134DFF9B1CA2BE01F 
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
struct FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F 
{
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___m_RenderQueueRange;
	int32_t ___m_LayerMask;
	uint32_t ___m_RenderingLayerMask;
	uint32_t ___m_BatchLayerMask;
	int32_t ___m_ExcludeMotionVectorObjects;
	int32_t ___m_ForceAllMotionVectorObjects;
	SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 ___m_SortingLayerRange;
};
#pragma pack(push, tp, 1)
struct FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_OffsetPadding[32];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_OffsetPadding[48];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0048_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1__padding[64];
	};
};
#pragma pack(pop, tp)
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713 
{
	int32_t ___value__;
};
struct Handedness_tC87DA4E9D99745447BF40B631E8B479E32D8E37F 
{
	int32_t ___value__;
};
struct InputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D 
{
	uint32_t ___value__;
};
struct InstanceOcclusionEventType_tF66ED25A6A1D3943D326795EA91E803D666ECF79 
{
	int32_t ___value__;
};
struct LightType_t2D4D43054E7473EECEB54493C0055AE074780234 
{
	int32_t ___value__;
};
struct LoadReason_t6890871E119ACAB707211201A00DE631CA266CF9 
{
	int32_t ___value__;
};
struct MachineLearningDataType_t7767160E484E4FA4F6C534972EEA59EC56BFC5F6 
{
	int32_t ___value__;
};
struct MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 
{
	uint32_t ___m_BaseGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseGlyphAnchorPoint;
	uint32_t ___m_MarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_MarkPositionAdjustment;
};
struct MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C 
{
	uint32_t ___m_BaseMarkGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseMarkGlyphAnchorPoint;
	uint32_t ___m_CombiningMarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_CombiningMarkPositionAdjustment;
};
struct MarshalledMethod_tBA55BA1844DA23D5366287E79787F3F63E919207 
{
	intptr_t ___method;
	intptr_t ___declaringType;
};
struct MaterialPropertyValueType_t3AE79BF4BF4F82EFA7E2ED2CB4EC5BAB096BC5A8 
{
	int32_t ___value__;
};
struct Matrix3x4f_tBB3DA7B3DA123F34FD27F7ADF56355A3D9D881F0 
{
	U3Cm_DataU3Ee__FixedBuffer_t61B5089B532ED860FEB565777CFF3E1187313433 ___m_Data;
};
struct MeshChangeState_t4CCBA82867A78CD1241B037198571A5365D7910C 
{
	int32_t ___value__;
};
struct MeshInstanceDesc_tB2FE46683FA05965417F454F188294A3269F5F73 
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh;
	int32_t ___subMeshIndex;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___localToWorldMatrix;
	uint32_t ___mask;
	uint32_t ___instanceID;
	bool ___enableTriangleCulling;
	bool ___frontTriangleCounterClockwise;
	bool ___opaqueGeometry;
};
struct MeshInstanceDesc_tB2FE46683FA05965417F454F188294A3269F5F73_marshaled_pinvoke
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh;
	int32_t ___subMeshIndex;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___localToWorldMatrix;
	uint32_t ___mask;
	uint32_t ___instanceID;
	int32_t ___enableTriangleCulling;
	int32_t ___frontTriangleCounterClockwise;
	int32_t ___opaqueGeometry;
};
struct MeshInstanceDesc_tB2FE46683FA05965417F454F188294A3269F5F73_marshaled_com
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh;
	int32_t ___subMeshIndex;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___localToWorldMatrix;
	uint32_t ___mask;
	uint32_t ___instanceID;
	int32_t ___enableTriangleCulling;
	int32_t ___frontTriangleCounterClockwise;
	int32_t ___opaqueGeometry;
};
struct MeshRendererComponentMask_t9A6A143E8B9C3374C4996ACD2C09D03FA0ABA156 
{
	int32_t ___value__;
};
struct MeshRendererUpdateType_t1A5CB58D1DC16CBF8A09F4199C6680A1C2E39416 
{
	int32_t ___value__;
};
struct MeshTopology_t815FF5CF04D62195A23E2DF8A5C0A071F11FBCBF 
{
	int32_t ___value__;
};
struct MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A 
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField;
	uint64_t ___U3CTimestampU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField;
};
struct ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 
{
	intptr_t ___actor;
	intptr_t ___otherActor;
	intptr_t ___shape;
	intptr_t ___otherShape;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___otherRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___otherPosition;
	int32_t ___numContacts;
	intptr_t ___contacts;
};
struct MotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB 
{
	int32_t ___value__;
};
struct NavLocation_tB55264752D60479DF2C5EEAD78893070EFDF95D0 
{
	NavNode_t5BB37F8530DD1B679EACF4C83616D8AB28E4EBD3 ___U3CnodeU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpositionU3Ek__BackingField;
};
struct NavMeshBuildMarkup_tC2D636663691297A05F32A8B2B8CAA7108FEE8AC 
{
	int32_t ___m_OverrideArea;
	int32_t ___m_Area;
	int32_t ___m_InheritIgnoreFromBuild;
	int32_t ___m_IgnoreFromBuild;
	int32_t ___m_OverrideGenerateLinks;
	int32_t ___m_GenerateLinks;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
	int32_t ___m_IgnoreChildren;
};
struct NavMeshBuildSourceShape_t0D044D75712305894A038997DAFB311723771268 
{
	int32_t ___value__;
};
struct NavMeshLocation_tD3C7A2DD4EFEF60B2394F75FFB2CDDA35AC28376 
{
	PolygonId_t8064F95ADA9FE8AC5F7DDF61A9F1E66FFDDE2449 ___U3CpolygonU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpositionU3Ek__BackingField;
};
struct NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 
{
	intptr_t ___headSrc;
	intptr_t ___headDst;
	int32_t ___headCount;
	intptr_t ___tailSrc;
	intptr_t ___tailDst;
	int32_t ___tailCount;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform;
	int32_t ___keepZ;
};
struct OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627 
{
	U3C_InvViewProjMatrixU3Ee__FixedBuffer_t84BA561C0A390D42FB00B35F6BE1C962C6F74476 ____InvViewProjMatrix;
	U3C_SilhouettePlanesU3Ee__FixedBuffer_t138533E2CBC2A8352DC298BD5645D4B1DC7B0553 ____SilhouettePlanes;
	U3C_SrcOffsetU3Ee__FixedBuffer_tB1B1C9C345AE115D9BA814505D76E71BC515BB1E ____SrcOffset;
	U3C_MipOffsetAndSizeU3Ee__FixedBuffer_t19F7DC806EA002CD5FAB22FF5C56BA6996373997 ____MipOffsetAndSize;
	uint32_t ____OccluderMipLayoutSizeX;
	uint32_t ____OccluderMipLayoutSizeY;
	uint32_t ____OccluderDepthPyramidPad0;
	uint32_t ____OccluderDepthPyramidPad1;
	uint32_t ____SrcSliceIndices;
	uint32_t ____DstSubviewIndices;
	uint32_t ____MipCount;
	uint32_t ____SilhouettePlaneCount;
};
struct OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewProjMatrix;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___viewOriginWorldSpace;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___radialDirWorldSpace;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___facingDirWorldSpace;
};
struct OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB 
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___offset;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___size;
};
struct OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7 
{
	int32_t ___subviewIndex;
	int32_t ___depthSliceIndex;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___depthOffset;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___invViewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___gpuProjMatrix;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___viewOffsetWorldSpace;
};
struct OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74 
{
	U3C_OccluderMipBoundsU3Ee__FixedBuffer_t369A0CC0F2EADA636FAF26E88452A11643E481EF ____OccluderMipBounds;
	U3C_ViewProjMatrixU3Ee__FixedBuffer_t0AA43098E17D71DCD19AFE4EA8D150954292017F ____ViewProjMatrix;
	U3C_ViewOriginWorldSpaceU3Ee__FixedBuffer_tAA15F0CD1A812C5CB25868532F7F022903331B69 ____ViewOriginWorldSpace;
	U3C_FacingDirWorldSpaceU3Ee__FixedBuffer_t2195F26FDAB952B9A94C6FC1F36CD4A370DE00F6 ____FacingDirWorldSpace;
	U3C_RadialDirWorldSpaceU3Ee__FixedBuffer_t4F19C8EE6486E94F0A21112400CC138E955DCFF9 ____RadialDirWorldSpace;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____DepthSizeInOccluderPixels;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____OccluderDepthPyramidSize;
	uint32_t ____OccluderMipLayoutSizeX;
	uint32_t ____OccluderMipLayoutSizeY;
	uint32_t ____OcclusionTestDebugFlags;
	uint32_t ____OcclusionCullingCommonPad0;
	int32_t ____OcclusionTestCount;
	int32_t ____OccluderSubviewIndices;
	int32_t ____CullingSplitIndices;
	int32_t ____CullingSplitMask;
};
struct OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____DepthSizeInOccluderPixels;
	U3C_OccluderMipBoundsU3Ee__FixedBuffer_tF1478CF3899AC0E5325B5284FBE53B0FF2454A55 ____OccluderMipBounds;
	uint32_t ____OccluderMipLayoutSizeX;
	uint32_t ____OccluderMipLayoutSizeY;
	uint32_t ____OcclusionCullingDebugPad0;
	uint32_t ____OcclusionCullingDebugPad1;
};
struct OcclusionTest_tFF967683F812A2788B5C8A9A220B83B43060435E 
{
	int32_t ___value__;
};
struct ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Intersection;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_ColliderEntityId;
};
struct PassBreakReason_t57DD36F9EC4ED3DA89A4740BE8C32987018CF808 
{
	int32_t ___value__;
};
struct PassMergeState_t7815130D2990D177421E7CB405CE173EC704A117 
{
	int32_t ___value__;
};
struct PerObjectData_t04DDCBE9ABF1113E8F9BAFCF4A7F94DD841B9CC9 
{
	int32_t ___value__;
};
struct PhysicsAABB_tF85A2986C9C6AE5F076F4ADF07B0523CFF880F28 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LowerBound;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UpperBound;
};
struct PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 
{
	PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 ___m_PhysicsHandle;
};
struct PhysicsChain_tEABC68CB776A86D9FE4364F37FED25738ADF27C1 
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
struct PhysicsShapeType2D_t44AE2DF9DE93C130AF36529B830CDCD34D55223B 
{
	int32_t ___value__;
};
struct PhysicsUserData_t767769E7B130D2A0974D0FA6F9477DF8AED0D113 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
	PhysicsMask_t3DD2C96AAEA0F639053D0EC7770BF403F296BFCC ___m_PhysicsMask;
	float ___m_Float;
	int32_t ___m_Int;
	uint64_t ___m_Int64;
	bool ___m_Bool;
};
struct PhysicsUserData_t767769E7B130D2A0974D0FA6F9477DF8AED0D113_marshaled_pinvoke
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
	PhysicsMask_t3DD2C96AAEA0F639053D0EC7770BF403F296BFCC ___m_PhysicsMask;
	float ___m_Float;
	int32_t ___m_Int;
	uint64_t ___m_Int64;
	int32_t ___m_Bool;
};
struct PhysicsUserData_t767769E7B130D2A0974D0FA6F9477DF8AED0D113_marshaled_com
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
	PhysicsMask_t3DD2C96AAEA0F639053D0EC7770BF403F296BFCC ___m_PhysicsMask;
	float ___m_Float;
	int32_t ___m_Int;
	uint64_t ___m_Int64;
	int32_t ___m_Bool;
};
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	float ___m_Distance;
};
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
};
struct ProbeSetIndex_t973C9441F5B7FB7CB9B02D111CB632B874813A5D 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___m_Hash;
	int32_t ___m_Offset;
	int32_t ___m_Size;
};
struct QueryTriggerInteraction_t5AA443202C8B671F391534A002B7CF48A1412D23 
{
	int32_t ___value__;
};
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	uint32_t ___m_FaceID;
	float ___m_Distance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_Collider;
};
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	float ___m_Distance;
	float ___m_Fraction;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_Collider;
};
struct RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_RenderTextureInstanceID;
	intptr_t ___m_BufferPtr;
};
struct RenderBufferLoadAction_t3333B2CABABAC39DA0CDC25602E5E4FD93C2CB0E 
{
	int32_t ___value__;
};
struct RenderBufferStoreAction_t87683F22C09634E24A574F21F42037C953A2C8B7 
{
	int32_t ___value__;
};
struct RenderGraphPassType_tD00EC2DAA135C660EE7E71652291A4672104EA2D 
{
	int32_t ___value__;
};
struct RenderGraphResourceType_t5F552AF06E38DEC5775B77F13C8783A895FCD086 
{
	int32_t ___value__;
};
struct RenderStateMask_tC9C95BF62EADEE4D622D4E16CDE1DF94E2A9EF57 
{
	int32_t ___value__;
};
struct RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 
{
	uintptr_t ___context;
	uint32_t ___index;
	uint32_t ___frame;
	uint32_t ___type;
	uint32_t ___contextID;
};
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 
{
	int32_t ___m_Width;
	int32_t ___m_Height;
	RefreshRate_t44FF0D3F256477CC8AB97FA49D08B636AFB4F68F ___m_RefreshRate;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct ScaleMode_t16AD656758EE54C56B3DA34FE4F2033C9C2EE13D 
{
	int32_t ___value__;
};
struct SectionCharacteristics_t4CB501495BC18951119375C2DBFD3109D9D4AE8A 
{
	uint32_t ___value__;
};
struct SegmentGeometry_tB93A6D3EFCC2E4140411F9A1EED7746CBD2560B0 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point2;
};
struct SerializedCommandType_tCCFFDB6712F9C2F7158BAF13B11DB958DC387213 
{
	int32_t ___value__;
};
struct ShadingRateCombiner_tF7F5DDD676DF45F67B2A7BC7F14373F4DFAD2B1C 
{
	int32_t ___value__;
};
struct ShadingRateFragmentSize_tE61BBA9B957F4537F04519746FCABE0F5FA94C9F 
{
	int32_t ___value__;
};
struct ShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D 
{
	int32_t ___value__;
};
struct ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF 
{
	int32_t ___m_CullingPlaneCount;
	U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62 ___m_CullingPlanes;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_CullingSphere;
	float ___m_ShadowCascadeBlendCullingFactor;
	float ___m_CullingNearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_CullingMatrix;
};
struct ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftTangent;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightTangent;
	int32_t ___mode;
};
struct SortingCriteria_t4907D221CB6E6AA4A32C1ED7B5D17103FD3E7C39 
{
	int32_t ___value__;
};
struct SpriteBlendShapeVertex_t3E8A43E6B7C7EF565A7A074F26F951EB30FC1F38 
{
	uint32_t ___index;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vertex;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tangent;
};
struct StoreReason_tB71F110DFEED47ED8929B7874BE46BD4AFA9D5AC 
{
	int32_t ___value__;
};
struct StructNestedBlittable_tE8D6D7972DCD980D50085F5008637615FAA814F8 
{
	StructInt_t964CDBE36B779556058BB33004AD4997131D452D ___field;
};
struct StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE 
{
	int32_t ___value__;
};
struct SubPassFlags_tB4066DF82B36110B6163EB5C3A48F49FD4DD3AE5 
{
	int32_t ___value__;
};
struct TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv2;
};
struct TextVertex_t17E105D7F6DE9EE1DACB75DE05A489CB11C556CC 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0;
};
struct TextureUVOriginSelection_t885C52C74C02CA1A0D3D9FDB10D05A1BFBCD7F81 
{
	int32_t ___value__;
};
struct TileAnimationFlags_tA70AD7E12D667AA759A54CBC19A42FCAF5BB2B79 
{
	int32_t ___value__;
};
struct TileFlags_tDCEE980FCB6A2159202B4C8096C11452E318D2A9 
{
	int32_t ___value__;
};
struct TimeUnit_t56A79CDB672E98A4EE28002BD23B6D5E0BAA2649 
{
	int32_t ___value__;
};
struct TransformHandle_t9B8D6EFB585BC5771E23B0D6C7B0C5080327CD30 
{
	intptr_t ___pTransformData;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___id;
};
struct TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18 
{
	float4_t545A994996126766890C1F28B43EA823F2410190 ___localToWorld0;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___localToWorld1;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___localToWorld2;
};
struct TreeInstance_t382B018173ED020660D262061EA9424682614F50 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	float ___widthScale;
	float ___heightScale;
	float ___rotation;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___lightmapColor;
	int32_t ___prototypeIndex;
	float ___temporaryDistance;
};
struct UIAnimationBoundProperty_tA7BD14989726A4AFEC4EFB3765E75C9A130729B4 
{
	int32_t ___elementIndex;
	int32_t ___propertyId;
	int32_t ___channel;
	float ___currentValue;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___currentObjectValue;
	uint32_t ___hash;
	int32_t ___currentValueUpToDate;
};
struct UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cursorPos;
	float ___charWidth;
};
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv3;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___prevPosition;
};
struct UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4 
{
	uint64_t* ___Ptr;
	int32_t ___Length;
	int32_t ___Capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2 
{
	void* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___tint;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___layoutUV;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___xformClipPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___ids;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___flags;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___opacityColorPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___settingIndex;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___circle;
	float ___textureId;
};
struct VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6 
{
	int32_t ___value__;
};
struct VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F 
{
	int32_t ___value__;
};
struct VisibleLightFlags_t337DB92EFB0014AD6A250E1E45338B1194657CD8 
{
	int32_t ___value__;
};
struct XRCommonHandGesturesFlags_tA908D1693832C9EFF38F9C1E2974A43F5A276CC1 
{
	int32_t ___value__;
};
struct XRHandJointTrackingState_tFAA84D8000155CA6945B5402532B00365379D6DA 
{
	int32_t ___value__;
};
struct XRNode_t41F4B2F0EDD99DB33C49EC731C8C7F9DF142B5FF 
{
	int32_t ___value__;
};
struct XrAgenticExternalToolParameterTypeMETAX1_t23301BA6647EA09607FE2A7B256585A23AF3BEC4 
{
	int32_t ___value__;
};
struct XrPosef_t30CFD88924941CAA7DB413CD1AFF423530A90DD0 
{
	XrQuaternionf_t1B123C02977BA0A0FF57BF0434F92C16BAC4CFD6 ___Orientation;
	XrVector3f_t63DECBA2AFC7771B19C164A533925A5E20386F2A ___Position;
};
struct XrSemanticLabelMETA_tB10B6E36D935F428166177FCD2B3E828681F5B35 
{
	int32_t ___value__;
};
struct XrSpaceComponentTypeFB_t9AEBF18767AA81DB1F39A7D13FAE0E46B4E381EB 
{
	int32_t ___value__;
};
struct XrSpatialBufferTypeEXT_tECC1DF75419659B8490CED4052D121DB63782B4D 
{
	int32_t ___value__;
};
struct XrSpatialCapabilityEXT_tEB89009306C8E341B6DE3C3502F921F6C93A77F7 
{
	int32_t ___value__;
};
struct XrSpatialPersistenceStateEXT_t21F697FEE1EA728AC1DE4364B4A5F9A235187105 
{
	int32_t ___value__;
};
struct XrStructureType_t99AEF77046555042E617DA08DA96591B89746BB6 
{
	int32_t ___value__;
};
struct float4x3_t91174DFA825CF654DEC0189269DD172BF4E08CE2 
{
	float4_t545A994996126766890C1F28B43EA823F2410190 ___c0;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___c1;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___c2;
};
struct float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA 
{
	float4_t545A994996126766890C1F28B43EA823F2410190 ___c0;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___c1;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___c2;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___c3;
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			bool ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppChar ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct quaternion_t9C8C2916B7359C174B215BBB41F290ABCBEA8AEA 
{
	float4_t545A994996126766890C1F28B43EA823F2410190 ___value;
};
struct Allocation_tB22CAD44C5AF0C13B3D441F8B419C9BA1D19F70C 
{
	int32_t ___handle;
	Block_tBD2149E220F819A66A4A0A18F237932ACD9011DE ___block;
};
struct PolyType_t61D62010DE1E30694B2F823BDFBA120B776ABAD7 
{
	int32_t ___value__;
};
struct EndType_t44002443DAAFEF649DA75F399F4A5CE38B2D9126 
{
	int32_t ___value__;
};
struct JoinType_tCC38C44CB0E5130C3761EFECF52EBDDD9EEC417D 
{
	int32_t ___value__;
};
struct FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063 
{
	uint32_t ___imageIndex;
	float ___position;
	float ___size;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	bool ___useLightColor;
	bool ___rotate;
	bool ___zoom;
	bool ___fade;
};
struct FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063_marshaled_pinvoke
{
	uint32_t ___imageIndex;
	float ___position;
	float ___size;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	int32_t ___useLightColor;
	int32_t ___rotate;
	int32_t ___zoom;
	int32_t ___fade;
};
struct FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063_marshaled_com
{
	uint32_t ___imageIndex;
	float ___position;
	float ___size;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	int32_t ___useLightColor;
	int32_t ___rotate;
	int32_t ___zoom;
	int32_t ___fade;
};
struct PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B 
{
	float4_t545A994996126766890C1F28B43EA823F2410190 ___nx;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___ny;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___nz;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___d;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___nxAbs;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___nyAbs;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___nzAbs;
};
struct AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___cameraID;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___jobHandle;
};
struct Hash128IntPair_tEC4F0FF6106FC531822785099533F4AEFD48B123 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___Hash;
	int32_t ___Value;
};
struct NativeColorPage_tD578D4E96ABBDBB0E6A608F6CE97A0362ABD7D4B 
{
	int32_t ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___backgroundRepeatRect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv;
};
struct BlendProbesUsage_tFD5E0A98D2DF9D8CFC25666743C6189C33CE4AA0 
{
	int32_t ___value__;
};
struct LightmapUsage_t2F244D6F9FFD700E6CBC90571DAA5B1627B13CF5 
{
	int32_t ___value__;
};
struct SemanticLabel_tC9B2BE3F8A03A523456857A1080A0DE881401D3D 
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
struct SpaceDiscoveryResult_tAE65D22D6BE768AE619A297B6ED25B8CC01777B3 
{
	uint64_t ___Space;
	Guid_t ___Uuid;
};
struct SpaceLocationFlags_t1DCCBA7A36959A05A33892C51F7EDBDCE9E98293 
{
	uint64_t ___value__;
};
struct SpaceQueryResult_tBBBE74AF0A11892832ABF0A46E2B5E9A9E375DB7 
{
	uint64_t ___space;
	Guid_t ___uuid;
};
struct Classification_tC18C2FA821083A11288BE9B9216A4C6AD58482A8 
{
	int32_t ___value__;
};
struct OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D 
{
	bool ___valid;
	int32_t ___lastUsedFrameIndex;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___viewID;
};
struct OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_marshaled_pinvoke
{
	int32_t ___valid;
	int32_t ___lastUsedFrameIndex;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___viewID;
};
struct OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_marshaled_com
{
	int32_t ___valid;
	int32_t ___lastUsedFrameIndex;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___viewID;
};
struct Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AnimatedVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_InitialVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AxisOfRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_StartSize;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_StartColor;
	uint32_t ___m_RandomSeed;
	uint32_t ___m_ParentRandomSeed;
	float ___m_Lifetime;
	float ___m_StartLifetime;
	int32_t ___m_MeshIndex;
	float ___m_EmitAccumulator0;
	float ___m_EmitAccumulator1;
	uint32_t ___m_Flags;
};
struct BodyConstraints_t17482BE702A92B4443BF8A2DE581F39CE512B7F9 
{
	int32_t ___value__;
};
struct BodyType_tD1DB9D107FB8177FBAD1E8E873631A19B7C6EA6C 
{
	int32_t ___value__;
};
struct TransformWriteMode_tAC88F83F00B2B74873BDD3631AC07283279591D4 
{
	int32_t ___value__;
};
struct CastRayInput_t7466453067C3A8A4FB3586B4CB8EF2BC4DEE55B5 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Origin;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Translation;
	float ___m_MaxFraction;
};
struct CastResult_t5E82DD3BC0D1889D354D6E0B0C919A6F2950D8E7 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	float ___m_Fraction;
	int32_t ___m_Iterations;
	bool ___m_IsValid;
};
struct CastResult_t5E82DD3BC0D1889D354D6E0B0C919A6F2950D8E7_marshaled_pinvoke
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	float ___m_Fraction;
	int32_t ___m_Iterations;
	int32_t ___m_IsValid;
};
struct CastResult_t5E82DD3BC0D1889D354D6E0B0C919A6F2950D8E7_marshaled_com
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	float ___m_Fraction;
	int32_t ___m_Iterations;
	int32_t ___m_IsValid;
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
struct ShapeType_t4315C2EAD8403BC7CC322586C535E84C60A731E0 
{
	int32_t ___value__;
};
struct TransformChangeReason_tB8D979EC98187EBE40684E468216D798FBFF12F4 
{
	int32_t ___value__;
};
struct Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position;
	int32_t ___subdivisionLevel;
};
struct SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A 
{
	float4_t545A994996126766890C1F28B43EA823F2410190 ___receiverSphereLightSpace;
	float ___cascadeBlendCullingFactor;
};
struct ColliderType_t4C26FB284A330CAD69E47FFD734C9C778E077692 
{
	int32_t ___value__;
};
struct SettingsOptions_t935A71692F21EE9D959FCAC00574AA018F8BA2CB 
{
	uint16_t ___value__;
};
struct ManifoldPoint_tA71052E2253A7EB3BDE8C17CD1AC71433669DAA7 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_AnchorA;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_AnchorB;
	float ___m_Separation;
	float ___m_BaseSeparation;
	float ___m_NormalImpulse;
	float ___m_TangentImpulse;
	float ___m_TotalNormalImpulse;
	float ___m_NormalVelocity;
	uint16_t ___m_Id;
	bool ___m_Persisted;
};
struct ManifoldPoint_tA71052E2253A7EB3BDE8C17CD1AC71433669DAA7_marshaled_pinvoke
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_AnchorA;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_AnchorB;
	float ___m_Separation;
	float ___m_BaseSeparation;
	float ___m_NormalImpulse;
	float ___m_TangentImpulse;
	float ___m_TotalNormalImpulse;
	float ___m_NormalVelocity;
	uint16_t ___m_Id;
	int32_t ___m_Persisted;
};
struct ManifoldPoint_tA71052E2253A7EB3BDE8C17CD1AC71433669DAA7_marshaled_com
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_AnchorA;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_AnchorB;
	float ___m_Separation;
	float ___m_BaseSeparation;
	float ___m_NormalImpulse;
	float ___m_TangentImpulse;
	float ___m_TotalNormalImpulse;
	float ___m_NormalVelocity;
	uint16_t ___m_Id;
	int32_t ___m_Persisted;
};
struct FixedList64Bytes_1_tA8137DDBE902BF483FBBDB59365917992EA9F670 
{
	alignas(8) FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1 ___data;
};
struct JaggedSpan_1_t066A9B4751C6582FF62E2CF935551C2DD681A1F4 
{
	UnsafeList_1_tEF402E259D390EA25AFFFF8D967B3EB014B9A7DC ___m_Sections;
	int32_t ___m_TotalLength;
};
struct JaggedSpan_1_tE10FCFEF557E7CDDDF12AF04C799238E4CA6F874 
{
	UnsafeList_1_t045D20B5AD78A93EF71288E2EE1F31B44B682778 ___m_Sections;
	int32_t ___m_TotalLength;
};
struct JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 
{
	UnsafeList_1_t50550CEABB959BFA1A623C8BEA7F57DB44B12093 ___m_Sections;
	int32_t ___m_TotalLength;
};
struct JaggedSpan_1_t848B290FCAF87832F0DE1F634992933A7FA4B95F 
{
	UnsafeList_1_t562F009533B9AD3A7B0F4DBF2D3DD41A07EBA140 ___m_Sections;
	int32_t ___m_TotalLength;
};
struct JaggedSpan_1_t3067D919B458680EEE24F0A13D7197E9BE12F1DD 
{
	UnsafeList_1_tA360AA1D3FAC94F732905EC58605414C4592FCBD ___m_Sections;
	int32_t ___m_TotalLength;
};
struct JaggedSpan_1_t4B0F610CB9F0D07DBACC7A1ED0E369A5597B231F 
{
	UnsafeList_1_tADF105D4D0254C44A022A3B2928E3A129B090DA6 ___m_Sections;
	int32_t ___m_TotalLength;
};
struct JaggedSpan_1_t32830D1535854EAD8BA48104F08F3272C7E769E7 
{
	UnsafeList_1_tCB6C3D0DF6D45E8D0F1AB899D3F6184EB53CACD5 ___m_Sections;
	int32_t ___m_TotalLength;
};
struct JaggedSpan_1_tF94ED6AFD24DDD9CC417FB82D16DAD8AE8CCFC7F 
{
	UnsafeList_1_tBDD383F66A245BBF180BD9D9BCD6D9C48B36325C ___m_Sections;
	int32_t ___m_TotalLength;
};
struct JaggedSpan_1_t98DBB4FD566BB801AEBF84AF70C2A481481937B1 
{
	UnsafeList_1_tB16A935C476248B9129865F308F511262905777F ___m_Sections;
	int32_t ___m_TotalLength;
};
struct JaggedSpan_1_tD52D0E3D01502F379DAF3E7728EBCD3288585786 
{
	UnsafeList_1_t42D7397763B114A70D610F1FFBBC262DE2D9E5FC ___m_Sections;
	int32_t ___m_TotalLength;
};
struct JaggedSpan_1_t8E2079A8EEB42C081D4EFFCCC9728C89D0DFE13E 
{
	UnsafeList_1_tB698B9DE7D882F49506F01854E176CB7BEC89B30 ___m_Sections;
	int32_t ___m_TotalLength;
};
struct NativeArray_1_tF49BE9DFA69A57FDAC8075E1B6F62686152D557D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 
{
	int32_t ___m_Type;
	float ___m_FloatValue;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorValue;
};
struct JaggedBitSpan_t63FCCB84ABFE6FCD2C4EA4C81803C801F5BB6657 
{
	UnsafeList_1_tEECA348F0E34147530D222AB9E0B420D6190B22E ___m_Sections;
	int32_t ___m_TotalLength;
};
struct LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C 
{
	int32_t ___reason;
	int32_t ___passId;
};
struct MachineLearningTensorDescriptor_t1BF985B997F1FE425A60A95DE5DA6499D5BAF52F 
{
	bool ___hasValue;
	int32_t ___dataType;
	MachineLearningTensorShape_tB77DBE335F1F51D0E33C78CA2B10E79995ACF957 ___shape;
};
struct MachineLearningTensorDescriptor_t1BF985B997F1FE425A60A95DE5DA6499D5BAF52F_marshaled_pinvoke
{
	int32_t ___hasValue;
	int32_t ___dataType;
	MachineLearningTensorShape_tB77DBE335F1F51D0E33C78CA2B10E79995ACF957 ___shape;
};
struct MachineLearningTensorDescriptor_t1BF985B997F1FE425A60A95DE5DA6499D5BAF52F_marshaled_com
{
	int32_t ___hasValue;
	int32_t ___dataType;
	MachineLearningTensorShape_tB77DBE335F1F51D0E33C78CA2B10E79995ACF957 ___shape;
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
struct MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA 
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField;
	int32_t ___U3CChangeStateU3Ek__BackingField;
	int32_t ___U3CPriorityHintU3Ek__BackingField;
};
struct NativeHandleAllocator_t47E1DB0A5AB93147ABE2C4AE681132799EE2022B 
{
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_StructData;
	UnsafeList_1_t48F05227A71C57D26477CA087FE73B2908CEF600 ___m_FreeBitChunksDense;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_FreeChunkIndicesSparse;
};
struct NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9 
{
	int32_t ___glyphID;
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4 ___bottomLeft;
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4 ___topLeft;
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4 ___topRight;
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4 ___bottomRight;
};
struct NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Size;
	int32_t ___m_Shape;
	int32_t ___m_Area;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_ComponentID;
	int32_t ___m_GenerateLinks;
};
struct PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 
{
	int32_t ___reason;
	int32_t ___breakPass;
};
struct PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD 
{
	int32_t ___passId;
	int32_t ___type;
	bool ___hasFoveatedRasterization;
	int32_t ___extendedFeatureFlags;
	int32_t ___tag;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
	int32_t ___mergeState;
	int32_t ___nativePassIndex;
	int32_t ___nativeSubPassIndex;
	int32_t ___firstInput;
	int32_t ___numInputs;
	int32_t ___firstOutput;
	int32_t ___numOutputs;
	int32_t ___firstFragment;
	int32_t ___numFragments;
	int32_t ___firstFragmentInput;
	int32_t ___numFragmentInputs;
	int32_t ___firstSampledOnlyRaster;
	int32_t ___numSampledOnlyRaster;
	int32_t ___firstRandomAccessResource;
	int32_t ___numRandomAccessResources;
	int32_t ___firstCreate;
	int32_t ___numCreated;
	int32_t ___firstDestroy;
	int32_t ___numDestroyed;
	int32_t ___shadingRateImageIndex;
	int32_t ___fragmentInfoWidth;
	int32_t ___fragmentInfoHeight;
	int32_t ___fragmentInfoVolumeDepth;
	int32_t ___fragmentInfoSamples;
	int32_t ___waitOnGraphicsFencePassId;
	int32_t ___awaitingMyGraphicsFencePassId;
	bool ___asyncCompute;
	bool ___hasSideEffects;
	bool ___culled;
	bool ___beginNativeSubpass;
	bool ___fragmentInfoValid;
	bool ___fragmentInfoHasDepth;
	bool ___insertGraphicsFence;
	bool ___hasShadingRateStates;
};
struct PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_marshaled_pinvoke
{
	int32_t ___passId;
	int32_t ___type;
	int32_t ___hasFoveatedRasterization;
	int32_t ___extendedFeatureFlags;
	int32_t ___tag;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
	int32_t ___mergeState;
	int32_t ___nativePassIndex;
	int32_t ___nativeSubPassIndex;
	int32_t ___firstInput;
	int32_t ___numInputs;
	int32_t ___firstOutput;
	int32_t ___numOutputs;
	int32_t ___firstFragment;
	int32_t ___numFragments;
	int32_t ___firstFragmentInput;
	int32_t ___numFragmentInputs;
	int32_t ___firstSampledOnlyRaster;
	int32_t ___numSampledOnlyRaster;
	int32_t ___firstRandomAccessResource;
	int32_t ___numRandomAccessResources;
	int32_t ___firstCreate;
	int32_t ___numCreated;
	int32_t ___firstDestroy;
	int32_t ___numDestroyed;
	int32_t ___shadingRateImageIndex;
	int32_t ___fragmentInfoWidth;
	int32_t ___fragmentInfoHeight;
	int32_t ___fragmentInfoVolumeDepth;
	int32_t ___fragmentInfoSamples;
	int32_t ___waitOnGraphicsFencePassId;
	int32_t ___awaitingMyGraphicsFencePassId;
	int32_t ___asyncCompute;
	int32_t ___hasSideEffects;
	int32_t ___culled;
	int32_t ___beginNativeSubpass;
	int32_t ___fragmentInfoValid;
	int32_t ___fragmentInfoHasDepth;
	int32_t ___insertGraphicsFence;
	int32_t ___hasShadingRateStates;
};
struct PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_marshaled_com
{
	int32_t ___passId;
	int32_t ___type;
	int32_t ___hasFoveatedRasterization;
	int32_t ___extendedFeatureFlags;
	int32_t ___tag;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
	int32_t ___mergeState;
	int32_t ___nativePassIndex;
	int32_t ___nativeSubPassIndex;
	int32_t ___firstInput;
	int32_t ___numInputs;
	int32_t ___firstOutput;
	int32_t ___numOutputs;
	int32_t ___firstFragment;
	int32_t ___numFragments;
	int32_t ___firstFragmentInput;
	int32_t ___numFragmentInputs;
	int32_t ___firstSampledOnlyRaster;
	int32_t ___numSampledOnlyRaster;
	int32_t ___firstRandomAccessResource;
	int32_t ___numRandomAccessResources;
	int32_t ___firstCreate;
	int32_t ___numCreated;
	int32_t ___firstDestroy;
	int32_t ___numDestroyed;
	int32_t ___shadingRateImageIndex;
	int32_t ___fragmentInfoWidth;
	int32_t ___fragmentInfoHeight;
	int32_t ___fragmentInfoVolumeDepth;
	int32_t ___fragmentInfoSamples;
	int32_t ___waitOnGraphicsFencePassId;
	int32_t ___awaitingMyGraphicsFencePassId;
	int32_t ___asyncCompute;
	int32_t ___hasSideEffects;
	int32_t ___culled;
	int32_t ___beginNativeSubpass;
	int32_t ___fragmentInfoValid;
	int32_t ___fragmentInfoHasDepth;
	int32_t ___insertGraphicsFence;
	int32_t ___hasShadingRateStates;
};
struct PhysicsBodyDefinition_t66C17FFB8C7F5D8EE0386BA49A29082FD82143F2 
{
	int32_t ___m_BodyType;
	int32_t ___m_BodyConstraints;
	int32_t ___m_TransformWriteMode;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position;
	PhysicsRotate_t3AF8BA583108282C8B59872CB621EC366BC042B0 ___m_Rotation;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearVelocity;
	float ___m_AngularVelocity;
	float ___m_LinearDamping;
	float ___m_AngularDamping;
	float ___m_GravityScale;
	float ___m_SleepThreshold;
	float ___m_CollisionThreshold;
	bool ___m_FastCollisionsAllowed;
	bool ___m_FastRotationAllowed;
	bool ___m_ContactRecyclingAllowed;
	bool ___m_SleepingAllowed;
	bool ___m_Awake;
	bool ___m_Enabled;
	bool ___m_WorldDrawing;
};
struct PhysicsBodyDefinition_t66C17FFB8C7F5D8EE0386BA49A29082FD82143F2_marshaled_pinvoke
{
	int32_t ___m_BodyType;
	int32_t ___m_BodyConstraints;
	int32_t ___m_TransformWriteMode;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position;
	PhysicsRotate_t3AF8BA583108282C8B59872CB621EC366BC042B0 ___m_Rotation;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearVelocity;
	float ___m_AngularVelocity;
	float ___m_LinearDamping;
	float ___m_AngularDamping;
	float ___m_GravityScale;
	float ___m_SleepThreshold;
	float ___m_CollisionThreshold;
	int32_t ___m_FastCollisionsAllowed;
	int32_t ___m_FastRotationAllowed;
	int32_t ___m_ContactRecyclingAllowed;
	int32_t ___m_SleepingAllowed;
	int32_t ___m_Awake;
	int32_t ___m_Enabled;
	int32_t ___m_WorldDrawing;
};
struct PhysicsBodyDefinition_t66C17FFB8C7F5D8EE0386BA49A29082FD82143F2_marshaled_com
{
	int32_t ___m_BodyType;
	int32_t ___m_BodyConstraints;
	int32_t ___m_TransformWriteMode;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position;
	PhysicsRotate_t3AF8BA583108282C8B59872CB621EC366BC042B0 ___m_Rotation;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearVelocity;
	float ___m_AngularVelocity;
	float ___m_LinearDamping;
	float ___m_AngularDamping;
	float ___m_GravityScale;
	float ___m_SleepThreshold;
	float ___m_CollisionThreshold;
	int32_t ___m_FastCollisionsAllowed;
	int32_t ___m_FastRotationAllowed;
	int32_t ___m_ContactRecyclingAllowed;
	int32_t ___m_SleepingAllowed;
	int32_t ___m_Awake;
	int32_t ___m_Enabled;
	int32_t ___m_WorldDrawing;
};
struct PhysicsShape2D_t443155710C4DE7DE8C48EADA86BC4DC7EA70226E 
{
	int32_t ___m_ShapeType;
	float ___m_Radius;
	int32_t ___m_VertexStartIndex;
	int32_t ___m_VertexCount;
	int32_t ___m_UseAdjacentStart;
	int32_t ___m_UseAdjacentEnd;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_AdjacentStart;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_AdjacentEnd;
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
struct QueryParameters_t5BC1A5A2C4ADB170380559863B0F65BAA02BA1D1 
{
	int32_t ___layerMask;
	bool ___hitMultipleFaces;
	int32_t ___hitTriggers;
	bool ___hitBackfaces;
};
struct QueryParameters_t5BC1A5A2C4ADB170380559863B0F65BAA02BA1D1_marshaled_pinvoke
{
	int32_t ___layerMask;
	int32_t ___hitMultipleFaces;
	int32_t ___hitTriggers;
	int32_t ___hitBackfaces;
};
struct QueryParameters_t5BC1A5A2C4ADB170380559863B0F65BAA02BA1D1_marshaled_com
{
	int32_t ___layerMask;
	int32_t ___hitMultipleFaces;
	int32_t ___hitTriggers;
	int32_t ___hitBackfaces;
};
struct RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C 
{
	uint8_t ___layer;
	uint32_t ___renderingLayerMask;
	int32_t ___motionMode;
	int32_t ___shadowCastingMode;
	bool ___staticShadowCaster;
	int32_t ___rendererPriority;
	bool ___supportsIndirect;
};
struct RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_pinvoke
{
	uint8_t ___layer;
	uint32_t ___renderingLayerMask;
	int32_t ___motionMode;
	int32_t ___shadowCastingMode;
	int32_t ___staticShadowCaster;
	int32_t ___rendererPriority;
	int32_t ___supportsIndirect;
};
struct RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_com
{
	uint8_t ___layer;
	uint32_t ___renderingLayerMask;
	int32_t ___motionMode;
	int32_t ___shadowCastingMode;
	int32_t ___staticShadowCaster;
	int32_t ___rendererPriority;
	int32_t ___supportsIndirect;
};
struct RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 
{
	int32_t ___m_CullingMode;
	int32_t ___m_OffsetUnits;
	float ___m_OffsetFactor;
	uint8_t ___m_DepthClip;
	uint8_t ___m_Conservative;
	uint8_t ___m_Padding1;
	uint8_t ___m_Padding2;
};
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B 
{
	int32_t ___m_Type;
	int32_t ___m_NameID;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
	intptr_t ___m_BufferPointer;
	int32_t ___m_MipLevel;
	int32_t ___m_CubeFace;
	int32_t ___m_DepthSlice;
};
struct RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68 
{
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
	bool ___isActive;
};
struct RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68_marshaled_pinvoke
{
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
	int32_t ___isActive;
};
struct RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68_marshaled_com
{
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
	int32_t ___isActive;
};
struct ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C 
{
	uint32_t ___m_VersionIndex;
	uint32_t ___m_Validity;
	int32_t ___m_Type;
};
struct ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC 
{
	bool ___isImported;
	bool ___isShared;
	int32_t ___tag;
	int32_t ___lastUsePassID;
	int32_t ___lastWritePassID;
	int32_t ___firstUsePassID;
	bool ___memoryLess;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___msaaSamples;
	int32_t ___graphicsFormat;
	int32_t ___latestVersionNumber;
	bool ___clear;
	bool ___discard;
	bool ___bindMS;
	bool ___isBackBuffer;
	int32_t ___textureUVOrigin;
};
struct ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC_marshaled_pinvoke
{
	int32_t ___isImported;
	int32_t ___isShared;
	int32_t ___tag;
	int32_t ___lastUsePassID;
	int32_t ___lastWritePassID;
	int32_t ___firstUsePassID;
	int32_t ___memoryLess;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___msaaSamples;
	int32_t ___graphicsFormat;
	int32_t ___latestVersionNumber;
	int32_t ___clear;
	int32_t ___discard;
	int32_t ___bindMS;
	int32_t ___isBackBuffer;
	int32_t ___textureUVOrigin;
};
struct ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC_marshaled_com
{
	int32_t ___isImported;
	int32_t ___isShared;
	int32_t ___tag;
	int32_t ___lastUsePassID;
	int32_t ___lastWritePassID;
	int32_t ___firstUsePassID;
	int32_t ___memoryLess;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___msaaSamples;
	int32_t ___graphicsFormat;
	int32_t ___latestVersionNumber;
	int32_t ___clear;
	int32_t ___discard;
	int32_t ___bindMS;
	int32_t ___isBackBuffer;
	int32_t ___textureUVOrigin;
};
struct SectionHeader_tDCEF2AA85F5E6EE0259E66E18A7333E383FDA7D3 
{
	String_t* ___U3CNameU3Ek__BackingField;
	int32_t ___U3CVirtualSizeU3Ek__BackingField;
	int32_t ___U3CVirtualAddressU3Ek__BackingField;
	int32_t ___U3CSizeOfRawDataU3Ek__BackingField;
	int32_t ___U3CPointerToRawDataU3Ek__BackingField;
	int32_t ___U3CPointerToRelocationsU3Ek__BackingField;
	int32_t ___U3CPointerToLineNumbersU3Ek__BackingField;
	uint16_t ___U3CNumberOfRelocationsU3Ek__BackingField;
	uint16_t ___U3CNumberOfLineNumbersU3Ek__BackingField;
	uint32_t ___U3CSectionCharacteristicsU3Ek__BackingField;
};
struct SectionHeader_tDCEF2AA85F5E6EE0259E66E18A7333E383FDA7D3_marshaled_pinvoke
{
	char* ___U3CNameU3Ek__BackingField;
	int32_t ___U3CVirtualSizeU3Ek__BackingField;
	int32_t ___U3CVirtualAddressU3Ek__BackingField;
	int32_t ___U3CSizeOfRawDataU3Ek__BackingField;
	int32_t ___U3CPointerToRawDataU3Ek__BackingField;
	int32_t ___U3CPointerToRelocationsU3Ek__BackingField;
	int32_t ___U3CPointerToLineNumbersU3Ek__BackingField;
	uint16_t ___U3CNumberOfRelocationsU3Ek__BackingField;
	uint16_t ___U3CNumberOfLineNumbersU3Ek__BackingField;
	uint32_t ___U3CSectionCharacteristicsU3Ek__BackingField;
};
struct SectionHeader_tDCEF2AA85F5E6EE0259E66E18A7333E383FDA7D3_marshaled_com
{
	Il2CppChar* ___U3CNameU3Ek__BackingField;
	int32_t ___U3CVirtualSizeU3Ek__BackingField;
	int32_t ___U3CVirtualAddressU3Ek__BackingField;
	int32_t ___U3CSizeOfRawDataU3Ek__BackingField;
	int32_t ___U3CPointerToRawDataU3Ek__BackingField;
	int32_t ___U3CPointerToRelocationsU3Ek__BackingField;
	int32_t ___U3CPointerToLineNumbersU3Ek__BackingField;
	uint16_t ___U3CNumberOfRelocationsU3Ek__BackingField;
	uint16_t ___U3CNumberOfLineNumbersU3Ek__BackingField;
	uint32_t ___U3CSectionCharacteristicsU3Ek__BackingField;
};
struct SerializedCommand_tC29E0C661BDD3D6C4B4EAEE095AADFCDF5CE97AB 
{
	int32_t ___type;
	intptr_t ___vertexBuffer;
	intptr_t ___indexBuffer;
	int32_t ___firstRange;
	int32_t ___rangeCount;
	int32_t ___textureName;
	intptr_t ___textureRefPtr;
	int32_t ___gpuDataOffset;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___gpuData0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___gpuData1;
	intptr_t ___userProps;
};
struct ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projectionMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___shadowTransform;
	int32_t ___offsetX;
	int32_t ___offsetY;
	int32_t ___resolution;
	ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF ___splitData;
};
struct SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldToCameraMatrix;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CameraPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CustomAxis;
	int32_t ___m_Criteria;
	int32_t ___m_DistanceMetric;
};
struct StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 
{
	int32_t ___reason;
	int32_t ___passId;
	int32_t ___msaaReason;
	int32_t ___msaaPassId;
};
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D 
{
	int32_t ___m_ValueType;
	int32_t ___valueIndex;
};
struct SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___U3CboundsU3Ek__BackingField;
	int32_t ___U3CtopologyU3Ek__BackingField;
	int32_t ___U3CindexStartU3Ek__BackingField;
	int32_t ___U3CindexCountU3Ek__BackingField;
	int32_t ___U3CbaseVertexU3Ek__BackingField;
	int32_t ___U3CfirstVertexU3Ek__BackingField;
	int32_t ___U3CvertexCountU3Ek__BackingField;
};
struct SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9 
{
	AttachmentIndexArray_tDC550BA2CD14AFB3B5545B02331C26903ADA90B5 ___inputs;
	AttachmentIndexArray_tDC550BA2CD14AFB3B5545B02331C26903ADA90B5 ___colorOutputs;
	int32_t ___flags;
};
struct Tetrahedron_t40F2B77BD6E6842D7DAA13FD95BBE5AF56C750F9 
{
	U3CindicesU3Ee__FixedBuffer_t7113A060626CDDAD4EE265E2FF21718C0DFC5AC9 ___indices;
	U3CneighborsU3Ee__FixedBuffer_t67A3150AF25E6345E2F567B86A0AE64DBC5AF4DB ___neighbors;
	Matrix3x4f_tBB3DA7B3DA123F34FD27F7ADF56355A3D9D881F0 ___matrix;
	bool ___isValid;
};
struct Tetrahedron_t40F2B77BD6E6842D7DAA13FD95BBE5AF56C750F9_marshaled_pinvoke
{
	U3CindicesU3Ee__FixedBuffer_t7113A060626CDDAD4EE265E2FF21718C0DFC5AC9 ___indices;
	U3CneighborsU3Ee__FixedBuffer_t67A3150AF25E6345E2F567B86A0AE64DBC5AF4DB ___neighbors;
	Matrix3x4f_tBB3DA7B3DA123F34FD27F7ADF56355A3D9D881F0 ___matrix;
	int32_t ___isValid;
};
struct Tetrahedron_t40F2B77BD6E6842D7DAA13FD95BBE5AF56C750F9_marshaled_com
{
	U3CindicesU3Ee__FixedBuffer_t7113A060626CDDAD4EE265E2FF21718C0DFC5AC9 ___indices;
	U3CneighborsU3Ee__FixedBuffer_t67A3150AF25E6345E2F567B86A0AE64DBC5AF4DB ___neighbors;
	Matrix3x4f_tBB3DA7B3DA123F34FD27F7ADF56355A3D9D881F0 ___matrix;
	int32_t ___isValid;
};
struct TileAnimationEntityIdData_t167D5D62289EB4EDFE19B374BF7E079DFE94677D 
{
	intptr_t ___m_AnimatedSpritesEntityIdPtr;
	int32_t ___m_Count;
	float ___m_AnimationSpeed;
	float ___m_AnimationStartTime;
	int32_t ___m_Flags;
};
struct TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_Sprite;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_GameObject;
	int32_t ___m_Flags;
	int32_t ___m_ColliderType;
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
struct UnmanagedMaterialPropertyValue_t32418EF3A65B66312EE3D81C88513C1116711B75 
{
	int32_t ___name;
	int32_t ___type;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___packedValue;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___textureValue;
};
struct UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_Handle;
};
struct VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 
{
	int32_t ___U3CattributeU3Ek__BackingField;
	int32_t ___U3CformatU3Ek__BackingField;
	int32_t ___U3CdimensionU3Ek__BackingField;
	int32_t ___U3CstreamU3Ek__BackingField;
};
struct VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 
{
	int32_t ___m_LightType;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_FinalColor;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ScreenRect;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_LocalToWorldMatrix;
	float ___m_Range;
	float ___m_SpotAngle;
	float ___m_InnerSpotAngle;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_AreaSize;
	float ___m_ShapeRadius;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
	int32_t ___m_Flags;
};
struct VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_Bounds;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_LocalToWorldMatrix;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_HdrData;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	float ___m_BlendDistance;
	int32_t ___m_Importance;
	int32_t ___m_BoxProjection;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_TextureId;
};
struct XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 
{
	int32_t ___m_Handedness;
	int32_t ___m_CommonGesturesFlags;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_AimPose;
	float ___m_AimActivateValue;
	float ___m_GraspValue;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_GripPose;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_PinchPose;
	float ___m_PinchValue;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_PokePose;
	bool ___m_IsAimActivated;
	bool ___m_IsGraspFirm;
	bool ___m_IsPinchTouched;
};
struct XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858_marshaled_pinvoke
{
	int32_t ___m_Handedness;
	int32_t ___m_CommonGesturesFlags;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_AimPose;
	float ___m_AimActivateValue;
	float ___m_GraspValue;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_GripPose;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_PinchPose;
	float ___m_PinchValue;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_PokePose;
	int32_t ___m_IsAimActivated;
	int32_t ___m_IsGraspFirm;
	int32_t ___m_IsPinchTouched;
};
struct XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858_marshaled_com
{
	int32_t ___m_Handedness;
	int32_t ___m_CommonGesturesFlags;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_AimPose;
	float ___m_AimActivateValue;
	float ___m_GraspValue;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_GripPose;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_PinchPose;
	float ___m_PinchValue;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_PokePose;
	int32_t ___m_IsAimActivated;
	int32_t ___m_IsGraspFirm;
	int32_t ___m_IsPinchTouched;
};
struct XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 
{
	int32_t ___m_Handedness;
	int32_t ___m_AimFlags;
	uint32_t ___m_TrackingState;
	int32_t ___m_Reserved0;
	int32_t ___m_Reserved1;
	float ___m_PinchStrengthIndex;
	float ___m_PinchStrengthMiddle;
	float ___m_PinchStrengthRing;
	float ___m_PinchStrengthLittle;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_AimPose;
};
struct XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 
{
	int32_t ___m_IdAndHandedness;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	float ___m_Radius;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LinearVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity;
	int32_t ___m_TrackingState;
};
struct XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A 
{
	int32_t ___m_Type;
	int32_t ___m_AvailableFields;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Acceleration;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularAcceleration;
	int32_t ___m_Tracked;
	uint64_t ___m_UniqueID;
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
struct XrBoxf_tB0E84D6272ADF2ECA0C0A42E1EB11948FF3501A8 
{
	XrPosef_t30CFD88924941CAA7DB413CD1AFF423530A90DD0 ___U3CcenterU3Ek__BackingField;
	XrExtent3Df_tE3B30FA164620FBE1DEF115DB8F4134C8FA064E5 ___U3CextentsU3Ek__BackingField;
};
struct XrRoomMeshFaceMETA_t1870BFAF774D4FA6A8C5E1525C9302436BC479DF 
{
	Guid_t ___Uuid;
	Guid_t ___ParentUuid;
	int32_t ___SemanticLabel;
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
struct XrSpatialBounded2DDataEXT_tF2CF3E1F82B7C362F8EBBD941751007156D2338F 
{
	XrPosef_t30CFD88924941CAA7DB413CD1AFF423530A90DD0 ___U3CcenterU3Ek__BackingField;
	XrExtent2Df_t4302AF6D9C771DE91C603A415095BC851189CE1C ___U3CextentsU3Ek__BackingField;
};
struct XrSpatialBufferEXT_tACB1444AEA9D94473DE9147AE27AA3600DF258F4 
{
	uint64_t ___U3CbufferIdU3Ek__BackingField;
	int32_t ___U3CbufferTypeU3Ek__BackingField;
};
struct XrSpatialPersistenceDataEXT_t39937934647A3D4A772D62907CF2EB53EFC8C9E5 
{
	XrUuid_tE34CFEC216D8A7DD1EE157F12A145509C1BF2A74 ___U3CpersistUuidU3Ek__BackingField;
	int32_t ___U3CpersistStateU3Ek__BackingField;
};
struct RTInstance_t82A289FDC8E8112219057734D0AE172A4E822AED 
{
	float4x3_t91174DFA825CF654DEC0189269DD172BF4E08CE2 ___localToWorld;
	float ___localToWorldDeterminant;
	float ___localToWorldDetSign;
	uint32_t ___padding0;
	uint32_t ___padding1;
	float4x3_t91174DFA825CF654DEC0189269DD172BF4E08CE2 ___previousLocalToWorld;
	float4x3_t91174DFA825CF654DEC0189269DD172BF4E08CE2 ___localToWorldNormals;
	uint32_t ___renderingLayerMask;
	uint32_t ___instanceMask;
	uint32_t ___userMaterialID;
	uint32_t ___geometryIndex;
};
struct ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___perLightShadowSliceIndex;
	uint16_t ___requestedResolution;
	uint16_t ___offsetX;
	uint16_t ___offsetY;
	uint16_t ___allocatedResolution;
	uint16_t ___m_ShadowProperties;
};
struct PathArguments_t445220F54870AED8F8384306CF72A316887AD98C 
{
	int32_t ___polyType;
	bool ___closed;
};
struct PathArguments_t445220F54870AED8F8384306CF72A316887AD98C_marshaled_pinvoke
{
	int32_t ___polyType;
	int32_t ___closed;
};
struct PathArguments_t445220F54870AED8F8384306CF72A316887AD98C_marshaled_com
{
	int32_t ___polyType;
	int32_t ___closed;
};
struct PathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1 
{
	int32_t ___joinType;
	int32_t ___endType;
};
struct MeshChunk_tEEA891FD6A9FBF660DB8ED98B23FCCB8A413C2BD 
{
	Allocation_tB22CAD44C5AF0C13B3D441F8B419C9BA1D19F70C ___vertexAlloc;
	Allocation_tB22CAD44C5AF0C13B3D441F8B419C9BA1D19F70C ___indexAlloc;
};
struct Info_tA3039772991DEEDBC29A00439A055C5166133A27 
{
	int32_t ___viewType;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___viewID;
	int32_t ___splitIndex;
};
struct Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___viewID;
	int32_t ___eventType;
	int32_t ___occluderVersion;
	int32_t ___subviewMask;
	int32_t ___occlusionTest;
};
struct Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187 
{
	UnsafeList_1_tBB6961066733E78B8C22E5C4D4D5FF9A581981D1 ___info;
	AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 ___readback;
};
struct NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___subRect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	int32_t ___scaleMode;
	intptr_t ___backgroundRepeatInstanceList;
	int32_t ___backgroundRepeatInstanceListStartIndex;
	int32_t ___backgroundRepeatInstanceListEndIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___backgroundRepeatRect;
	intptr_t ___texture;
	intptr_t ___sprite;
	intptr_t ___vectorImage;
	intptr_t ___spriteTexture;
	intptr_t ___spriteVertices;
	intptr_t ___spriteUVs;
	intptr_t ___spriteTriangles;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___spriteGeomRect;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___contentSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureSize;
	float ___texturePixelsPerPoint;
	int32_t ___leftSlice;
	int32_t ___topSlice;
	int32_t ___rightSlice;
	int32_t ___bottomSlice;
	float ___sliceScale;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rectInset;
	NativeColorPage_tD578D4E96ABBDBB0E6A608F6CE97A0362ABD7D4B ___colorPage;
	int32_t ___meshFlags;
};
struct BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor;
	float ___leftWidth;
	float ___topWidth;
	float ___rightWidth;
	float ___bottomWidth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___leftColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___topColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___rightColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___bottomColorPage;
};
struct BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_pinvoke
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor;
	float ___leftWidth;
	float ___topWidth;
	float ___rightWidth;
	float ___bottomWidth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___leftColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___topColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___rightColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___bottomColorPage;
};
struct BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_com
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor;
	float ___leftWidth;
	float ___topWidth;
	float ___rightWidth;
	float ___bottomWidth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___leftColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___topColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___rightColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___bottomColorPage;
};
struct TrackingSpacePose_t536910111A35CD0F1B7ABF1168B9EBC47304A47F 
{
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CPositionU3Ek__BackingField;
	Nullable_1_tC8106DB4DC621B5BCB8913A244640A1CEDF9DD25 ___U3CRotationU3Ek__BackingField;
	uint64_t ___Flags;
};
struct TrackingSpacePose_t536910111A35CD0F1B7ABF1168B9EBC47304A47F_marshaled_pinvoke
{
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CPositionU3Ek__BackingField;
	Nullable_1_tC8106DB4DC621B5BCB8913A244640A1CEDF9DD25 ___U3CRotationU3Ek__BackingField;
	uint64_t ___Flags;
};
struct TrackingSpacePose_t536910111A35CD0F1B7ABF1168B9EBC47304A47F_marshaled_com
{
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CPositionU3Ek__BackingField;
	Nullable_1_tC8106DB4DC621B5BCB8913A244640A1CEDF9DD25 ___U3CRotationU3Ek__BackingField;
	uint64_t ___Flags;
};
struct RoomFace_t367EDEF38082CCCC1D8EFB95A8D4200D002FA465 
{
	Guid_t ___uuid;
	Guid_t ___parentUuid;
	int32_t ___semanticLabel;
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
struct Face_t1FC9C18F59EEC2592917A53E203E227AE2370B9B 
{
	Guid_t ___Uuid;
	Guid_t ___ParentUuid;
	int32_t ___SemanticLabel;
};
struct Section_t3C77A35C1AE76008B10FA56951E93F5CAC4940DA 
{
	String_t* ___Name;
	uint32_t ___Characteristics;
};
struct Section_t3C77A35C1AE76008B10FA56951E93F5CAC4940DA_marshaled_pinvoke
{
	char* ___Name;
	uint32_t ___Characteristics;
};
struct Section_t3C77A35C1AE76008B10FA56951E93F5CAC4940DA_marshaled_com
{
	Il2CppChar* ___Name;
	uint32_t ___Characteristics;
};
struct SerializedSection_tAB1067DC5BCA726D8712BD3FAE1DB3BFA490C23D 
{
	BlobBuilder_tBBD57F4A395313817B6AD5C883DA9BD7A3E9BC84* ___Builder;
	String_t* ___Name;
	uint32_t ___Characteristics;
	int32_t ___RelativeVirtualAddress;
	int32_t ___SizeOfRawData;
	int32_t ___PointerToRawData;
};
struct SerializedSection_tAB1067DC5BCA726D8712BD3FAE1DB3BFA490C23D_marshaled_pinvoke
{
	BlobBuilder_tBBD57F4A395313817B6AD5C883DA9BD7A3E9BC84* ___Builder;
	char* ___Name;
	uint32_t ___Characteristics;
	int32_t ___RelativeVirtualAddress;
	int32_t ___SizeOfRawData;
	int32_t ___PointerToRawData;
};
struct SerializedSection_tAB1067DC5BCA726D8712BD3FAE1DB3BFA490C23D_marshaled_com
{
	BlobBuilder_tBBD57F4A395313817B6AD5C883DA9BD7A3E9BC84* ___Builder;
	Il2CppChar* ___Name;
	uint32_t ___Characteristics;
	int32_t ___RelativeVirtualAddress;
	int32_t ___SizeOfRawData;
	int32_t ___PointerToRawData;
};
struct BatchForce_t4E0382D8C268D458B1422F92AF2CFC8B25367958 
{
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_PhysicsBody;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearForce;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearForcePosition;
	float ___m_Torque;
	bool ___m_WakeBody;
	bool ___m_UseLinearForce;
	bool ___m_UseLinearForcePosition;
	bool ___m_UseTorque;
};
struct BatchForce_t4E0382D8C268D458B1422F92AF2CFC8B25367958_marshaled_pinvoke
{
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_PhysicsBody;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearForce;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearForcePosition;
	float ___m_Torque;
	int32_t ___m_WakeBody;
	int32_t ___m_UseLinearForce;
	int32_t ___m_UseLinearForcePosition;
	int32_t ___m_UseTorque;
};
struct BatchForce_t4E0382D8C268D458B1422F92AF2CFC8B25367958_marshaled_com
{
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_PhysicsBody;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearForce;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearForcePosition;
	float ___m_Torque;
	int32_t ___m_WakeBody;
	int32_t ___m_UseLinearForce;
	int32_t ___m_UseLinearForcePosition;
	int32_t ___m_UseTorque;
};
struct BatchImpulse_t261C4FD09FF3AF032D9EA92A6CBE7E8895102147 
{
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_PhysicsBody;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearImpulse;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearImpulsePosition;
	float ___m_AngularImpulse;
	bool ___m_WakeBody;
	bool ___m_UseLinearImpulse;
	bool ___m_UseLinearImpulsePosition;
	bool ___m_UseAngularImpulse;
};
struct BatchImpulse_t261C4FD09FF3AF032D9EA92A6CBE7E8895102147_marshaled_pinvoke
{
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_PhysicsBody;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearImpulse;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearImpulsePosition;
	float ___m_AngularImpulse;
	int32_t ___m_WakeBody;
	int32_t ___m_UseLinearImpulse;
	int32_t ___m_UseLinearImpulsePosition;
	int32_t ___m_UseAngularImpulse;
};
struct BatchImpulse_t261C4FD09FF3AF032D9EA92A6CBE7E8895102147_marshaled_com
{
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_PhysicsBody;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearImpulse;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearImpulsePosition;
	float ___m_AngularImpulse;
	int32_t ___m_WakeBody;
	int32_t ___m_UseLinearImpulse;
	int32_t ___m_UseLinearImpulsePosition;
	int32_t ___m_UseAngularImpulse;
};
struct BatchVelocity_t501F06AA00DEDE1275412DA5B4821CF758D94D9D 
{
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_PhysicsBody;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearVelocity;
	float ___m_AngularVelocity;
	bool ___m_UseLinearVelocity;
	bool ___m_UseAngularVelocity;
};
struct BatchVelocity_t501F06AA00DEDE1275412DA5B4821CF758D94D9D_marshaled_pinvoke
{
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_PhysicsBody;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearVelocity;
	float ___m_AngularVelocity;
	int32_t ___m_UseLinearVelocity;
	int32_t ___m_UseAngularVelocity;
};
struct BatchVelocity_t501F06AA00DEDE1275412DA5B4821CF758D94D9D_marshaled_com
{
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_PhysicsBody;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearVelocity;
	float ___m_AngularVelocity;
	int32_t ___m_UseLinearVelocity;
	int32_t ___m_UseAngularVelocity;
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
struct TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_TransformId;
	int32_t ___m_ChangeReason;
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
struct WorldCastResult_tA5F20990A18CBE633E414F5B797A068CD2BEF350 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_Shape;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	float ___m_Fraction;
};
struct WorldOverlapResult_t6440E0FA2B383A6C681DCBC60521D2067324DAC7 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_Shape;
};
struct MoverCollision_t603C4D37B274FCFBC00A7E51BA7B3E1E918D0718 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_Shape;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
};
struct ShapeProxy_t799DA83F5BBADC93FC9E5863F1525C009A9056EF 
{
	ShapeArray_t2A670C62560EDC01830CE8DEA9AE860765152E61 ___m_Vertices;
	int32_t ___m_Count;
	float ___m_Radius;
	int32_t ___m_ShapeType;
};
struct ConvexHull_tF012380011E47752145BD7DA69D0F23CF6A55A17 
{
	ShapeArray_t2A670C62560EDC01830CE8DEA9AE860765152E61 ___vertices;
	int32_t ___m_Count;
};
struct ManifoldPointArray_t922590713BDB79482FD125B4D9C6CBD3728EE458 
{
	ManifoldPoint_tA71052E2253A7EB3BDE8C17CD1AC71433669DAA7 ___m_ContactInfo0;
	ManifoldPoint_tA71052E2253A7EB3BDE8C17CD1AC71433669DAA7 ___m_ContactInfo1;
};
struct ManifoldPointArray_t922590713BDB79482FD125B4D9C6CBD3728EE458_marshaled_pinvoke
{
	ManifoldPoint_tA71052E2253A7EB3BDE8C17CD1AC71433669DAA7_marshaled_pinvoke ___m_ContactInfo0;
	ManifoldPoint_tA71052E2253A7EB3BDE8C17CD1AC71433669DAA7_marshaled_pinvoke ___m_ContactInfo1;
};
struct ManifoldPointArray_t922590713BDB79482FD125B4D9C6CBD3728EE458_marshaled_com
{
	ManifoldPoint_tA71052E2253A7EB3BDE8C17CD1AC71433669DAA7_marshaled_com ___m_ContactInfo0;
	ManifoldPoint_tA71052E2253A7EB3BDE8C17CD1AC71433669DAA7_marshaled_com ___m_ContactInfo1;
};
struct EmbeddedArray64_1_t40B70A170260009F23E16506CE418B52748B8EE0 
{
	FixedList64Bytes_1_tA8137DDBE902BF483FBBDB59365917992EA9F670 ___m_FixedArray;
	UnsafeList_1_t5F75981CEC17C7EAE94180B0C9C63C260D6D1B3C ___m_List;
	int32_t ___m_Length;
	bool ___m_Created;
	bool ___m_IsEmbedded;
};
struct FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 
{
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a0;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a1;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a2;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a3;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a4;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a5;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a6;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a7;
	int32_t ___activeAttachments;
};
struct FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 
{
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a0;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a1;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a2;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a3;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a4;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a5;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a6;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a7;
	int32_t ___activeAttachments;
};
struct FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C 
{
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____0;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____1;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____2;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____3;
};
struct Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C 
{
	bool ___hasValue;
	NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB ___value;
};
struct Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B 
{
	bool ___hasValue;
	NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 ___value;
};
struct DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 
{
	SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 ___m_SortingSettings;
	U3CshaderPassNamesU3Ee__FixedBuffer_t5EDC823777BDDC9D50E55FF3779FBC1B3820126D ___shaderPassNames;
	int32_t ___m_PerObjectData;
	int32_t ___m_Flags;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_OverrideShaderID;
	int32_t ___m_OverrideShaderPassIndex;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_OverrideMaterialEntityId;
	int32_t ___m_OverrideMaterialPassIndex;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_fallbackMaterialEntityId;
	int32_t ___m_MainLightIndex;
	int32_t ___m_UseSrpBatcher;
	int32_t ___m_LodCrossFadeStencilMask;
};
struct MeshRendererUpdateBatch_t386C6151480A8A39F3A9703B56B8A87AAD5EEED2 
{
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___instanceIDs;
	JaggedSpan_1_t8E2079A8EEB42C081D4EFFCCC9728C89D0DFE13E ___localToWorlds;
	JaggedSpan_1_t8E2079A8EEB42C081D4EFFCCC9728C89D0DFE13E ___prevLocalToWorlds;
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___meshIDs;
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___materialIDs;
	JaggedSpan_1_tF94ED6AFD24DDD9CC417FB82D16DAD8AE8CCFC7F ___subMaterialRanges;
	JaggedSpan_1_t98DBB4FD566BB801AEBF84AF70C2A481481937B1 ___subMeshStartIndices;
	JaggedSpan_1_t066A9B4751C6582FF62E2CF935551C2DD681A1F4 ___localBounds;
	JaggedSpan_1_t32830D1535854EAD8BA48104F08F3272C7E769E7 ___rendererSettings;
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___parentLODGroupIDs;
	JaggedSpan_1_tE10FCFEF557E7CDDDF12AF04C799238E4CA6F874 ___lodMasks;
	JaggedSpan_1_t4B0F610CB9F0D07DBACC7A1ED0E369A5597B231F ___meshLodSettings;
	JaggedSpan_1_t848B290FCAF87832F0DE1F634992933A7FA4B95F ___lightmapIndices;
	JaggedSpan_1_t3067D919B458680EEE24F0A13D7197E9BE12F1DD ___rendererPriorities;
	JaggedSpan_1_tD52D0E3D01502F379DAF3E7728EBCD3288585786 ___sceneCullingMasks;
	NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030 ___sharedSceneCullingMasks;
	NativeArray_1_tF49BE9DFA69A57FDAC8075E1B6F62686152D557D ___gpuComponentUpdates;
	JaggedBitSpan_t63FCCB84ABFE6FCD2C4EA4C81803C801F5BB6657 ___renderingEnabled;
	int32_t ___componentMask;
	int32_t ___updateType;
	int32_t ___lightmapUsage;
	int32_t ___blendProbesUsage;
	bool ___useSharedSceneCullingMask;
	bool ___mightIncludeTrees;
};
struct MeshRendererUpdateBatch_t386C6151480A8A39F3A9703B56B8A87AAD5EEED2_marshaled_pinvoke
{
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___instanceIDs;
	JaggedSpan_1_t8E2079A8EEB42C081D4EFFCCC9728C89D0DFE13E ___localToWorlds;
	JaggedSpan_1_t8E2079A8EEB42C081D4EFFCCC9728C89D0DFE13E ___prevLocalToWorlds;
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___meshIDs;
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___materialIDs;
	JaggedSpan_1_tF94ED6AFD24DDD9CC417FB82D16DAD8AE8CCFC7F ___subMaterialRanges;
	JaggedSpan_1_t98DBB4FD566BB801AEBF84AF70C2A481481937B1 ___subMeshStartIndices;
	JaggedSpan_1_t066A9B4751C6582FF62E2CF935551C2DD681A1F4 ___localBounds;
	JaggedSpan_1_t32830D1535854EAD8BA48104F08F3272C7E769E7 ___rendererSettings;
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___parentLODGroupIDs;
	JaggedSpan_1_tE10FCFEF557E7CDDDF12AF04C799238E4CA6F874 ___lodMasks;
	JaggedSpan_1_t4B0F610CB9F0D07DBACC7A1ED0E369A5597B231F ___meshLodSettings;
	JaggedSpan_1_t848B290FCAF87832F0DE1F634992933A7FA4B95F ___lightmapIndices;
	JaggedSpan_1_t3067D919B458680EEE24F0A13D7197E9BE12F1DD ___rendererPriorities;
	JaggedSpan_1_tD52D0E3D01502F379DAF3E7728EBCD3288585786 ___sceneCullingMasks;
	NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030 ___sharedSceneCullingMasks;
	NativeArray_1_tF49BE9DFA69A57FDAC8075E1B6F62686152D557D ___gpuComponentUpdates;
	JaggedBitSpan_t63FCCB84ABFE6FCD2C4EA4C81803C801F5BB6657 ___renderingEnabled;
	int32_t ___componentMask;
	int32_t ___updateType;
	int32_t ___lightmapUsage;
	int32_t ___blendProbesUsage;
	int32_t ___useSharedSceneCullingMask;
	int32_t ___mightIncludeTrees;
};
struct MeshRendererUpdateBatch_t386C6151480A8A39F3A9703B56B8A87AAD5EEED2_marshaled_com
{
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___instanceIDs;
	JaggedSpan_1_t8E2079A8EEB42C081D4EFFCCC9728C89D0DFE13E ___localToWorlds;
	JaggedSpan_1_t8E2079A8EEB42C081D4EFFCCC9728C89D0DFE13E ___prevLocalToWorlds;
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___meshIDs;
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___materialIDs;
	JaggedSpan_1_tF94ED6AFD24DDD9CC417FB82D16DAD8AE8CCFC7F ___subMaterialRanges;
	JaggedSpan_1_t98DBB4FD566BB801AEBF84AF70C2A481481937B1 ___subMeshStartIndices;
	JaggedSpan_1_t066A9B4751C6582FF62E2CF935551C2DD681A1F4 ___localBounds;
	JaggedSpan_1_t32830D1535854EAD8BA48104F08F3272C7E769E7 ___rendererSettings;
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___parentLODGroupIDs;
	JaggedSpan_1_tE10FCFEF557E7CDDDF12AF04C799238E4CA6F874 ___lodMasks;
	JaggedSpan_1_t4B0F610CB9F0D07DBACC7A1ED0E369A5597B231F ___meshLodSettings;
	JaggedSpan_1_t848B290FCAF87832F0DE1F634992933A7FA4B95F ___lightmapIndices;
	JaggedSpan_1_t3067D919B458680EEE24F0A13D7197E9BE12F1DD ___rendererPriorities;
	JaggedSpan_1_tD52D0E3D01502F379DAF3E7728EBCD3288585786 ___sceneCullingMasks;
	NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030 ___sharedSceneCullingMasks;
	NativeArray_1_tF49BE9DFA69A57FDAC8075E1B6F62686152D557D ___gpuComponentUpdates;
	JaggedBitSpan_t63FCCB84ABFE6FCD2C4EA4C81803C801F5BB6657 ___renderingEnabled;
	int32_t ___componentMask;
	int32_t ___updateType;
	int32_t ___lightmapUsage;
	int32_t ___blendProbesUsage;
	int32_t ___useSharedSceneCullingMask;
	int32_t ___mightIncludeTrees;
};
struct NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___loadAction;
	int32_t ___storeAction;
	bool ___memoryless;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4_marshaled_pinvoke
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___loadAction;
	int32_t ___storeAction;
	int32_t ___memoryless;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4_marshaled_com
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___loadAction;
	int32_t ___storeAction;
	int32_t ___memoryless;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct OverlapBoxCommand_t23BF76A767EEA6F25251570C980882A08B864F5E 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CcenterU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3ChalfExtentsU3Ek__BackingField;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CorientationU3Ek__BackingField;
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___U3CphysicsSceneU3Ek__BackingField;
	QueryParameters_t5BC1A5A2C4ADB170380559863B0F65BAA02BA1D1 ___queryParameters;
};
struct OverlapBoxCommand_t23BF76A767EEA6F25251570C980882A08B864F5E_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CcenterU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3ChalfExtentsU3Ek__BackingField;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CorientationU3Ek__BackingField;
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___U3CphysicsSceneU3Ek__BackingField;
	QueryParameters_t5BC1A5A2C4ADB170380559863B0F65BAA02BA1D1_marshaled_pinvoke ___queryParameters;
};
struct OverlapBoxCommand_t23BF76A767EEA6F25251570C980882A08B864F5E_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CcenterU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3ChalfExtentsU3Ek__BackingField;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CorientationU3Ek__BackingField;
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___U3CphysicsSceneU3Ek__BackingField;
	QueryParameters_t5BC1A5A2C4ADB170380559863B0F65BAA02BA1D1_marshaled_com ___queryParameters;
};
struct OverlapCapsuleCommand_t40CDF5A21005FE9E05A36EA52EC72EB760338324 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3Cpoint0U3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3Cpoint1U3Ek__BackingField;
	float ___U3CradiusU3Ek__BackingField;
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___U3CphysicsSceneU3Ek__BackingField;
	QueryParameters_t5BC1A5A2C4ADB170380559863B0F65BAA02BA1D1 ___queryParameters;
};
struct OverlapCapsuleCommand_t40CDF5A21005FE9E05A36EA52EC72EB760338324_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3Cpoint0U3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3Cpoint1U3Ek__BackingField;
	float ___U3CradiusU3Ek__BackingField;
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___U3CphysicsSceneU3Ek__BackingField;
	QueryParameters_t5BC1A5A2C4ADB170380559863B0F65BAA02BA1D1_marshaled_pinvoke ___queryParameters;
};
struct OverlapCapsuleCommand_t40CDF5A21005FE9E05A36EA52EC72EB760338324_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3Cpoint0U3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3Cpoint1U3Ek__BackingField;
	float ___U3CradiusU3Ek__BackingField;
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___U3CphysicsSceneU3Ek__BackingField;
	QueryParameters_t5BC1A5A2C4ADB170380559863B0F65BAA02BA1D1_marshaled_com ___queryParameters;
};
struct OverlapSphereCommand_t8513E4151F3F8F4E4C8E05734BA78EDD8557A1CE 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpointU3Ek__BackingField;
	float ___U3CradiusU3Ek__BackingField;
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___U3CphysicsSceneU3Ek__BackingField;
	QueryParameters_t5BC1A5A2C4ADB170380559863B0F65BAA02BA1D1 ___queryParameters;
};
struct OverlapSphereCommand_t8513E4151F3F8F4E4C8E05734BA78EDD8557A1CE_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpointU3Ek__BackingField;
	float ___U3CradiusU3Ek__BackingField;
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___U3CphysicsSceneU3Ek__BackingField;
	QueryParameters_t5BC1A5A2C4ADB170380559863B0F65BAA02BA1D1_marshaled_pinvoke ___queryParameters;
};
struct OverlapSphereCommand_t8513E4151F3F8F4E4C8E05734BA78EDD8557A1CE_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpointU3Ek__BackingField;
	float ___U3CradiusU3Ek__BackingField;
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___U3CphysicsSceneU3Ek__BackingField;
	QueryParameters_t5BC1A5A2C4ADB170380559863B0F65BAA02BA1D1_marshaled_com ___queryParameters;
};
struct PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___accessFlags;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
};
struct PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
};
struct PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___index;
	bool ___preserveCounterValue;
};
struct PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_marshaled_pinvoke
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___index;
	int32_t ___preserveCounterValue;
};
struct PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_marshaled_com
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___index;
	int32_t ___preserveCounterValue;
};
struct RaycastCommand_t4EB71893B65E7E4E56292BC591E8B256FBBAAE29 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CfromU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CdirectionU3Ek__BackingField;
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___U3CphysicsSceneU3Ek__BackingField;
	float ___U3CdistanceU3Ek__BackingField;
	QueryParameters_t5BC1A5A2C4ADB170380559863B0F65BAA02BA1D1 ___queryParameters;
};
struct RaycastCommand_t4EB71893B65E7E4E56292BC591E8B256FBBAAE29_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CfromU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CdirectionU3Ek__BackingField;
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___U3CphysicsSceneU3Ek__BackingField;
	float ___U3CdistanceU3Ek__BackingField;
	QueryParameters_t5BC1A5A2C4ADB170380559863B0F65BAA02BA1D1_marshaled_pinvoke ___queryParameters;
};
struct RaycastCommand_t4EB71893B65E7E4E56292BC591E8B256FBBAAE29_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CfromU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CdirectionU3Ek__BackingField;
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___U3CphysicsSceneU3Ek__BackingField;
	float ___U3CdistanceU3Ek__BackingField;
	QueryParameters_t5BC1A5A2C4ADB170380559863B0F65BAA02BA1D1_marshaled_com ___queryParameters;
};
struct RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 
{
	BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 ___m_BlendState;
	RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 ___m_RasterState;
	DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 ___m_DepthState;
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___m_StencilState;
	int32_t ___m_StencilReference;
	int32_t ___m_Mask;
};
struct SpherecastCommand_tE6054B0BDEE79BBBA6262513060985ACE4E3910B 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CoriginU3Ek__BackingField;
	float ___U3CradiusU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CdirectionU3Ek__BackingField;
	float ___U3CdistanceU3Ek__BackingField;
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___U3CphysicsSceneU3Ek__BackingField;
	QueryParameters_t5BC1A5A2C4ADB170380559863B0F65BAA02BA1D1 ___queryParameters;
};
struct SpherecastCommand_tE6054B0BDEE79BBBA6262513060985ACE4E3910B_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CoriginU3Ek__BackingField;
	float ___U3CradiusU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CdirectionU3Ek__BackingField;
	float ___U3CdistanceU3Ek__BackingField;
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___U3CphysicsSceneU3Ek__BackingField;
	QueryParameters_t5BC1A5A2C4ADB170380559863B0F65BAA02BA1D1_marshaled_pinvoke ___queryParameters;
};
struct SpherecastCommand_tE6054B0BDEE79BBBA6262513060985ACE4E3910B_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CoriginU3Ek__BackingField;
	float ___U3CradiusU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CdirectionU3Ek__BackingField;
	float ___U3CdistanceU3Ek__BackingField;
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___U3CphysicsSceneU3Ek__BackingField;
	QueryParameters_t5BC1A5A2C4ADB170380559863B0F65BAA02BA1D1_marshaled_com ___queryParameters;
};
struct TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	bool ___builtin;
};
struct TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_pinvoke
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___builtin;
};
struct TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_com
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___builtin;
};
struct URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9 
{
	NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 ___slices;
	uint32_t ___slicesValidMask;
};
struct XrSpatialMarkerDataEXT_tCA69F76EE037E4C35301FAEB964E0824E5CB3DF7 
{
	int32_t ___U3CcapabilityU3Ek__BackingField;
	uint32_t ___U3CmarkerIdU3Ek__BackingField;
	XrSpatialBufferEXT_tACB1444AEA9D94473DE9147AE27AA3600DF258F4 ___U3CdataU3Ek__BackingField;
};
struct XrSpatialMeshDataEXT_t995B791E12E53589EBBA5231BD9DF3E677370AD5 
{
	XrPosef_t30CFD88924941CAA7DB413CD1AFF423530A90DD0 ___U3CoriginU3Ek__BackingField;
	XrSpatialBufferEXT_tACB1444AEA9D94473DE9147AE27AA3600DF258F4 ___U3CvertexBufferU3Ek__BackingField;
	XrSpatialBufferEXT_tACB1444AEA9D94473DE9147AE27AA3600DF258F4 ___U3CindexBufferU3Ek__BackingField;
};
struct XrSpatialPolygon2DDataEXT_t2671827E5DC1F80AD77558E5434D06BC54BFB5E8 
{
	XrPosef_t30CFD88924941CAA7DB413CD1AFF423530A90DD0 ___U3CoriginU3Ek__BackingField;
	XrSpatialBufferEXT_tACB1444AEA9D94473DE9147AE27AA3600DF258F4 ___U3CvertexBufferU3Ek__BackingField;
};
struct TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2 
{
	bool ___isBorderJob;
	NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F ___rectParams;
	BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509 ___borderParams;
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
};
struct TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_marshaled_pinvoke
{
	int32_t ___isBorderJob;
	NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F ___rectParams;
	BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_pinvoke ___borderParams;
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
};
struct TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_marshaled_com
{
	int32_t ___isBorderJob;
	NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F ___rectParams;
	BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_com ___borderParams;
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
};
struct GPUComponentUploadSource_t9B7C48CF44C7D9AB6E02FF6CEB99E3C8119DF10A 
{
	JaggedSpan_1_tE10FCFEF557E7CDDDF12AF04C799238E4CA6F874 ___data;
	GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 ___component;
	int32_t ___componentSize;
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
struct Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF 
{
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
	int32_t ___snapshotIndex;
	intptr_t ___vectorImagePtr;
	intptr_t ___texturePtr;
};
struct BatchTransform_tF14188CE07ECF9D6C90EA2D28AD5BD0D102500F8 
{
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_PhysicsBody;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_PhysicsTransform;
	bool ___m_UsePosition;
	bool ___m_UseRotation;
};
struct BatchTransform_tF14188CE07ECF9D6C90EA2D28AD5BD0D102500F8_marshaled_pinvoke
{
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_PhysicsBody;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_PhysicsTransform;
	int32_t ___m_UsePosition;
	int32_t ___m_UseRotation;
};
struct BatchTransform_tF14188CE07ECF9D6C90EA2D28AD5BD0D102500F8_marshaled_com
{
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_PhysicsBody;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_PhysicsTransform;
	int32_t ___m_UsePosition;
	int32_t ___m_UseRotation;
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
struct ContactManifold_t89E1917659EAE01A181DDD90474BDDB3985D6D19 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	float ___m_RollingImpulse;
	ManifoldPointArray_t922590713BDB79482FD125B4D9C6CBD3728EE458 ___m_Points;
	int32_t ___m_PointCount;
};
struct ContactManifold_t89E1917659EAE01A181DDD90474BDDB3985D6D19_marshaled_pinvoke
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	float ___m_RollingImpulse;
	ManifoldPointArray_t922590713BDB79482FD125B4D9C6CBD3728EE458_marshaled_pinvoke ___m_Points;
	int32_t ___m_PointCount;
};
struct ContactManifold_t89E1917659EAE01A181DDD90474BDDB3985D6D19_marshaled_com
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	float ___m_RollingImpulse;
	ManifoldPointArray_t922590713BDB79482FD125B4D9C6CBD3728EE458_marshaled_com ___m_Points;
	int32_t ___m_PointCount;
};
struct FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 
{
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a0;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a1;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a2;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a3;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a4;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a5;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a6;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a7;
	int32_t ___activeAttachments;
};
struct FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C 
{
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a0;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a1;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a2;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a3;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a4;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a5;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a6;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a7;
	int32_t ___activeAttachments;
};
struct MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___meshLodCount;
	LodSelectionCurve_t5E3F99BC782C22E828074538B8B43051FF859713 ___meshLodSelectionCurve;
	EmbeddedArray64_1_t40B70A170260009F23E16506CE418B52748B8EE0 ___subMeshes;
};
struct MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_marshaled_pinvoke
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___meshLodCount;
	LodSelectionCurve_t5E3F99BC782C22E828074538B8B43051FF859713 ___meshLodSelectionCurve;
	EmbeddedArray64_1_t40B70A170260009F23E16506CE418B52748B8EE0 ___subMeshes;
};
struct MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_marshaled_com
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___meshLodCount;
	LodSelectionCurve_t5E3F99BC782C22E828074538B8B43051FF859713 ___meshLodSelectionCurve;
	EmbeddedArray64_1_t40B70A170260009F23E16506CE418B52748B8EE0 ___subMeshes;
};
struct RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1 
{
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullingResults;
	DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 ___drawSettings;
	FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F ___filteringSettings;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___tagName;
	bool ___isPassTagName;
	Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B ___tagValues;
	Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C ___stateBlocks;
};
struct RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_pinvoke
{
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullingResults;
	DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 ___drawSettings;
	FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F ___filteringSettings;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___tagName;
	int32_t ___isPassTagName;
	Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B ___tagValues;
	Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C ___stateBlocks;
};
struct RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_com
{
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullingResults;
	DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 ___drawSettings;
	FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F ___filteringSettings;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___tagName;
	int32_t ___isPassTagName;
	Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B ___tagValues;
	Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C ___stateBlocks;
};
struct UnmanagedFilterFunction_t46D1C73262CD8245474DBC2CA5878C80E08A1B11 
{
	int32_t ___m_Type;
	FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C ___m_Parameters;
	int32_t ___m_ParameterCount;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_CustomDefinition;
};
struct Contact_tDF846FDDD399484433CB94E46C0F7E64F0281BC7 
{
	ContactId_tD87E020E1E854F067B05AE73E9C5B3FE3155CF11 ___m_ContactId;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeA;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeB;
	ContactManifold_t89E1917659EAE01A181DDD90474BDDB3985D6D19 ___m_Manifold;
};
struct Contact_tDF846FDDD399484433CB94E46C0F7E64F0281BC7_marshaled_pinvoke
{
	ContactId_tD87E020E1E854F067B05AE73E9C5B3FE3155CF11 ___m_ContactId;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeA;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeB;
	ContactManifold_t89E1917659EAE01A181DDD90474BDDB3985D6D19_marshaled_pinvoke ___m_Manifold;
};
struct Contact_tDF846FDDD399484433CB94E46C0F7E64F0281BC7_marshaled_com
{
	ContactId_tD87E020E1E854F067B05AE73E9C5B3FE3155CF11 ___m_ContactId;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeA;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeB;
	ContactManifold_t89E1917659EAE01A181DDD90474BDDB3985D6D19_marshaled_com ___m_Manifold;
};
struct NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2 
{
	FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 ___loadAudit;
	FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 ___storeAudit;
	PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 ___breakAudit;
	FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C ___fragments;
	FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 ___attachments;
	int32_t ___firstGraphPass;
	int32_t ___lastGraphPass;
	int32_t ___numGraphPasses;
	int32_t ___firstCompactedNonCulledRasterPass;
	int32_t ___lastCompactedNonCulledRasterPass;
	int32_t ___firstNativeSubPass;
	int32_t ___numNativeSubPasses;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___samples;
	int32_t ___shadingRateImageIndex;
	bool ___hasDepth;
	bool ___hasFoveatedRasterization;
	bool ___hasShadingRateStates;
	int32_t ___extendedFeatureFlags;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
};
struct NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_marshaled_pinvoke
{
	FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 ___loadAudit;
	FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 ___storeAudit;
	PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 ___breakAudit;
	FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C ___fragments;
	FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 ___attachments;
	int32_t ___firstGraphPass;
	int32_t ___lastGraphPass;
	int32_t ___numGraphPasses;
	int32_t ___firstCompactedNonCulledRasterPass;
	int32_t ___lastCompactedNonCulledRasterPass;
	int32_t ___firstNativeSubPass;
	int32_t ___numNativeSubPasses;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___samples;
	int32_t ___shadingRateImageIndex;
	int32_t ___hasDepth;
	int32_t ___hasFoveatedRasterization;
	int32_t ___hasShadingRateStates;
	int32_t ___extendedFeatureFlags;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
};
struct NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_marshaled_com
{
	FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 ___loadAudit;
	FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 ___storeAudit;
	PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 ___breakAudit;
	FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C ___fragments;
	FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 ___attachments;
	int32_t ___firstGraphPass;
	int32_t ___lastGraphPass;
	int32_t ___numGraphPasses;
	int32_t ___firstCompactedNonCulledRasterPass;
	int32_t ___lastCompactedNonCulledRasterPass;
	int32_t ___firstNativeSubPass;
	int32_t ___numNativeSubPasses;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___samples;
	int32_t ___shadingRateImageIndex;
	int32_t ___hasDepth;
	int32_t ___hasFoveatedRasterization;
	int32_t ___hasShadingRateStates;
	int32_t ___extendedFeatureFlags;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
};
struct RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214 
{
	RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1 ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214_marshaled_pinvoke
{
	RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_pinvoke ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214_marshaled_com
{
	RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_com ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
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
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F_StaticFields
{
	OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F ___Null;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_StaticFields
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___kZero;
};
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_StaticFields
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___none;
};
struct UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1_StaticFields
{
	EqualityComparer_tF8FCE99C5DBB2F35D74728CB65346435381CFD5B* ___k_EqualityComparer;
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
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_StaticFields
{
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___zero;
};
struct float3_t7600B73F092B37F484B12910A5269F30C778D31E_StaticFields
{
	float3_t7600B73F092B37F484B12910A5269F30C778D31E ___zero;
};
struct float4_t545A994996126766890C1F28B43EA823F2410190_StaticFields
{
	float4_t545A994996126766890C1F28B43EA823F2410190 ___zero;
};
struct int2_tB123E869131C6102341F8F9AA01726E0E7C2768D_StaticFields
{
	int2_tB123E869131C6102341F8F9AA01726E0E7C2768D ___zero;
};
struct Block_tBD2149E220F819A66A4A0A18F237932ACD9011DE_StaticFields
{
	Block_tBD2149E220F819A66A4A0A18F237932ACD9011DE ___Invalid;
};
struct GeoPoolEntrySlot_tE1B7B103A90E4C3379CED82C8D6DA55189422977_StaticFields
{
	GeoPoolEntrySlot_tE1B7B103A90E4C3379CED82C8D6DA55189422977 ___Invalid;
};
struct Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562_StaticFields
{
	Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 ___zero;
};
struct Vector4f_t1B7E11764C0EA53E7809996B56E208E32A1D5A86_StaticFields
{
	Vector4f_t1B7E11764C0EA53E7809996B56E208E32A1D5A86 ___zero;
};
struct Vector4s_t37178C957A1C65EEC13FADEFB227695709228857_StaticFields
{
	Vector4s_t37178C957A1C65EEC13FADEFB227695709228857 ___zero;
};
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity;
};
struct RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85_StaticFields
{
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___nullRendererList;
};
struct SegmentGeometry_tB93A6D3EFCC2E4140411F9A1EED7746CBD2560B0_StaticFields
{
	SegmentGeometry_tB93A6D3EFCC2E4140411F9A1EED7746CBD2560B0 ___defaultGeometry;
};
struct ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF_StaticFields
{
	int32_t ___maximumCullingPlaneCount;
};
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___simpleVert;
};
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_StaticFields
{
	float ___nearZ;
};
struct float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_StaticFields
{
	float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA ___identity;
	float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA ___zero;
};
struct quaternion_t9C8C2916B7359C174B215BBB41F290ABCBEA8AEA_StaticFields
{
	quaternion_t9C8C2916B7359C174B215BBB41F290ABCBEA8AEA ___identity;
};
struct LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___LoadReasonMessages;
};
struct PolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491_StaticFields
{
	PolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491 ___defaultGeometry;
};
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_StaticFields
{
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___Invalid;
};
struct ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C_StaticFields
{
	uint32_t ___s_CurrentValidBit;
};
struct StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___StoreReasonMessages;
};
struct TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_StaticFields
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F ___Default;
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
struct TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_StaticFields
{
	TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388 ___s_NullHandle;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3 (uint8_t* ___0_dest, uint8_t* ___1_src, uint32_t ___2_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79 (uint8_t* ___0_dest, uint8_t* ___1_src, uint32_t ___2_len, intptr_t ___3_type_handle, const RuntimeMethod* method) ;
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C_mB299AD4CE049174320A1A22C157EF59CCDB3A6B2_gshared (LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C* ___0_destination, LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMachineLearningTensorDescriptor_t1BF985B997F1FE425A60A95DE5DA6499D5BAF52F_mF474D34EAB52DE3384813044F545FD25C495D21F_gshared (MachineLearningTensorDescriptor_t1BF985B997F1FE425A60A95DE5DA6499D5BAF52F* ___0_destination, MachineLearningTensorDescriptor_t1BF985B997F1FE425A60A95DE5DA6499D5BAF52F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MachineLearningTensorDescriptor_t1BF985B997F1FE425A60A95DE5DA6499D5BAF52F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		MachineLearningTensorDescriptor_t1BF985B997F1FE425A60A95DE5DA6499D5BAF52F* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<MachineLearningTensorDescriptor_t1BF985B997F1FE425A60A95DE5DA6499D5BAF52F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m59E46AC18F0285D5A56C690CDD262F9ADA84663C_gshared (MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___0_destination, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_mBFE5AB7E5EA648284EEC0A6201B70C58BF6D4367_gshared (MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* ___0_destination, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMarshalledMethod_tBA55BA1844DA23D5366287E79787F3F63E919207_mE54A3096E4C2FF553CA04ECAF64A81BDCC29B30C_gshared (MarshalledMethod_tBA55BA1844DA23D5366287E79787F3F63E919207* ___0_destination, MarshalledMethod_tBA55BA1844DA23D5366287E79787F3F63E919207* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MarshalledMethod_tBA55BA1844DA23D5366287E79787F3F63E919207* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		MarshalledMethod_tBA55BA1844DA23D5366287E79787F3F63E919207* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<MarshalledMethod_tBA55BA1844DA23D5366287E79787F3F63E919207>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6FE4E2203A341DF3711ECDD055B9E5DB910BC7D3_gshared (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_destination, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2_m7EB5083E7255749FB9641A1175A5752036A5C460_gshared (MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2* ___0_destination, MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_m0BBBBB61DA9B16B7A8F48A3194ACCCE7762001EC_gshared (MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254* ___0_destination, MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA_m54EA539C8C0DA25305FA3186E2BC496BAA656B86_gshared (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* ___0_destination, MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMeshInstanceDesc_tB2FE46683FA05965417F454F188294A3269F5F73_m1AFEAD177EEAC51E03E48B1AB971A53BB97C401F_gshared (MeshInstanceDesc_tB2FE46683FA05965417F454F188294A3269F5F73* ___0_destination, MeshInstanceDesc_tB2FE46683FA05965417F454F188294A3269F5F73* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		MeshInstanceDesc_tB2FE46683FA05965417F454F188294A3269F5F73* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		MeshInstanceDesc_tB2FE46683FA05965417F454F188294A3269F5F73* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_1 = L_5;
		uint8_t* L_6 = V_1;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_3 = (uint8_t*)L_7;
		uint8_t* L_8 = V_3;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_12);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13;
		L_13 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(113, L_12);
		V_4 = L_13;
		intptr_t L_14;
		L_14 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)L_3, L_8, L_10, L_14, NULL);
		uintptr_t L_15 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_15;
		uintptr_t L_16 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_16;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E_m6212DC59D136B8FAA87466C3495D0F4B7B3762BC_gshared (MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E* ___0_destination, MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMeshRendererUpdateBatch_t386C6151480A8A39F3A9703B56B8A87AAD5EEED2_m7811A62F473DAB0206F5A438E6B6B6EB8B6863CF_gshared (MeshRendererUpdateBatch_t386C6151480A8A39F3A9703B56B8A87AAD5EEED2* ___0_destination, MeshRendererUpdateBatch_t386C6151480A8A39F3A9703B56B8A87AAD5EEED2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MeshRendererUpdateBatch_t386C6151480A8A39F3A9703B56B8A87AAD5EEED2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		MeshRendererUpdateBatch_t386C6151480A8A39F3A9703B56B8A87AAD5EEED2* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<MeshRendererUpdateBatch_t386C6151480A8A39F3A9703B56B8A87AAD5EEED2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A_m90835915CEF2F93C03EF71873CEC5592AD382C54_gshared (MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A* ___0_destination, MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937_m9CC9BB5524CD97C8007D1EEBE09C53ED6D819499_gshared (MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* ___0_destination, MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMethodDefinitionHandle_t94F3F4618C88F6DD6A658FC3C364BC5C5D1EA8BF_mC645B56FFBB424D25F099EBC9FBD98AD00DC1EE4_gshared (MethodDefinitionHandle_t94F3F4618C88F6DD6A658FC3C364BC5C5D1EA8BF* ___0_destination, MethodDefinitionHandle_t94F3F4618C88F6DD6A658FC3C364BC5C5D1EA8BF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MethodDefinitionHandle_t94F3F4618C88F6DD6A658FC3C364BC5C5D1EA8BF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		MethodDefinitionHandle_t94F3F4618C88F6DD6A658FC3C364BC5C5D1EA8BF* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<MethodDefinitionHandle_t94F3F4618C88F6DD6A658FC3C364BC5C5D1EA8BF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m23A0A1DC27829526256D3EA18AF15897CD688CB4_gshared (ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* ___0_destination, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisName_t9E47EF25D1808C27515EB99D71DB90E187AC1354_m8A9793514C049D29935B8879F1ABE6C9ADB6728B_gshared (Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354* ___0_destination, Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_1 = L_5;
		uint8_t* L_6 = V_1;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_3 = (uint8_t*)L_7;
		uint8_t* L_8 = V_3;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_12);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13;
		L_13 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(113, L_12);
		V_4 = L_13;
		intptr_t L_14;
		L_14 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)L_3, L_8, L_10, L_14, NULL);
		uintptr_t L_15 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_15;
		uintptr_t L_16 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_16;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNamespaceDefinitionHandle_t5490363A809D68426A38836A29CAA7704F7EAFF9_mFB143796D0A699B4BCE8667AE1F10F79EADE4278_gshared (NamespaceDefinitionHandle_t5490363A809D68426A38836A29CAA7704F7EAFF9* ___0_destination, NamespaceDefinitionHandle_t5490363A809D68426A38836A29CAA7704F7EAFF9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NamespaceDefinitionHandle_t5490363A809D68426A38836A29CAA7704F7EAFF9* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		NamespaceDefinitionHandle_t5490363A809D68426A38836A29CAA7704F7EAFF9* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<NamespaceDefinitionHandle_t5490363A809D68426A38836A29CAA7704F7EAFF9>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativeHandleAllocator_t47E1DB0A5AB93147ABE2C4AE681132799EE2022B_mB80FF9BB32316D9711DC722DA16111620909E1D0_gshared (NativeHandleAllocator_t47E1DB0A5AB93147ABE2C4AE681132799EE2022B* ___0_destination, NativeHandleAllocator_t47E1DB0A5AB93147ABE2C4AE681132799EE2022B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NativeHandleAllocator_t47E1DB0A5AB93147ABE2C4AE681132799EE2022B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		NativeHandleAllocator_t47E1DB0A5AB93147ABE2C4AE681132799EE2022B* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<NativeHandleAllocator_t47E1DB0A5AB93147ABE2C4AE681132799EE2022B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4_m92D158431A5BC9D2B05C80575A0DDA8B5ED9B213_gshared (NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4* ___0_destination, NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_m7877A89A8912BD549B31F67DAC4FEEE193752C28_gshared (NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2* ___0_destination, NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9_m718F6BA93DE096A72722F7717D6DF440848E00B6_gshared (NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9* ___0_destination, NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNavLocation_tB55264752D60479DF2C5EEAD78893070EFDF95D0_m01050024558792221688114720A5E29E41A34D6D_gshared (NavLocation_tB55264752D60479DF2C5EEAD78893070EFDF95D0* ___0_destination, NavLocation_tB55264752D60479DF2C5EEAD78893070EFDF95D0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NavLocation_tB55264752D60479DF2C5EEAD78893070EFDF95D0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		NavLocation_tB55264752D60479DF2C5EEAD78893070EFDF95D0* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<NavLocation_tB55264752D60479DF2C5EEAD78893070EFDF95D0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNavMeshBuildMarkup_tC2D636663691297A05F32A8B2B8CAA7108FEE8AC_mF8FAF2BED91D231B13332B52D6DB160C14014CAD_gshared (NavMeshBuildMarkup_tC2D636663691297A05F32A8B2B8CAA7108FEE8AC* ___0_destination, NavMeshBuildMarkup_tC2D636663691297A05F32A8B2B8CAA7108FEE8AC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NavMeshBuildMarkup_tC2D636663691297A05F32A8B2B8CAA7108FEE8AC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		NavMeshBuildMarkup_tC2D636663691297A05F32A8B2B8CAA7108FEE8AC* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<NavMeshBuildMarkup_tC2D636663691297A05F32A8B2B8CAA7108FEE8AC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD_mDD7C947E1022050FA78723E0C5F87822A2F5D99A_gshared (NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* ___0_destination, NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNavMeshLocation_tD3C7A2DD4EFEF60B2394F75FFB2CDDA35AC28376_mA274F87E084C899F6368BB130C6BDB318FE2BE26_gshared (NavMeshLocation_tD3C7A2DD4EFEF60B2394F75FFB2CDDA35AC28376* ___0_destination, NavMeshLocation_tD3C7A2DD4EFEF60B2394F75FFB2CDDA35AC28376* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NavMeshLocation_tD3C7A2DD4EFEF60B2394F75FFB2CDDA35AC28376* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		NavMeshLocation_tD3C7A2DD4EFEF60B2394F75FFB2CDDA35AC28376* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<NavMeshLocation_tD3C7A2DD4EFEF60B2394F75FFB2CDDA35AC28376>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNavNode_t5BB37F8530DD1B679EACF4C83616D8AB28E4EBD3_m90D4399D2468C8C610D927DE201030864A7E23A3_gshared (NavNode_t5BB37F8530DD1B679EACF4C83616D8AB28E4EBD3* ___0_destination, NavNode_t5BB37F8530DD1B679EACF4C83616D8AB28E4EBD3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NavNode_t5BB37F8530DD1B679EACF4C83616D8AB28E4EBD3* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		NavNode_t5BB37F8530DD1B679EACF4C83616D8AB28E4EBD3* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<NavNode_t5BB37F8530DD1B679EACF4C83616D8AB28E4EBD3>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_m1344A30C8C64641C8CB6DB508EC56FE1BF15F736_gshared (NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* ___0_destination, NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOTL_Lookup_t868EC01B5051F7AA4A3735BC93BD02C875F07304_mDAB31D385ECBC2A3024F6F48C84AAA45B673A76F_gshared (OTL_Lookup_t868EC01B5051F7AA4A3735BC93BD02C875F07304* ___0_destination, OTL_Lookup_t868EC01B5051F7AA4A3735BC93BD02C875F07304* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OTL_Lookup_t868EC01B5051F7AA4A3735BC93BD02C875F07304* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		OTL_Lookup_t868EC01B5051F7AA4A3735BC93BD02C875F07304* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<OTL_Lookup_t868EC01B5051F7AA4A3735BC93BD02C875F07304>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F_mEAC37276758C0D7B895A591EE69BE63CADBFD311_gshared (OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F* ___0_destination, OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<OVRLocatable_t95043A3275B61A287618088848038CAC6FAFFA7F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627_m43F8A4AC2388A9F0C27AB0A185085F53623608CA_gshared (OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627* ___0_destination, OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933_m5A003E688413079C66237DE790878F634A60F8EB_gshared (OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933* ___0_destination, OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB_mC6AFBBAA2DFE1E74FF820515977ACF76A6F110EC_gshared (OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB* ___0_destination, OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7_mED6034C6AE7A91FD3482A1B2F2F57DC6CAEC124F_gshared (OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7* ___0_destination, OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74_mB35746D9853EBB9E5ABDFA095D7C5B7C58C8B51F_gshared (OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74* ___0_destination, OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185_m0E5023F31322576D419474CB9F7795E2E5D7688C_gshared (OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185* ___0_destination, OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOverlapBoxCommand_t23BF76A767EEA6F25251570C980882A08B864F5E_mAD1CFF81A77DA74DD9E1CE08C7F4BA85D36A3CC0_gshared (OverlapBoxCommand_t23BF76A767EEA6F25251570C980882A08B864F5E* ___0_destination, OverlapBoxCommand_t23BF76A767EEA6F25251570C980882A08B864F5E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OverlapBoxCommand_t23BF76A767EEA6F25251570C980882A08B864F5E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		OverlapBoxCommand_t23BF76A767EEA6F25251570C980882A08B864F5E* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<OverlapBoxCommand_t23BF76A767EEA6F25251570C980882A08B864F5E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOverlapCapsuleCommand_t40CDF5A21005FE9E05A36EA52EC72EB760338324_mD3837A554C02C31B4A55F8E71EB81CD049BE35AA_gshared (OverlapCapsuleCommand_t40CDF5A21005FE9E05A36EA52EC72EB760338324* ___0_destination, OverlapCapsuleCommand_t40CDF5A21005FE9E05A36EA52EC72EB760338324* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OverlapCapsuleCommand_t40CDF5A21005FE9E05A36EA52EC72EB760338324* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		OverlapCapsuleCommand_t40CDF5A21005FE9E05A36EA52EC72EB760338324* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<OverlapCapsuleCommand_t40CDF5A21005FE9E05A36EA52EC72EB760338324>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOverlapSphereCommand_t8513E4151F3F8F4E4C8E05734BA78EDD8557A1CE_m694876C4957649915D4E35DF5624766B19F0F981_gshared (OverlapSphereCommand_t8513E4151F3F8F4E4C8E05734BA78EDD8557A1CE* ___0_destination, OverlapSphereCommand_t8513E4151F3F8F4E4C8E05734BA78EDD8557A1CE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OverlapSphereCommand_t8513E4151F3F8F4E4C8E05734BA78EDD8557A1CE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		OverlapSphereCommand_t8513E4151F3F8F4E4C8E05734BA78EDD8557A1CE* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<OverlapSphereCommand_t8513E4151F3F8F4E4C8E05734BA78EDD8557A1CE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858_m46D6A2EF9E77EA591B9E1B31956B062C92076D53_gshared (ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858* ___0_destination, ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_m2C86E0E5D4E10481221216636DD7BC3BDD8A5214_gshared (PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* ___0_destination, PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C_m41BC15726CAB8F70CD000CB3674D3128237FE452_gshared (PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* ___0_destination, PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE_m1C1B67C346EEED0CD456B9E87D080590068B3082_gshared (PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* ___0_destination, PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassOutputData_t8EA364E560775D19D285839BA06710B337503E0D_m9E7E2846C3D4BCC5B682D0E2EAEABACFEEE1845E_gshared (PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* ___0_destination, PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_m39B28318F5BDEAE4BD94956E767CC9704364FEE2_gshared (PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* ___0_destination, PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPatchExtents_t9F583D220D8803058584E983C416D5706242A2CE_m7E81162628ACF808BF1E8AD0A8685BE6C0267704_gshared (PatchExtents_t9F583D220D8803058584E983C416D5706242A2CE* ___0_destination, PatchExtents_t9F583D220D8803058584E983C416D5706242A2CE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PatchExtents_t9F583D220D8803058584E983C416D5706242A2CE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PatchExtents_t9F583D220D8803058584E983C416D5706242A2CE* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PatchExtents_t9F583D220D8803058584E983C416D5706242A2CE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPhysicsAABB_tF85A2986C9C6AE5F076F4ADF07B0523CFF880F28_m5219B4E175D13879E85A9B653576A64D15C4DD2F_gshared (PhysicsAABB_tF85A2986C9C6AE5F076F4ADF07B0523CFF880F28* ___0_destination, PhysicsAABB_tF85A2986C9C6AE5F076F4ADF07B0523CFF880F28* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PhysicsAABB_tF85A2986C9C6AE5F076F4ADF07B0523CFF880F28* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PhysicsAABB_tF85A2986C9C6AE5F076F4ADF07B0523CFF880F28* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PhysicsAABB_tF85A2986C9C6AE5F076F4ADF07B0523CFF880F28>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0_mF5373592DC9A2DA0EABC2CF91D5EB779984388E5_gshared (PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0* ___0_destination, PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPhysicsBodyDefinition_t66C17FFB8C7F5D8EE0386BA49A29082FD82143F2_m82D910D67E3FE24A612F4AE7747F76DF4919DEC5_gshared (PhysicsBodyDefinition_t66C17FFB8C7F5D8EE0386BA49A29082FD82143F2* ___0_destination, PhysicsBodyDefinition_t66C17FFB8C7F5D8EE0386BA49A29082FD82143F2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PhysicsBodyDefinition_t66C17FFB8C7F5D8EE0386BA49A29082FD82143F2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PhysicsBodyDefinition_t66C17FFB8C7F5D8EE0386BA49A29082FD82143F2* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PhysicsBodyDefinition_t66C17FFB8C7F5D8EE0386BA49A29082FD82143F2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPhysicsChain_tEABC68CB776A86D9FE4364F37FED25738ADF27C1_mFCF6757A29CF2B604B73A45C344229C9E5659EC6_gshared (PhysicsChain_tEABC68CB776A86D9FE4364F37FED25738ADF27C1* ___0_destination, PhysicsChain_tEABC68CB776A86D9FE4364F37FED25738ADF27C1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PhysicsChain_tEABC68CB776A86D9FE4364F37FED25738ADF27C1* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PhysicsChain_tEABC68CB776A86D9FE4364F37FED25738ADF27C1* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PhysicsChain_tEABC68CB776A86D9FE4364F37FED25738ADF27C1>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPhysicsComposer_t0D54F067D6F10F1736E0A1667194CA45802E491B_m23D2B263B38D6DBE273B90F49B15D8763C17D8FC_gshared (PhysicsComposer_t0D54F067D6F10F1736E0A1667194CA45802E491B* ___0_destination, PhysicsComposer_t0D54F067D6F10F1736E0A1667194CA45802E491B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PhysicsComposer_t0D54F067D6F10F1736E0A1667194CA45802E491B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PhysicsComposer_t0D54F067D6F10F1736E0A1667194CA45802E491B* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PhysicsComposer_t0D54F067D6F10F1736E0A1667194CA45802E491B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2_m1339C86F917B4FD92F586A391CFC107103963EAE_gshared (PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2* ___0_destination, PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884_m794D1B5BAE94F0600F91F4E081892EC2E3051BE3_gshared (PhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884* ___0_destination, PhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E_mE7A554796E475747564C6747703CA5F318E216EE_gshared (PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E* ___0_destination, PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPhysicsShape2D_t443155710C4DE7DE8C48EADA86BC4DC7EA70226E_mB08486FEA8AAE36449903217B1BF1528657DA38F_gshared (PhysicsShape2D_t443155710C4DE7DE8C48EADA86BC4DC7EA70226E* ___0_destination, PhysicsShape2D_t443155710C4DE7DE8C48EADA86BC4DC7EA70226E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PhysicsShape2D_t443155710C4DE7DE8C48EADA86BC4DC7EA70226E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PhysicsShape2D_t443155710C4DE7DE8C48EADA86BC4DC7EA70226E* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PhysicsShape2D_t443155710C4DE7DE8C48EADA86BC4DC7EA70226E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPhysicsUserData_t767769E7B130D2A0974D0FA6F9477DF8AED0D113_m9323ECD622A40E748E4611FE8AEE33E43BA55CA2_gshared (PhysicsUserData_t767769E7B130D2A0974D0FA6F9477DF8AED0D113* ___0_destination, PhysicsUserData_t767769E7B130D2A0974D0FA6F9477DF8AED0D113* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PhysicsUserData_t767769E7B130D2A0974D0FA6F9477DF8AED0D113* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PhysicsUserData_t767769E7B130D2A0974D0FA6F9477DF8AED0D113* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PhysicsUserData_t767769E7B130D2A0974D0FA6F9477DF8AED0D113>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPhysicsWorld_tD76337CF6B632797461123938E650738C9A18952_mF25F90EC92871EC1D8E17801FF0560C60723C7E4_gshared (PhysicsWorld_tD76337CF6B632797461123938E650738C9A18952* ___0_destination, PhysicsWorld_tD76337CF6B632797461123938E650738C9A18952* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PhysicsWorld_tD76337CF6B632797461123938E650738C9A18952* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PhysicsWorld_tD76337CF6B632797461123938E650738C9A18952* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PhysicsWorld_tD76337CF6B632797461123938E650738C9A18952>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mF75DD2DBA33D1083E63B1A29456B4085A1CC079F_gshared (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___0_destination, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491_mBCC8E2FEAECCA809295A34AE56C079F60F0C9AB5_gshared (PolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491* ___0_destination, PolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PolygonGeometry_t9303EFE027FA294B7D25B4E5AD0BAAFEF9154491>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPolygonId_t8064F95ADA9FE8AC5F7DDF61A9F1E66FFDDE2449_m9EF1904C47DDA31D3AC85433222BA28D9A6C00EE_gshared (PolygonId_t8064F95ADA9FE8AC5F7DDF61A9F1E66FFDDE2449* ___0_destination, PolygonId_t8064F95ADA9FE8AC5F7DDF61A9F1E66FFDDE2449* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PolygonId_t8064F95ADA9FE8AC5F7DDF61A9F1E66FFDDE2449* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PolygonId_t8064F95ADA9FE8AC5F7DDF61A9F1E66FFDDE2449* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PolygonId_t8064F95ADA9FE8AC5F7DDF61A9F1E66FFDDE2449>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_m6EAF0B2AA8221F0707DB3D75FAAA11BFE487B1AC_gshared (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_destination, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisProbeSetIndex_t973C9441F5B7FB7CB9B02D111CB632B874813A5D_m26BC98CCBD381B89BE9D52E5139991FEFC56842A_gshared (ProbeSetIndex_t973C9441F5B7FB7CB9B02D111CB632B874813A5D* ___0_destination, ProbeSetIndex_t973C9441F5B7FB7CB9B02D111CB632B874813A5D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ProbeSetIndex_t973C9441F5B7FB7CB9B02D111CB632B874813A5D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		ProbeSetIndex_t973C9441F5B7FB7CB9B02D111CB632B874813A5D* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<ProbeSetIndex_t973C9441F5B7FB7CB9B02D111CB632B874813A5D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC_m59DDB1BBEE638E6F82DC0798293CAF64985EF0C1_gshared (ProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC* ___0_destination, ProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		ProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<ProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4_mD935DD9CD565FB1A8125AACA4DA2BE2A4980526A_gshared (ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4* ___0_destination, ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F_mD715673D2746D6CDFF49C8EC0869D74F37CD0281_gshared (ProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F* ___0_destination, ProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		ProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<ProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2_m1721F31B1FA760838784CB75F1ABFF4850432742_gshared (PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2* ___0_destination, PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_mEC221F5EA452B2083140C7B07F9D2270CA6A55FF_gshared (PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1* ___0_destination, PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_m32B2E4F6BF68D8FA6CC039B1CD714495A18966D2_gshared (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0_destination, PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m0CD197E2DFBC77DF284D8F5CAD832F7CEAEBC8FA_gshared (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_destination, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_mB9D5545DD5F09B740B941EEEC446D6DDDF8761F8_gshared (RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* ___0_destination, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_mFFD97FF079AD2A975D7DF2A78BA8D205567AB2FD_gshared (RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C* ___0_destination, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRaycastCommand_t4EB71893B65E7E4E56292BC591E8B256FBBAAE29_m4DC799C576A67417014E8D257BEB69DB75F15878_gshared (RaycastCommand_t4EB71893B65E7E4E56292BC591E8B256FBBAAE29* ___0_destination, RaycastCommand_t4EB71893B65E7E4E56292BC591E8B256FBBAAE29* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RaycastCommand_t4EB71893B65E7E4E56292BC591E8B256FBBAAE29* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		RaycastCommand_t4EB71893B65E7E4E56292BC591E8B256FBBAAE29* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<RaycastCommand_t4EB71893B65E7E4E56292BC591E8B256FBBAAE29>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m0759F2B6F8E40AFE146E9082633904BC26CBCCD7_gshared (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___0_destination, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mA76873E6FBF3E2A2C2C393A6FBA33ACF4BB2323E_gshared (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* ___0_destination, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F_m79B934C6299FBEAD050C8623DEECA5910C785A77_gshared (ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* ___0_destination, ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m92FE1E0AD06DBA4DEAFD8CF4FCB25C5206BE61BA_gshared (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_destination, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551_m3FD4B33EDB99E32742062A1966754DC9F1E5090B_gshared (RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* ___0_destination, RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
// Method Definition Index: 3653
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733_m6894206E85F92C7E4AF252F3E44348C8831A8A95_gshared (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* ___0_destination, RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_m3E9036AC6B2F145C0BD1D5BF478C68862E3D162D_gshared (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* ___0_destination, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85_mF7FB1DA9A3003588EACD61B35F0734ADFBAD42F2_gshared (RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85* ___0_destination, RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68_mCC5FE82DA6115518D0515F505693D2403D91255F_gshared (RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68* ___0_destination, RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214_m8C5EFDBB84C3693069DECF855A3A029189508D96_gshared (RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214* ___0_destination, RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525_m835EF4F437450CDDBD9433F292E9AC2479A90E1E_gshared (Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___0_destination, Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C_mE56E868D1E861AD9139DDD68E2FC6520686F0235_gshared (ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* ___0_destination, ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC_m487A364CEA8D45CA1019912E652DBE060211AD52_gshared (ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* ___0_destination, ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC_m7A2C6E00E5CCE631EFDFD1737985A5805815B52F_gshared (ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC* ___0_destination, ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC_mDEF8860657F738E1C37779358F5FC2EC8B4F795D_gshared (ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC* ___0_destination, ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8921CF9FB1C61F7FA656ADE11B64F27943551250_gshared (int8_t* ___0_destination, int8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int8_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		int8_t* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<int8_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSectionHeader_tDCEF2AA85F5E6EE0259E66E18A7333E383FDA7D3_m041918595FCF63617D09FAE5FF13707702282E57_gshared (SectionHeader_tDCEF2AA85F5E6EE0259E66E18A7333E383FDA7D3* ___0_destination, SectionHeader_tDCEF2AA85F5E6EE0259E66E18A7333E383FDA7D3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		SectionHeader_tDCEF2AA85F5E6EE0259E66E18A7333E383FDA7D3* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		SectionHeader_tDCEF2AA85F5E6EE0259E66E18A7333E383FDA7D3* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_1 = L_5;
		uint8_t* L_6 = V_1;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_3 = (uint8_t*)L_7;
		uint8_t* L_8 = V_3;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_12);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13;
		L_13 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(113, L_12);
		V_4 = L_13;
		intptr_t L_14;
		L_14 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)L_3, L_8, L_10, L_14, NULL);
		uintptr_t L_15 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_15;
		uintptr_t L_16 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_16;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSegmentGeometry_tB93A6D3EFCC2E4140411F9A1EED7746CBD2560B0_m8CA18A17349C4E80126DBDB2CD3ACF665CD7155F_gshared (SegmentGeometry_tB93A6D3EFCC2E4140411F9A1EED7746CBD2560B0* ___0_destination, SegmentGeometry_tB93A6D3EFCC2E4140411F9A1EED7746CBD2560B0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SegmentGeometry_tB93A6D3EFCC2E4140411F9A1EED7746CBD2560B0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		SegmentGeometry_tB93A6D3EFCC2E4140411F9A1EED7746CBD2560B0* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<SegmentGeometry_tB93A6D3EFCC2E4140411F9A1EED7746CBD2560B0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSerializedCommand_tC29E0C661BDD3D6C4B4EAEE095AADFCDF5CE97AB_mC93D7877FB8138F772FF26F185B46600A68470BC_gshared (SerializedCommand_tC29E0C661BDD3D6C4B4EAEE095AADFCDF5CE97AB* ___0_destination, SerializedCommand_tC29E0C661BDD3D6C4B4EAEE095AADFCDF5CE97AB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SerializedCommand_tC29E0C661BDD3D6C4B4EAEE095AADFCDF5CE97AB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		SerializedCommand_tC29E0C661BDD3D6C4B4EAEE095AADFCDF5CE97AB* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<SerializedCommand_tC29E0C661BDD3D6C4B4EAEE095AADFCDF5CE97AB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_mCCC311A9CB3BBFDF387DB99FA39A44D1D64A739F_gshared (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___0_destination, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_m44539DB4218E8B9D6803A1DB854D6A394284EC2F_gshared (ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* ___0_destination, ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF_mB33B125C7A1AC219217D2366979A4B5E8EEEB129_gshared (ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* ___0_destination, ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5_m12B84C7512D4AB965886549A8F87C4ADA8C255E9_gshared (ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5* ___0_destination, ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C_gshared (float* ___0_destination, float* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		float* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		float* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<float>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSingleSubstitutionRecord_t2246EF12CAF7E758203D0C11E9F3878472051CC9_m2BAF8731BF86622B190A6BCA9A931265E6EEAF7F_gshared (SingleSubstitutionRecord_t2246EF12CAF7E758203D0C11E9F3878472051CC9* ___0_destination, SingleSubstitutionRecord_t2246EF12CAF7E758203D0C11E9F3878472051CC9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SingleSubstitutionRecord_t2246EF12CAF7E758203D0C11E9F3878472051CC9* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		SingleSubstitutionRecord_t2246EF12CAF7E758203D0C11E9F3878472051CC9* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<SingleSubstitutionRecord_t2246EF12CAF7E758203D0C11E9F3878472051CC9>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSpherecastCommand_tE6054B0BDEE79BBBA6262513060985ACE4E3910B_m0FA296C5780E82A9C400FEA2380E641AC9663452_gshared (SpherecastCommand_tE6054B0BDEE79BBBA6262513060985ACE4E3910B* ___0_destination, SpherecastCommand_tE6054B0BDEE79BBBA6262513060985ACE4E3910B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SpherecastCommand_tE6054B0BDEE79BBBA6262513060985ACE4E3910B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		SpherecastCommand_tE6054B0BDEE79BBBA6262513060985ACE4E3910B* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<SpherecastCommand_tE6054B0BDEE79BBBA6262513060985ACE4E3910B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m7994A64D0123C15A209C4D252F012167DEEFCA46_gshared (SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* ___0_destination, SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSpriteBlendShapeVertex_t3E8A43E6B7C7EF565A7A074F26F951EB30FC1F38_mD99375631BD88C571135A9A6A20410B60D489B04_gshared (SpriteBlendShapeVertex_t3E8A43E6B7C7EF565A7A074F26F951EB30FC1F38* ___0_destination, SpriteBlendShapeVertex_t3E8A43E6B7C7EF565A7A074F26F951EB30FC1F38* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SpriteBlendShapeVertex_t3E8A43E6B7C7EF565A7A074F26F951EB30FC1F38* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		SpriteBlendShapeVertex_t3E8A43E6B7C7EF565A7A074F26F951EB30FC1F38* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<SpriteBlendShapeVertex_t3E8A43E6B7C7EF565A7A074F26F951EB30FC1F38>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501_m7AD0BECEC9B54891D69D6D125E15C046BF75DF4A_gshared (SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501* ___0_destination, SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5_mA421BF5B036FC8DAF8C4DCB2B32BCB63652EBBC7_gshared (SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5* ___0_destination, SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisStoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292_mF8CA7DBA4C0513981099CE00AEC5A00DBBF590CB_gshared (StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292* ___0_destination, StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisStringOffset_t429FFE4819A3944F4D1176FF9582DBADA89A1DDE_m87801FD2801CB732EB606CE836166276C6CF8BBE_gshared (StringOffset_t429FFE4819A3944F4D1176FF9582DBADA89A1DDE* ___0_destination, StringOffset_t429FFE4819A3944F4D1176FF9582DBADA89A1DDE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		StringOffset_t429FFE4819A3944F4D1176FF9582DBADA89A1DDE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		StringOffset_t429FFE4819A3944F4D1176FF9582DBADA89A1DDE* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<StringOffset_t429FFE4819A3944F4D1176FF9582DBADA89A1DDE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisStructInt_t964CDBE36B779556058BB33004AD4997131D452D_m5A6169DFCBE5367216A3041E711A38505B804699_gshared (StructInt_t964CDBE36B779556058BB33004AD4997131D452D* ___0_destination, StructInt_t964CDBE36B779556058BB33004AD4997131D452D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		StructInt_t964CDBE36B779556058BB33004AD4997131D452D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		StructInt_t964CDBE36B779556058BB33004AD4997131D452D* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<StructInt_t964CDBE36B779556058BB33004AD4997131D452D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisStructNestedBlittable_tE8D6D7972DCD980D50085F5008637615FAA814F8_mF40D5EC5976523AC4E0FBD9D37628798C6FBED35_gshared (StructNestedBlittable_tE8D6D7972DCD980D50085F5008637615FAA814F8* ___0_destination, StructNestedBlittable_tE8D6D7972DCD980D50085F5008637615FAA814F8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		StructNestedBlittable_tE8D6D7972DCD980D50085F5008637615FAA814F8* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		StructNestedBlittable_tE8D6D7972DCD980D50085F5008637615FAA814F8* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<StructNestedBlittable_tE8D6D7972DCD980D50085F5008637615FAA814F8>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisStructWith8ByteAndBoolFields_tB5DD3E2DD9CF376D1710F8093CF4644C16C2F21B_mA74F4DC89CC9B251534AF6632EB830303D0BCDAF_gshared (StructWith8ByteAndBoolFields_tB5DD3E2DD9CF376D1710F8093CF4644C16C2F21B* ___0_destination, StructWith8ByteAndBoolFields_tB5DD3E2DD9CF376D1710F8093CF4644C16C2F21B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		StructWith8ByteAndBoolFields_tB5DD3E2DD9CF376D1710F8093CF4644C16C2F21B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		StructWith8ByteAndBoolFields_tB5DD3E2DD9CF376D1710F8093CF4644C16C2F21B* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<StructWith8ByteAndBoolFields_tB5DD3E2DD9CF376D1710F8093CF4644C16C2F21B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisStructWithSelfPointer_tAA69227DAC8CF88D2FBE4A42BD77E491383B599A_mD0F4ED2121DA55DC88BEC97E2500A8FAAE48BE1B_gshared (StructWithSelfPointer_tAA69227DAC8CF88D2FBE4A42BD77E491383B599A* ___0_destination, StructWithSelfPointer_tAA69227DAC8CF88D2FBE4A42BD77E491383B599A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		StructWithSelfPointer_tAA69227DAC8CF88D2FBE4A42BD77E491383B599A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		StructWithSelfPointer_tAA69227DAC8CF88D2FBE4A42BD77E491383B599A* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<StructWithSelfPointer_tAA69227DAC8CF88D2FBE4A42BD77E491383B599A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisStyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D_mE9B35549F2C3B1C406E425E72163114643F757EC_gshared (StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___0_destination, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934_m5673359DA14F42D418757E17AA8B63D5D9CCC337_gshared (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* ___0_destination, SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9_mF6F7C1814773F69C958C41B232379EBD4896E28F_gshared (SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9* ___0_destination, SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026_m32A23337029ABE0E84B9CF615FBDADE927B6BC4F_gshared (SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026* ___0_destination, SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTetrahedron_t40F2B77BD6E6842D7DAA13FD95BBE5AF56C750F9_mB65B972C15FA56A9F5933EA8CA60370B00AFB20C_gshared (Tetrahedron_t40F2B77BD6E6842D7DAA13FD95BBE5AF56C750F9* ___0_destination, Tetrahedron_t40F2B77BD6E6842D7DAA13FD95BBE5AF56C750F9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Tetrahedron_t40F2B77BD6E6842D7DAA13FD95BBE5AF56C750F9* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Tetrahedron_t40F2B77BD6E6842D7DAA13FD95BBE5AF56C750F9* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Tetrahedron_t40F2B77BD6E6842D7DAA13FD95BBE5AF56C750F9>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTextVertex_t17E105D7F6DE9EE1DACB75DE05A489CB11C556CC_m8F89C4512042E29D74F90A2FF65500310920DD8F_gshared (TextVertex_t17E105D7F6DE9EE1DACB75DE05A489CB11C556CC* ___0_destination, TextVertex_t17E105D7F6DE9EE1DACB75DE05A489CB11C556CC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TextVertex_t17E105D7F6DE9EE1DACB75DE05A489CB11C556CC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		TextVertex_t17E105D7F6DE9EE1DACB75DE05A489CB11C556CC* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<TextVertex_t17E105D7F6DE9EE1DACB75DE05A489CB11C556CC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_m4A119B65FCF9DF32FC1DCC13FD425464B8E5FD29_gshared (TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388* ___0_destination, TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTileAnimationEntityIdData_t167D5D62289EB4EDFE19B374BF7E079DFE94677D_m6DAAA857334D6587F6119DA48ABC726E87A7DAC7_gshared (TileAnimationEntityIdData_t167D5D62289EB4EDFE19B374BF7E079DFE94677D* ___0_destination, TileAnimationEntityIdData_t167D5D62289EB4EDFE19B374BF7E079DFE94677D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TileAnimationEntityIdData_t167D5D62289EB4EDFE19B374BF7E079DFE94677D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		TileAnimationEntityIdData_t167D5D62289EB4EDFE19B374BF7E079DFE94677D* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<TileAnimationEntityIdData_t167D5D62289EB4EDFE19B374BF7E079DFE94677D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_m15B0C879197615CE8FBB0E507065369653A60CEB_gshared (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* ___0_destination, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m9ECF5E968798F017303B377EEE6D818CED5B4FAF_gshared (TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___0_destination, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTransformHandle_t9B8D6EFB585BC5771E23B0D6C7B0C5080327CD30_m35278B5600B24BE581F08415016CB0C2239F91EC_gshared (TransformHandle_t9B8D6EFB585BC5771E23B0D6C7B0C5080327CD30* ___0_destination, TransformHandle_t9B8D6EFB585BC5771E23B0D6C7B0C5080327CD30* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TransformHandle_t9B8D6EFB585BC5771E23B0D6C7B0C5080327CD30* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		TransformHandle_t9B8D6EFB585BC5771E23B0D6C7B0C5080327CD30* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<TransformHandle_t9B8D6EFB585BC5771E23B0D6C7B0C5080327CD30>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18_mB9203CCBA27231FC655442726FF84EF63FA9164C_gshared (TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18* ___0_destination, TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTreeInstance_t382B018173ED020660D262061EA9424682614F50_mE91C4ADA1AE307FF2921B6CED63BFBBF9B18745B_gshared (TreeInstance_t382B018173ED020660D262061EA9424682614F50* ___0_destination, TreeInstance_t382B018173ED020660D262061EA9424682614F50* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TreeInstance_t382B018173ED020660D262061EA9424682614F50* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		TreeInstance_t382B018173ED020660D262061EA9424682614F50* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<TreeInstance_t382B018173ED020660D262061EA9424682614F50>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTypeDefinitionHandle_tE85E143F0FED1313BA132EB2151B5FC04F00043B_mA7582DF31C8A9BDA0AD92646E68936B6B0F4493D_gshared (TypeDefinitionHandle_tE85E143F0FED1313BA132EB2151B5FC04F00043B* ___0_destination, TypeDefinitionHandle_tE85E143F0FED1313BA132EB2151B5FC04F00043B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TypeDefinitionHandle_tE85E143F0FED1313BA132EB2151B5FC04F00043B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		TypeDefinitionHandle_tE85E143F0FED1313BA132EB2151B5FC04F00043B* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<TypeDefinitionHandle_tE85E143F0FED1313BA132EB2151B5FC04F00043B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUIAnimationBoundProperty_tA7BD14989726A4AFEC4EFB3765E75C9A130729B4_mA7E8338ED46AF2B3A21EA6907CFC7717930C67AE_gshared (UIAnimationBoundProperty_tA7BD14989726A4AFEC4EFB3765E75C9A130729B4* ___0_destination, UIAnimationBoundProperty_tA7BD14989726A4AFEC4EFB3765E75C9A130729B4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UIAnimationBoundProperty_tA7BD14989726A4AFEC4EFB3765E75C9A130729B4* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		UIAnimationBoundProperty_tA7BD14989726A4AFEC4EFB3765E75C9A130729B4* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<UIAnimationBoundProperty_tA7BD14989726A4AFEC4EFB3765E75C9A130729B4>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD_mBB9ECEF87B24C0ADBD6F2B8F5E0805EE04A95D0A_gshared (UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* ___0_destination, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC_mE3957255AA2BF507E297108ACB482557AF8F5276_gshared (UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* ___0_destination, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_mE58FDAE8124A1F45AA5B534F32326EF9ABA8E698_gshared (UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* ___0_destination, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42_gshared (uint16_t* ___0_destination, uint16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		uint16_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		uint16_t* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<uint16_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD_gshared (uint32_t* ___0_destination, uint32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		uint32_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		uint32_t* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<uint32_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4482A7BD91B51B22F471D785B1D22FAE110CD908_gshared (uint64_t* ___0_destination, uint64_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		uint64_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		uint64_t* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<uint64_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_mA5606AC3FC8189982A0ACF7B89C9843420DFB899_gshared (URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* ___0_destination, URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1_m4D33D2CB743EC5E059E50BD446939674C3E370C0_gshared (UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1* ___0_destination, UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnmanagedFilterFunction_t46D1C73262CD8245474DBC2CA5878C80E08A1B11_mC3E6BDA65440C70733F6B23973CFCE97217172DF_gshared (UnmanagedFilterFunction_t46D1C73262CD8245474DBC2CA5878C80E08A1B11* ___0_destination, UnmanagedFilterFunction_t46D1C73262CD8245474DBC2CA5878C80E08A1B11* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UnmanagedFilterFunction_t46D1C73262CD8245474DBC2CA5878C80E08A1B11* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		UnmanagedFilterFunction_t46D1C73262CD8245474DBC2CA5878C80E08A1B11* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<UnmanagedFilterFunction_t46D1C73262CD8245474DBC2CA5878C80E08A1B11>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnmanagedMaterialPropertyValue_t32418EF3A65B66312EE3D81C88513C1116711B75_mBF95BF58B288DC77D1E264E1E8F844B5E5EBC327_gshared (UnmanagedMaterialPropertyValue_t32418EF3A65B66312EE3D81C88513C1116711B75* ___0_destination, UnmanagedMaterialPropertyValue_t32418EF3A65B66312EE3D81C88513C1116711B75* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UnmanagedMaterialPropertyValue_t32418EF3A65B66312EE3D81C88513C1116711B75* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		UnmanagedMaterialPropertyValue_t32418EF3A65B66312EE3D81C88513C1116711B75* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<UnmanagedMaterialPropertyValue_t32418EF3A65B66312EE3D81C88513C1116711B75>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m298C35C8409EAC93663EAE61B39B5D1800A6CA5E_gshared (UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* ___0_destination, UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2_m183946AC8C78BE3932BD2F70A3B05C0ADA51C5DF_gshared (UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2* ___0_destination, UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m121CA4B55102E3C616B73459B4EB23BEE8C327CB_gshared (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_destination, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_destination, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m2ECC58795F80608DCE149900D7BF78998799A046_gshared (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_destination, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C_gshared (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_destination, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mB63FF1B03BD081ACDE9355ECF72840C863C44004_gshared (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___0_destination, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mD33F0334F37E4CBF4BBF4008EA599ECF998329B8_gshared (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___0_destination, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m79148948778E3104E3C071F66CC59832555DFCAD_gshared (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* ___0_destination, VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B_m274E314A6717CAF400EF0120DB9D11F934E8BE39_gshared (VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* ___0_destination, VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858_m829F643FBCAF740164DDB28362755FCBFE9D0548_gshared (XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858* ___0_destination, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3_m4AE65A506ECFB5A753F7A7EAA4BA32A267D4F35B_gshared (XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3* ___0_destination, XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_m01B5C9D255C96380D58A3B8C0CE3773F6CE83336_gshared (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* ___0_destination, XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_m9BBFC512D1D3429949038E5AEA1D4A79CD1DCD3B_gshared (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* ___0_destination, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625_mD7199F490E87C48522A0227F9B48B063FDE52A5D_gshared (XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625* ___0_destination, XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXrBoxf_tB0E84D6272ADF2ECA0C0A42E1EB11948FF3501A8_m06E15D74F061C70A29FEE03CCC51CAEDE7C85237_gshared (XrBoxf_tB0E84D6272ADF2ECA0C0A42E1EB11948FF3501A8* ___0_destination, XrBoxf_tB0E84D6272ADF2ECA0C0A42E1EB11948FF3501A8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XrBoxf_tB0E84D6272ADF2ECA0C0A42E1EB11948FF3501A8* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		XrBoxf_tB0E84D6272ADF2ECA0C0A42E1EB11948FF3501A8* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<XrBoxf_tB0E84D6272ADF2ECA0C0A42E1EB11948FF3501A8>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXrPosef_t30CFD88924941CAA7DB413CD1AFF423530A90DD0_mB3C790DD31E8B9D8996DC6B90B3AC239B03B0436_gshared (XrPosef_t30CFD88924941CAA7DB413CD1AFF423530A90DD0* ___0_destination, XrPosef_t30CFD88924941CAA7DB413CD1AFF423530A90DD0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XrPosef_t30CFD88924941CAA7DB413CD1AFF423530A90DD0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		XrPosef_t30CFD88924941CAA7DB413CD1AFF423530A90DD0* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<XrPosef_t30CFD88924941CAA7DB413CD1AFF423530A90DD0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXrRoomMeshFaceMETA_t1870BFAF774D4FA6A8C5E1525C9302436BC479DF_m6D161833C055CC8A564916A8B45BA734D3EBE3B5_gshared (XrRoomMeshFaceMETA_t1870BFAF774D4FA6A8C5E1525C9302436BC479DF* ___0_destination, XrRoomMeshFaceMETA_t1870BFAF774D4FA6A8C5E1525C9302436BC479DF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XrRoomMeshFaceMETA_t1870BFAF774D4FA6A8C5E1525C9302436BC479DF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		XrRoomMeshFaceMETA_t1870BFAF774D4FA6A8C5E1525C9302436BC479DF* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<XrRoomMeshFaceMETA_t1870BFAF774D4FA6A8C5E1525C9302436BC479DF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXrSpatialBounded2DDataEXT_tF2CF3E1F82B7C362F8EBBD941751007156D2338F_m1BBFB017A7970CC20C3D9E7B9C32936B77B9408E_gshared (XrSpatialBounded2DDataEXT_tF2CF3E1F82B7C362F8EBBD941751007156D2338F* ___0_destination, XrSpatialBounded2DDataEXT_tF2CF3E1F82B7C362F8EBBD941751007156D2338F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XrSpatialBounded2DDataEXT_tF2CF3E1F82B7C362F8EBBD941751007156D2338F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		XrSpatialBounded2DDataEXT_tF2CF3E1F82B7C362F8EBBD941751007156D2338F* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<XrSpatialBounded2DDataEXT_tF2CF3E1F82B7C362F8EBBD941751007156D2338F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
// Method Definition Index: 3653
// Method Definition Index: 3653
// Method Definition Index: 3653
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXrSpatialMarkerDataEXT_tCA69F76EE037E4C35301FAEB964E0824E5CB3DF7_m09F3E6425171F0004364E043A2C0E2B43131D811_gshared (XrSpatialMarkerDataEXT_tCA69F76EE037E4C35301FAEB964E0824E5CB3DF7* ___0_destination, XrSpatialMarkerDataEXT_tCA69F76EE037E4C35301FAEB964E0824E5CB3DF7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XrSpatialMarkerDataEXT_tCA69F76EE037E4C35301FAEB964E0824E5CB3DF7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		XrSpatialMarkerDataEXT_tCA69F76EE037E4C35301FAEB964E0824E5CB3DF7* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<XrSpatialMarkerDataEXT_tCA69F76EE037E4C35301FAEB964E0824E5CB3DF7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXrSpatialMeshDataEXT_t995B791E12E53589EBBA5231BD9DF3E677370AD5_m38633D6F193C50DAEDC54FC078010DAB7E4277CB_gshared (XrSpatialMeshDataEXT_t995B791E12E53589EBBA5231BD9DF3E677370AD5* ___0_destination, XrSpatialMeshDataEXT_t995B791E12E53589EBBA5231BD9DF3E677370AD5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XrSpatialMeshDataEXT_t995B791E12E53589EBBA5231BD9DF3E677370AD5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		XrSpatialMeshDataEXT_t995B791E12E53589EBBA5231BD9DF3E677370AD5* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<XrSpatialMeshDataEXT_t995B791E12E53589EBBA5231BD9DF3E677370AD5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXrSpatialPersistenceDataEXT_t39937934647A3D4A772D62907CF2EB53EFC8C9E5_m11E31B857B837C25184B9B899C2685D1983F001F_gshared (XrSpatialPersistenceDataEXT_t39937934647A3D4A772D62907CF2EB53EFC8C9E5* ___0_destination, XrSpatialPersistenceDataEXT_t39937934647A3D4A772D62907CF2EB53EFC8C9E5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XrSpatialPersistenceDataEXT_t39937934647A3D4A772D62907CF2EB53EFC8C9E5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		XrSpatialPersistenceDataEXT_t39937934647A3D4A772D62907CF2EB53EFC8C9E5* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<XrSpatialPersistenceDataEXT_t39937934647A3D4A772D62907CF2EB53EFC8C9E5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
// Method Definition Index: 3653
// Method Definition Index: 3653
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXrSpatialPolygon2DDataEXT_t2671827E5DC1F80AD77558E5434D06BC54BFB5E8_m1102C309BBEB9EDD2098CC99CE24A1B8CA48BD9B_gshared (XrSpatialPolygon2DDataEXT_t2671827E5DC1F80AD77558E5434D06BC54BFB5E8* ___0_destination, XrSpatialPolygon2DDataEXT_t2671827E5DC1F80AD77558E5434D06BC54BFB5E8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XrSpatialPolygon2DDataEXT_t2671827E5DC1F80AD77558E5434D06BC54BFB5E8* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		XrSpatialPolygon2DDataEXT_t2671827E5DC1F80AD77558E5434D06BC54BFB5E8* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<XrSpatialPolygon2DDataEXT_t2671827E5DC1F80AD77558E5434D06BC54BFB5E8>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXrUuid_tE34CFEC216D8A7DD1EE157F12A145509C1BF2A74_mC6241923564A4DE66111DBE90FA60BAB67C4AA38_gshared (XrUuid_tE34CFEC216D8A7DD1EE157F12A145509C1BF2A74* ___0_destination, XrUuid_tE34CFEC216D8A7DD1EE157F12A145509C1BF2A74* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XrUuid_tE34CFEC216D8A7DD1EE157F12A145509C1BF2A74* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		XrUuid_tE34CFEC216D8A7DD1EE157F12A145509C1BF2A74* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<XrUuid_tE34CFEC216D8A7DD1EE157F12A145509C1BF2A74>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXrVector2f_t347E48BCFE5F37AFA86233510BC67C246F868188_mDB304E8C13AA868039EE8E73B8633F9C3F0A2646_gshared (XrVector2f_t347E48BCFE5F37AFA86233510BC67C246F868188* ___0_destination, XrVector2f_t347E48BCFE5F37AFA86233510BC67C246F868188* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XrVector2f_t347E48BCFE5F37AFA86233510BC67C246F868188* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		XrVector2f_t347E48BCFE5F37AFA86233510BC67C246F868188* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<XrVector2f_t347E48BCFE5F37AFA86233510BC67C246F868188>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXrVector3f_t63DECBA2AFC7771B19C164A533925A5E20386F2A_m78B9E668254CF1A856EF4E083D1CBE19A20EA27F_gshared (XrVector3f_t63DECBA2AFC7771B19C164A533925A5E20386F2A* ___0_destination, XrVector3f_t63DECBA2AFC7771B19C164A533925A5E20386F2A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XrVector3f_t63DECBA2AFC7771B19C164A533925A5E20386F2A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		XrVector3f_t63DECBA2AFC7771B19C164A533925A5E20386F2A* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<XrVector3f_t63DECBA2AFC7771B19C164A533925A5E20386F2A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIl2CppSharedGenericObject_mEC0190E4922D786C71391DC7D4AA550843D5018E_gshared (Il2CppSharedGenericObject** ___0_destination, Il2CppSharedGenericObject** ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		Il2CppSharedGenericObject** L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Il2CppSharedGenericObject** L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_1 = L_5;
		uint8_t* L_6 = V_1;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_3 = (uint8_t*)L_7;
		uint8_t* L_8 = V_3;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_12);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13;
		L_13 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(113, L_12);
		V_4 = L_13;
		intptr_t L_14;
		L_14 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)L_3, L_8, L_10, L_14, NULL);
		uintptr_t L_15 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_15;
		uintptr_t L_16 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_16;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIl2CppFullySharedGenericAny_m7051201F0F2C986AB0084FB4A24BEE4D4733C5EB_gshared (Il2CppFullySharedGenericAny* ___0_destination, Il2CppFullySharedGenericAny* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_1 = ___0_destination;
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		V_1 = L_2;
		uint8_t* L_3 = V_1;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_3,NULL));
		Il2CppFullySharedGenericAny* L_5 = ___1_source;
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		V_2 = L_6;
		uint8_t* L_7 = V_2;
		uintptr_t L_8 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_7,NULL));
		V_0 = (uint8_t*)L_8;
		uint8_t* L_9 = V_0;
		uint64_t L_10 = ___2_elementCount;
		uint32_t L_11 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_10,NULL));
		int32_t L_12;
		L_12 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(il2cpp_rgctx_method(method->rgctx_data, 4));
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_4, L_9, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_11, L_12)), NULL);
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_13;
		uintptr_t L_14 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_14;
		return;
	}

IL_002f:
	{
		Il2CppFullySharedGenericAny* L_15 = ___0_destination;
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_as_ref<uint8_t>(L_15);
		V_2 = L_16;
		uint8_t* L_17 = V_2;
		uintptr_t L_18 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_17,NULL));
		Il2CppFullySharedGenericAny* L_19 = ___1_source;
		uint8_t* L_20;
		L_20 = il2cpp_unsafe_as_ref<uint8_t>(L_19);
		V_1 = L_20;
		uint8_t* L_21 = V_1;
		uintptr_t L_22 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_21,NULL));
		V_3 = (uint8_t*)L_22;
		uint8_t* L_23 = V_3;
		uint64_t L_24 = ___2_elementCount;
		uint32_t L_25 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_24,NULL));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		NullCheck(L_27);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28;
		L_28 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(113, L_27);
		V_4 = L_28;
		intptr_t L_29;
		L_29 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)L_18, L_23, L_25, L_29, NULL);
		uintptr_t L_30 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_30;
		uintptr_t L_31 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_31;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mD096672145DB9A7F8404CFCD92F3DA783DBEFC24_gshared (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int32_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		int32_t* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<int32_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_m09F99891F770930782E4C039300A5D475EEE9A99_gshared (float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* ___0_destination, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_mD176B5100152121F1EF0E7A6BCBDCC217EB40543_gshared (float3_t7600B73F092B37F484B12910A5269F30C778D31E* ___0_destination, float3_t7600B73F092B37F484B12910A5269F30C778D31E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		float3_t7600B73F092B37F484B12910A5269F30C778D31E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		float3_t7600B73F092B37F484B12910A5269F30C778D31E* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<float3_t7600B73F092B37F484B12910A5269F30C778D31E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mEF250536F94205088C975705160110F39B12A88C_gshared (float4_t545A994996126766890C1F28B43EA823F2410190* ___0_destination, float4_t545A994996126766890C1F28B43EA823F2410190* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		float4_t545A994996126766890C1F28B43EA823F2410190* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		float4_t545A994996126766890C1F28B43EA823F2410190* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<float4_t545A994996126766890C1F28B43EA823F2410190>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_mB94EE5458009CF8489A60D3291B818751DFA94EF_gshared (float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA* ___0_destination, float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mC7B857CDC6A072A32945530F9D36320CBE071E83_gshared (int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* ___0_destination, int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<int2_tB123E869131C6102341F8F9AA01726E0E7C2768D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_m48D2E426B92CBE28782CF29BD703DF063CFF422D_gshared (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___0_destination, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisquaternion_t9C8C2916B7359C174B215BBB41F290ABCBEA8AEA_m1F2CC0678D7E114F778738F953049C1AAECA15C7_gshared (quaternion_t9C8C2916B7359C174B215BBB41F290ABCBEA8AEA* ___0_destination, quaternion_t9C8C2916B7359C174B215BBB41F290ABCBEA8AEA* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		quaternion_t9C8C2916B7359C174B215BBB41F290ABCBEA8AEA* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		quaternion_t9C8C2916B7359C174B215BBB41F290ABCBEA8AEA* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<quaternion_t9C8C2916B7359C174B215BBB41F290ABCBEA8AEA>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRTInstance_t82A289FDC8E8112219057734D0AE172A4E822AED_mA76FAC64F2C2FA8726711501F014E2DCEEF92AB1_gshared (RTInstance_t82A289FDC8E8112219057734D0AE172A4E822AED* ___0_destination, RTInstance_t82A289FDC8E8112219057734D0AE172A4E822AED* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RTInstance_t82A289FDC8E8112219057734D0AE172A4E822AED* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		RTInstance_t82A289FDC8E8112219057734D0AE172A4E822AED* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<RTInstance_t82A289FDC8E8112219057734D0AE172A4E822AED>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m374FD45DB3712CE8C4E9C2E21951BF4B61FE868D_gshared (ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* ___0_destination, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBlock_tBD2149E220F819A66A4A0A18F237932ACD9011DE_m71DE96B0B720B10BE6EE395428E0503785A9CE41_gshared (Block_tBD2149E220F819A66A4A0A18F237932ACD9011DE* ___0_destination, Block_tBD2149E220F819A66A4A0A18F237932ACD9011DE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Block_tBD2149E220F819A66A4A0A18F237932ACD9011DE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Block_tBD2149E220F819A66A4A0A18F237932ACD9011DE* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Block_tBD2149E220F819A66A4A0A18F237932ACD9011DE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPathArguments_t445220F54870AED8F8384306CF72A316887AD98C_m23AC459C79425F5C0FDE188A5A16C5133D49AFE6_gshared (PathArguments_t445220F54870AED8F8384306CF72A316887AD98C* ___0_destination, PathArguments_t445220F54870AED8F8384306CF72A316887AD98C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PathArguments_t445220F54870AED8F8384306CF72A316887AD98C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PathArguments_t445220F54870AED8F8384306CF72A316887AD98C* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PathArguments_t445220F54870AED8F8384306CF72A316887AD98C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1_m167F3C32DC24A2213A702C1202291926D9812795_gshared (PathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1* ___0_destination, PathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063_m57AA7D3FC3F97C3450CD81D369713175353E442B_gshared (FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063* ___0_destination, FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B_m27C842FDDC4609D12CC008E33EE82FE9F88ABF2B_gshared (PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B* ___0_destination, PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSplitInfo_t708E0734C9BC407BA5882105A9721756605C913A_mFAC4CA3124027F9D2ACDDEEAED00CC1B73CCB7C5_gshared (SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A* ___0_destination, SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGeoPoolEntrySlot_tE1B7B103A90E4C3379CED82C8D6DA55189422977_m61AC46B50A34BDDA42E2A83A700A151B75738389_gshared (GeoPoolEntrySlot_tE1B7B103A90E4C3379CED82C8D6DA55189422977* ___0_destination, GeoPoolEntrySlot_tE1B7B103A90E4C3379CED82C8D6DA55189422977* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GeoPoolEntrySlot_tE1B7B103A90E4C3379CED82C8D6DA55189422977* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		GeoPoolEntrySlot_tE1B7B103A90E4C3379CED82C8D6DA55189422977* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<GeoPoolEntrySlot_tE1B7B103A90E4C3379CED82C8D6DA55189422977>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMeshChunk_tEEA891FD6A9FBF660DB8ED98B23FCCB8A413C2BD_mAE9AFDA15D91B8CF9462120A835296844938A81B_gshared (MeshChunk_tEEA891FD6A9FBF660DB8ED98B23FCCB8A413C2BD* ___0_destination, MeshChunk_tEEA891FD6A9FBF660DB8ED98B23FCCB8A413C2BD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MeshChunk_tEEA891FD6A9FBF660DB8ED98B23FCCB8A413C2BD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		MeshChunk_tEEA891FD6A9FBF660DB8ED98B23FCCB8A413C2BD* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<MeshChunk_tEEA891FD6A9FBF660DB8ED98B23FCCB8A413C2BD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_m813F1148740DAFFA881F611962FCA84DE45742A4_gshared (AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46* ___0_destination, AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInfo_tA3039772991DEEDBC29A00439A055C5166133A27_mDD4BB16024FE8319599CDD76F5E7529158D977F7_gshared (Info_tA3039772991DEEDBC29A00439A055C5166133A27* ___0_destination, Info_tA3039772991DEEDBC29A00439A055C5166133A27* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Info_tA3039772991DEEDBC29A00439A055C5166133A27* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Info_tA3039772991DEEDBC29A00439A055C5166133A27* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Info_tA3039772991DEEDBC29A00439A055C5166133A27>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInfo_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84_m4459B99AC69CF7BAD0540083B494271EC495A353_gshared (Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84* ___0_destination, Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRequest_tAA55F47806E39B0E19B53273DCBFB5CF457F9187_m602BF5309F0C6B80514810B5E212FF9AE24BAF58_gshared (Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187* ___0_destination, Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHash128IntPair_tEC4F0FF6106FC531822785099533F4AEFD48B123_m304B027F03711A943E0050653644F0BC2355D111_gshared (Hash128IntPair_tEC4F0FF6106FC531822785099533F4AEFD48B123* ___0_destination, Hash128IntPair_tEC4F0FF6106FC531822785099533F4AEFD48B123* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Hash128IntPair_tEC4F0FF6106FC531822785099533F4AEFD48B123* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Hash128IntPair_tEC4F0FF6106FC531822785099533F4AEFD48B123* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Hash128IntPair_tEC4F0FF6106FC531822785099533F4AEFD48B123>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D_mAE7A77FA8C0635FAB0E0B125C31FDF0DDAB972D0_gshared (BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* ___0_destination, BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_m748375D298CF0CFDB00586CA14508B83AFF1EABE_gshared (TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* ___0_destination, TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUComponentUploadSource_t9B7C48CF44C7D9AB6E02FF6CEB99E3C8119DF10A_m41986BB906B6DF0A21797A381580521F84A8AF90_gshared (GPUComponentUploadSource_t9B7C48CF44C7D9AB6E02FF6CEB99E3C8119DF10A* ___0_destination, GPUComponentUploadSource_t9B7C48CF44C7D9AB6E02FF6CEB99E3C8119DF10A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUComponentUploadSource_t9B7C48CF44C7D9AB6E02FF6CEB99E3C8119DF10A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		GPUComponentUploadSource_t9B7C48CF44C7D9AB6E02FF6CEB99E3C8119DF10A* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<GPUComponentUploadSource_t9B7C48CF44C7D9AB6E02FF6CEB99E3C8119DF10A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D_mE028F6A617B55FD7A760658EC8A9147DA58EDAAF_gshared (FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D* ___0_destination, FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<FilterUnion_t2D863EFC91C8BFE406FB75CBACF05DE21D20AE5D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRowCounts_t7C20BB319478D12D43A8A6E9BD0EBEF939A2828B_m54F5CDC71593EB6DACEE05692B6F3CBFB7108871_gshared (RowCounts_t7C20BB319478D12D43A8A6E9BD0EBEF939A2828B* ___0_destination, RowCounts_t7C20BB319478D12D43A8A6E9BD0EBEF939A2828B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RowCounts_t7C20BB319478D12D43A8A6E9BD0EBEF939A2828B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		RowCounts_t7C20BB319478D12D43A8A6E9BD0EBEF939A2828B* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<RowCounts_t7C20BB319478D12D43A8A6E9BD0EBEF939A2828B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFreeBitsChunk_tEA687BD905633D23A1F0C2DA3CE892F9A90FE1A5_mB9DFE79DE9B49326472CA0C0F4DCA6D2CEC19EAE_gshared (FreeBitsChunk_tEA687BD905633D23A1F0C2DA3CE892F9A90FE1A5* ___0_destination, FreeBitsChunk_tEA687BD905633D23A1F0C2DA3CE892F9A90FE1A5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		FreeBitsChunk_tEA687BD905633D23A1F0C2DA3CE892F9A90FE1A5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		FreeBitsChunk_tEA687BD905633D23A1F0C2DA3CE892F9A90FE1A5* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<FreeBitsChunk_tEA687BD905633D23A1F0C2DA3CE892F9A90FE1A5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03_m788A7B3C302B6168CE4838B8CE615ADA2A360683_gshared (FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* ___0_destination, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTrackingSpacePose_t536910111A35CD0F1B7ABF1168B9EBC47304A47F_m576B5113486C664ABBC7766A203153DC061A9306_gshared (TrackingSpacePose_t536910111A35CD0F1B7ABF1168B9EBC47304A47F* ___0_destination, TrackingSpacePose_t536910111A35CD0F1B7ABF1168B9EBC47304A47F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TrackingSpacePose_t536910111A35CD0F1B7ABF1168B9EBC47304A47F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		TrackingSpacePose_t536910111A35CD0F1B7ABF1168B9EBC47304A47F* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<TrackingSpacePose_t536910111A35CD0F1B7ABF1168B9EBC47304A47F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
// Method Definition Index: 3653
// Method Definition Index: 3653
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRoomFace_t367EDEF38082CCCC1D8EFB95A8D4200D002FA465_m69C6D90E3A5678486E3E60372A88DFF0EE102DA1_gshared (RoomFace_t367EDEF38082CCCC1D8EFB95A8D4200D002FA465* ___0_destination, RoomFace_t367EDEF38082CCCC1D8EFB95A8D4200D002FA465* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RoomFace_t367EDEF38082CCCC1D8EFB95A8D4200D002FA465* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		RoomFace_t367EDEF38082CCCC1D8EFB95A8D4200D002FA465* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<RoomFace_t367EDEF38082CCCC1D8EFB95A8D4200D002FA465>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSpaceDiscoveryResult_tAE65D22D6BE768AE619A297B6ED25B8CC01777B3_mD4F7EB537A2774D81897BC1DA3075A1EEDC49029_gshared (SpaceDiscoveryResult_tAE65D22D6BE768AE619A297B6ED25B8CC01777B3* ___0_destination, SpaceDiscoveryResult_tAE65D22D6BE768AE619A297B6ED25B8CC01777B3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SpaceDiscoveryResult_tAE65D22D6BE768AE619A297B6ED25B8CC01777B3* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		SpaceDiscoveryResult_tAE65D22D6BE768AE619A297B6ED25B8CC01777B3* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<SpaceDiscoveryResult_tAE65D22D6BE768AE619A297B6ED25B8CC01777B3>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSpaceQueryResult_tBBBE74AF0A11892832ABF0A46E2B5E9A9E375DB7_mE63E3567ACF0E9565C65337D00C15CD6281EEFD8_gshared (SpaceQueryResult_tBBBE74AF0A11892832ABF0A46E2B5E9A9E375DB7* ___0_destination, SpaceQueryResult_tBBBE74AF0A11892832ABF0A46E2B5E9A9E375DB7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SpaceQueryResult_tBBBE74AF0A11892832ABF0A46E2B5E9A9E375DB7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		SpaceQueryResult_tBBBE74AF0A11892832ABF0A46E2B5E9A9E375DB7* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<SpaceQueryResult_tBBBE74AF0A11892832ABF0A46E2B5E9A9E375DB7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector2f_tB2A7770F503276F90D359B6933F0A86D51BA3186_m48F5F3D4304A8823E843F83CF080C72F3865098D_gshared (Vector2f_tB2A7770F503276F90D359B6933F0A86D51BA3186* ___0_destination, Vector2f_tB2A7770F503276F90D359B6933F0A86D51BA3186* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector2f_tB2A7770F503276F90D359B6933F0A86D51BA3186* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Vector2f_tB2A7770F503276F90D359B6933F0A86D51BA3186* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Vector2f_tB2A7770F503276F90D359B6933F0A86D51BA3186>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562_m35503BFA55B112AED2C46E736467482E2C37DD00_gshared (Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562* ___0_destination, Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector4f_t1B7E11764C0EA53E7809996B56E208E32A1D5A86_m3D75582980277D0C396C5E2B4CE99F0C0910D22C_gshared (Vector4f_t1B7E11764C0EA53E7809996B56E208E32A1D5A86* ___0_destination, Vector4f_t1B7E11764C0EA53E7809996B56E208E32A1D5A86* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector4f_t1B7E11764C0EA53E7809996B56E208E32A1D5A86* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Vector4f_t1B7E11764C0EA53E7809996B56E208E32A1D5A86* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Vector4f_t1B7E11764C0EA53E7809996B56E208E32A1D5A86>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector4s_t37178C957A1C65EEC13FADEFB227695709228857_m77DD666FAA223AD06594875081A7278688AB0745_gshared (Vector4s_t37178C957A1C65EEC13FADEFB227695709228857* ___0_destination, Vector4s_t37178C957A1C65EEC13FADEFB227695709228857* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector4s_t37178C957A1C65EEC13FADEFB227695709228857* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Vector4s_t37178C957A1C65EEC13FADEFB227695709228857* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Vector4s_t37178C957A1C65EEC13FADEFB227695709228857>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFace_t1FC9C18F59EEC2592917A53E203E227AE2370B9B_mDA87F611CC31148B64D160AE84F5EAB28687CE04_gshared (Face_t1FC9C18F59EEC2592917A53E203E227AE2370B9B* ___0_destination, Face_t1FC9C18F59EEC2592917A53E203E227AE2370B9B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Face_t1FC9C18F59EEC2592917A53E203E227AE2370B9B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Face_t1FC9C18F59EEC2592917A53E203E227AE2370B9B* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Face_t1FC9C18F59EEC2592917A53E203E227AE2370B9B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTriangle_t1E40B48B31C15D29D06051730DE4C3CDFEA5C042_m3B4BDCC81C74082885DD7AC76F608780487A2FA6_gshared (Triangle_t1E40B48B31C15D29D06051730DE4C3CDFEA5C042* ___0_destination, Triangle_t1E40B48B31C15D29D06051730DE4C3CDFEA5C042* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Triangle_t1E40B48B31C15D29D06051730DE4C3CDFEA5C042* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Triangle_t1E40B48B31C15D29D06051730DE4C3CDFEA5C042* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Triangle_t1E40B48B31C15D29D06051730DE4C3CDFEA5C042>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_mCCC9E64E51DF62CEBFC029AB9042DF9EE6ED4553_gshared (OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D* ___0_destination, OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSection_t3C77A35C1AE76008B10FA56951E93F5CAC4940DA_m11D29AE6A9AC1A4ACAEFCA0701EA238847CC02A7_gshared (Section_t3C77A35C1AE76008B10FA56951E93F5CAC4940DA* ___0_destination, Section_t3C77A35C1AE76008B10FA56951E93F5CAC4940DA* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		Section_t3C77A35C1AE76008B10FA56951E93F5CAC4940DA* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Section_t3C77A35C1AE76008B10FA56951E93F5CAC4940DA* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_1 = L_5;
		uint8_t* L_6 = V_1;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_3 = (uint8_t*)L_7;
		uint8_t* L_8 = V_3;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_12);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13;
		L_13 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(113, L_12);
		V_4 = L_13;
		intptr_t L_14;
		L_14 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)L_3, L_8, L_10, L_14, NULL);
		uintptr_t L_15 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_15;
		uintptr_t L_16 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_16;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSerializedSection_tAB1067DC5BCA726D8712BD3FAE1DB3BFA490C23D_m309CC041FDAC174A7EF4F80CC875D2B6D7BE3A8C_gshared (SerializedSection_tAB1067DC5BCA726D8712BD3FAE1DB3BFA490C23D* ___0_destination, SerializedSection_tAB1067DC5BCA726D8712BD3FAE1DB3BFA490C23D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		SerializedSection_tAB1067DC5BCA726D8712BD3FAE1DB3BFA490C23D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		SerializedSection_tAB1067DC5BCA726D8712BD3FAE1DB3BFA490C23D* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_1 = L_5;
		uint8_t* L_6 = V_1;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_3 = (uint8_t*)L_7;
		uint8_t* L_8 = V_3;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_12);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13;
		L_13 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(113, L_12);
		V_4 = L_13;
		intptr_t L_14;
		L_14 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)L_3, L_8, L_10, L_14, NULL);
		uintptr_t L_15 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_15;
		uintptr_t L_16 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_16;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_m72FFBAE30B1F456A77DD43B5E122CC44C2E7EBBE_gshared (Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* ___0_destination, Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisParticle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D_mA929FEB33B3B9BCAFCA4E7A00455F81DF8D7C077_gshared (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* ___0_destination, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchForce_t4E0382D8C268D458B1422F92AF2CFC8B25367958_mD3D67A9759EE724BB38E38FC09E44CA59B8120AA_gshared (BatchForce_t4E0382D8C268D458B1422F92AF2CFC8B25367958* ___0_destination, BatchForce_t4E0382D8C268D458B1422F92AF2CFC8B25367958* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BatchForce_t4E0382D8C268D458B1422F92AF2CFC8B25367958* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		BatchForce_t4E0382D8C268D458B1422F92AF2CFC8B25367958* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<BatchForce_t4E0382D8C268D458B1422F92AF2CFC8B25367958>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchImpulse_t261C4FD09FF3AF032D9EA92A6CBE7E8895102147_mDCCF91277E25A172FB20F042C53387A155BD9693_gshared (BatchImpulse_t261C4FD09FF3AF032D9EA92A6CBE7E8895102147* ___0_destination, BatchImpulse_t261C4FD09FF3AF032D9EA92A6CBE7E8895102147* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BatchImpulse_t261C4FD09FF3AF032D9EA92A6CBE7E8895102147* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		BatchImpulse_t261C4FD09FF3AF032D9EA92A6CBE7E8895102147* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<BatchImpulse_t261C4FD09FF3AF032D9EA92A6CBE7E8895102147>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchTransform_tF14188CE07ECF9D6C90EA2D28AD5BD0D102500F8_m0DAC95D01CC994B319437BEF67FC5BA8E24996DE_gshared (BatchTransform_tF14188CE07ECF9D6C90EA2D28AD5BD0D102500F8* ___0_destination, BatchTransform_tF14188CE07ECF9D6C90EA2D28AD5BD0D102500F8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BatchTransform_tF14188CE07ECF9D6C90EA2D28AD5BD0D102500F8* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		BatchTransform_tF14188CE07ECF9D6C90EA2D28AD5BD0D102500F8* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<BatchTransform_tF14188CE07ECF9D6C90EA2D28AD5BD0D102500F8>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchVelocity_t501F06AA00DEDE1275412DA5B4821CF758D94D9D_m1D7303EFD0B5DF0F2BD95F9C3C835C70303458EA_gshared (BatchVelocity_t501F06AA00DEDE1275412DA5B4821CF758D94D9D* ___0_destination, BatchVelocity_t501F06AA00DEDE1275412DA5B4821CF758D94D9D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BatchVelocity_t501F06AA00DEDE1275412DA5B4821CF758D94D9D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		BatchVelocity_t501F06AA00DEDE1275412DA5B4821CF758D94D9D* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<BatchVelocity_t501F06AA00DEDE1275412DA5B4821CF758D94D9D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mE9356EFC995C91F1F68E7014F63C01ACE44A92FD_gshared (TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* ___0_destination, TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLayerHandle_t06582578F9B5D5AA335BFCDE0973956EF5648900_m2C6A94C380FA428941B5EFC2373B05AE5731B018_gshared (LayerHandle_t06582578F9B5D5AA335BFCDE0973956EF5648900* ___0_destination, LayerHandle_t06582578F9B5D5AA335BFCDE0973956EF5648900* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LayerHandle_t06582578F9B5D5AA335BFCDE0973956EF5648900* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		LayerHandle_t06582578F9B5D5AA335BFCDE0973956EF5648900* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<LayerHandle_t06582578F9B5D5AA335BFCDE0973956EF5648900>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_mFC059CB194705C497D9B98C10DE77AB86C3C20C3_gshared (BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6* ___0_destination, BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291_m301156DBF86D48FD2E28DDA0FA3C1F77196C77B0_gshared (ContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291* ___0_destination, ContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		ContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<ContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002_m879AA50D5FEA3F844DB68C3FD4A2B59F08F4F356_gshared (ContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002* ___0_destination, ContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		ContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<ContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContactHitEvent_t11EB60851A1F13BC732A3361C6CB37860A2AA427_m59C90374CF42A7B7E92BCC2F0E61ABF134ADE67D_gshared (ContactHitEvent_t11EB60851A1F13BC732A3361C6CB37860A2AA427* ___0_destination, ContactHitEvent_t11EB60851A1F13BC732A3361C6CB37860A2AA427* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ContactHitEvent_t11EB60851A1F13BC732A3361C6CB37860A2AA427* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		ContactHitEvent_t11EB60851A1F13BC732A3361C6CB37860A2AA427* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<ContactHitEvent_t11EB60851A1F13BC732A3361C6CB37860A2AA427>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisJointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A_m5F3A6B39F5F3ED36B6FF49BB0AA05578DB80C820_gshared (JointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A* ___0_destination, JointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		JointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		JointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<JointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m3BDDDFA56B678A3F6CD9367229A2AB2DD655DBC6_gshared (TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* ___0_destination, TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9_mAFD595084C7F2C4C1BE8A5AE72E3C8D00DD15625_gshared (TriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9* ___0_destination, TriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		TriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<TriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04_m2BE5CE23C65B875A8222CBB0303B19B9B4F593AC_gshared (TriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04* ___0_destination, TriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		TriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<TriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCastRayInput_t7466453067C3A8A4FB3586B4CB8EF2BC4DEE55B5_m55A3383E9A7272943AD85CF0409C364CB6D4D358_gshared (CastRayInput_t7466453067C3A8A4FB3586B4CB8EF2BC4DEE55B5* ___0_destination, CastRayInput_t7466453067C3A8A4FB3586B4CB8EF2BC4DEE55B5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		CastRayInput_t7466453067C3A8A4FB3586B4CB8EF2BC4DEE55B5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		CastRayInput_t7466453067C3A8A4FB3586B4CB8EF2BC4DEE55B5* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<CastRayInput_t7466453067C3A8A4FB3586B4CB8EF2BC4DEE55B5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCastResult_t5E82DD3BC0D1889D354D6E0B0C919A6F2950D8E7_m823B3F7F97618A043DE2F3EB66DF7E1D0631A1B2_gshared (CastResult_t5E82DD3BC0D1889D354D6E0B0C919A6F2950D8E7* ___0_destination, CastResult_t5E82DD3BC0D1889D354D6E0B0C919A6F2950D8E7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		CastResult_t5E82DD3BC0D1889D354D6E0B0C919A6F2950D8E7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		CastResult_t5E82DD3BC0D1889D354D6E0B0C919A6F2950D8E7* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<CastResult_t5E82DD3BC0D1889D354D6E0B0C919A6F2950D8E7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisWorldCastResult_tA5F20990A18CBE633E414F5B797A068CD2BEF350_m0572823E8ACBE72F976EE5558B80B13587E5C6CB_gshared (WorldCastResult_tA5F20990A18CBE633E414F5B797A068CD2BEF350* ___0_destination, WorldCastResult_tA5F20990A18CBE633E414F5B797A068CD2BEF350* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		WorldCastResult_tA5F20990A18CBE633E414F5B797A068CD2BEF350* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		WorldCastResult_tA5F20990A18CBE633E414F5B797A068CD2BEF350* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<WorldCastResult_tA5F20990A18CBE633E414F5B797A068CD2BEF350>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisWorldOverlapResult_t6440E0FA2B383A6C681DCBC60521D2067324DAC7_m0DCA7ADCEEAE57A42CE59DE4BCDC5C5D3D03D155_gshared (WorldOverlapResult_t6440E0FA2B383A6C681DCBC60521D2067324DAC7* ___0_destination, WorldOverlapResult_t6440E0FA2B383A6C681DCBC60521D2067324DAC7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		WorldOverlapResult_t6440E0FA2B383A6C681DCBC60521D2067324DAC7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		WorldOverlapResult_t6440E0FA2B383A6C681DCBC60521D2067324DAC7* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<WorldOverlapResult_t6440E0FA2B383A6C681DCBC60521D2067324DAC7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContact_tDF846FDDD399484433CB94E46C0F7E64F0281BC7_mBC7854401AA693BC426792CB1CC5663BE2B6B6B4_gshared (Contact_tDF846FDDD399484433CB94E46C0F7E64F0281BC7* ___0_destination, Contact_tDF846FDDD399484433CB94E46C0F7E64F0281BC7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Contact_tDF846FDDD399484433CB94E46C0F7E64F0281BC7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Contact_tDF846FDDD399484433CB94E46C0F7E64F0281BC7* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Contact_tDF846FDDD399484433CB94E46C0F7E64F0281BC7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMoverCollision_t603C4D37B274FCFBC00A7E51BA7B3E1E918D0718_mE732C8E89B7EB0658230A61386C69EC8C32ED63C_gshared (MoverCollision_t603C4D37B274FCFBC00A7E51BA7B3E1E918D0718* ___0_destination, MoverCollision_t603C4D37B274FCFBC00A7E51BA7B3E1E918D0718* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MoverCollision_t603C4D37B274FCFBC00A7E51BA7B3E1E918D0718* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		MoverCollision_t603C4D37B274FCFBC00A7E51BA7B3E1E918D0718* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<MoverCollision_t603C4D37B274FCFBC00A7E51BA7B3E1E918D0718>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShapeProxy_t799DA83F5BBADC93FC9E5863F1525C009A9056EF_m6F67DD2604DB0A79074177AF2357C1B03CDAEF97_gshared (ShapeProxy_t799DA83F5BBADC93FC9E5863F1525C009A9056EF* ___0_destination, ShapeProxy_t799DA83F5BBADC93FC9E5863F1525C009A9056EF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShapeProxy_t799DA83F5BBADC93FC9E5863F1525C009A9056EF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		ShapeProxy_t799DA83F5BBADC93FC9E5863F1525C009A9056EF* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<ShapeProxy_t799DA83F5BBADC93FC9E5863F1525C009A9056EF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConvexHull_tF012380011E47752145BD7DA69D0F23CF6A55A17_m08D19B99554E4F9426BE14ADAC09899EDD25E111_gshared (ConvexHull_tF012380011E47752145BD7DA69D0F23CF6A55A17* ___0_destination, ConvexHull_tF012380011E47752145BD7DA69D0F23CF6A55A17* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ConvexHull_tF012380011E47752145BD7DA69D0F23CF6A55A17* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		ConvexHull_tF012380011E47752145BD7DA69D0F23CF6A55A17* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<ConvexHull_tF012380011E47752145BD7DA69D0F23CF6A55A17>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBrick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0_m991D7C18C9D456BE72563A3353755563F1C81E5B_gshared (Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0* ___0_destination, Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 3653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A_m7AF8542D5D6488FC667EDE92FC22F56CE2241189_gshared (SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A* ___0_destination, SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_6,NULL));
		V_0 = (uint8_t*)L_7;
		uint8_t* L_8 = V_0;
		uint64_t L_9 = ___2_elementCount;
		uint32_t L_10 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_9,NULL));
		int32_t L_11;
		L_11 = il2cpp_unsafe_sizeof<SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)L_3, L_8, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_12;
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint8_t*)L_13;
		return;
	}
}
// Method Definition Index: 4263
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = __this->___value;
		return L_0;
	}
}
