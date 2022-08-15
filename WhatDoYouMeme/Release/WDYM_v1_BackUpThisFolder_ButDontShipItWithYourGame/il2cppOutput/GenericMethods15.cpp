#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
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
template <typename T1, typename T2, typename T3>
struct ConstrainedActionInvoker3;
template <typename T1, typename T2, typename T3>
struct ConstrainedActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[2]);
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

// System.Action`1<System.Exception>
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>
struct Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD;
// System.Collections.Generic.Dictionary`2<Fusion.Tick,System.Double>
struct Dictionary_2_t2D47F24289EB49259EDF0EED6C7AD475E8F9D7F4;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>>
struct Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0;
// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsBaseConverter>
struct Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9;
// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsDirectConverter>
struct Dictionary_2_tE2FB86855847810E74AE4F09A6480D6AE3251A51;
// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7;
// System.Linq.Expressions.Expression`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
// System.Collections.Generic.HashSet`1<Fusion.NetworkId>
struct HashSet_1_t2C926D07D7CF5EFCD14EBADD17D9A0C03399575C;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// Fusion.IElementReaderWriter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IElementReaderWriter_1_t23363F9021590894E7FC69227C5FF7CEFE8A01EB;
// System.Collections.Generic.IEnumerable`1<System.Attribute>
struct IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>
struct IEnumerable_1_t49C2F44B68A54E1D7F267F9CC6AEAE8497D42901;
// System.Collections.Generic.IEqualityComparer`1<System.Linq.Expressions.ParameterExpression>
struct IEqualityComparer_1_t3950A1C72D0704C9A5D08F255CB6BE1525EDC4A9;
// System.Collections.Generic.List`1<System.Attribute>
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
// System.Collections.Generic.List`1<Fusion.NetworkId>
struct List_1_t8673857563BA6C5F285B36C12CE318D403D7CE03;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsConverter>
struct List_1_t2914BC22C8C5E8C02F2AB4FA0C6EBD117DA2A753;
// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>
struct List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371;
// System.Collections.Generic.List`1<Fusion.SimulationPlayer/AOIQuery>
struct List_1_t5C0F56FF1D133DE3284CEF517595DA82A1DA339B;
// System.Collections.Generic.Queue`1<System.ValueTuple`2<Fusion.PlayerRef,System.Boolean>>
struct Queue_1_tD5D5BAD19F2551CCA69937014FDF0F591A9EFADB;
// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>[]
struct HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4;
// System.Collections.Generic.HashSet`1/Slot<System.Linq.Expressions.ParameterExpression>[]
struct SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
// Fusion.SimulationConnection[]
struct SimulationConnectionU5BU5D_t62B2055039AACC0463162B9BC1E436D9971238FB;
// Fusion.SimulationInput[]
struct SimulationInputU5BU5D_tD8A9AEB427918C5D42C95F835A83B9D6F2F96614;
// Fusion.SimulationPlayer[]
struct SimulationPlayerU5BU5D_t75947032AD34E363BB465CCEE841C03561BD452F;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Fusion.Allocator
struct Allocator_t4184B6C7C53A6059F1EBA19A30D551CDECA2F69C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// Fusion.Sockets.INetSocket
struct INetSocket_t8BC54CB2E1F9BA41FCE52BFAD0B25F6CA0031F0E;
// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
// System.Linq.Expressions.Interpreter.InterpretedFrame
struct InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Fusion.Sockets.NetConnection
struct NetConnection_tB10E71962B9B7AF32F898BBD380FD8A14AC957CE;
// Fusion.Sockets.NetPeer
struct NetPeer_tD1393AA439AC26C7023277C952393E42FCFD8EC1;
// Fusion.Sockets.NetPeerGroup
struct NetPeerGroup_tE5EF42226DD0A04D0B46238BCCA55C5BDFE31CBA;
// Fusion.NetworkBehaviour
struct NetworkBehaviour_t6DC912DE6ED4D9C556AE37A4CC23D247C52C57B3;
// Fusion.NetworkProjectConfig
struct NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Fusion.SimulationConfig
struct SimulationConfig_t9B4FF44B2A934AD687A176AE7350E397471BF4C3;
// Fusion.SimulationInput
struct SimulationInput_t746478ED3A35A9BD7DD598FAA9414FF9EE1EB3CE;
// Fusion.SimulationInputCollection
struct SimulationInputCollection_t2836F7376BF7A073028F01449B49284B878AD5D8;
// Fusion.SimulationSnapshot
struct SimulationSnapshot_t19EBA8AF42F9C01C59AB11FD4535CFA83C0CFFF5;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.VisualScripting.FullSerializer.fsConfig
struct fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726;
// Unity.VisualScripting.FullSerializer.fsContext
struct fsContext_t3B227C205D84208E2D8934429C07677542C97B5F;
// Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager
struct fsCyclicReferenceManager_tED0335497D4376E432D911F842D977B9D52B5EA0;
// Unity.VisualScripting.FullSerializer.fsData
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23;
// Unity.VisualScripting.FullSerializer.fsSerializer
struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC;
// Unity.VisualScripting.AttributeUtility/AttributeCache
struct AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F;
// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F;
// Fusion.Log/LegacyLogger
struct LegacyLogger_t7CA72EBBF79F86A6AEAFD628C438F9E19D458CCD;
// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536;
// Fusion.Simulation/AreaOfInterest
struct AreaOfInterest_tE699100A37FF049E8A8803A316471B57918E724D;
// Fusion.Simulation/ICallbacks
struct ICallbacks_t6BC2F11F92E470F4AAB3D4F41096780570EF3BC0;
// Fusion.Simulation/IDeltaCompressor
struct IDeltaCompressor_tB558E97C1456399414A117E3C8E63015A0417147;
// Fusion.Simulation/StateReplicator
struct StateReplicator_tA9076DE3271C0C145077541D38DD5B71A3A90110;
// Fusion.Simulation/Statistics
struct Statistics_tD1C23BFDBC0120C241A05AA7A3F61271076DBA89;
// Fusion.SimulationInput/Buffer
struct Buffer_t163F517A335A1D5574FAF5480B3D79B742F72612;
// Fusion.SimulationInput/Pool
struct Pool_tEA343E0EEBD986713252B3966A8E562D1480C9C0;
// Fusion.SimulationSnapshot/IHistory
struct IHistory_t7A1982E96CBD4EE7F0419E989C8DE088B1BAEB0D;
// Fusion.SimulationSnapshot/Interpolator
struct Interpolator_t26B35FF38A4268AD2F5C88D089663693E9007104;
// Fusion.SimulationSnapshot/Pool
struct Pool_t94B36B5211F5726F27ECB87BBB65622E9352649F;
// Unity.VisualScripting.FullSerializer.fsSerializer/fsLazyCycleDefinitionWriter
struct fsLazyCycleDefinitionWriter_t8DA7FBB3131ECC4D5F09CC4D66DE74961DA5511A;

IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogBuilder_tF1B3CE38CB4DB65ABF23AEA25BA4980292289019_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ___s_emptyArray_5;
};

// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};

struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable_2;
};

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// Unity.VisualScripting.FullSerializer.fsData
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23  : public RuntimeObject
{
	// System.Object Unity.VisualScripting.FullSerializer.fsData::_value
	RuntimeObject* ____value_0;
};

struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_StaticFields
{
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::True
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___True_1;
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::False
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___False_2;
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::Null
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___Null_3;
};

// Unity.VisualScripting.FullSerializer.fsSerializer
struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsConverter> Unity.VisualScripting.FullSerializer.fsSerializer::_availableConverters
	List_1_t2914BC22C8C5E8C02F2AB4FA0C6EBD117DA2A753* ____availableConverters_0;
	// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsDirectConverter> Unity.VisualScripting.FullSerializer.fsSerializer::_availableDirectConverters
	Dictionary_2_tE2FB86855847810E74AE4F09A6480D6AE3251A51* ____availableDirectConverters_1;
	// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor> Unity.VisualScripting.FullSerializer.fsSerializer::_processors
	List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371* ____processors_2;
	// Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager Unity.VisualScripting.FullSerializer.fsSerializer::_references
	fsCyclicReferenceManager_tED0335497D4376E432D911F842D977B9D52B5EA0* ____references_3;
	// Unity.VisualScripting.FullSerializer.fsSerializer/fsLazyCycleDefinitionWriter Unity.VisualScripting.FullSerializer.fsSerializer::_lazyReferenceWriter
	fsLazyCycleDefinitionWriter_t8DA7FBB3131ECC4D5F09CC4D66DE74961DA5511A* ____lazyReferenceWriter_4;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Type> Unity.VisualScripting.FullSerializer.fsSerializer::_abstractTypeRemap
	Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* ____abstractTypeRemap_5;
	// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsBaseConverter> Unity.VisualScripting.FullSerializer.fsSerializer::_cachedConverterTypeInstances
	Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9* ____cachedConverterTypeInstances_6;
	// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsBaseConverter> Unity.VisualScripting.FullSerializer.fsSerializer::_cachedConverters
	Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9* ____cachedConverters_7;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>> Unity.VisualScripting.FullSerializer.fsSerializer::_cachedProcessors
	Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04* ____cachedProcessors_8;
	// Unity.VisualScripting.FullSerializer.fsContext Unity.VisualScripting.FullSerializer.fsSerializer::Context
	fsContext_t3B227C205D84208E2D8934429C07677542C97B5F* ___Context_9;
	// Unity.VisualScripting.FullSerializer.fsConfig Unity.VisualScripting.FullSerializer.fsSerializer::Config
	fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* ___Config_10;
};

struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC_StaticFields
{
	// System.Collections.Generic.HashSet`1<System.String> Unity.VisualScripting.FullSerializer.fsSerializer::_reservedKeywords
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____reservedKeywords_11;
	// System.String Unity.VisualScripting.FullSerializer.fsSerializer::Key_ObjectReference
	String_t* ___Key_ObjectReference_12;
	// System.String Unity.VisualScripting.FullSerializer.fsSerializer::Key_ObjectDefinition
	String_t* ___Key_ObjectDefinition_13;
	// System.String Unity.VisualScripting.FullSerializer.fsSerializer::Key_InstanceType
	String_t* ___Key_InstanceType_14;
	// System.String Unity.VisualScripting.FullSerializer.fsSerializer::Key_Version
	String_t* ___Key_Version_15;
	// System.String Unity.VisualScripting.FullSerializer.fsSerializer::Key_Content
	String_t* ___Key_Content_16;
};

// Unity.VisualScripting.AttributeUtility/AttributeCache
struct AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Attribute> Unity.VisualScripting.AttributeUtility/AttributeCache::<inheritedAttributes>k__BackingField
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___U3CinheritedAttributesU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<System.Attribute> Unity.VisualScripting.AttributeUtility/AttributeCache::<definedAttributes>k__BackingField
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___U3CdefinedAttributesU3Ek__BackingField_1;
};

// Fusion.Log/LegacyLogger
struct LegacyLogger_t7CA72EBBF79F86A6AEAFD628C438F9E19D458CCD  : public RuntimeObject
{
	// System.Text.StringBuilder Fusion.Log/LegacyLogger::_builder
	StringBuilder_t* ____builder_0;
	// System.Action`1<System.String> Fusion.Log/LegacyLogger::Info
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___Info_1;
	// System.Action`1<System.String> Fusion.Log/LegacyLogger::Warn
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___Warn_2;
	// System.Action`1<System.String> Fusion.Log/LegacyLogger::Error
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___Error_3;
	// System.Action`1<System.Exception> Fusion.Log/LegacyLogger::Exception
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___Exception_4;
};

// Fusion.NetworkArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C 
{
	// System.Byte* Fusion.NetworkArray`1::_array
	uint8_t* ____array_0;
	// System.Int32 Fusion.NetworkArray`1::_length
	int32_t ____length_1;
	// Fusion.IElementReaderWriter`1<T> Fusion.NetworkArray`1::_readerWriter
	RuntimeObject* ____readerWriter_2;
};

struct NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C_StaticFields
{
	// System.Text.StringBuilder Fusion.NetworkArray`1::_stringBuilderCached
	StringBuilder_t* ____stringBuilderCached_3;
};

// Fusion.NetworkDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524 
{
	// System.Int32* Fusion.NetworkDictionary`2::_data
	int32_t* ____data_5;
	// System.Int32 Fusion.NetworkDictionary`2::_capacity
	int32_t ____capacity_6;
	// System.Int32 Fusion.NetworkDictionary`2::_nxtOffset
	int32_t ____nxtOffset_7;
	// System.Int32 Fusion.NetworkDictionary`2::_keyOffset
	int32_t ____keyOffset_8;
	// System.Int32 Fusion.NetworkDictionary`2::_valOffset
	int32_t ____valOffset_9;
	// System.Int32 Fusion.NetworkDictionary`2::_entryStride
	int32_t ____entryStride_10;
	// System.Int32 Fusion.NetworkDictionary`2::_bucketsOffset
	int32_t ____bucketsOffset_11;
	// System.Int32 Fusion.NetworkDictionary`2::_entriesOffset
	int32_t ____entriesOffset_12;
	// Fusion.IElementReaderWriter`1<K> Fusion.NetworkDictionary`2::_keyReaderWriter
	RuntimeObject* ____keyReaderWriter_13;
	// Fusion.IElementReaderWriter`1<V> Fusion.NetworkDictionary`2::_valReaderWriter
	RuntimeObject* ____valReaderWriter_14;
	// System.Collections.Generic.EqualityComparer`1<K> Fusion.NetworkDictionary`2::_equalityComparer
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ____equalityComparer_15;
};

// Fusion.NetworkLinkedList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37 
{
	// System.Int32* Fusion.NetworkLinkedList`1::_data
	int32_t* ____data_2;
	// System.Int32 Fusion.NetworkLinkedList`1::_stride
	int32_t ____stride_3;
	// System.Int32 Fusion.NetworkLinkedList`1::_capacity
	int32_t ____capacity_4;
	// Fusion.IElementReaderWriter`1<T> Fusion.NetworkLinkedList`1::_rw
	RuntimeObject* ____rw_5;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
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

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body_3;
};

// Fusion.LogOptions
struct LogOptions_tE40FA081732F4CDE8D5E665BBD54CC2D1C99AA58 
{
	// System.Boolean Fusion.LogOptions::UseColorTags
	bool ___UseColorTags_0;
	// System.Func`2<System.Object,System.Int32> Fusion.LogOptions::_getColor
	Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ____getColor_1;
};
// Native definition for P/Invoke marshalling of Fusion.LogOptions
struct LogOptions_tE40FA081732F4CDE8D5E665BBD54CC2D1C99AA58_marshaled_pinvoke
{
	int32_t ___UseColorTags_0;
	Il2CppMethodPointer ____getColor_1;
};
// Native definition for COM marshalling of Fusion.LogOptions
struct LogOptions_tE40FA081732F4CDE8D5E665BBD54CC2D1C99AA58_marshaled_com
{
	int32_t ___UseColorTags_0;
	Il2CppMethodPointer ____getColor_1;
};

// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
};

// Fusion.PlayerRef
struct PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Fusion.PlayerRef::_index
			int32_t ____index_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ____index_1_forAlignmentOnly;
		};
	};
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Fusion.TickAccumulator
struct TickAccumulator_tAFB103CC4EFFCB08B71BD5A49EB2D6AA987CD789 
{
	// System.Double Fusion.TickAccumulator::_time
	double ____time_0;
	// System.Double Fusion.TickAccumulator::_scale
	double ____scale_1;
	// System.Int32 Fusion.TickAccumulator::_ticks
	int32_t ____ticks_2;
	// System.Boolean Fusion.TickAccumulator::_running
	bool ____running_3;
};
// Native definition for P/Invoke marshalling of Fusion.TickAccumulator
struct TickAccumulator_tAFB103CC4EFFCB08B71BD5A49EB2D6AA987CD789_marshaled_pinvoke
{
	double ____time_0;
	double ____scale_1;
	int32_t ____ticks_2;
	int32_t ____running_3;
};
// Native definition for COM marshalling of Fusion.TickAccumulator
struct TickAccumulator_tAFB103CC4EFFCB08B71BD5A49EB2D6AA987CD789_marshaled_com
{
	double ____time_0;
	double ____scale_1;
	int32_t ____ticks_2;
	int32_t ____running_3;
};

// Fusion.Timer
struct Timer_tF7FB43178D8E930B7F354F5DA4DFC34B7E3DD5F8 
{
	// System.Int64 Fusion.Timer::_start
	int64_t ____start_0;
	// System.Int64 Fusion.Timer::_elapsed
	int64_t ____elapsed_1;
	// System.Byte Fusion.Timer::_running
	uint8_t ____running_2;
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

// Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 
{
	// System.Boolean Unity.VisualScripting.FullSerializer.fsResult::_success
	bool ____success_1;
	// System.Collections.Generic.List`1<System.String> Unity.VisualScripting.FullSerializer.fsResult::_messages
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};

struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields
{
	// System.String[] Unity.VisualScripting.FullSerializer.fsResult::EmptyStringArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyStringArray_0;
	// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsResult::Success
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___Success_3;
};
// Native definition for P/Invoke marshalling of Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_pinvoke
{
	int32_t ____success_1;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};
// Native definition for COM marshalling of Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_com
{
	int32_t ____success_1;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};

// Fusion.Ema/<_wnd>e__FixedBuffer
struct U3C_wndU3Ee__FixedBuffer_tAF5BBD14D49AB6A8EF0281F0826CAFB09A2CDEBF 
{
	union
	{
		struct
		{
			// System.Double Fusion.Ema/<_wnd>e__FixedBuffer::FixedElementField
			double ___FixedElementField_0;
		};
		uint8_t U3C_wndU3Ee__FixedBuffer_tAF5BBD14D49AB6A8EF0281F0826CAFB09A2CDEBF__padding[512];
	};
};

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_definedParameters
	Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69* ____definedParameters_0;
	// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_hoistedParameters
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ____hoistedParameters_1;
};

// Fusion.Log/DefaultContext
struct DefaultContext_t46E431B0D6522E529FA40349E78BDCAB116DEE73 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultContext_t46E431B0D6522E529FA40349E78BDCAB116DEE73__padding[1];
	};
};

// Fusion.NetworkBehaviour/RawInterpolator
struct RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1 
{
	// System.Int32 Fusion.NetworkBehaviour/RawInterpolator::_offset
	int32_t ____offset_0;
	// Fusion.NetworkBehaviour Fusion.NetworkBehaviour/RawInterpolator::_behaviour
	NetworkBehaviour_t6DC912DE6ED4D9C556AE37A4CC23D247C52C57B3* ____behaviour_1;
};
// Native definition for P/Invoke marshalling of Fusion.NetworkBehaviour/RawInterpolator
struct RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1_marshaled_pinvoke
{
	int32_t ____offset_0;
	NetworkBehaviour_t6DC912DE6ED4D9C556AE37A4CC23D247C52C57B3* ____behaviour_1;
};
// Native definition for COM marshalling of Fusion.NetworkBehaviour/RawInterpolator
struct RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1_marshaled_com
{
	int32_t ____offset_0;
	NetworkBehaviour_t6DC912DE6ED4D9C556AE37A4CC23D247C52C57B3* ____behaviour_1;
};

// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_variables
	Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD* ____variables_0;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_frame
	InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D* ____frame_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_shadowedVars
	Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* ____shadowedVars_2;
};

// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};

// System.Linq.Expressions.Expression`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
typedef Il2CppFullySharedGenericStruct Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339;

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// Fusion.Ema
struct Ema_tD4D8EAC1B50E83530F92DE762C4E000813D14631 
{
	// System.Int32 Fusion.Ema::_cnt
	int32_t ____cnt_1;
	// System.Double Fusion.Ema::_val
	double ____val_2;
	// System.Double Fusion.Ema::_var
	double ____var_3;
	// System.Double Fusion.Ema::_lst
	double ____lst_4;
	// Fusion.Ema/<_wnd>e__FixedBuffer Fusion.Ema::_wnd
	U3C_wndU3Ee__FixedBuffer_tAF5BBD14D49AB6A8EF0281F0826CAFB09A2CDEBF ____wnd_5;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Fusion.Simulation
struct Simulation_t1D52B02F9D931E87FAEB15A3EE8B13ED014DB584  : public RuntimeObject
{
	// System.Boolean Fusion.Simulation::_isShutdown
	bool ____isShutdown_0;
	// Fusion.Allocator* Fusion.Simulation::_tempAllocator
	Allocator_t4184B6C7C53A6059F1EBA19A30D551CDECA2F69C* ____tempAllocator_1;
	// Fusion.Simulation/ICallbacks Fusion.Simulation::_callbacks
	RuntimeObject* ____callbacks_2;
	// Fusion.Simulation/IDeltaCompressor Fusion.Simulation::_deltaCompressor
	RuntimeObject* ____deltaCompressor_3;
	// Fusion.SimulationModes Fusion.Simulation::_mode
	int32_t ____mode_4;
	// Fusion.SimulationStages Fusion.Simulation::_stage
	int32_t ____stage_5;
	// Fusion.SimulationConfig Fusion.Simulation::_config
	SimulationConfig_t9B4FF44B2A934AD687A176AE7350E397471BF4C3* ____config_6;
	// Fusion.NetworkProjectConfig Fusion.Simulation::_projectConfig
	NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF* ____projectConfig_7;
	// Fusion.SimulationSnapshot/IHistory Fusion.Simulation::_history
	RuntimeObject* ____history_8;
	// Fusion.SimulationSnapshot/Pool Fusion.Simulation::_historyPool
	Pool_t94B36B5211F5726F27ECB87BBB65622E9352649F* ____historyPool_9;
	// Fusion.SimulationSnapshot Fusion.Simulation::_state
	SimulationSnapshot_t19EBA8AF42F9C01C59AB11FD4535CFA83C0CFFF5* ____state_10;
	// Fusion.SimulationSnapshot Fusion.Simulation::_statePrevious
	SimulationSnapshot_t19EBA8AF42F9C01C59AB11FD4535CFA83C0CFFF5* ____statePrevious_11;
	// Fusion.SimulationSnapshot Fusion.Simulation::_stateInterestGroups
	SimulationSnapshot_t19EBA8AF42F9C01C59AB11FD4535CFA83C0CFFF5* ____stateInterestGroups_12;
	// Fusion.SimulationSnapshot Fusion.Simulation::_stateResume
	SimulationSnapshot_t19EBA8AF42F9C01C59AB11FD4535CFA83C0CFFF5* ____stateResume_13;
	// Fusion.SimulationSnapshot Fusion.Simulation::_interpTo
	SimulationSnapshot_t19EBA8AF42F9C01C59AB11FD4535CFA83C0CFFF5* ____interpTo_14;
	// Fusion.SimulationSnapshot Fusion.Simulation::_interpFrom
	SimulationSnapshot_t19EBA8AF42F9C01C59AB11FD4535CFA83C0CFFF5* ____interpFrom_15;
	// System.Single Fusion.Simulation::_interpAlpha
	float ____interpAlpha_16;
	// Fusion.SimulationInput Fusion.Simulation::_inputRoot
	SimulationInput_t746478ED3A35A9BD7DD598FAA9414FF9EE1EB3CE* ____inputRoot_17;
	// Fusion.SimulationInput/Pool Fusion.Simulation::_inputPool
	Pool_tEA343E0EEBD986713252B3966A8E562D1480C9C0* ____inputPool_18;
	// Fusion.SimulationInputCollection Fusion.Simulation::_inputCollection
	SimulationInputCollection_t2836F7376BF7A073028F01449B49284B878AD5D8* ____inputCollection_19;
	// Fusion.Simulation/StateReplicator Fusion.Simulation::_stateReplicator
	StateReplicator_tA9076DE3271C0C145077541D38DD5B71A3A90110* ____stateReplicator_20;
	// Fusion.SimulationConnection[] Fusion.Simulation::_connections
	SimulationConnectionU5BU5D_t62B2055039AACC0463162B9BC1E436D9971238FB* ____connections_21;
	// Fusion.SimulationPlayer[] Fusion.Simulation::_players
	SimulationPlayerU5BU5D_t75947032AD34E363BB465CCEE841C03561BD452F* ____players_22;
	// Fusion.TickAccumulator Fusion.Simulation::_accumulator
	TickAccumulator_tAFB103CC4EFFCB08B71BD5A49EB2D6AA987CD789 ____accumulator_23;
	// System.Int32 Fusion.Simulation::_stepSize
	int32_t ____stepSize_24;
	// System.Single Fusion.Simulation::_stepDeltaFloat
	float ____stepDeltaFloat_25;
	// System.Double Fusion.Simulation::_stepDeltaDouble
	double ____stepDeltaDouble_26;
	// System.Double Fusion.Simulation::_updateTime
	double ____updateTime_27;
	// System.Double Fusion.Simulation::_updateDelta
	double ____updateDelta_28;
	// Fusion.Ema Fusion.Simulation::_updateDeltaAvg
	Ema_tD4D8EAC1B50E83530F92DE762C4E000813D14631 ____updateDeltaAvg_29;
	// System.Boolean Fusion.Simulation::_isLastTick
	bool ____isLastTick_30;
	// System.Boolean Fusion.Simulation::_isFirstTick
	bool ____isFirstTick_31;
	// System.Boolean Fusion.Simulation::_isResimulation
	bool ____isResimulation_32;
	// System.Boolean Fusion.Simulation::_isResume
	bool ____isResume_33;
	// System.Boolean Fusion.Simulation::_isInTick
	bool ____isInTick_34;
	// System.Nullable`1<System.Boolean> Fusion.Simulation::_isPaused
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____isPaused_35;
	// Fusion.Simulation/AreaOfInterest* Fusion.Simulation::_aoi
	AreaOfInterest_tE699100A37FF049E8A8803A316471B57918E724D* ____aoi_36;
	// System.Collections.Generic.Dictionary`2<Fusion.Tick,System.Double> Fusion.Simulation::_tickUpdateTimes
	Dictionary_2_t2D47F24289EB49259EDF0EED6C7AD475E8F9D7F4* ____tickUpdateTimes_37;
	// System.Collections.Generic.List`1<Fusion.NetworkId> Fusion.Simulation::_globalInterestObjects
	List_1_t8673857563BA6C5F285B36C12CE318D403D7CE03* ____globalInterestObjects_38;
	// System.Collections.Generic.HashSet`1<Fusion.NetworkId> Fusion.Simulation::_previous
	HashSet_1_t2C926D07D7CF5EFCD14EBADD17D9A0C03399575C* ____previous_39;
	// System.Collections.Generic.HashSet`1<Fusion.NetworkId> Fusion.Simulation::_current
	HashSet_1_t2C926D07D7CF5EFCD14EBADD17D9A0C03399575C* ____current_40;
	// Fusion.Sockets.INetSocket Fusion.Simulation::_netSocket
	RuntimeObject* ____netSocket_43;
	// Fusion.Sockets.NetPeer* Fusion.Simulation::_netPeer
	NetPeer_tD1393AA439AC26C7023277C952393E42FCFD8EC1* ____netPeer_44;
	// Fusion.Sockets.NetPeerGroup* Fusion.Simulation::_netPeerGroup
	NetPeerGroup_tE5EF42226DD0A04D0B46238BCCA55C5BDFE31CBA* ____netPeerGroup_45;
	// System.Random Fusion.Simulation::_netPeerRng
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ____netPeerRng_46;
	// Fusion.Simulation/Statistics Fusion.Simulation::Stats
	Statistics_tD1C23BFDBC0120C241A05AA7A3F61271076DBA89* ___Stats_47;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<System.Exception>
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// Fusion.Simulation/Client
struct Client_t95ABA55393BE6DB614D8CC0BDB8B948251C91D7A  : public Simulation_t1D52B02F9D931E87FAEB15A3EE8B13ED014DB584
{
	// Fusion.PlayerRef Fusion.Simulation/Client::_player
	PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC ____player_48;
	// Fusion.Sockets.NetConnection* Fusion.Simulation/Client::_server
	NetConnection_tB10E71962B9B7AF32F898BBD380FD8A14AC957CE* ____server_49;
	// System.Boolean Fusion.Simulation/Client::_stateReceived
	bool ____stateReceived_50;
	// System.Boolean Fusion.Simulation/Client::_forceClientPredictionReset
	bool ____forceClientPredictionReset_51;
	// Fusion.SimulationInput/Buffer Fusion.Simulation/Client::_inputBuffer
	Buffer_t163F517A335A1D5574FAF5480B3D79B742F72612* ____inputBuffer_52;
	// Fusion.SimulationInput[] Fusion.Simulation/Client::_inputArray
	SimulationInputU5BU5D_tD8A9AEB427918C5D42C95F835A83B9D6F2F96614* ____inputArray_53;
	// System.Double Fusion.Simulation/Client::_inputOffsetTarget
	double ____inputOffsetTarget_54;
	// System.Double Fusion.Simulation/Client::_inputLastAdjustment
	double ____inputLastAdjustment_55;
	// Fusion.Timer Fusion.Simulation/Client::_inputAdjustClock
	Timer_tF7FB43178D8E930B7F354F5DA4DFC34B7E3DD5F8 ____inputAdjustClock_56;
	// System.Collections.Generic.List`1<Fusion.SimulationPlayer/AOIQuery> Fusion.Simulation/Client::_aoiQueries
	List_1_t5C0F56FF1D133DE3284CEF517595DA82A1DA339B* ____aoiQueries_57;
	// Fusion.SimulationSnapshot/Interpolator Fusion.Simulation/Client::_interpolator
	Interpolator_t26B35FF38A4268AD2F5C88D089663693E9007104* ____interpolator_58;
	// System.Collections.Generic.Queue`1<System.ValueTuple`2<Fusion.PlayerRef,System.Boolean>> Fusion.Simulation/Client::_playerJoinedLeftMessages
	Queue_1_tD5D5BAD19F2551CCA69937014FDF0F591A9EFADB* ____playerJoinedLeftMessages_59;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
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


// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionVisitor_VisitLambda_TisRuntimeObject_mEB1A047E763A276D9A7BA45134D3B1E2FD9B2B0F_gshared (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___node0, const RuntimeMethod* method) ;
// System.Void Fusion.Log/LegacyLogger::NewMethod<System.Object>(System.String,T&,System.String,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyLogger_NewMethod_TisRuntimeObject_mBA2AA54922371DF93613DE298992E691E75F110E_gshared (LegacyLogger_t7CA72EBBF79F86A6AEAFD628C438F9E19D458CCD* __this, String_t* ___prefix0, RuntimeObject** ___loggable1, String_t* ___message2, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___handler3, const RuntimeMethod* method) ;
// System.Void Fusion.Log/LegacyLogger::NewMethod<Fusion.Log/DefaultContext>(System.String,T&,System.String,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyLogger_NewMethod_TisDefaultContext_t46E431B0D6522E529FA40349E78BDCAB116DEE73_m8D504133DE94CA350B304291E43A73056BF01A38_gshared (LegacyLogger_t7CA72EBBF79F86A6AEAFD628C438F9E19D458CCD* __this, String_t* ___prefix0, DefaultContext_t46E431B0D6522E529FA40349E78BDCAB116DEE73* ___loggable1, String_t* ___message2, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___handler3, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkBehaviour/RawInterpolator::TryGetArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Fusion.NetworkArray`1<T>,Fusion.NetworkArray`1<T>&,Fusion.NetworkArray`1<T>&,System.Single&,System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RawInterpolator_TryGetArray_TisIl2CppFullySharedGenericAny_m991D225B5CBA33C77AA7944C0E37B723724026A5_gshared (RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1* __this, NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C ___base0, NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C* ___from1, NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C* ___to2, float* ___alpha3, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___force4, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkBehaviour/RawInterpolator::TryGetDictionary<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Fusion.NetworkDictionary`2<K,V>,Fusion.NetworkDictionary`2<K,V>&,Fusion.NetworkDictionary`2<K,V>&,System.Single&,System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RawInterpolator_TryGetDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m7D5D03CDFF144FC9CAEADE573144AEB5CCDB54C2_gshared (RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1* __this, NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524 ___base0, NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524* ___from1, NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524* ___to2, float* ___alpha3, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___force4, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkBehaviour/RawInterpolator::TryGetLinkedList<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Fusion.NetworkLinkedList`1<T>,Fusion.NetworkLinkedList`1<T>&,Fusion.NetworkLinkedList`1<T>&,System.Single&,System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RawInterpolator_TryGetLinkedList_TisIl2CppFullySharedGenericAny_m6C9DD11C419EC92A9007043CDE10C95D101FECA0_gshared (RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1* __this, NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37 ___base0, NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37* ___from1, NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37* ___to2, float* ___alpha3, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___force4, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkBehaviour/RawInterpolator::TryGetStruct<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T&,T&,System.Single&,System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RawInterpolator_TryGetStruct_TisIl2CppFullySharedGenericStruct_mBA4CF47EFE36262B3B3DB044C9A160A3E417BF5D_gshared (RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___from0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___to1, float* ___alpha2, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___force3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsSerializer::TrySerialize(System.Type,System.Object,Unity.VisualScripting.FullSerializer.fsData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TrySerialize_mADDE6667080A2E2C69A54662C47111A08A7EC006 (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, Type_t* ___storageType0, RuntimeObject* ___instance1, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___data2, const RuntimeMethod* method) ;
// System.Attribute Unity.VisualScripting.AttributeUtility/AttributeCache::GetAttribute(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* AttributeCache_GetAttribute_m1B367E0EC1D06BB18254A3C357B7547316F26AA9 (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Attribute> Unity.VisualScripting.AttributeUtility/AttributeCache::GetAttributes(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttributeCache_GetAttributes_m1CD217D40A4463684936A49453828BF294D2CD6F (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_gshared)(___source0, method);
}
// System.Boolean Unity.VisualScripting.AttributeUtility/AttributeCache::HasAttribute(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttributeCache_HasAttribute_m6DE0BA7A52D8EB2284ED28B641AF6F41C53C8AA7 (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Linq.Expressions.ParameterExpression>()
inline ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline (const RuntimeMethod* method)
{
	return ((  ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Int32)
inline void List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline void List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PushParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) ;
// System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionVisitor_VisitLambda_TisRuntimeObject_mEB1A047E763A276D9A7BA45134D3B1E2FD9B2B0F (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___node0, const RuntimeMethod* method)
{
	return ((  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* (*) (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, const RuntimeMethod*))ExpressionVisitor_VisitLambda_TisRuntimeObject_mEB1A047E763A276D9A7BA45134D3B1E2FD9B2B0F_gshared)(__this, ___node0, method);
}
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PopParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) ;
// System.Void Fusion.Log/LegacyLogger::NewMethod<System.Object>(System.String,T&,System.String,System.Action`1<System.String>)
inline void LegacyLogger_NewMethod_TisRuntimeObject_mBA2AA54922371DF93613DE298992E691E75F110E (LegacyLogger_t7CA72EBBF79F86A6AEAFD628C438F9E19D458CCD* __this, String_t* ___prefix0, RuntimeObject** ___loggable1, String_t* ___message2, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___handler3, const RuntimeMethod* method)
{
	((  void (*) (LegacyLogger_t7CA72EBBF79F86A6AEAFD628C438F9E19D458CCD*, String_t*, RuntimeObject**, String_t*, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, const RuntimeMethod*))LegacyLogger_NewMethod_TisRuntimeObject_mBA2AA54922371DF93613DE298992E691E75F110E_gshared)(__this, ___prefix0, ___loggable1, ___message2, ___handler3, method);
}
// System.Void Fusion.Log/LegacyLogger::NewMethod<Fusion.Log/DefaultContext>(System.String,T&,System.String,System.Action`1<System.String>)
inline void LegacyLogger_NewMethod_TisDefaultContext_t46E431B0D6522E529FA40349E78BDCAB116DEE73_m8D504133DE94CA350B304291E43A73056BF01A38 (LegacyLogger_t7CA72EBBF79F86A6AEAFD628C438F9E19D458CCD* __this, String_t* ___prefix0, DefaultContext_t46E431B0D6522E529FA40349E78BDCAB116DEE73* ___loggable1, String_t* ___message2, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___handler3, const RuntimeMethod* method)
{
	((  void (*) (LegacyLogger_t7CA72EBBF79F86A6AEAFD628C438F9E19D458CCD*, String_t*, DefaultContext_t46E431B0D6522E529FA40349E78BDCAB116DEE73*, String_t*, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, const RuntimeMethod*))LegacyLogger_NewMethod_TisDefaultContext_t46E431B0D6522E529FA40349E78BDCAB116DEE73_m8D504133DE94CA350B304291E43A73056BF01A38_gshared)(__this, ___prefix0, ___loggable1, ___message2, ___handler3, method);
}
// System.Void System.Action`1<System.Exception>::Invoke(T)
inline void Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* __this, Exception_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*, Exception_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void Fusion.Log/DefaultContext::Fusion.ILogBuilder.BuildLogMessage(System.Text.StringBuilder,System.String,Fusion.LogOptions& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultContext_Fusion_ILogBuilder_BuildLogMessage_m59B628B39C021D9B16BA1C52D40D174941897AAA (DefaultContext_t46E431B0D6522E529FA40349E78BDCAB116DEE73* __this, StringBuilder_t* ___builder0, String_t* ___message1, LogOptions_tE40FA081732F4CDE8D5E665BBD54CC2D1C99AA58* ___options2, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkBehaviour/RawInterpolator::TryGetValues(System.Void*&,System.Void*&,System.Single&,System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RawInterpolator_TryGetValues_m45E8F0855B16D0D51B5B7C41B7F9337F7697CE56 (RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1* __this, void** ___from0, void** ___to1, float* ___alpha2, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___force3, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkBehaviour/RawInterpolator::TryGetArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Fusion.NetworkArray`1<T>,Fusion.NetworkArray`1<T>&,Fusion.NetworkArray`1<T>&,System.Single&,System.Nullable`1<System.Boolean>)
inline bool RawInterpolator_TryGetArray_TisIl2CppFullySharedGenericAny_m991D225B5CBA33C77AA7944C0E37B723724026A5 (RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1* __this, NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C ___base0, NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C* ___from1, NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C* ___to2, float* ___alpha3, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___force4, const RuntimeMethod* method)
{
	return ((  bool (*) (RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1*, NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C, NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C*, NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C*, float*, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01, const RuntimeMethod*))RawInterpolator_TryGetArray_TisIl2CppFullySharedGenericAny_m991D225B5CBA33C77AA7944C0E37B723724026A5_gshared)((RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1*)__this, ___base0, ___from1, ___to2, ___alpha3, ___force4, method);
}
// System.Boolean Fusion.NetworkBehaviour/RawInterpolator::TryGetDictionary<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Fusion.NetworkDictionary`2<K,V>,Fusion.NetworkDictionary`2<K,V>&,Fusion.NetworkDictionary`2<K,V>&,System.Single&,System.Nullable`1<System.Boolean>)
inline bool RawInterpolator_TryGetDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m7D5D03CDFF144FC9CAEADE573144AEB5CCDB54C2 (RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1* __this, NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524 ___base0, NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524* ___from1, NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524* ___to2, float* ___alpha3, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___force4, const RuntimeMethod* method)
{
	return ((  bool (*) (RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1*, NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524, NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524*, NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524*, float*, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01, const RuntimeMethod*))RawInterpolator_TryGetDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m7D5D03CDFF144FC9CAEADE573144AEB5CCDB54C2_gshared)((RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1*)__this, ___base0, ___from1, ___to2, ___alpha3, ___force4, method);
}
// System.Boolean Fusion.NetworkBehaviour/RawInterpolator::TryGetLinkedList<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Fusion.NetworkLinkedList`1<T>,Fusion.NetworkLinkedList`1<T>&,Fusion.NetworkLinkedList`1<T>&,System.Single&,System.Nullable`1<System.Boolean>)
inline bool RawInterpolator_TryGetLinkedList_TisIl2CppFullySharedGenericAny_m6C9DD11C419EC92A9007043CDE10C95D101FECA0 (RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1* __this, NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37 ___base0, NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37* ___from1, NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37* ___to2, float* ___alpha3, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___force4, const RuntimeMethod* method)
{
	return ((  bool (*) (RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1*, NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37, NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37*, NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37*, float*, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01, const RuntimeMethod*))RawInterpolator_TryGetLinkedList_TisIl2CppFullySharedGenericAny_m6C9DD11C419EC92A9007043CDE10C95D101FECA0_gshared)((RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1*)__this, ___base0, ___from1, ___to2, ___alpha3, ___force4, method);
}
// System.Boolean Fusion.NetworkBehaviour/RawInterpolator::TryGetStruct<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T&,T&,System.Single&,System.Nullable`1<System.Boolean>)
inline bool RawInterpolator_TryGetStruct_TisIl2CppFullySharedGenericStruct_mBA4CF47EFE36262B3B3DB044C9A160A3E417BF5D (RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___from0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___to1, float* ___alpha2, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___force3, const RuntimeMethod* method)
{
	return ((  bool (*) (RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct*, float*, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01, const RuntimeMethod*))RawInterpolator_TryGetStruct_TisIl2CppFullySharedGenericStruct_mBA4CF47EFE36262B3B3DB044C9A160A3E417BF5D_gshared)((RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1*)__this, ___from0, ___to1, ___alpha2, ___force3, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::.ctor()
inline void HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline bool HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69 (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Push(T)
inline void Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___item0, method);
}
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Pop()
inline HashSet_1_t068F5201D923072F46716204841D21328FE6218D* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5 (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_t068F5201D923072F46716204841D21328FE6218D* (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___item0, method);
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsSerializer::TrySerialize<System.Object>(T,Unity.VisualScripting.FullSerializer.fsData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TrySerialize_TisRuntimeObject_m535933D428C9B51988896FE7C0658FE75A0C0D29_gshared (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, RuntimeObject* ___instance0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___data1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		// return TrySerialize(typeof(T), instance, out data);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeObject* L_2 = ___instance0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_3 = ___data1;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsSerializer_TrySerialize_mADDE6667080A2E2C69A54662C47111A08A7EC006(__this, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsSerializer::TrySerialize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T,Unity.VisualScripting.FullSerializer.fsData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TrySerialize_TisIl2CppFullySharedGenericAny_mD467C2221EABCCED5F049B2996388895D66CD6A3_gshared (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___instance0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___data1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tEB7E9E00FDC44AE50752B1BF0E0F507EF4AFFBAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tEB7E9E00FDC44AE50752B1BF0E0F507EF4AFFBAB);
	{
		// return TrySerialize(typeof(T), instance, out data);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___instance0 : &___instance0), SizeOf_T_tEB7E9E00FDC44AE50752B1BF0E0F507EF4AFFBAB);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_2);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___data1;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5;
		L_5 = fsSerializer_TrySerialize_mADDE6667080A2E2C69A54662C47111A08A7EC006(__this, L_1, L_3, L_4, NULL);
		return L_5;
	}
}
// TAttribute Unity.VisualScripting.AttributeUtility/AttributeCache::GetAttribute<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttributeCache_GetAttribute_TisRuntimeObject_m8D7B16DA8433AA2FD4CC676A84EA8FE6D90195FC_gshared (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, bool ___inherit0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		// return (TAttribute)GetAttribute(typeof(TAttribute), inherit);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2 = ___inherit0;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_3;
		L_3 = AttributeCache_GetAttribute_m1B367E0EC1D06BB18254A3C357B7547316F26AA9(__this, L_1, L_2, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// System.Collections.Generic.IEnumerable`1<TAttribute> Unity.VisualScripting.AttributeUtility/AttributeCache::GetAttributes<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttributeCache_GetAttributes_TisRuntimeObject_mF38C8F9E5ADBB7CCB1F9A885311EB62F139E4063_gshared (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, bool ___inherit0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		// return GetAttributes(typeof(TAttribute), inherit).Cast<TAttribute>();
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2 = ___inherit0;
		RuntimeObject* L_3;
		L_3 = AttributeCache_GetAttributes_m1CD217D40A4463684936A49453828BF294D2CD6F(__this, L_1, L_2, NULL);
		RuntimeObject* L_4;
		L_4 = Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29((RuntimeObject*)L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
// System.Boolean Unity.VisualScripting.AttributeUtility/AttributeCache::HasAttribute<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttributeCache_HasAttribute_TisRuntimeObject_m33C55B47DD3C264A03B4158F49782290B1B7E4FD_gshared (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, bool ___inherit0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		// return HasAttribute(typeof(TAttribute), inherit);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2 = ___inherit0;
		bool L_3;
		L_3 = AttributeCache_HasAttribute_m6DE0BA7A52D8EB2284ED28B641AF6F41C53C8AA7(__this, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* QuoteVisitor_VisitLambda_TisRuntimeObject_m8546CE5243FDDEFA3C7483FEB44BF91BD8F91DAF_gshared (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___node0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_0;
		L_0 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_1 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_5 = (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*)il2cpp_codegen_object_new(List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D(L_5, L_4, List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_6 = V_2;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_7 = ___node0;
		int32_t L_8 = V_3;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_9;
		L_9 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7, L_8);
		NullCheck(L_6);
		List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline(L_6, L_9, List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76(__this, L_14, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___node0;
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = ExpressionVisitor_VisitLambda_TisRuntimeObject_mEB1A047E763A276D9A7BA45134D3B1E2FD9B2B0F((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		RuntimeObject* L_17 = V_0;
		QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9(__this, L_17, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___node0;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::VisitLambda<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* QuoteVisitor_VisitLambda_TisIl2CppFullySharedGenericAny_m3A43E5E58A18E3D2892C620B8AED19012BA4E57B_gshared (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* ___node0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_0;
		L_0 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_1 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_5 = (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*)il2cpp_codegen_object_new(List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D(L_5, L_4, List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_6 = V_2;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_7 = ___node0;
		int32_t L_8 = V_3;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_9;
		L_9 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7, L_8);
		NullCheck(L_6);
		List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline(L_6, L_9, List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76(__this, L_14, NULL);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_15 = ___node0;
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = InvokerFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_15);
		RuntimeObject* L_17 = V_0;
		QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9(__this, L_17, NULL);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_18 = ___node0;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18;
	}
}
// System.Void Fusion.Log/LegacyLogger::Log<System.Object>(Fusion.LogType,System.String,T&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyLogger_Log_TisRuntimeObject_m4C5C791D188D14F30C31F17FBF6A924DB42006C1_gshared (LegacyLogger_t7CA72EBBF79F86A6AEAFD628C438F9E19D458CCD* __this, int32_t ___logType0, String_t* ___prefix1, RuntimeObject** ___loggable2, String_t* ___message3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___logType0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001b;
			}
			case 2:
			{
				goto IL_001b;
			}
			case 3:
			{
				goto IL_002c;
			}
			case 4:
			{
				goto IL_003d;
			}
		}
	}
	{
		return;
	}

IL_001b:
	{
		String_t* L_1 = ___prefix1;
		RuntimeObject** L_2 = ___loggable2;
		String_t* L_3 = ___message3;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)__this->___Info_1;
		LegacyLogger_NewMethod_TisRuntimeObject_mBA2AA54922371DF93613DE298992E691E75F110E(__this, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_002c:
	{
		String_t* L_5 = ___prefix1;
		RuntimeObject** L_6 = ___loggable2;
		String_t* L_7 = ___message3;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)__this->___Warn_2;
		LegacyLogger_NewMethod_TisRuntimeObject_mBA2AA54922371DF93613DE298992E691E75F110E(__this, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_003d:
	{
		String_t* L_9 = ___prefix1;
		RuntimeObject** L_10 = ___loggable2;
		String_t* L_11 = ___message3;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_12 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)__this->___Error_3;
		LegacyLogger_NewMethod_TisRuntimeObject_mBA2AA54922371DF93613DE298992E691E75F110E(__this, L_9, L_10, L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
// System.Void Fusion.Log/LegacyLogger::Log<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Fusion.LogType,System.String,T&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyLogger_Log_TisIl2CppFullySharedGenericAny_m9FAAE23EFE857ACA0183ACA25518C201154085CC_gshared (LegacyLogger_t7CA72EBBF79F86A6AEAFD628C438F9E19D458CCD* __this, int32_t ___logType0, String_t* ___prefix1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___loggable2, String_t* ___message3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___logType0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001b;
			}
			case 2:
			{
				goto IL_001b;
			}
			case 3:
			{
				goto IL_002c;
			}
			case 4:
			{
				goto IL_003d;
			}
		}
	}
	{
		return;
	}

IL_001b:
	{
		String_t* L_1 = ___prefix1;
		Il2CppFullySharedGenericAny* L_2 = ___loggable2;
		String_t* L_3 = ___message3;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)__this->___Info_1;
		InvokerActionInvoker4< String_t*, Il2CppFullySharedGenericAny*, String_t*, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_1, L_2, L_3, L_4);
		return;
	}

IL_002c:
	{
		String_t* L_5 = ___prefix1;
		Il2CppFullySharedGenericAny* L_6 = ___loggable2;
		String_t* L_7 = ___message3;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)__this->___Warn_2;
		InvokerActionInvoker4< String_t*, Il2CppFullySharedGenericAny*, String_t*, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_5, L_6, L_7, L_8);
		return;
	}

IL_003d:
	{
		String_t* L_9 = ___prefix1;
		Il2CppFullySharedGenericAny* L_10 = ___loggable2;
		String_t* L_11 = ___message3;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_12 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)__this->___Error_3;
		InvokerActionInvoker4< String_t*, Il2CppFullySharedGenericAny*, String_t*, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_9, L_10, L_11, L_12);
		return;
	}
}
// System.Void Fusion.Log/LegacyLogger::Log<Fusion.Log/DefaultContext>(Fusion.LogType,System.String,T&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyLogger_Log_TisDefaultContext_t46E431B0D6522E529FA40349E78BDCAB116DEE73_m243C664568F6AE67AC75DF380AAEBD2D4C394838_gshared (LegacyLogger_t7CA72EBBF79F86A6AEAFD628C438F9E19D458CCD* __this, int32_t ___logType0, String_t* ___prefix1, DefaultContext_t46E431B0D6522E529FA40349E78BDCAB116DEE73* ___loggable2, String_t* ___message3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___logType0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001b;
			}
			case 2:
			{
				goto IL_001b;
			}
			case 3:
			{
				goto IL_002c;
			}
			case 4:
			{
				goto IL_003d;
			}
		}
	}
	{
		return;
	}

IL_001b:
	{
		String_t* L_1 = ___prefix1;
		DefaultContext_t46E431B0D6522E529FA40349E78BDCAB116DEE73* L_2 = ___loggable2;
		String_t* L_3 = ___message3;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)__this->___Info_1;
		LegacyLogger_NewMethod_TisDefaultContext_t46E431B0D6522E529FA40349E78BDCAB116DEE73_m8D504133DE94CA350B304291E43A73056BF01A38(__this, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_002c:
	{
		String_t* L_5 = ___prefix1;
		DefaultContext_t46E431B0D6522E529FA40349E78BDCAB116DEE73* L_6 = ___loggable2;
		String_t* L_7 = ___message3;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)__this->___Warn_2;
		LegacyLogger_NewMethod_TisDefaultContext_t46E431B0D6522E529FA40349E78BDCAB116DEE73_m8D504133DE94CA350B304291E43A73056BF01A38(__this, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_003d:
	{
		String_t* L_9 = ___prefix1;
		DefaultContext_t46E431B0D6522E529FA40349E78BDCAB116DEE73* L_10 = ___loggable2;
		String_t* L_11 = ___message3;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_12 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)__this->___Error_3;
		LegacyLogger_NewMethod_TisDefaultContext_t46E431B0D6522E529FA40349E78BDCAB116DEE73_m8D504133DE94CA350B304291E43A73056BF01A38(__this, L_9, L_10, L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
// System.Void Fusion.Log/LegacyLogger::LogException<System.Object>(System.String,T&,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyLogger_LogException_TisRuntimeObject_m922E8ACA991A99B25998DC833C0A896CCDE3AE05_gshared (LegacyLogger_t7CA72EBBF79F86A6AEAFD628C438F9E19D458CCD* __this, String_t* ___prefix0, RuntimeObject** ___context1, Exception_t* ___ex2, const RuntimeMethod* method) 
{
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B2_0 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B1_0 = NULL;
	{
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_0 = (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*)__this->___Exception_4;
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		Exception_t* L_2 = ___ex2;
		NullCheck(G_B2_0);
		Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(G_B2_0, L_2, NULL);
		return;
	}
}
// System.Void Fusion.Log/LegacyLogger::LogException<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,T&,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyLogger_LogException_TisIl2CppFullySharedGenericAny_mC47C0C85C4C53DC4540831C058E825C4FF9FE04B_gshared (LegacyLogger_t7CA72EBBF79F86A6AEAFD628C438F9E19D458CCD* __this, String_t* ___prefix0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___context1, Exception_t* ___ex2, const RuntimeMethod* method) 
{
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B2_0 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B1_0 = NULL;
	{
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_0 = (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*)__this->___Exception_4;
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		Exception_t* L_2 = ___ex2;
		NullCheck(G_B2_0);
		Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(G_B2_0, L_2, NULL);
		return;
	}
}
// System.Void Fusion.Log/LegacyLogger::LogException<Fusion.Log/DefaultContext>(System.String,T&,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyLogger_LogException_TisDefaultContext_t46E431B0D6522E529FA40349E78BDCAB116DEE73_m09408962BCA31F1467A1901D6BE929DC1A5D4F7E_gshared (LegacyLogger_t7CA72EBBF79F86A6AEAFD628C438F9E19D458CCD* __this, String_t* ___prefix0, DefaultContext_t46E431B0D6522E529FA40349E78BDCAB116DEE73* ___context1, Exception_t* ___ex2, const RuntimeMethod* method) 
{
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B2_0 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B1_0 = NULL;
	{
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_0 = (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*)__this->___Exception_4;
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		Exception_t* L_2 = ___ex2;
		NullCheck(G_B2_0);
		Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(G_B2_0, L_2, NULL);
		return;
	}
}
// System.Void Fusion.Log/LegacyLogger::NewMethod<System.Object>(System.String,T&,System.String,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyLogger_NewMethod_TisRuntimeObject_mBA2AA54922371DF93613DE298992E691E75F110E_gshared (LegacyLogger_t7CA72EBBF79F86A6AEAFD628C438F9E19D458CCD* __this, String_t* ___prefix0, RuntimeObject** ___loggable1, String_t* ___message2, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___handler3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogBuilder_tF1B3CE38CB4DB65ABF23AEA25BA4980292289019_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	LogOptions_tE40FA081732F4CDE8D5E665BBD54CC2D1C99AA58 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ___handler3;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
			{// begin finally (depth: 1)
				StringBuilder_t* L_1 = (StringBuilder_t*)__this->____builder_0;
				NullCheck(L_1);
				StringBuilder_t* L_2;
				L_2 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				String_t* L_3 = ___prefix0;
				bool L_4;
				L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
				if (L_4)
				{
					goto IL_002c_1;
				}
			}
			{
				StringBuilder_t* L_5 = (StringBuilder_t*)__this->____builder_0;
				String_t* L_6 = ___prefix0;
				NullCheck(L_5);
				StringBuilder_t* L_7;
				L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, L_6, NULL);
				StringBuilder_t* L_8 = (StringBuilder_t*)__this->____builder_0;
				NullCheck(L_8);
				StringBuilder_t* L_9;
				L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, NULL);
			}

IL_002c_1:
			{
				RuntimeObject** L_10 = ___loggable1;
				StringBuilder_t* L_11 = (StringBuilder_t*)__this->____builder_0;
				String_t* L_12 = ___message2;
				LogOptions_tE40FA081732F4CDE8D5E665BBD54CC2D1C99AA58* L_13 = (&V_1);
				il2cpp_codegen_initobj(L_13, sizeof(LogOptions_tE40FA081732F4CDE8D5E665BBD54CC2D1C99AA58));
				NullCheck((RuntimeObject*)(*L_10));
				InterfaceActionInvoker3< StringBuilder_t*, String_t*, LogOptions_tE40FA081732F4CDE8D5E665BBD54CC2D1C99AA58* >::Invoke(0 /* System.Void Fusion.ILogBuilder::BuildLogMessage(System.Text.StringBuilder,System.String,Fusion.LogOptions& modreq(System.Runtime.InteropServices.InAttribute)) */, ILogBuilder_tF1B3CE38CB4DB65ABF23AEA25BA4980292289019_il2cpp_TypeInfo_var, (RuntimeObject*)(*L_10), L_11, L_12, L_13);
				StringBuilder_t* L_14 = (StringBuilder_t*)__this->____builder_0;
				NullCheck((RuntimeObject*)L_14);
				String_t* L_15;
				L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_14);
				V_0 = L_15;
				Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_16 = ___handler3;
				String_t* L_17 = V_0;
				NullCheck(L_16);
				Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_16, L_17, NULL);
				goto IL_006b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
	{
		return;
	}
}
// System.Void Fusion.Log/LegacyLogger::NewMethod<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,T&,System.String,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyLogger_NewMethod_TisIl2CppFullySharedGenericAny_m8B9C3AAB6F0DFFF617435CA75C0189D2619D138C_gshared (LegacyLogger_t7CA72EBBF79F86A6AEAFD628C438F9E19D458CCD* __this, String_t* ___prefix0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___loggable1, String_t* ___message2, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___handler3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_rgctx_method_init(method);
	}
	void* L_14 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	String_t* V_0 = NULL;
	LogOptions_tE40FA081732F4CDE8D5E665BBD54CC2D1C99AA58 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ___handler3;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
			{// begin finally (depth: 1)
				StringBuilder_t* L_1 = (StringBuilder_t*)__this->____builder_0;
				NullCheck(L_1);
				StringBuilder_t* L_2;
				L_2 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				String_t* L_3 = ___prefix0;
				bool L_4;
				L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
				if (L_4)
				{
					goto IL_002c_1;
				}
			}
			{
				StringBuilder_t* L_5 = (StringBuilder_t*)__this->____builder_0;
				String_t* L_6 = ___prefix0;
				NullCheck(L_5);
				StringBuilder_t* L_7;
				L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, L_6, NULL);
				StringBuilder_t* L_8 = (StringBuilder_t*)__this->____builder_0;
				NullCheck(L_8);
				StringBuilder_t* L_9;
				L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, NULL);
			}

IL_002c_1:
			{
				Il2CppFullySharedGenericAny* L_10 = ___loggable1;
				StringBuilder_t* L_11 = (StringBuilder_t*)__this->____builder_0;
				String_t* L_12 = ___message2;
				LogOptions_tE40FA081732F4CDE8D5E665BBD54CC2D1C99AA58* L_13 = (&V_1);
				il2cpp_codegen_initobj(L_13, sizeof(LogOptions_tE40FA081732F4CDE8D5E665BBD54CC2D1C99AA58));
				ConstrainedActionInvoker3< StringBuilder_t*, String_t*, LogOptions_tE40FA081732F4CDE8D5E665BBD54CC2D1C99AA58* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_14, (void*)L_10, L_11, L_12, L_13);
				StringBuilder_t* L_15 = (StringBuilder_t*)__this->____builder_0;
				NullCheck((RuntimeObject*)L_15);
				String_t* L_16;
				L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_15);
				V_0 = L_16;
				Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_17 = ___handler3;
				String_t* L_18 = V_0;
				NullCheck(L_17);
				Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_17, L_18, NULL);
				goto IL_006b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
	{
		return;
	}
}
// System.Void Fusion.Log/LegacyLogger::NewMethod<Fusion.Log/DefaultContext>(System.String,T&,System.String,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyLogger_NewMethod_TisDefaultContext_t46E431B0D6522E529FA40349E78BDCAB116DEE73_m8D504133DE94CA350B304291E43A73056BF01A38_gshared (LegacyLogger_t7CA72EBBF79F86A6AEAFD628C438F9E19D458CCD* __this, String_t* ___prefix0, DefaultContext_t46E431B0D6522E529FA40349E78BDCAB116DEE73* ___loggable1, String_t* ___message2, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___handler3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	LogOptions_tE40FA081732F4CDE8D5E665BBD54CC2D1C99AA58 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ___handler3;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
			{// begin finally (depth: 1)
				StringBuilder_t* L_1 = (StringBuilder_t*)__this->____builder_0;
				NullCheck(L_1);
				StringBuilder_t* L_2;
				L_2 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				String_t* L_3 = ___prefix0;
				bool L_4;
				L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
				if (L_4)
				{
					goto IL_002c_1;
				}
			}
			{
				StringBuilder_t* L_5 = (StringBuilder_t*)__this->____builder_0;
				String_t* L_6 = ___prefix0;
				NullCheck(L_5);
				StringBuilder_t* L_7;
				L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, L_6, NULL);
				StringBuilder_t* L_8 = (StringBuilder_t*)__this->____builder_0;
				NullCheck(L_8);
				StringBuilder_t* L_9;
				L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, NULL);
			}

IL_002c_1:
			{
				DefaultContext_t46E431B0D6522E529FA40349E78BDCAB116DEE73* L_10 = ___loggable1;
				StringBuilder_t* L_11 = (StringBuilder_t*)__this->____builder_0;
				String_t* L_12 = ___message2;
				LogOptions_tE40FA081732F4CDE8D5E665BBD54CC2D1C99AA58* L_13 = (&V_1);
				il2cpp_codegen_initobj(L_13, sizeof(LogOptions_tE40FA081732F4CDE8D5E665BBD54CC2D1C99AA58));
				DefaultContext_Fusion_ILogBuilder_BuildLogMessage_m59B628B39C021D9B16BA1C52D40D174941897AAA(L_10, L_11, L_12, (LogOptions_tE40FA081732F4CDE8D5E665BBD54CC2D1C99AA58*)L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
				StringBuilder_t* L_14 = (StringBuilder_t*)__this->____builder_0;
				NullCheck((RuntimeObject*)L_14);
				String_t* L_15;
				L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_14);
				V_0 = L_15;
				Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_16 = ___handler3;
				String_t* L_17 = V_0;
				NullCheck(L_16);
				Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_16, L_17, NULL);
				goto IL_006b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
	{
		return;
	}
}
// System.Boolean Fusion.NetworkBehaviour/RawInterpolator::TryGetArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Fusion.NetworkArray`1<T>,Fusion.NetworkArray`1<T>&,Fusion.NetworkArray`1<T>&,System.Single&,System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RawInterpolator_TryGetArray_TisIl2CppFullySharedGenericAny_m991D225B5CBA33C77AA7944C0E37B723724026A5_gshared (RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1* __this, NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C ___base0, NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C* ___from1, NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C* ___to2, float* ___alpha3, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___force4, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* V_0 = NULL;
	void* V_1 = NULL;
	{
		float* L_0 = ___alpha3;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1 = ___force4;
		bool L_2;
		L_2 = RawInterpolator_TryGetValues_m45E8F0855B16D0D51B5B7C41B7F9337F7697CE56(__this, (&V_0), (&V_1), L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C* L_3 = ___from1;
		void* L_4 = V_0;
		NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C L_5;
		L_5 = InvokerFuncInvoker1< NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C, void* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), (&___base0), L_4);
		*(NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C*)L_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C*)L_3)->____readerWriter_2), (void*)NULL);
		NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C* L_6 = ___to2;
		void* L_7 = V_1;
		NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C L_8;
		L_8 = InvokerFuncInvoker1< NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C, void* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), (&___base0), L_7);
		*(NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C*)L_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C*)L_6)->____readerWriter_2), (void*)NULL);
		return (bool)1;
	}

IL_002e:
	{
		NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C* L_9 = ___from1;
		il2cpp_codegen_initobj(L_9, sizeof(NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C));
		NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C* L_10 = ___to2;
		il2cpp_codegen_initobj(L_10, sizeof(NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C));
		float* L_11 = ___alpha3;
		*((float*)L_11) = (float)(0.0f);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool RawInterpolator_TryGetArray_TisIl2CppFullySharedGenericAny_m991D225B5CBA33C77AA7944C0E37B723724026A5_AdjustorThunk (RuntimeObject* __this, NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C ___base0, NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C* ___from1, NetworkArray_1_t7CFB1DA17F080D57F6DB7D648C7C9CFBEC0D561C* ___to2, float* ___alpha3, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___force4, const RuntimeMethod* method)
{
	RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = RawInterpolator_TryGetArray_TisIl2CppFullySharedGenericAny_m991D225B5CBA33C77AA7944C0E37B723724026A5(_thisAdjusted, ___base0, ___from1, ___to2, ___alpha3, ___force4, method);
	return _returnValue;
}
// System.Boolean Fusion.NetworkBehaviour/RawInterpolator::TryGetDictionary<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Fusion.NetworkDictionary`2<K,V>,Fusion.NetworkDictionary`2<K,V>&,Fusion.NetworkDictionary`2<K,V>&,System.Single&,System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RawInterpolator_TryGetDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m7D5D03CDFF144FC9CAEADE573144AEB5CCDB54C2_gshared (RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1* __this, NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524 ___base0, NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524* ___from1, NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524* ___to2, float* ___alpha3, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___force4, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* V_0 = NULL;
	void* V_1 = NULL;
	{
		float* L_0 = ___alpha3;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1 = ___force4;
		bool L_2;
		L_2 = RawInterpolator_TryGetValues_m45E8F0855B16D0D51B5B7C41B7F9337F7697CE56(__this, (&V_0), (&V_1), L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524* L_3 = ___from1;
		void* L_4 = V_0;
		NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524 L_5;
		L_5 = InvokerFuncInvoker1< NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524, void* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), (&___base0), L_4);
		*(NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524*)L_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524*)L_3)->____keyReaderWriter_13), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524*)L_3)->____valReaderWriter_14), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524*)L_3)->____equalityComparer_15), (void*)NULL);
		#endif
		NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524* L_6 = ___to2;
		void* L_7 = V_1;
		NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524 L_8;
		L_8 = InvokerFuncInvoker1< NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524, void* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), (&___base0), L_7);
		*(NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524*)L_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524*)L_6)->____keyReaderWriter_13), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524*)L_6)->____valReaderWriter_14), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524*)L_6)->____equalityComparer_15), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_002e:
	{
		NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524* L_9 = ___from1;
		il2cpp_codegen_initobj(L_9, sizeof(NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524));
		NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524* L_10 = ___to2;
		il2cpp_codegen_initobj(L_10, sizeof(NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524));
		float* L_11 = ___alpha3;
		*((float*)L_11) = (float)(0.0f);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool RawInterpolator_TryGetDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m7D5D03CDFF144FC9CAEADE573144AEB5CCDB54C2_AdjustorThunk (RuntimeObject* __this, NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524 ___base0, NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524* ___from1, NetworkDictionary_2_t4865272F1F9537A94A5645516C23A15E9DB2B524* ___to2, float* ___alpha3, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___force4, const RuntimeMethod* method)
{
	RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = RawInterpolator_TryGetDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m7D5D03CDFF144FC9CAEADE573144AEB5CCDB54C2(_thisAdjusted, ___base0, ___from1, ___to2, ___alpha3, ___force4, method);
	return _returnValue;
}
// System.Boolean Fusion.NetworkBehaviour/RawInterpolator::TryGetLinkedList<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Fusion.NetworkLinkedList`1<T>,Fusion.NetworkLinkedList`1<T>&,Fusion.NetworkLinkedList`1<T>&,System.Single&,System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RawInterpolator_TryGetLinkedList_TisIl2CppFullySharedGenericAny_m6C9DD11C419EC92A9007043CDE10C95D101FECA0_gshared (RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1* __this, NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37 ___base0, NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37* ___from1, NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37* ___to2, float* ___alpha3, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___force4, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* V_0 = NULL;
	void* V_1 = NULL;
	{
		float* L_0 = ___alpha3;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1 = ___force4;
		bool L_2;
		L_2 = RawInterpolator_TryGetValues_m45E8F0855B16D0D51B5B7C41B7F9337F7697CE56(__this, (&V_0), (&V_1), L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37* L_3 = ___from1;
		void* L_4 = V_0;
		NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37 L_5;
		L_5 = InvokerFuncInvoker1< NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37, void* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), (&___base0), L_4);
		*(NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37*)L_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37*)L_3)->____rw_5), (void*)NULL);
		NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37* L_6 = ___to2;
		void* L_7 = V_1;
		NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37 L_8;
		L_8 = InvokerFuncInvoker1< NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37, void* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), (&___base0), L_7);
		*(NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37*)L_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37*)L_6)->____rw_5), (void*)NULL);
		return (bool)1;
	}

IL_002e:
	{
		NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37* L_9 = ___from1;
		il2cpp_codegen_initobj(L_9, sizeof(NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37));
		NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37* L_10 = ___to2;
		il2cpp_codegen_initobj(L_10, sizeof(NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37));
		float* L_11 = ___alpha3;
		*((float*)L_11) = (float)(0.0f);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool RawInterpolator_TryGetLinkedList_TisIl2CppFullySharedGenericAny_m6C9DD11C419EC92A9007043CDE10C95D101FECA0_AdjustorThunk (RuntimeObject* __this, NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37 ___base0, NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37* ___from1, NetworkLinkedList_1_t776B9D47447A5446B66955FDB2EA2A3685D1EB37* ___to2, float* ___alpha3, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___force4, const RuntimeMethod* method)
{
	RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = RawInterpolator_TryGetLinkedList_TisIl2CppFullySharedGenericAny_m6C9DD11C419EC92A9007043CDE10C95D101FECA0(_thisAdjusted, ___base0, ___from1, ___to2, ___alpha3, ___force4, method);
	return _returnValue;
}
// System.Boolean Fusion.NetworkBehaviour/RawInterpolator::TryGetStruct<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T&,T&,System.Single&,System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RawInterpolator_TryGetStruct_TisIl2CppFullySharedGenericStruct_mBA4CF47EFE36262B3B3DB044C9A160A3E417BF5D_gshared (RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___from0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___to1, float* ___alpha2, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___force3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tEABE66A7FCF46FB6D7E4DB695CBFFB819465B58B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_tEABE66A7FCF46FB6D7E4DB695CBFFB819465B58B);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_tEABE66A7FCF46FB6D7E4DB695CBFFB819465B58B);
	void* V_0 = NULL;
	void* V_1 = NULL;
	{
		float* L_0 = ___alpha2;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1 = ___force3;
		bool L_2;
		L_2 = RawInterpolator_TryGetValues_m45E8F0855B16D0D51B5B7C41B7F9337F7697CE56(__this, (&V_0), (&V_1), L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_3 = ___from0;
		void* L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, L_4, SizeOf_T_tEABE66A7FCF46FB6D7E4DB695CBFFB819465B58B);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_3, L_5, SizeOf_T_tEABE66A7FCF46FB6D7E4DB695CBFFB819465B58B);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericStruct*)L_3, (void*)L_5);
		Il2CppFullySharedGenericStruct* L_6 = ___to1;
		void* L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, L_7, SizeOf_T_tEABE66A7FCF46FB6D7E4DB695CBFFB819465B58B);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_6, L_8, SizeOf_T_tEABE66A7FCF46FB6D7E4DB695CBFFB819465B58B);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericStruct*)L_6, (void*)L_8);
		return (bool)1;
	}

IL_0029:
	{
		Il2CppFullySharedGenericStruct* L_9 = ___from0;
		il2cpp_codegen_initobj(L_9, SizeOf_T_tEABE66A7FCF46FB6D7E4DB695CBFFB819465B58B);
		Il2CppFullySharedGenericStruct* L_10 = ___to1;
		il2cpp_codegen_initobj(L_10, SizeOf_T_tEABE66A7FCF46FB6D7E4DB695CBFFB819465B58B);
		float* L_11 = ___alpha2;
		*((float*)L_11) = (float)(0.0f);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool RawInterpolator_TryGetStruct_TisIl2CppFullySharedGenericStruct_mBA4CF47EFE36262B3B3DB044C9A160A3E417BF5D_AdjustorThunk (RuntimeObject* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___from0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___to1, float* ___alpha2, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___force3, const RuntimeMethod* method)
{
	RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RawInterpolator_t9B0B8E7CB713AC7CC2386041C9D4081AA5A649A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = RawInterpolator_TryGetStruct_TisIl2CppFullySharedGenericStruct_mBA4CF47EFE36262B3B3DB044C9A160A3E417BF5D(_thisAdjusted, ___from0, ___to1, ___alpha2, ___force3, method);
	return _returnValue;
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisRuntimeObject_m367D8F5D10D80B4A1A34D42A5339BAF95A51FE5E_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_0 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_3 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_6 = ___node0;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_23 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_25 = ___node0;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_26 = ___node0;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_28;
		L_28 = VirtualFuncInvoker2< Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(18 /* System.Linq.Expressions.Expression`1<TDelegate> System.Linq.Expressions.Expression`1<System.Object>::Rewrite(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[]) */, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::VisitLambda<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisIl2CppFullySharedGenericAny_m0060183C8192066670005792D19D2EC19C50DBB7_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_0 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_3 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_6 = ___node0;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_15 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_18 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_23 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_25 = ___node0;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_26 = ___node0;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_28;
		L_28 = VirtualFuncInvoker2Invoker< Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(18 /* System.Linq.Expressions.Expression`1<TDelegate> System.Linq.Expressions.Expression`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Rewrite(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[]) */, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
// System.String Fusion.Simulation/Client::NullableToString<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Nullable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Client_NullableToString_TisIl2CppFullySharedGenericStruct_m733730792D3FBE3103CF3845F7BBD3C0A17E371A_gshared (/*System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339 ___value0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t45181F2C6DB7C875A8D332DFF89A111FA82717D8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_2 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	// T
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t45181F2C6DB7C875A8D332DFF89A111FA82717D8);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t45181F2C6DB7C875A8D332DFF89A111FA82717D8);
	memset(V_0, 0, SizeOf_T_t45181F2C6DB7C875A8D332DFF89A111FA82717D8);
	{
		bool L_0;
		L_0 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)___value0);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)___value0, (Il2CppFullySharedGenericStruct*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T_t45181F2C6DB7C875A8D332DFF89A111FA82717D8);
		String_t* L_3;
		L_3 = ConstrainedFuncInvoker0< String_t* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 4), L_2, (void*)(Il2CppFullySharedGenericStruct*)V_0);
		return L_3;
	}

IL_001f:
	{
		return _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->____body_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
